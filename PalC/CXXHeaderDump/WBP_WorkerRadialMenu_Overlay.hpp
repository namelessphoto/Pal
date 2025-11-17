#ifndef UE4SS_SDK_WBP_WorkerRadialMenu_Overlay_HPP
#define UE4SS_SDK_WBP_WorkerRadialMenu_Overlay_HPP

class UWBP_WorkerRadialMenu_Overlay_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_WorkerRadialMenu_C* WBP_WorkerRadialMenu;
    FName disableCrouchFlagName;
    FPalDataTableRowName_UIInputAction CloseShortcutINputAction;
    FPalDataTableRowName_UIInputAction DecideMenuAction;

    void Construct();
    void OnClosed();
    void OnInitialized();
    void OnSelectedEvent(EPalWorkerRadialMenuResult Result);
    void OnAnyUIPushed(const FGuid& pushedWidgetID);
    void Destruct();
    void CancelEvent();
    void OnSetup();
    void ExecuteUbergraph_WBP_WorkerRadialMenu_Overlay(int32 EntryPoint);
};

#endif
