#pragma once
#include "CoreMinimal.h"
#include "PalNPCAppearFlagSaveData.generated.h"

USTRUCT()
struct FPalNPCAppearFlagSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FName> NPCAppearFlagName;
    
    PAL_API FPalNPCAppearFlagSaveData();
};

