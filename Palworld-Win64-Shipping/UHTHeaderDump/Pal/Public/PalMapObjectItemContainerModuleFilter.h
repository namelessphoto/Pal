#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectItemContainerModuleFilter.generated.h"

USTRUCT()
struct FPalMapObjectItemContainerModuleFilter {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    TArray<FName> FilterOffList;
    
    PAL_API FPalMapObjectItemContainerModuleFilter();
};

