#ifndef UE4SS_SDK_WBP_LvNum_HPP
#define UE4SS_SDK_WBP_LvNum_HPP

class UWBP_LvNum_C : public UUserWidget
{
    class UWidgetAnimation* Anm_shadow;
    class UWidgetAnimation* Anm_Normal;
    class UBP_PalTextBlock_C* BP_PalTextBlock_C;
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_1;
    double alphaWhenTensPlaceIsZero;

    void SetLevel(int32 Level);
};

#endif
