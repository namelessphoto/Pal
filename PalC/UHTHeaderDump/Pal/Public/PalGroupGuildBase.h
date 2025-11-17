#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalGroupOrganization.h"
#include "PalGuildPlayerInfo.h"
#include "PalGroupGuildBase.generated.h"

class APalGuildInfo;
class UPalGroupGuildBase;
class UPalGuildPalStorage;
class UPalPlayerAccount;

UCLASS(Abstract)
class UPalGroupGuildBase : public UPalGroupOrganization {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdatedGuildNameSelfDelegate, const UPalGroupGuildBase*, Self, const FString&, NewGuildName);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdatedGuildNameDelegate, const FString&, NewGuildName);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalGroupGuildBase*, Self);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNotifyPlayerUIdDelegate, const UPalGroupGuildBase*, Self, const FGuid&, PlayerUId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FNotifyPlayerInfoDelegate, const UPalGroupGuildBase*, Self, const FGuid&, PlayerUId, const FPalGuildPlayerInfo&, PlayerInfo);
    
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalGuildPalStorage* PalStorage;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    TArray<FGuid> MapObjectInstanceIds_BaseCampPoint;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_BaseCampLevel)
    int32 BaseCampLevel;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TWeakObjectPtr<APalGuildInfo> WeakGuildInfo;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_Guildname)
    FString GuildName;
    
    UPROPERTY()
    FString OldGuildName;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bAllPlayerNotOnlineAndAlreadyReset;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid LastGuildNameModifierPlayerUid;
    
    UPROPERTY()
    bool EnableResetPropertiesWhenPlayerDelete;
    
public:
    UPalGroupGuildBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void OnRep_Guildname();
    
    UFUNCTION()
    void OnRep_BaseCampLevel(int32 OldValue);
    
private:
    UFUNCTION()
    void OnReceivedWordFilteringResult(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode);
    
    UFUNCTION()
    void OnDeletePlayerAccount_ServerInternal(UPalPlayerAccount* DeleteAccount);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsWorkerCapacityLimited(int32 InLevel) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetWorkerCapacityNum(int32 InLevel) const;
    
    UFUNCTION(BlueprintPure)
    void GetGuildNameByCheckBlockedUser(FString& outName) const;
    
    UFUNCTION(BlueprintPure)
    FString GetGuildName() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBaseCampMaxNumInGuildSpecLevel(int32 InLevel) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBaseCampMaxNumInGuild() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBaseCampLevel() const;
    
};

