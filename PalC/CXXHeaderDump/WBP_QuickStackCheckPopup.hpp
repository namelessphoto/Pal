#ifndef UE4SS_SDK_WBP_QuickStackCheckPopup_HPP
#define UE4SS_SDK_WBP_QuickStackCheckPopup_HPP

class UWBP_QuickStackCheckPopup_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Close;
    class UWidgetAnimation* Anm_Open;
    class UScrollBox* ScrollBox;
    class UWBP_CommonButton_C* WBP_CommonButton_NO;
    class UWBP_CommonButton_C* WBP_CommonButton_YES;
    class UWBP_PalCommonWindow_C* WBP_PalCommonWindow;
    class UWrapBox* WrapBox_ItemSlot;
    FWBP_QuickStackCheckPopup_COnClickedLeftButton OnClickedLeftButton;
    void OnClickedLeftButton();
    FWBP_QuickStackCheckPopup_COnClickedRightButton OnClickedRightButton;
    void OnClickedRightButton();
    class UBP_HUDDispatchParameter_QuickStackConfirm_C* HUDDispatchParam;

    class UWidget* BP_GetDesiredFocusTarget();
    void Setup();
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    void GetRightButton(class UCommonButtonBase*& Button);
    void GetLeftButton(class UCommonButtonBase*& rightButton);
    void OnInitialized();
    void BndEvt__WBP_CommonPopupWindow_WBP_CommonButton_L_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__WBP_CommonPopupWindow_WBP_CommonButton_R_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void OnSetup();
    void ExecuteUbergraph_WBP_QuickStackCheckPopup(int32 EntryPoint);
    void OnClickedRightButton__DelegateSignature();
    void OnClickedLeftButton__DelegateSignature();
};

#endif
