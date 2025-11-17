#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalArenaEntryRequestResult.h"
#include "EPalArenaPlayerIndex.h"
#include "EPalArenaRank.h"
#include "PalArenaBattleResultInfo.h"
#include "PalArenaMatchingPlayerInfo.h"
#include "PalArenaPlayerParty.h"
#include "PalArenaRule.h"
#include "PalArenaSequencerInitializeParameter.h"
#include "PalArenaWorldRankingRecord.h"
#include "PalNetworkArenaComponent.generated.h"

class UPalIndividualCharacterParameter;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalNetworkArenaComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalNetworkArenaComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Client, Reliable)
    void UpdateParty_ToClient(EPalArenaPlayerIndex PlayerIndex, const FPalArenaPlayerParty& ArenaPlayerParty);
    
    UFUNCTION(Client, Reliable)
    void SyncBattleEndTimeToClient(FDateTime BattleEndTime);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetParty_ToServer(const FGuid& ArenaInstanceId, const FPalArenaPlayerParty& ArenaPlayerParty);
    
    UFUNCTION(Reliable, Server)
    void RequestStartArenaSpectateToServer(const FGuid& ArenaRoomId);
    
    UFUNCTION(Reliable, Server)
    void RequestStartArenaSolo_ToServer(EPalArenaRank ArenaRank);
    
    UFUNCTION(Reliable, Server)
    void RequestStartArena_ToServer();
    
    UFUNCTION(Reliable, Server)
    void RequestMyWorldArenaRank();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestExitArenaSpectateToServer();
    
    UFUNCTION(Reliable, Server)
    void RequestEnterArena_ToServer(const FGuid& ArenaRoomId);
    
    UFUNCTION(Reliable, Server)
    void RequestCreateRoomArena_ToServer(const FPalArenaRule& ArenaRule);
    
    UFUNCTION(Reliable, Server)
    void RequestArenaRule_PreEnter_ToServer(const FGuid& ArenaRoomId);
    
    UFUNCTION(Client, Reliable)
    void RemovePlayerFromArena_ToClient(UPalIndividualCharacterParameter* RemovePlayeParameter, bool bIsComplete);
    
    UFUNCTION(Client, Reliable)
    void ReceiveMyWorldArenaRank(FPalArenaWorldRankingRecord RankInfo);
    
    UFUNCTION(Client, Reliable)
    void ReceiveExitArenaSpectate_ToClient(bool bIsSuccess);
    
    UFUNCTION(Client, Reliable)
    void ReceiveEnterArenaSpectateResult_ToClinet(EPalArenaEntryRequestResult Result);
    
    UFUNCTION(Client, Reliable)
    void ReceiveEnterArenaResult_ToClinet(EPalArenaEntryRequestResult Result);
    
    UFUNCTION(Client, Reliable)
    void NotifyStartArenaSpectate_ToClient(const FPalArenaSequencerInitializeParameter& InitializeParameter);
    
    UFUNCTION(Client, Reliable)
    void NotifyStartArena_ToClient(const FPalArenaSequencerInitializeParameter& InitializeParameter);
    
    UFUNCTION(Reliable, Server)
    void NotifySequenceEnd_ToServer(const FGuid& ArenaInstanceId);
    
    UFUNCTION(Client, Reliable)
    void NotifyEndArenaSpectate_ToClient();
    
    UFUNCTION(Client, Reliable)
    void NotifyBattleResultInfo_ToClient(const FPalArenaBattleResultInfo& ArenaBattleResultInfo);
    
    UFUNCTION(Client, Reliable)
    void NotifyArenaRoomRule_ToClient(bool bIsSuccess, const FPalArenaRule& Rule, const FGuid& ArenaRoomId, const FPalArenaMatchingPlayerInfo& MatchingPlayerInfo);
    
    UFUNCTION(Reliable, Server)
    void ExitPlayerSoloMode_ToServer(const FGuid& ArenaInstanceId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ExitPlayerFromResult_ToServer(const FGuid& ArenaInstanceId);
    
    UFUNCTION(Client, Reliable)
    void AdvanceSequence_ToClient();
    
};

