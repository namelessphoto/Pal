#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalDataTableRowName_MapObjectData.h"
#include "PalMapObjectDropTreasureLotteryParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectDropTreasureLotteryParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FPalDataTableRowName_MapObjectData SpawnMapObjectId;
    
    UPROPERTY(EditAnywhere)
    FPalDataTableRowName_ItemData StaticItemId;
    
    UPROPERTY(EditAnywhere)
    int32 Weight;
    
    UPROPERTY(EditAnywhere)
    int32 Num;
    
    PAL_API FPalMapObjectDropTreasureLotteryParameter();
};

