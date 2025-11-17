#pragma once
#include "CoreMinimal.h"
#include "FloatContainer_FloatPair.generated.h"

USTRUCT(BlueprintType)
struct FFloatContainer_FloatPair {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FName Key;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float Value;
    
    PAL_API FFloatContainer_FloatPair();
};

