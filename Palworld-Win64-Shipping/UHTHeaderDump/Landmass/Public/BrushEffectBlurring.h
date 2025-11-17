#pragma once
#include "CoreMinimal.h"
#include "BrushEffectBlurring.generated.h"

USTRUCT(BlueprintType)
struct FBrushEffectBlurring {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBlurShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Radius;
    
    LANDMASS_API FBrushEffectBlurring();
};

