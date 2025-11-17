#pragma once
#include "CoreMinimal.h"
#include "PalBinaryMemory.h"
#include "PalGuildItemStorageSaveData.generated.h"

USTRUCT()
struct FPalGuildItemStorageSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    PAL_API FPalGuildItemStorageSaveData();
};

