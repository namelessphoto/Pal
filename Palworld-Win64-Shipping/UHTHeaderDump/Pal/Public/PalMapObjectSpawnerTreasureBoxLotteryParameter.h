#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_FieldLotteryNameData.h"
#include "PalDataTableRowName_MapObjectData.h"
#include "PalMapObjectSpawnerTreasureBoxLotteryParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectSpawnerTreasureBoxLotteryParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FPalDataTableRowName_MapObjectData SpawnMapObjectId;
    
    UPROPERTY(EditAnywhere)
    FPalDataTableRowName_FieldLotteryNameData FieldLotteryName;
    
    UPROPERTY(EditAnywhere)
    int32 Weight;
    
    PAL_API FPalMapObjectSpawnerTreasureBoxLotteryParameter();
};

