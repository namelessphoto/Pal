#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalMapObjectOperationResult.h"
#include "PalDataTableRowName_FieldLotteryNameData.h"
#include "PalDataTableRowName_MapObjectData.h"
#include "PalMapObjectSpawnerSingleBase.h"
#include "PalMapObjectSpawnerTreasureBoxLotteryParameter.h"
#include "PalMapObjectSpawnerTreasureBox.generated.h"

UCLASS()
class PAL_API APalMapObjectSpawnerTreasureBox : public APalMapObjectSpawnerSingleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FPalDataTableRowName_MapObjectData SpawnMapObjectId;
    
    UPROPERTY(EditAnywhere)
    FPalDataTableRowName_FieldLotteryNameData FieldLotteryName;
    
    UPROPERTY(EditAnywhere)
    bool bLotteryByMultiTreasureBoxLotteryParameters;
    
    UPROPERTY(EditAnywhere)
    TArray<FPalMapObjectSpawnerTreasureBoxLotteryParameter> MultiTreasureBoxLotteryParameters;
    
    UPROPERTY(EditAnywhere)
    float RespawnTimeMinutesObtained;
    
    UPROPERTY(EditAnywhere)
    bool bRespawnableMulti;
    
    UPROPERTY(EditAnywhere)
    bool bAllowOverlapForMapObject;
    
public:
    APalMapObjectSpawnerTreasureBox(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnFinishedSpawningMapObjectModel(FGuid InstanceId, const EPalMapObjectOperationResult Result);
    
};

