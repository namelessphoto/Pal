#pragma once
#include "CoreMinimal.h"
#include "EPalItemShopProductType.h"
#include "PalItemShopCreateDataStruct.generated.h"

USTRUCT(BlueprintType)
struct FPalItemShopCreateDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName StaticItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPalItemShopProductType ProductType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 OverridePrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ProductNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Stock;
    
    PAL_API FPalItemShopCreateDataStruct();
};

