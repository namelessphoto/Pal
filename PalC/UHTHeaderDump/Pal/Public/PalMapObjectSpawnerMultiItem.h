#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_FieldLotteryNameData.h"
#include "PalMapObjectSpawnerBase.h"
#include "PalMapObjectSpawnerMultiItem.generated.h"

UCLASS()
class PAL_API APalMapObjectSpawnerMultiItem : public APalMapObjectSpawnerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FPalDataTableRowName_FieldLotteryNameData FieldLotteryName;
    
    UPROPERTY(EditAnywhere)
    float RespawnTimeMinutesObtained;
    
    UPROPERTY(EditAnywhere)
    bool bRespawnableMulti;
    
public:
    APalMapObjectSpawnerMultiItem(const FObjectInitializer& ObjectInitializer);

};

