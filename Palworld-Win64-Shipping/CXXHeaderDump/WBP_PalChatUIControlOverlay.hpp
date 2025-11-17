#ifndef UE4SS_SDK_WBP_PalChatUIControlOverlay_HPP
#define UE4SS_SDK_WBP_PalChatUIControlOverlay_HPP

class UWBP_PalChatUIControlOverlay_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_Ingame_Chat_C* ControllChatUI;
    FPalDataTableRowName_UIInputAction ChageCategoryChatActionName;
    FPalDataTableRowName_UIInputAction CancelActionHandle_Default;
    FPalDataTableRowName_UIInputAction CancelActionHandle_Escape;
    FPalDataTableRowName_UIInputAction SendChatActionhandle;
    FPalDataTableRowName_UIInputAction ResetFocusActionName;

    void SendChat();
    void OnCancel_ForceClose();
    void OnCancel_ForPad();
    void OnCompletedChatInput();
    void ChangeChatCategory();
    class UWidget* BP_GetDesiredFocusTarget();
    void Destruct();
    void OnSetup();
    void OnClose();
    void OnResetFocus();
    void ExecuteUbergraph_WBP_PalChatUIControlOverlay(int32 EntryPoint);
};

#endif
