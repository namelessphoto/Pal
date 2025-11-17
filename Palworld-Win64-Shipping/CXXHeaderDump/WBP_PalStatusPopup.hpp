#ifndef UE4SS_SDK_WBP_PalStatusPopup_HPP
#define UE4SS_SDK_WBP_PalStatusPopup_HPP

class UWBP_PalStatusPopup_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_MainMenu_bg_C* WBP_MainMenu_bg;
    class UWBP_Menu_btn_C* WBP_Menu_btn;
    class UWBP_PalStatus_C* WBP_PalStatus;
    class UBP_InGamePalStatusModel_C* StatusModel;
    FDataTableRowHandle BackGroundTextID;

    void OnCancelAction();
    class UWidget* BP_GetDesiredFocusTarget();
    void OnSetup();
    void OnInitialized();
    void Construct();
    void BndEvt__WBP_PalStatusPopup_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_PalStatusPopup(int32 EntryPoint);
};

#endif
