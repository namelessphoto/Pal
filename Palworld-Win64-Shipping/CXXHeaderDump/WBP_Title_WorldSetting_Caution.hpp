#ifndef UE4SS_SDK_WBP_Title_WorldSetting_Caution_HPP
#define UE4SS_SDK_WBP_Title_WorldSetting_Caution_HPP

class UWBP_Title_WorldSetting_Caution_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* Horizontal_BaseCampMaxNum;
    class UHorizontalBox* Horizontal_BaseCampWorkerMaxNum;
    class UHorizontalBox* Horizontal_MaxBuildingNum;
    class UImage* Image_2;
    class UImage* Image_3;
    class UImage* Image_4;
    class UImage* Image_5;
    class UImage* Image_6;
    class UImage* Image_96;
    class UBP_PalRichTextBlock_C* RichText_Title;
    class UBP_PalTextBlock_C* Text_Bottom;
    class UWBP_CommonButton_C* WBP_CommonButton_NO;
    class UWBP_CommonButton_C* WBP_CommonButton_YES;
    class UWBP_PalCommonWindow_C* WBP_PalCommonWindow;

    class UWidget* BP_GetDesiredFocusTarget();
    void Setup();
    void BndEvt__WBP_Title_WorldSetting_Caution_WBP_CommonButton_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__WBP_Title_WorldSetting_Caution_WBP_CommonButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void OnSetup();
    void ExecuteUbergraph_WBP_Title_WorldSetting_Caution(int32 EntryPoint);
};

#endif
