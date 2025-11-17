#pragma once
#include "CoreMinimal.h"
#include "PalShopProduct_TradeItem.h"
#include "PalShopProduct_OnlyBuyOneItem.generated.h"

UCLASS()
class PAL_API UPalShopProduct_OnlyBuyOneItem : public UPalShopProduct_TradeItem {
    GENERATED_BODY()
public:
    UPalShopProduct_OnlyBuyOneItem();

};

