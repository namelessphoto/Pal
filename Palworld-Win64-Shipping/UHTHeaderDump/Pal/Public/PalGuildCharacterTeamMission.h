#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalGuildCharacterTeamMissionInfo.h"
#include "PalGuildPlayerInfo.h"
#include "PalGuildCharacterTeamMission.generated.h"

class UPalGroupGuildBase;
class UPalGuildCharacterTeamMission;

UCLASS()
class PAL_API UPalGuildCharacterTeamMission : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateReleasedMissionInfoDelegate, UPalGuildCharacterTeamMission*, Mission);
    
protected:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    int32 GuildExpedtionCount;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_ReleasedMissionInfos)
    TArray<FPalGuildCharacterTeamMissionInfo> ReleasedMissionInfos;
    
public:
    UPalGuildCharacterTeamMission();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnUpdatePlayerTowerBossDefeatFlag_ServerInternal(FName Key, bool NewValue);
    
    UFUNCTION()
    void OnUpdatePlayerTowerBossDefeatCount_ServerInternal(FName Key, int32 NewValue);
    
    UFUNCTION()
    void OnUpdatePlayerInfo_ServerInternal(const UPalGroupGuildBase* Owner, const FGuid& PlayerUId, const FPalGuildPlayerInfo& PlayerInfo);
    
protected:
    UFUNCTION()
    void OnRep_ReleasedMissionInfos();
    
private:
    UFUNCTION()
    void OnFinishedApplyWorldSaveData_ServerInternal();
    
};

