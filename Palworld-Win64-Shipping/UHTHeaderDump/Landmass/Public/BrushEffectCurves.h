#pragma once
#include "CoreMinimal.h"
#include "BrushEffectCurves.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FBrushEffectCurves {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseCurveChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* ElevationCurveAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ChannelEdgeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ChannelDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CurveRampWidth;
    
    LANDMASS_API FBrushEffectCurves();
};

