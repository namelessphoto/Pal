#pragma once
#include "CoreMinimal.h"
#include "PalVisualEffectDynamicParameterFloat.h"
#include "PalVisualEffectDynamicParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalVisualEffectDynamicParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<FPalVisualEffectDynamicParameterFloat> FloatValues;
    
    PAL_API FPalVisualEffectDynamicParameter();
};

