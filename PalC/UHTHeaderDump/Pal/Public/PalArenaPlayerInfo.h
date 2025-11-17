#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalArenaPlayerIndex.h"
#include "EPalArenaRank.h"
#include "PalArenaPlayerParty.h"
#include "PalArenaPlayerInfo.generated.h"

class UPalIndividualCharacterParameter;

USTRUCT(BlueprintType)
struct FPalArenaPlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EPalArenaPlayerIndex PlayerIndex;
    
    UPROPERTY(BlueprintReadOnly)
    UPalIndividualCharacterParameter* PlayerIndividualParameter;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid PlayerUId;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<UPalIndividualCharacterParameter*> OtomoList;
    
    UPROPERTY(BlueprintReadOnly)
    FPalArenaPlayerParty Party;
    
    UPROPERTY(BlueprintReadOnly)
    EPalArenaRank ArenaRank;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsNpc;
    
    PAL_API FPalArenaPlayerInfo();
};

