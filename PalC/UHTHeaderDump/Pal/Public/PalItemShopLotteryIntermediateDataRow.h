#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalItemShopLotteryIntermediateDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalItemShopLotteryIntermediateDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ShopGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Weight;
    
    PAL_API FPalItemShopLotteryIntermediateDataRow();
};

