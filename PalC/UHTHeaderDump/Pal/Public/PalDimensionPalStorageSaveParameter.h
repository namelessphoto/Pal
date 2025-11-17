#pragma once
#include "CoreMinimal.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalInstanceID.h"
#include "PalDimensionPalStorageSaveParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalDimensionPalStorageSaveParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FPalIndividualCharacterSaveParameter SaveParameter;
    
    UPROPERTY(BlueprintReadOnly)
    FPalInstanceID InstanceId;
    
    PAL_API FPalDimensionPalStorageSaveParameter();
};

