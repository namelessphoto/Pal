#ifndef UE4SS_SDK_WBP_Fishing_SelectBait_Item_HPP
#define UE4SS_SDK_WBP_Fishing_SelectBait_Item_HPP

class UWBP_Fishing_SelectBait_Item_C : public UUserWidget
{
    class UWidgetAnimation* Anm_NormalToFocus;
    class UImage* Image_Base;
    class UImage* Image_Base_Focus;
    class UImage* Image_Frame;
    class UImage* Image_Frame_Focus;
    class UBP_PalTextBlock_C* Text_ItemNum;
    class UWBP_PalInGameMenuItemIcon_C* WBP_PalInGameMenuItemIcon;
    FName Static Item Id;

    void UnSelect();
    void Select();
    void Setup(FPalStaticItemIdAndNum ItemInfo);
};

#endif
