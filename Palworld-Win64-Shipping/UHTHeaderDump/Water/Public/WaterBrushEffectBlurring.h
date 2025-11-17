#pragma once
#include "CoreMinimal.h"
#include "WaterBrushEffectBlurring.generated.h"

USTRUCT(BlueprintType)
struct FWaterBrushEffectBlurring {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBlurShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Radius;
    
    WATER_API FWaterBrushEffectBlurring();
};

