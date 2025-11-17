#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalBossBattleCombatResult.h"
#include "EPalBossBattleDifficulty.h"
#include "EPalBossBattleSequenceType.h"
#include "EPalBossType.h"
#include "PalStageInstanceId.h"
#include "PalNetworkBossBattleComponent.generated.h"

class APalPlayerCharacter;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalNetworkBossBattleComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalNetworkBossBattleComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Client, Reliable)
    void UnlockAchievement_ToClient(EPalBossType BossType);
    
    UFUNCTION(Reliable, Server)
    void RequestBossBattleStart_ToServer(EPalBossType BossType);
    
    UFUNCTION(Client, Reliable)
    void RequestBossBattleStart_ToClient(bool IsSuccess, EPalBossType BossType, const FPalStageInstanceId StageInstanceId, const TArray<APalPlayerCharacter*>& JoinPlayers);
    
    UFUNCTION(Reliable, Server)
    void RequestBossBattleEntry_ToServer(EPalBossType BossType, EPalBossBattleDifficulty Difficulty);
    
    UFUNCTION(Client, Reliable)
    void RemovePlayerFromRoom_ToClient(EPalBossType BossType, APalPlayerCharacter* DeadPlayer);
    
    UFUNCTION(Reliable, Server)
    void NoticeSequenceEnd_ToServer(EPalBossType BossType);
    
    UFUNCTION(Client, Reliable)
    void CombatResult_ToClient(EPalBossType BossType, EPalBossBattleCombatResult CombatResult);
    
    UFUNCTION(Client, Reliable)
    void ChangeSequence_ToClient(EPalBossType BossType, EPalBossBattleSequenceType NextSequence);
    
};

