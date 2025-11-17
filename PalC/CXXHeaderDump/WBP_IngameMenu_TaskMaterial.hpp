#ifndef UE4SS_SDK_WBP_IngameMenu_TaskMaterial_HPP
#define UE4SS_SDK_WBP_IngameMenu_TaskMaterial_HPP

class UWBP_IngameMenu_TaskMaterial_C : public UUserWidget
{
    class UImage* Image;
    class UImage* Image_56;
    class UProgressBar* ProgressBar_34;
    class UBP_PalTextBlock_C* Text_ItemNum;
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon;
    class UCurveLinearColor* GaugeColor;
    bool Is Hide when Zero;

    void SetHIdeWhenZeroFlag(bool isHideWhenZero);
    void SetItemNum(int64 itemNum, int64 gaugeMaxBorderNum);
    void SetupTexture(FName StaticItemId);
};

#endif
