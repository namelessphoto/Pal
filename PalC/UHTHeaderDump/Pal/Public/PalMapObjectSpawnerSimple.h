#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalMapObjectOperationResult.h"
#include "PalDataTableRowName_MapObjectData.h"
#include "PalMapObjectSpawnerSimpleLotteryParameter.h"
#include "PalMapObjectSpawnerSingleBase.h"
#include "PalMapObjectSpawnerSimple.generated.h"

UCLASS()
class PAL_API APalMapObjectSpawnerSimple : public APalMapObjectSpawnerSingleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FPalDataTableRowName_MapObjectData MapObjectId;
    
    UPROPERTY(EditAnywhere)
    bool bLotteryByMultiLotteryParameters;
    
    UPROPERTY(EditAnywhere)
    TArray<FPalMapObjectSpawnerSimpleLotteryParameter> MultiLotteryParameters;
    
    UPROPERTY(EditAnywhere)
    bool bAllowOverlapForMapObject;
    
    UPROPERTY(EditAnywhere)
    bool bRespawnableMulti;
    
public:
    APalMapObjectSpawnerSimple(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnFinishedSpawningMapObjectModel(FGuid InstanceId, const EPalMapObjectOperationResult Result);
    
};

