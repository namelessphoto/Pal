#pragma once
#include "CoreMinimal.h"
#include "PalDeforestRankDefineData.h"
#include "PalWorkSuitabilityDefineData.h"
#include "PalWorkSuitabilityDeforestDefineData.generated.h"

USTRUCT(BlueprintType)
struct FPalWorkSuitabilityDeforestDefineData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FPalWorkSuitabilityDefineData CommonDefineData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FPalDeforestRankDefineData> DeforestDefineData;
    
    PAL_API FPalWorkSuitabilityDeforestDefineData();
};

