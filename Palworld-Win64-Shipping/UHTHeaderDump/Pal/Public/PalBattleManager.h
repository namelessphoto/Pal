#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ActorArray.h"
#include "EPalPlayerBattleFinishType.h"
#include "PalDyingEndInfo.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalBattleManager.generated.h"

class AActor;
class APalCharacter;
class APalNPCSpawnerBase;
class APalPlayerCharacter;

UCLASS(BlueprintType)
class PAL_API UPalBattleManager : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQuestionMarkDelegate, APalCharacter*, TargetCharacter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FExclamationMarkDelegate, APalCharacter*, TargetCharacter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEmitSoundOnlyPalmiDelegate, int32, SoundLevel);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEmitSoundDelegate, int32, SoundRadius, FVector, EmitLocation, AActor*, Emitter);
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<AActor*, FActorArray> EnemyListPerPlayer;
    
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<APalNPCSpawnerBase> DebugSpawnerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<APalNPCSpawnerBase> DebugUniqueNPCSpawnerClass;
    
    UPROPERTY(BlueprintAssignable)
    FExclamationMarkDelegate OnFExclamationMarkDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FQuestionMarkDelegate OnFQuestionMarkDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FEmitSoundDelegate OnFEmitSoundDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FEmitSoundOnlyPalmiDelegate OnFEmitSoundOnlyPalmiDelegate;
    
    UPalBattleManager();

    UFUNCTION(BlueprintPure)
    bool TargetIsPlayerOrPlayersOtomoPal(AActor* TargetCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SoundReactionStart(APalCharacter* SelfCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetUpPlayerMap(AActor* Player);
    
    UFUNCTION(BlueprintCallable)
    void RemovePlayerMap(AActor* Player);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEnemyActor_AllPlayer(AActor* Enemy, EPalPlayerBattleFinishType FinishType);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEnemyActor(AActor* Player, AActor* Enemy, EPalPlayerBattleFinishType FinishType);
    
    UFUNCTION(BlueprintPure)
    bool IsBattleModeAnyPlayer();
    
    UFUNCTION(BlueprintPure)
    AActor* GetRandomActor(TArray<AActor*> targetList);
    
    UFUNCTION(BlueprintPure)
    AActor* GetNearestActor(TArray<AActor*> targetList, FVector Location);
    
    UFUNCTION(BlueprintPure)
    bool GetConflictEnemies(AActor* Player, TArray<AActor*>& OutEnemyes, bool IgnoreOtomoStopByBall);
    
    UFUNCTION(BlueprintPure)
    void GetAllPlayerAndOtomo_ForEnemySelf(TArray<AActor*> TargetPlayers, TArray<AActor*>& OutCharacters);
    
private:
    UFUNCTION()
    void EventOnRevivePlayer(APalPlayerCharacter* Player);
    
    UFUNCTION()
    void EventOnPlayerDeadCompletely(APalPlayerCharacter* Player, const FPalDyingEndInfo& DyingEndInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void EnemyNearPlayerListUpdate(AActor* Enemy, float Distance);
    
    UFUNCTION(BlueprintCallable)
    void EmitSound(FName SoundRowName, AActor* Emitter, FVector EmitLocation, float VolumeRate);
    
    UFUNCTION(BlueprintCallable)
    void AddEnemyActor_PlayerOrOtomo(AActor* PlayerOrOtomo, AActor* Enemy);
    
    UFUNCTION(BlueprintCallable)
    void ActionMenaceStart(APalCharacter* SelfCharacter);
    
};

