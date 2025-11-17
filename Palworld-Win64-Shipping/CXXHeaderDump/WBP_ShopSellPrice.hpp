#ifndef UE4SS_SDK_WBP_ShopSellPrice_HPP
#define UE4SS_SDK_WBP_ShopSellPrice_HPP

class UWBP_ShopSellPrice_C : public UPalUserWidget
{
    class UBP_PalTextBlock_C* Text_Price;

    void SetPrice(int32 Price, int32 AdditionalPrice);
};

#endif
