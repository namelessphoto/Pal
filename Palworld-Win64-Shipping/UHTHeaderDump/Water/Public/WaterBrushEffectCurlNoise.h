#pragma once
#include "CoreMinimal.h"
#include "WaterBrushEffectCurlNoise.generated.h"

USTRUCT(BlueprintType)
struct FWaterBrushEffectCurlNoise {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Curl1Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Curl2Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Curl1Tiling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Curl2Tiling;
    
    WATER_API FWaterBrushEffectCurlNoise();
};

