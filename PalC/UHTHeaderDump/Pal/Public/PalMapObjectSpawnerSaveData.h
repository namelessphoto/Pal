#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectSpawnerItemSaveData.h"
#include "PalMapObjectSpawnerSaveData.generated.h"

USTRUCT()
struct FPalMapObjectSpawnerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<int32, FPalMapObjectSpawnerItemSaveData> ItemMap;
    
    PAL_API FPalMapObjectSpawnerSaveData();
};

