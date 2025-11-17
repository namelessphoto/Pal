#pragma once
#include "CoreMinimal.h"
#include "WaterSplineCurveDefaults.generated.h"

USTRUCT(BlueprintType)
struct FWaterSplineCurveDefaults {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float DefaultDepth;
    
    UPROPERTY(EditDefaultsOnly)
    float DefaultWidth;
    
    UPROPERTY(EditDefaultsOnly)
    float DefaultVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float DefaultAudioIntensity;
    
    WATER_API FWaterSplineCurveDefaults();
};

