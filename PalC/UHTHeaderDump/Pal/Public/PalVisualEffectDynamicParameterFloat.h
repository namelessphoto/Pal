#pragma once
#include "CoreMinimal.h"
#include "PalVisualEffectDynamicParameterFloat.generated.h"

USTRUCT(BlueprintType)
struct FPalVisualEffectDynamicParameterFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float Value;
    
    PAL_API FPalVisualEffectDynamicParameterFloat();
};

