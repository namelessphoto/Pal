#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalUserWidgetOverlayUI.h"
#include "PalUIItemShopBase.generated.h"

class UPalItemSlot;
class UPalShopBase;

UCLASS(EditInlineNew)
class PAL_API UPalUIItemShopBase : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TSoftObjectPtr<UPalShopBase> SoftMyShop;
    
public:
    UPalUIItemShopBase();

protected:
    UFUNCTION(BlueprintPure)
    bool TrySteal(const FGuid& BuyProductID, const int32 StealNum);
    
    UFUNCTION(BlueprintCallable)
    bool TrySell(const TArray<UPalItemSlot*>& SellItemSlots);
    
    UFUNCTION(BlueprintPure)
    bool TryBuy(const FGuid& BuyProductID, const int32 BuyNum);
    
public:
    UFUNCTION(BlueprintPure)
    bool GetMyShop(UPalShopBase*& OutShop) const;
    
};

