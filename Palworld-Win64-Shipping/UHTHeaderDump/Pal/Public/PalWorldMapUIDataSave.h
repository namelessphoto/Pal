#pragma once
#include "CoreMinimal.h"
#include "PalWorldMapUIDataSave.generated.h"

USTRUCT()
struct FPalWorldMapUIDataSave {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FName, bool> unlockedRegionMap;
    
    PAL_API FPalWorldMapUIDataSave();
};

