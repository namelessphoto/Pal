#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalRaidBossBattleFinishType.h"
#include "PalRaidBossDataRow.h"
#include "PalRaidBossSpawnInfo.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalRaidBossManager.generated.h"

class AActor;
class APalMapObject;
class UDataTable;
class UPalRaidBossComponent;

UCLASS(BlueprintType)
class PAL_API UPalRaidBossManager : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRaidBossBattleStartDelegate, FGuid, CampID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRaidBossBattleFinishDelegate, FGuid, CampID, EPalRaidBossBattleFinishType, FinishType);
    
    UPROPERTY(BlueprintAssignable)
    FOnRaidBossBattleStartDelegate OnRaidBossBattleStartDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnRaidBossBattleFinishDelegate OnRaidBossBattleFinishDelegate;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    UDataTable* RaidBossDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    float TimeLimit;
    
    UPROPERTY(EditDefaultsOnly)
    float BattleAreaRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float BattleSequencePlayRangeScale;
    
    UPROPERTY(EditDefaultsOnly)
    int32 NPCTargetCount_ForForcePlayerTarget;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> LargeDownHPRate;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> RaidBossBattleActorClass;
    
    UPROPERTY(EditDefaultsOnly)
    float GiftSuccessItemRangeScale;
    
private:
    UPROPERTY(Instanced, Transient, VisibleInstanceOnly)
    TMap<FGuid, UPalRaidBossComponent*> RaidComponentMap;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid GroupGuid;
    
public:
    UPalRaidBossManager();

    UFUNCTION(BlueprintCallable)
    bool IsRaidBossOfferItem(FName ItemName);
    
    UFUNCTION(BlueprintPure)
    int32 GetNPCTargetCount_ForForcePlayerTarget() const;
    
    UFUNCTION(BlueprintCallable)
    UPalRaidBossComponent* FindRaidComponent_ByBuildObject(APalMapObject* BuildObject);
    
    UFUNCTION(BlueprintCallable)
    UPalRaidBossComponent* FindRaidComponent(FGuid BaseCampId);
    
    UFUNCTION(BlueprintCallable)
    FPalRaidBossSpawnInfo FindRaidBossInfoByCharacterID(FName CharacterID);
    
    UFUNCTION(BlueprintPure)
    FPalRaidBossDataRow FindRaidBossDataByCharacterID(FName CharacterID) const;
    
    UFUNCTION(BlueprintPure)
    FPalRaidBossDataRow FindRaidBossData(FName ItemName) const;
    
};

