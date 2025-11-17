#pragma once
#include "CoreMinimal.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalInstanceID.h"
#include "PalDropCharacterSaveParameterInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalDropCharacterSaveParameterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FPalInstanceID IndividualId;
    
    UPROPERTY(BlueprintReadWrite)
    FPalIndividualCharacterSaveParameter SaveParameter;
    
    PAL_API FPalDropCharacterSaveParameterInfo();
};

