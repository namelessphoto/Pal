#pragma once
#include "CoreMinimal.h"
#include "PalCharacterStoredParameterId.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalDroppedPalProductDataForShop.generated.h"

USTRUCT(BlueprintType)
struct FPalDroppedPalProductDataForShop {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPalCharacterStoredParameterId StoredParameterId;
    
    UPROPERTY()
    FPalIndividualCharacterSaveParameter SaveParameter;
    
    PAL_API FPalDroppedPalProductDataForShop();
};

