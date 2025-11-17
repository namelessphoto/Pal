#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalItemShopSettingDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalItemShopSettingDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName CurrencyItemID;
    
    PAL_API FPalItemShopSettingDataRow();
};

