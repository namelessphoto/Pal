#pragma once
#include "CoreMinimal.h"
#include "BrushEffectBlurring.h"
#include "BrushEffectCurlNoise.h"
#include "BrushEffectDisplacement.h"
#include "BrushEffectSmoothBlending.h"
#include "BrushEffectTerracing.h"
#include "LandmassBrushEffectsList.generated.h"

USTRUCT(BlueprintType)
struct FLandmassBrushEffectsList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBrushEffectBlurring Blurring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBrushEffectCurlNoise CurlNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBrushEffectDisplacement Displacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBrushEffectSmoothBlending SmoothBlending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBrushEffectTerracing Terracing;
    
    LANDMASS_API FLandmassBrushEffectsList();
};

