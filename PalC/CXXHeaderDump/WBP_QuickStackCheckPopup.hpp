#ifndef UE4SS_SDK_WBP_QuickStackCheckPopup_HPP
#define UE4SS_SDK_WBP_QuickStackCheckPopup_HPP

class UWBP_QuickStackCheckPopup_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UWidgetAnimation* Anm_Close;                                                // 0x0438 (size: 0x8)
    class UWidgetAnimation* Anm_Open;                                                 // 0x0440 (size: 0x8)
    class UScrollBox* ScrollBox;                                                      // 0x0448 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton_NO;                                   // 0x0450 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton_YES;                                  // 0x0458 (size: 0x8)
    class UWBP_PalCommonWindow_C* WBP_PalCommonWindow;                                // 0x0460 (size: 0x8)
    class UWrapBox* WrapBox_ItemSlot;                                                 // 0x0468 (size: 0x8)
    FWBP_QuickStackCheckPopup_COnClickedLeftButton OnClickedLeftButton;               // 0x0470 (size: 0x10)
    void OnClickedLeftButton();
    FWBP_QuickStackCheckPopup_COnClickedRightButton OnClickedRightButton;             // 0x0480 (size: 0x10)
    void OnClickedRightButton();
    class UBP_HUDDispatchParameter_QuickStackConfirm_C* HUDDispatchParam;             // 0x0490 (size: 0x8)

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
}; // Size: 0x498

#endif
