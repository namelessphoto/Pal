#pragma once
#include "CoreMinimal.h"
#include "PalGaugeInterpolationCalculator.generated.h"

USTRUCT(BlueprintType)
struct FPalGaugeInterpolationCalculator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    float CurrentValue;
    
    UPROPERTY()
    float TargetValue;
    
    UPROPERTY(BlueprintReadWrite)
    bool bDirectionPositive;
    
    PAL_API FPalGaugeInterpolationCalculator();
};

