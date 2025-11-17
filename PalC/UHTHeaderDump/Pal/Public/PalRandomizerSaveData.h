#pragma once
#include "CoreMinimal.h"
#include "EPalRandomizerType.h"
#include "PalRandomizerSpawnInfoSaveData.h"
#include "PalRandomizerSaveData.generated.h"

USTRUCT()
struct FPalRandomizerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FPalRandomizerSpawnInfoSaveData> RegionRandomizeSpawnerHashList;
    
    UPROPERTY()
    TArray<FPalRandomizerSpawnInfoSaveData> AllRandomizeSpawnerHashList;
    
    UPROPERTY()
    TMap<FName, FName> ImprisonmentBossRemapList;
    
    UPROPERTY()
    TMap<FName, FName> FieldBossRemapList;
    
    UPROPERTY()
    EPalRandomizerType LastRandomizerType;
    
    PAL_API FPalRandomizerSaveData();
};

