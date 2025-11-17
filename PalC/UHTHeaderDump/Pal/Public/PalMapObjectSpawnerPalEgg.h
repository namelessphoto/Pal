#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalMapObjectOperationResult.h"
#include "PalMapObjectPickupItemPalEggLotteryData.h"
#include "PalMapObjectSpawnerSingleBase.h"
#include "PalMapObjectSpawnerPalEgg.generated.h"

UCLASS()
class PAL_API APalMapObjectSpawnerPalEgg : public APalMapObjectSpawnerSingleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FPalMapObjectPickupItemPalEggLotteryData> SpawnPalEggLotteryDataArray;
    
    UPROPERTY(EditAnywhere)
    float RespawnTimeMinutesObtained;
    
    UPROPERTY(EditAnywhere)
    bool bRespawnableMulti;
    
public:
    APalMapObjectSpawnerPalEgg(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnFinishedSpawningMapObjectModel(FGuid InstanceId, const EPalMapObjectOperationResult Result);
    
};

