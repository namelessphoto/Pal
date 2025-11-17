#pragma once
#include "CoreMinimal.h"
#include "PalItemShopLotteryDataStruct.generated.h"

USTRUCT(BlueprintType)
struct FPalItemShopLotteryDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ShopGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Weight;
    
    PAL_API FPalItemShopLotteryDataStruct();
};

