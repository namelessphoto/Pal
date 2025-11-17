#pragma once
#include "CoreMinimal.h"
#include "EPalOilrigType.h"
#include "PalDeadInfo.h"
#include "PalOilrigTreasureBoxSpawner.h"
#include "Templates/SubclassOf.h"
#include "PalOilrigGoalCrateSpawnerBase.generated.h"

class APalOilrigGoalCrateBase;

UCLASS()
class PAL_API APalOilrigGoalCrateSpawnerBase : public APalOilrigTreasureBoxSpawner {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<APalOilrigGoalCrateBase> CrateClass;
    
    UPROPERTY(Transient)
    APalOilrigGoalCrateBase* SpawnedCrate;
    
private:
    UPROPERTY(Transient)
    EPalOilrigType OilrigType;
    
public:
    APalOilrigGoalCrateSpawnerBase(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnDeadCombatHeli(FPalDeadInfo Info);
    
};

