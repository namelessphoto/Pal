#pragma once
#include "CoreMinimal.h"
#include "PalLevelObjectActor.h"
#include "PalTreasureMapPoint.generated.h"

class APalTreasureMapInteractivePoint;

UCLASS()
class PAL_API APalTreasureMapPoint : public APalLevelObjectActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    APalTreasureMapInteractivePoint* InteractivePoint;
    
public:
    APalTreasureMapPoint(const FObjectInitializer& ObjectInitializer);

};

