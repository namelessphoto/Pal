#pragma once
#include "CoreMinimal.h"
#include "PalBinaryMemory.h"
#include "PalDynamicItemSaveData.generated.h"

USTRUCT()
struct FPalDynamicItemSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    PAL_API FPalDynamicItemSaveData();
};

