#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectItemContainerSlotAttribute.h"
#include "PalMapObjectItemContainerModuleSlotIndexes.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectItemContainerModuleSlotIndexes {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    EPalMapObjectItemContainerSlotAttribute Attribute;
    
    UPROPERTY(VisibleInstanceOnly)
    TArray<int32> Indexes;
    
    PAL_API FPalMapObjectItemContainerModuleSlotIndexes();
};

