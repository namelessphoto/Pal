#ifndef UE4SS_SDK_WBP_PalDialog_HPP
#define UE4SS_SDK_WBP_PalDialog_HPP

class UWBP_PalDialog_C : public UPalUIDialogBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_CommonPopupWindow_C* WBP_CommonPopupWindow;
    class UPalDialogParameterDialog* Parameter;
    FDataTableRowHandle RowName_Yes;
    FDataTableRowHandle RowName_No;
    FDataTableRowHandle YesMSGID;
    FDataTableRowHandle NoMSGID;
    FDataTableRowHandle DecideMSGID;
    FDataTableRowHandle CancelMSGID;
    FDataTableRowHandle OkMSGID;
    FPalDataTableRowName_UIInputAction ShortcutConfirmInputAction;

    void OnShortcutConfirm();
    class UWidget* BP_GetDesiredFocusTarget();
    void OnCancelAction();
    void SetupUI(EPalDialogType DialogType, FText Message);
    void OnSetup();
    void BndEvt__WBP_PalDialog_WBP_CommonPopupWindow_K2Node_ComponentBoundEvent_2_OnClickedLeftButton__DelegateSignature();
    void BndEvt__WBP_PalDialog_WBP_CommonPopupWindow_K2Node_ComponentBoundEvent_3_OnClickedRightButton__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_WBP_PalDialog(int32 EntryPoint);
};

#endif
