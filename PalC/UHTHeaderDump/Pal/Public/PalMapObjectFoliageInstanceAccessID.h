#pragma once
#include "CoreMinimal.h"
#include "PalFoliageInstanceId.h"
#include "PalMapObjectFoliageInstanceAccessID.generated.h"

USTRUCT()
struct FPalMapObjectFoliageInstanceAccessID {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FName ModelId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalFoliageInstanceId InstanceId;
    
    PAL_API FPalMapObjectFoliageInstanceAccessID();
};

