#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalGroupType.h"
#include "EPalOrganizationType.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalGroupCreateParameter.h"
#include "PalGroupOperationDynamicDelegateDelegate.h"
#include "PalGroupOperationWithGroupIdDynamicDelegateDelegate.h"
#include "PalGuildEnterRequestLogInfo.h"
#include "PalInstanceID.h"
#include "PalWorldSubsystem.h"
#include "PalGroupManager.generated.h"

class AActor;
class UObject;
class UPalGroupBase;
class UPalGroupGuildBase;
class UPalGuildRequestFlowBase;

UCLASS(BlueprintType)
class UPalGroupManager : public UPalWorldSubsystem, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnChangeGuildPlayerDelegate, const FGuid&, PlayerUId, UPalGroupGuildBase*, PrevGuild, UPalGroupGuildBase*, AfterGuild);
    
    UPROPERTY()
    FOnChangeGuildPlayerDelegate OnChangeGuildPlayerDelegate;
    
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FGuid, UPalGroupBase*> GroupMap;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FGuid, UPalGroupGuildBase*> GuildMap;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EPalOrganizationType, EPalGroupType> StaticOrganizationGroupTypeMap;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<EPalOrganizationType, FGuid> StaticOrganizationGroupIdMap;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FGuid, UPalGuildRequestFlowBase*> GuildRequestFlowMap;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FGuid, FPalGuildEnterRequestLogInfo> GuildEnterRequestLogInfoMap;
    
public:
    UPalGroupManager();

    UFUNCTION(BlueprintPure)
    bool TryGetGuildNameModifierPlayerUId(const FGuid& GroupId, FGuid& GuildNameModifierPlayerUId) const;
    
    UFUNCTION(BlueprintPure)
    bool TryGetGuildName(const FGuid& GroupId, FString& OutGuildName) const;
    
    UFUNCTION(BlueprintPure)
    bool TryGetGuildAdminPlayerUid(const FGuid& GroupId, FGuid& OutGuildAdminPlayerUid) const;
    
    UFUNCTION(BlueprintPure)
    bool TryGetGroupName(const FGuid& GroupId, FString& OutGroupName) const;
    
private:
    UFUNCTION()
    void OnFinishedGuildRequest_ServerInternal(UPalGuildRequestFlowBase* Flow);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsInGuild(const AActor* TargetActor);
    
    UFUNCTION(BlueprintPure)
    bool IsExistGroup(const FString& GroupName) const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FGuid GetOrganizationGroupId(const UObject* WorldContextObject, const EPalOrganizationType OrganizationType);
    
    UFUNCTION(BlueprintCallable)
    void Debug_RequestNewGroup(FPalGroupCreateParameter CreateParam, FPalGroupOperationWithGroupIdDynamicDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void Debug_RequestExitGroup(const FPalInstanceID& IndividualId, FPalGroupOperationDynamicDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void Debug_RequestEnterGroup(const FPalInstanceID& IndividualId, const FGuid& GroupId, FPalGroupOperationDynamicDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void Debug_RequestDisposeGroup(const FGuid& GroupId, FPalGroupOperationDynamicDelegate Callback);
    
    UFUNCTION(BlueprintPure)
    UPalGroupBase* Debug_GetFirstGroupByType(const EPalGroupType Type) const;
    

    // Fix for true pure virtual functions not being implemented
};

