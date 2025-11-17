#pragma once
#include "CoreMinimal.h"
#include "PalCaptureBonusExpTableSetting.generated.h"

USTRUCT(BlueprintType)
struct FPalCaptureBonusExpTableSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 TableReferenceNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 TableIndexCount;
    
    PAL_API FPalCaptureBonusExpTableSetting();
};

