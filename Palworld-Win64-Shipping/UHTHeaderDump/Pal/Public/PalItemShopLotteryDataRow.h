#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalItemShopLotteryDataStruct.h"
#include "PalItemShopLotteryDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalItemShopLotteryDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPalItemShopLotteryDataStruct> lotteryDataArray;
    
    PAL_API FPalItemShopLotteryDataRow();
};

