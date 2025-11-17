#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalItemShopProductType.h"
#include "PalItemShopCreateIntermediateDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalItemShopCreateIntermediateDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName GroupName;
    
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
    
    PAL_API FPalItemShopCreateIntermediateDataRow();
};

