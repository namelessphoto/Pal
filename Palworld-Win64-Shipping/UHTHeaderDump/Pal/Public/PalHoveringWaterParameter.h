#pragma once
#include "CoreMinimal.h"
#include "PalHoveringWaterParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalHoveringWaterParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool EnableIdleHoveringWaterEffect;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float Rate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float Delay;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float Duration;
    
    PAL_API FPalHoveringWaterParameter();
};

