#pragma once
#include "CoreMinimal.h"
#include "EPalKeyConfigAxisFilterType.h"
#include "PalKeyConfigKeys.h"
#include "PalAxisKeyConfigKeys.generated.h"

USTRUCT(BlueprintType)
struct FPalAxisKeyConfigKeys : public FPalKeyConfigKeys {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FName AxisName;
    
    UPROPERTY(BlueprintReadWrite)
    EPalKeyConfigAxisFilterType FilterType;
    
    PAL_API FPalAxisKeyConfigKeys();
};

