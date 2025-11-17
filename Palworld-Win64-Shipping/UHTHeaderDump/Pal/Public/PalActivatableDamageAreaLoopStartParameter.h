#pragma once
#include "CoreMinimal.h"
#include "PalActivatableDamageAreaLoopStartParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalActivatableDamageAreaLoopStartParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    float LoopInterval;
    
    UPROPERTY(BlueprintReadWrite)
    int32 LoopCount;
    
    UPROPERTY(BlueprintReadWrite)
    float ActiveInterval;
    
    PAL_API FPalActivatableDamageAreaLoopStartParameter();
};

