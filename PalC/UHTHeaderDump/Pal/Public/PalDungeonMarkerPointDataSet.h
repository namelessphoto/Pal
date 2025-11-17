#pragma once
#include "CoreMinimal.h"
#include "PalDungeonMarkerPointData.h"
#include "PalDungeonMarkerPointDataSet.generated.h"

USTRUCT()
struct FPalDungeonMarkerPointDataSet {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalDungeonMarkerPointData> MarkerPoints;
    
    PAL_API FPalDungeonMarkerPointDataSet();
};

