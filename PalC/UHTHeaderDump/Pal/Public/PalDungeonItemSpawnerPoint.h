#pragma once
#include "CoreMinimal.h"
#include "EPalDungeonItemSpawnerType.h"
#include "PalLevelObjectActor.h"
#include "PalDungeonItemSpawnerPoint.generated.h"

class APalMapObjectSpawnerTreasureBox;

UCLASS()
class PAL_API APalDungeonItemSpawnerPoint : public APalLevelObjectActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    EPalDungeonItemSpawnerType ItemSpawnerType;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<APalMapObjectSpawnerTreasureBox> TreasureBoxSpawnerSoftClass;
    
public:
    APalDungeonItemSpawnerPoint(const FObjectInitializer& ObjectInitializer);

};

