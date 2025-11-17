#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalArenaRank.h"
#include "PalArenaWorldRankingRecord.generated.h"

class UPalIndividualCharacterParameter;

USTRUCT(BlueprintType)
struct FPalArenaWorldRankingRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    int32 RankingNo;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FString PlayerName;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FName NPCNameTextID;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FString GuildName;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    EPalArenaRank ArenaRank;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    int32 ArenaRankPoint;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FName RankingNPCId;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FGuid PlayerUId;
    
    UPROPERTY(NotReplicated, VisibleInstanceOnly)
    FString OldPlayerName;
    
    UPROPERTY(NotReplicated, VisibleInstanceOnly)
    FString OldGuildName;
    
    UPROPERTY(NotReplicated)
    TWeakObjectPtr<UPalIndividualCharacterParameter> PlayerIndividualParameter_InServer;
    
    UPROPERTY(NotReplicated)
    FGuid GuildId_InServer;
    
    PAL_API FPalArenaWorldRankingRecord();
};

