#ifndef UE4SS_SDK_WBP_IngameMenu_WorkSpace_StartButton_HPP
#define UE4SS_SDK_WBP_IngameMenu_WorkSpace_StartButton_HPP

class UWBP_IngameMenu_WorkSpace_StartButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_NormalToFocusToPush;
    class UWidgetAnimation* Anm_DisableToEnable;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    bool CurrentEnable;
    FWBP_IngameMenu_WorkSpace_StartButton_COnClicked OnClicked;
    void OnClicked();

    void SetEnable(bool Enable);
    void BndEvt__WBP_IngameMenu_WorkSpace_StartButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_IngameMenu_WorkSpace_StartButton(int32 EntryPoint);
    void OnClicked__DelegateSignature();
};

#endif
