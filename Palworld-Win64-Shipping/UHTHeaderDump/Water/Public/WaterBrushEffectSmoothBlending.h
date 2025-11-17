#pragma once
#include "CoreMinimal.h"
#include "WaterBrushEffectSmoothBlending.generated.h"

USTRUCT(BlueprintType)
struct FWaterBrushEffectSmoothBlending {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InnerSmoothDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OuterSmoothDistance;
    
    WATER_API FWaterBrushEffectSmoothBlending();
};

