#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LevelInstance -FallbackName=LevelInstance
#include "EPalBossBattleDifficulty.h"
#include "EPalBossType.h"
#include "PalBossBattleLevelInstance.generated.h"

class APalCharacter;

UCLASS()
class PAL_API APalBossBattleLevelInstance : public ALevelInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBossSpawnedDelegate, APalCharacter*, SpawnedCharacter);
    
    UPROPERTY(BlueprintAssignable)
    FOnBossSpawnedDelegate OnBossSpawnedDelegate;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    bool bIsLoaded;
    
    UPROPERTY(BlueprintReadWrite)
    EPalBossBattleDifficulty Difficulty;
    
public:
    APalBossBattleLevelInstance(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnBossSpawner(EPalBossType BossType, int32 JoinPlayerNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetBossLocation();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    FTransform GetSequencerTransform() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    FTransform GetPlayerStartTransform() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    bool CheckLevelLoaded() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void BossSpawned(APalCharacter* SpawnedCharacter);
    
};

