#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectWorldDropItemInfo.h"
#include "PalMapObjectWorldDropItemInfoSet.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectWorldDropItemInfoSet {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalMapObjectWorldDropItemInfo> Infos;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalMapObjectWorldDropItemInfo> InsertReservedInfoSet;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 MaxCount;
    
    PAL_API FPalMapObjectWorldDropItemInfoSet();
};

