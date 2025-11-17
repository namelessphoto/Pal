#pragma once
#include "CoreMinimal.h"
#include "EPalDungeonRewardSpawnerContentType.h"
#include "PalBinaryMemory.h"
#include "PalDungeonRewardSaveData.generated.h"

USTRUCT()
struct FPalDungeonRewardSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    UPROPERTY()
    EPalDungeonRewardSpawnerContentType ContentType;
    
    PAL_API FPalDungeonRewardSaveData();
};

