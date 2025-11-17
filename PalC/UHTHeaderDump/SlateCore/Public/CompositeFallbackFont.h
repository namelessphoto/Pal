#pragma once
#include "CoreMinimal.h"
#include "Typeface.h"
#include "CompositeFallbackFont.generated.h"

USTRUCT()
struct SLATECORE_API FCompositeFallbackFont {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTypeface Typeface;
    
    UPROPERTY()
    float ScalingFactor;
    
    FCompositeFallbackFont();
};

