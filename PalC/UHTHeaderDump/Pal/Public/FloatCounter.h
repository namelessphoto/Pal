#pragma once
#include "CoreMinimal.h"
#include "FloatCounter.generated.h"

USTRUCT(BlueprintType)
struct FFloatCounter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    float TriggerValue;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float CurrentStackValue;
    
public:
    PAL_API FFloatCounter();
};

