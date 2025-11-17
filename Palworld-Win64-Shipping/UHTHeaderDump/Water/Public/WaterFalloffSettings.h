#pragma once
#include "CoreMinimal.h"
#include "EWaterBrushFalloffMode.h"
#include "WaterFalloffSettings.generated.h"

USTRUCT(BlueprintType)
struct FWaterFalloffSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EWaterBrushFalloffMode FalloffMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FalloffAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FalloffWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EdgeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ZOffset;
    
    WATER_API FWaterFalloffSettings();
};

