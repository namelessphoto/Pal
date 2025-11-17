#pragma once
#include "CoreMinimal.h"
#include "EPalRandomizerType.h"
#include "PalRandomizerSpawnInfoSaveData.h"
#include "PalRandomizerReplicateData.generated.h"

USTRUCT(BlueprintType)
struct FPalRandomizerReplicateData {
    GENERATED_BODY()
public:
    UPROPERTY(NotReplicated)
    FString RandomizerSeed;
    
    UPROPERTY(NotReplicated)
    EPalRandomizerType RandomizerType;
    
    UPROPERTY(NotReplicated)
    bool bIsRandomizerPalLevelRandom;
    
    UPROPERTY(NotReplicated)
    TArray<FPalRandomizerSpawnInfoSaveData> RandomizerSpawnerRegionHashList;
    
    UPROPERTY(NotReplicated)
    TArray<FPalRandomizerSpawnInfoSaveData> RandomizerSpawnerInstanceHashList;
    
    UPROPERTY(NotReplicated)
    TMap<FName, FName> ImprisonmentBossRemapList;
    
    UPROPERTY(NotReplicated)
    TMap<FName, FName> FieldBossRemapList;
    
    PAL_API FPalRandomizerReplicateData();
};

