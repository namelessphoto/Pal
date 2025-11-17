#pragma once
#include "CoreMinimal.h"
#include "PalArenaSpectatePlayerInfo.generated.h"

class UPalIndividualCharacterParameter;

USTRUCT(BlueprintType)
struct FPalArenaSpectatePlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UPalIndividualCharacterParameter* IndividualParameter;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<UPalIndividualCharacterParameter*> OtomoList;
    
    PAL_API FPalArenaSpectatePlayerInfo();
};

