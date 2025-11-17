#pragma once
#include "CoreMinimal.h"
#include "WaterBrushEffectTerracing.generated.h"

USTRUCT(BlueprintType)
struct FWaterBrushEffectTerracing {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TerraceAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TerraceSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TerraceSmoothness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaskLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaskStartOffset;
    
    WATER_API FWaterBrushEffectTerracing();
};

