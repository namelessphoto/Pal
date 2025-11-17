#pragma once
#include "CoreMinimal.h"
#include "PalFoliageSaveData.h"
#include "PalFoliageGridSaveData.generated.h"

USTRUCT()
struct FPalFoliageGridSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FName, FPalFoliageSaveData> ModelMap;
    
    PAL_API FPalFoliageGridSaveData();
};

