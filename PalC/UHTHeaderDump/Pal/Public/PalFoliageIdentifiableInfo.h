#pragma once
#include "CoreMinimal.h"
#include "PalCellCoord.h"
#include "PalFoliageInstanceId.h"
#include "PalFoliageIdentifiableInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalFoliageIdentifiableInfo {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    FPalCellCoord CellCoord;
    
    UPROPERTY(VisibleInstanceOnly)
    FName ModelId;
    
    UPROPERTY(VisibleInstanceOnly)
    FPalFoliageInstanceId InstanceId;
    
    PAL_API FPalFoliageIdentifiableInfo();
};

