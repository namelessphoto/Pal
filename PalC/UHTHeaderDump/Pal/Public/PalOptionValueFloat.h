#pragma once
#include "CoreMinimal.h"
#include "PalOptionValueFloat.generated.h"

USTRUCT(BlueprintType)
struct FPalOptionValueFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Min;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Max;
    
    PAL_API FPalOptionValueFloat();
};

