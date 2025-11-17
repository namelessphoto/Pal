#pragma once
#include "CoreMinimal.h"
#include "PalFoliageInstanceId.h"
#include "PalFoliageGridInstanceMap.generated.h"

class UPalFoliageInstance;

USTRUCT(BlueprintType)
struct FPalFoliageGridInstanceMap {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FPalFoliageInstanceId, UPalFoliageInstance*> InstanceMap;
    
    PAL_API FPalFoliageGridInstanceMap();
};

