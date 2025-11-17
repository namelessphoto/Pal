#ifndef UE4SS_SDK_WBP_Paldex_DropItem_HPP
#define UE4SS_SDK_WBP_Paldex_DropItem_HPP

class UWBP_Paldex_DropItem_C : public UUserWidget
{
    class UImage* Base;
    class UImage* Dot_0;
    class UImage* Dot_1;
    class UImage* Dot_2;
    class UImage* Dot_3;
    class UBP_PalTextBlock_C* Text_ItemDesc;
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon;

    void Setup(FName ItemId);
};

#endif
