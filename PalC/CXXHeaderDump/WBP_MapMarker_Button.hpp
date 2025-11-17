#ifndef UE4SS_SDK_WBP_MapMarker_Button_HPP
#define UE4SS_SDK_WBP_MapMarker_Button_HPP

class UWBP_MapMarker_Button_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_EnableToDisable;
    class UWidgetAnimation* Anm_NormalToFocus;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    FWBP_MapMarker_Button_COnClicked OnClicked;
    void OnClicked();

    void BndEvt__WBP_MapMarker_Button_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MapMarker_Button_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MapMarker_Button_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_MapMarker_Button(int32 EntryPoint);
    void OnClicked__DelegateSignature();
};

#endif
