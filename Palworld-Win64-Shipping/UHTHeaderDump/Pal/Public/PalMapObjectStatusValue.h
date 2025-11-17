#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectStatusValue.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectStatusValue {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    int32 CurrentValue;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    int32 MaxValue;
    
public:
    PAL_API FPalMapObjectStatusValue();
};

