#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_MapObjectData.h"
#include "PalMapObjectSpawnerSimpleLotteryParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectSpawnerSimpleLotteryParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FPalDataTableRowName_MapObjectData SpawnMapObjectId;
    
    UPROPERTY(EditAnywhere)
    int32 Weight;
    
    PAL_API FPalMapObjectSpawnerSimpleLotteryParameter();
};

