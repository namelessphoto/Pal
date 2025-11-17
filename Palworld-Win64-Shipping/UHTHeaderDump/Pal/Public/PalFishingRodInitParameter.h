#pragma once
#include "CoreMinimal.h"
#include "PalFishingRodInitParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalFishingRodInitParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float FishingMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float FloatMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float HitBarSizeRate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float MissFightAmountRate;
    
    PAL_API FPalFishingRodInitParameter();
};

