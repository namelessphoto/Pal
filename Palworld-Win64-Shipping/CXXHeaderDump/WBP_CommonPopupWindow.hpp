#ifndef UE4SS_SDK_WBP_CommonPopupWindow_HPP
#define UE4SS_SDK_WBP_CommonPopupWindow_HPP

class UWBP_CommonPopupWindow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Close;
    class UWidgetAnimation* Anm_Open;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_Message;
    class UScrollBox* ScrollBox_Text;
    class USizeBox* SizeBox_RButton;
    class UWBP_CommonButton_C* WBP_CommonButton_L;
    class UWBP_CommonButton_C* WBP_CommonButton_R;
    class UWBP_PalCommonWindow_C* WBP_PalCommonWindow;
    FDataTableRowHandle LeftButtonMsgID;
    FDataTableRowHandle RightButtonMsgID;
    FWBP_CommonPopupWindow_COnClickedLeftButton OnClickedLeftButton;
    void OnClickedLeftButton();
    FWBP_CommonPopupWindow_COnClickedRightButton OnClickedRightButton;
    void OnClickedRightButton();
    double RightStickAxisY;
    double ScrollPerSecond;

    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    void SetOneButton(bool IsOneButton);
    void GetRightButton(class UCommonButtonBase*& Button);
    void GetLeftButton(class UCommonButtonBase*& rightButton);
    void OverrideRightButtonText(FText Text);
    void OverrideLeftButtonText(FText Text);
    void SetMainText(FText Text);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void BndEvt__WBP_CommonPopupWindow_WBP_CommonButton_L_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__WBP_CommonPopupWindow_WBP_CommonButton_R_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__WBP_CommonPopupWindow_WBP_CommonButton_L_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature();
    void BndEvt__WBP_CommonPopupWindow_WBP_CommonButton_R_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature();
    void ExecuteUbergraph_WBP_CommonPopupWindow(int32 EntryPoint);
    void OnClickedRightButton__DelegateSignature();
    void OnClickedLeftButton__DelegateSignature();
};

#endif
