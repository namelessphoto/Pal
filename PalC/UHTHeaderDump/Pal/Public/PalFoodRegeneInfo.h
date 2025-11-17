#pragma once
#include "CoreMinimal.h"
#include "PalFoodRegeneEffectParameter.h"
#include "PalFoodRegeneInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalFoodRegeneInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName ItemId;
    
    UPROPERTY(BlueprintReadOnly)
    int32 EffectTime;
    
    UPROPERTY(BlueprintReadOnly)
    int32 RemainingTime;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FPalFoodRegeneEffectParameter> RegeneEfectParameters;
    
    PAL_API FPalFoodRegeneInfo();
};

