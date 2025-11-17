#pragma once
#include "CoreMinimal.h"
#include "EPalSpecialAttackRateType.h"
#include "PalSpecialAttackRateInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalSpecialAttackRateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPalSpecialAttackRateType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Rate;
    
    PAL_API FPalSpecialAttackRateInfo();
};

