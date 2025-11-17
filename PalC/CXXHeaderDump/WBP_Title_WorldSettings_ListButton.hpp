#ifndef UE4SS_SDK_WBP_Title_WorldSettings_ListButton_HPP
#define UE4SS_SDK_WBP_Title_WorldSettings_ListButton_HPP

class UWBP_Title_WorldSettings_ListButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_NormalToFocus;
    class UBP_PalTextBlock_C* Text_Main;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    FWBP_Title_WorldSettings_ListButton_COnClicked OnClicked;
    void OnClicked();

    void GetButtonText(FText& ButtonText);
    void Click();
    void SetButtonText(FText newText);
    void BndEvt__WBP_Title_WorldSettings_ListButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Title_WorldSettings_ListButton(int32 EntryPoint);
    void OnClicked__DelegateSignature();
};

#endif
