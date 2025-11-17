#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "FoliageDensityFalloff.generated.h"

USTRUCT(BlueprintType)
struct FFoliageDensityFalloff {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bUseFalloffCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve FalloffCurve;
    
    FOLIAGE_API FFoliageDensityFalloff();
};

