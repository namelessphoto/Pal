#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalShopProductBase.h"
#include "PalShopProduct_TradeItem.generated.h"

UCLASS()
class PAL_API UPalShopProduct_TradeItem : public UPalShopProductBase {
    GENERATED_BODY()
public:
    UPalShopProduct_TradeItem();

    UFUNCTION(BlueprintPure)
    int32 GetStackNumPerProduct() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRequireItemNum(const FGuid& PlayerUId) const;
    
    UFUNCTION(BlueprintPure)
    void GetRequireItemName(FName& OutRequireItemName) const;
    
    UFUNCTION(BlueprintPure)
    void GetProductStaticItemID(FName& OutStaticID) const;
    
};

