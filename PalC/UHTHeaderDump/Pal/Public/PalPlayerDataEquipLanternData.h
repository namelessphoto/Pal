#pragma once
#include "CoreMinimal.h"
#include "EPalPlayerEquipLantern.h"
#include "PalPlayerDataEquipLanternData.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerDataEquipLanternData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FName EquipLanternItemId;
    
    UPROPERTY(BlueprintReadWrite)
    EPalPlayerEquipLantern EquipType;
    
    PAL_API FPalPlayerDataEquipLanternData();
};

