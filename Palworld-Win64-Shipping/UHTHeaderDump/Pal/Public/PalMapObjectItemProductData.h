#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalMapObjectItemProductData.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalMapObjectItemProductData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName Product_Id;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RequiredWorkAmount;
    
    UPROPERTY(EditDefaultsOnly)
    float AutoWorkAmountBySec;
    
    FPalMapObjectItemProductData();
};

