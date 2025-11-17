#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_DungeonSpawnAreaData.h"
#include "PalDungeonMarkerPointSpawnParameter.h"
#include "PalLevelObjectActor.h"
#include "Templates/SubclassOf.h"
#include "PalDungeonPointMarker.generated.h"

class APalDungeonEntrance;

UCLASS()
class PAL_API APalDungeonPointMarker : public APalLevelObjectActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FPalDataTableRowName_DungeonSpawnAreaData> SpawnAreaIds;
    
    UPROPERTY(EditAnywhere)
    bool bEditSpawnParameter;
    
    UPROPERTY(EditAnywhere)
    FPalDungeonMarkerPointSpawnParameter EditSpawnParameter;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<APalDungeonEntrance> DungeonEntranceClass;
    
public:
    APalDungeonPointMarker(const FObjectInitializer& ObjectInitializer);

};

