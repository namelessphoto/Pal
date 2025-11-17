#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectSpawnerTreasureBoxLotteryParameter.h"
#include "PalTreasureBoxLotteryParameter.generated.h"

USTRUCT()
struct FPalTreasureBoxLotteryParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FPalMapObjectSpawnerTreasureBoxLotteryParameter> MapObjectAndFieldLotteryNameWeightList;
    
    PAL_API FPalTreasureBoxLotteryParameter();
};

