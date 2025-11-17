#pragma once
#include "CoreMinimal.h"
#include "PalBossSpawnerSaveData.generated.h"

USTRUCT()
struct FPalBossSpawnerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FName, bool> RespawnDisableFlag;
    
    PAL_API FPalBossSpawnerSaveData();
};

