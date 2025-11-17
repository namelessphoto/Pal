#pragma once
#include "CoreMinimal.h"
#include "PalBinaryMemory.h"
#include "PalFoliageInstanceSaveData.generated.h"

USTRUCT()
struct FPalFoliageInstanceSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    PAL_API FPalFoliageInstanceSaveData();
};

