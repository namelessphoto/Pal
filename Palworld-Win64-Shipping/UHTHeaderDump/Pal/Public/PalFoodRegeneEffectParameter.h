#pragma once
#include "CoreMinimal.h"
#include "EPalFoodStatusEffectType.h"
#include "PalFoodRegeneEffectParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalFoodRegeneEffectParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EPalFoodStatusEffectType EffectType;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Value;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Interval;
    
    PAL_API FPalFoodRegeneEffectParameter();
};

