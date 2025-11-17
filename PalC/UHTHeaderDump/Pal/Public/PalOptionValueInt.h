#pragma once
#include "CoreMinimal.h"
#include "PalOptionValueInt.generated.h"

USTRUCT(BlueprintType)
struct FPalOptionValueInt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Min;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Max;
    
    PAL_API FPalOptionValueInt();
};

