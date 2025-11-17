#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalUserWidgetOverlayUI.h"
#include "PalUIPalShopBase.generated.h"

class UPalIndividualCharacterContainer;
class UPalIndividualCharacterSlot;
class UPalShopBase;

UCLASS(EditInlineNew)
class PAL_API UPalUIPalShopBase : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TSoftObjectPtr<UPalShopBase> SoftMyShop;
    
public:
    UPalUIPalShopBase();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateLocalLostPalProduct();
    
    UFUNCTION(BlueprintPure)
    bool TrySell(const TArray<UPalIndividualCharacterSlot*> SellPalSlots);
    
    UFUNCTION(BlueprintPure)
    bool TryBuy(const FGuid& BuyProductID);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestCollectLocalLostPalData();
    
protected:
    UFUNCTION(BlueprintPure)
    bool GetPalStorageSlots(UPalIndividualCharacterContainer*& OutContainer);
    
public:
    UFUNCTION(BlueprintPure)
    bool GetMyShop(UPalShopBase*& OutShop) const;
    
};

