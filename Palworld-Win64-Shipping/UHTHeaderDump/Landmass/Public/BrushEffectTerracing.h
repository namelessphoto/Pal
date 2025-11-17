#pragma once
#include "CoreMinimal.h"
#include "BrushEffectTerracing.generated.h"

USTRUCT(BlueprintType)
struct FBrushEffectTerracing {
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
    
    LANDMASS_API FBrushEffectTerracing();
};

