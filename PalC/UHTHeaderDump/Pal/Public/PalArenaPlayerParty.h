#pragma once
#include "CoreMinimal.h"
#include "PalArenaPlayerParty.generated.h"

class UPalIndividualCharacterParameter;

USTRUCT(BlueprintType)
struct FPalArenaPlayerParty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TArray<UPalIndividualCharacterParameter*> Pals;
    
    UPROPERTY(BlueprintReadWrite)
    UPalIndividualCharacterParameter* LeaderPal;
    
    UPROPERTY(BlueprintReadWrite)
    bool PartySelected;
    
    PAL_API FPalArenaPlayerParty();
};

