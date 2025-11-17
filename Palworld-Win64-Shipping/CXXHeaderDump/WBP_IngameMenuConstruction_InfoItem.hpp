#ifndef UE4SS_SDK_WBP_IngameMenuConstruction_InfoItem_HPP
#define UE4SS_SDK_WBP_IngameMenuConstruction_InfoItem_HPP

class UWBP_IngameMenuConstruction_InfoItem_C : public UUserWidget
{
    class UWidgetAnimation* Anim_ON;
    class UWidgetAnimation* Anm_OnToOff;
    class UBP_PalTextBlock_C* BP_PalTextBlock_C;
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_2;
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_71;
    class UImage* Icon;

    void Setup(FName ID, int32 NeedNum, int32 HasNum);
};

#endif
