#ifndef UE4SS_SDK_WBP_PalCutsceneOverlay_HPP
#define UE4SS_SDK_WBP_PalCutsceneOverlay_HPP

class UWBP_PalCutsceneOverlay_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    FPalDataTableRowName_UIInputAction SkipInput;
    FTimerHandle HideTimerHandle;
    FPalUIActionBindData InputActionHandle;
    bool isDisplaying;

    class UWidget* BP_GetDesiredFocusTarget();
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void Hide();
    void Display();
    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void Skip();
    void Construct();
    void Destruct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_PalCutsceneOverlay(int32 EntryPoint);
};

#endif
