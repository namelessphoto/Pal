#ifndef UE4SS_SDK_WBP_Common_NumArrow_HPP
#define UE4SS_SDK_WBP_Common_NumArrow_HPP

class UWBP_Common_NumArrow_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_SelectArrow;
    class UImage* ArrowHover;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    class UWidgetSwitcher* WidgetSwitcher;
    FWBP_Common_NumArrow_COnClicked OnClicked;
    void OnClicked(int32 Progress);
    FName InputActionName;
    bool DoubleArrow;
    int32 ProgressValue;
    FTimerHandle PressedTimer;
    double ProgressMultiplier;
    int32 HoldCount;

    void AnmEvent_Trigger();
    void OnArrowClicked();
    void BndEvt__WBP_IngameMenu_WorkSpace_NumArrow_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_WorkSpace_NumArrow_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_WorkSpace_NumArrow_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void PreConstruct(bool IsDesignTime);
    void OnArrowPressed();
    void OnArrowReleased();
    void ArrowClicked_Progressive();
    void ExecuteUbergraph_WBP_Common_NumArrow(int32 EntryPoint);
    void OnClicked__DelegateSignature(int32 Progress);
};

#endif
