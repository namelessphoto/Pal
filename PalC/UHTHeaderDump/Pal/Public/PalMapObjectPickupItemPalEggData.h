#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalMapObjectPickupItemPalEggData.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectPickupItemPalEggData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPalDataTableRowName_PalMonsterData PalMonsterId;
    
    PAL_API FPalMapObjectPickupItemPalEggData();
};

