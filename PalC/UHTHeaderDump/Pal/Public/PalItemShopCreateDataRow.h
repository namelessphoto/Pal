#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalItemShopCreateDataStruct.h"
#include "PalItemShopCreateDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalItemShopCreateDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPalItemShopCreateDataStruct> productDataArray;
    
    PAL_API FPalItemShopCreateDataRow();
};

