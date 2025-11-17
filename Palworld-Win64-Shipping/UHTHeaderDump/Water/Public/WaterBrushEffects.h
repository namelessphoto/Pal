#pragma once
#include "CoreMinimal.h"
#include "WaterBrushEffectBlurring.h"
#include "WaterBrushEffectCurlNoise.h"
#include "WaterBrushEffectDisplacement.h"
#include "WaterBrushEffectSmoothBlending.h"
#include "WaterBrushEffectTerracing.h"
#include "WaterBrushEffects.generated.h"

USTRUCT(BlueprintType)
struct FWaterBrushEffects {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FWaterBrushEffectBlurring Blurring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FWaterBrushEffectCurlNoise CurlNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FWaterBrushEffectDisplacement Displacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FWaterBrushEffectSmoothBlending SmoothBlending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FWaterBrushEffectTerracing Terracing;
    
    WATER_API FWaterBrushEffects();
};

