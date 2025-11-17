#pragma once
#include "CoreMinimal.h"
#include "BrushEffectSmoothBlending.generated.h"

USTRUCT(BlueprintType)
struct FBrushEffectSmoothBlending {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InnerSmoothDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OuterSmoothDistance;
    
    LANDMASS_API FBrushEffectSmoothBlending();
};

