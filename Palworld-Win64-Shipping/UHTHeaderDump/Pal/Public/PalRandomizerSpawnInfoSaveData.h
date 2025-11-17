#pragma once
#include "CoreMinimal.h"
#include "PalRandomizerSpawnInfoSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalRandomizerSpawnInfoSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 KeyHash;
    
    UPROPERTY()
    TMap<uint32, uint32> RemapRowNameHashList;
    
    UPROPERTY(Transient)
    bool bNeedRemap;
    
    PAL_API FPalRandomizerSpawnInfoSaveData();
};

