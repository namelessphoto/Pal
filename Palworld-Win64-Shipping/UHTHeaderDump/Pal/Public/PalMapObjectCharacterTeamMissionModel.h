#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalMapObjectCharacterTeamMissionState.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalNetArchive.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectCharacterTeamMissionModel.generated.h"

class UPalGroupGuildBase;
class UPalMapObjectCharacterTeamMissionAssignedInfo;
class UPalMapObjectCharacterTeamMissionFunctionsBase;
class UPalMapObjectCharacterTeamMissionModel;
class UPalMapObjectItemContainerModule;
class UPalUserWidgetOverlayUI;

UCLASS()
class PAL_API UPalMapObjectCharacterTeamMissionModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStateChangedDelegate, const EPalMapObjectCharacterTeamMissionState, LastState, const EPalMapObjectCharacterTeamMissionState, CurrentState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfMultiDelegate, UPalMapObjectCharacterTeamMissionModel*, Self);
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfMultiDelegate OnChangedTargetMissionDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfMultiDelegate OnReplicatedAssignedInfoDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfMultiDelegate OnUpdatedCompleteDateTimeDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FStateChangedDelegate OnChangedStateDelegate;
    
protected:
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_TargetMissionId)
    FName TargetMissionId;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_AssignedInfo)
    UPalMapObjectCharacterTeamMissionAssignedInfo* AssignedInfo;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_State)
    EPalMapObjectCharacterTeamMissionState State;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FDateTime MissionStartDateTime;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_MissionCompleteDateTime)
    FDateTime MissionCompleteDateTime;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalUserWidgetOverlayUI> MissionSelectUI;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalMapObjectCharacterTeamMissionFunctionsBase> BlueprintFunctionClass;
    
public:
    UPalMapObjectCharacterTeamMissionModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void RequestUnselectAssignedCharacter_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION()
    void RequestUnselectAll_ServerInternal(const int32 RequestPlayerId);
    
    UFUNCTION()
    void RequestStartMission_ServerInternal(const int32 RequestPlayerId);
    
    UFUNCTION()
    void RequestSelectMission_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION()
    void RequestSelectAuto_ServerInternal(const int32 RequestPlayerId);
    
    UFUNCTION()
    void RequestSelectAssignedCharacter_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION()
    void RequestCancelInProgressMission_ServerInternal(const int32 RequestPlayerId);
    
    UFUNCTION()
    void OnUpdateItemContainerContents_ServerInternal(UPalMapObjectItemContainerModule* Module);
    
protected:
    UFUNCTION()
    void OnRep_TargetMissionId(const FName OldValue);
    
    UFUNCTION()
    void OnRep_State(const EPalMapObjectCharacterTeamMissionState OldValue);
    
    UFUNCTION()
    void OnRep_MissionCompleteDateTime(const FDateTime OldValue);
    
    UFUNCTION()
    void OnRep_AssignedInfo();
    
private:
    UFUNCTION()
    void OnExitPlayerGuild_ServerInternal(const UPalGroupGuildBase* Guild, const FGuid& PlayerUId);
    
};

