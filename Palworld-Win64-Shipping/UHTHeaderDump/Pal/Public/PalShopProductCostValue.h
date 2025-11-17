#pragma once
#include "CoreMinimal.h"
#include "EPalShopProductCostType.h"
#include "FixedPoint64.h"
#include "PalShopProductCostValue.generated.h"

USTRUCT()
struct FPalShopProductCostValue {
    GENERATED_BODY()
public:
    UPROPERTY()
    EPalShopProductCostType CostType;
    
    UPROPERTY()
    FFixedPoint64 CostValue;
    
    PAL_API FPalShopProductCostValue();
};

