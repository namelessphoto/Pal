#pragma once
#include "CoreMinimal.h"
#include "PalLogAdditionalData.h"
#include "PalLogDataSet.generated.h"

USTRUCT(BlueprintType)
struct FPalLogDataSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FText Text;
    
    UPROPERTY(BlueprintReadWrite)
    FPalLogAdditionalData AdditionalData;
    
    PAL_API FPalLogDataSet();
};

