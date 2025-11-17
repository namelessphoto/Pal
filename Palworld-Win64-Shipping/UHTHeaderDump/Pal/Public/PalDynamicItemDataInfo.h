#pragma once
#include "CoreMinimal.h"
#include "PalDynamicItemDataInfo.generated.h"

class UPalDynamicItemDataBase;

USTRUCT()
struct FPalDynamicItemDataInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UPalDynamicItemDataBase* ItemData;
    
    PAL_API FPalDynamicItemDataInfo();
};

