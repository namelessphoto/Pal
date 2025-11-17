#pragma once
#include "CoreMinimal.h"
#include "PalInstanceID.h"
#include "PalMapObjectConvertCharacterToItemProcessItem.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectConvertCharacterToItemProcessItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPalInstanceID IndividualId;
    
    UPROPERTY()
    float ConvertProgressRate;
    
    PAL_API FPalMapObjectConvertCharacterToItemProcessItem();
};

