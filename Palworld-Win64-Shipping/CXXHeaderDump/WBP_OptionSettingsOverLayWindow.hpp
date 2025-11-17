#ifndef UE4SS_SDK_WBP_OptionSettingsOverLayWindow_HPP
#define UE4SS_SDK_WBP_OptionSettingsOverLayWindow_HPP

class UWBP_OptionSettingsOverLayWindow_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Open;
    class UBP_PalTextBlock_C* BP_PalTextBlock_Command;
    class UBP_PalTextBlock_C* BP_PalTextBlock_Title;
    FDataTableRowHandle titleMsgId;
    FDataTableRowHandle TitleMsgIdPS5;
    FDataTableRowHandle CommandMsgId;
    FDataTableRowHandle CommandMsgIdPS5;
    FDataTableRowHandle ErrorMsgId;
    FDataTableRowHandle ErrorMsgIdPS5;
    FTimerHandle ResetTextTimer;
    class UBP_HUDDispatchParameter_KeyConfig_C* KeyConfigParam;
    TArray<FName> FilterActionKeys;
    TMap<class FPalKeyAction, class FName> ReverseAxisMap;
    FName BackActionName;

    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnKeySetting(FKey NewKey);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    class UWidget* BP_GetDesiredFocusTarget();
    void OnSetup();
    void ResetCommandText();
    void SetPadKeyA();
    void ExecuteUbergraph_WBP_OptionSettingsOverLayWindow(int32 EntryPoint);
};

#endif
