#pragma once
#include "CoreMinimal.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalPlayerInitializeParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerInitializeParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPalIndividualCharacterSaveParameter InitParam;
    
    PAL_API FPalPlayerInitializeParameter();
};

