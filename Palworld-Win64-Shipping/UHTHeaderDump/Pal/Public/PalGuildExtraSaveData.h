#pragma once
#include "CoreMinimal.h"
#include "PalBinaryMemory.h"
#include "PalGuildExpeditionSaveData.h"
#include "PalGuildItemStorageSaveData.h"
#include "PalGuildLabSaveData.h"
#include "PalGuildExtraSaveData.generated.h"

USTRUCT()
struct FPalGuildExtraSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPalGuildItemStorageSaveData GuildItemStorage;
    
    UPROPERTY()
    FPalGuildLabSaveData Lab;
    
    UPROPERTY()
    FPalGuildExpeditionSaveData Expedition;
    
    PAL_API FPalGuildExtraSaveData();
};

