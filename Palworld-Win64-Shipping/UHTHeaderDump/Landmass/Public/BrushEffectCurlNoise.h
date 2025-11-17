#pragma once
#include "CoreMinimal.h"
#include "BrushEffectCurlNoise.generated.h"

USTRUCT(BlueprintType)
struct FBrushEffectCurlNoise {
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
    
    LANDMASS_API FBrushEffectCurlNoise();
};

