#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalMapObjectSpawnerSaveData.h"
#include "PalMapObjectSpawnerInStageSaveData.generated.h"

USTRUCT()
struct FPalMapObjectSpawnerInStageSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FGuid, FPalMapObjectSpawnerSaveData> SpawnerDataMapByLevelObjectInstanceId;
    
    PAL_API FPalMapObjectSpawnerInStageSaveData();
};

