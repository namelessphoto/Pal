#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PalIndividualCharacterSaveParameter.h"
#include "PalItemShopCreateDataRow.h"
#include "PalItemSlotIdAndNum.h"
#include "PalPalShopCreateDataRow.h"
#include "PalStaticItemIdAndNum.h"
#include "PalShopUtility.generated.h"

class APalPlayerCharacter;
class UObject;

UCLASS(BlueprintType)
class PAL_API UPalShopUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalShopUtility();

    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void LotteryItemShop(const UObject* WorldContextObject, const FName& ItemShopLotteryName, FName& OutShopName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSkinShop(const UObject* WorldContextObject, const FName& ShopName);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool GetPalShopCreateData(const UObject* WorldContextObject, const FName& ShopName, FPalPalShopCreateDataRow& OutData);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool GetItemShopCreateData(const UObject* WorldContextObject, const FName& ShopName, FPalItemShopCreateDataRow& OutData);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanSellFromStaticItemIDAndNum(const UObject* WorldContextObject, const FPalStaticItemIdAndNum& StaticItemIDAndNum, float SellRate);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanSellFromSlotIdAndNum(const UObject* WorldContextObject, const FPalItemSlotIdAndNum& SlotIdAndNum, float SellRate);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float CalcPalSellPriceBuffRate(const UObject* WorldContextObject, const APalPlayerCharacter* OwnerCharacter, FName MoneyItemData);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 CalcPalSellPrice(const UObject* WorldContextObject, const FPalIndividualCharacterSaveParameter& SaveParameter, float SellRate);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float CalcPalBuyPriceBuffRate(const UObject* WorldContextObject, const APalPlayerCharacter* OwnerCharacter, FName MoneyItemData);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float CalcItemSellPriceBuffRate(const UObject* WorldContextObject, const APalPlayerCharacter* OwnerCharacter, FName MoneyItemData);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 CalcItemSellPrice(const UObject* WorldContextObject, const FPalStaticItemIdAndNum& StaticItemIDAndNum, float SellRate);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float CalcItemBuyPriceBuffRate(const UObject* WorldContextObject, const APalPlayerCharacter* OwnerCharacter, FName MoneyItemData);
    
};

