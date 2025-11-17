#ifndef UE4SS_SDK_WBP_Warning_HPP
#define UE4SS_SDK_WBP_Warning_HPP

class UWBP_Warning_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Close;
    class UWidgetAnimation* Anm_Open;
    class UImage* Base;
    class UImage* Base_Red;
    class UBP_PalTextBlock_C* BP_PalTextBlock_C;
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_122;
    class UImage* Image_260;
    class UImage* Line_L;
    class UImage* Line_R;
    class UImage* LineFlare_L;
    class UImage* LineFlare_R;
    class UImage* SubLine_L;
    class UImage* SubLine_R;
    class UImage* SubLineFlare_L;
    class UImage* SubLineFlare_R;

    void SetInfoText(FText Text);
    void SetTitleText(FText Text);
    void AnmEvent_Open(double DisplayTime);
    void AnmEvent_Close();
    void ExecuteUbergraph_WBP_Warning(int32 EntryPoint);
};

#endif
