#ifndef UE4SS_SDK_WBP_PalChatUIControlOverlay_HPP
#define UE4SS_SDK_WBP_PalChatUIControlOverlay_HPP

class UWBP_PalChatUIControlOverlay_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UWBP_Ingame_Chat_C* ControllChatUI;                                         // 0x0438 (size: 0x8)
    FPalDataTableRowName_UIInputAction ChageCategoryChatActionName;                   // 0x0440 (size: 0x8)
    FPalDataTableRowName_UIInputAction CancelActionHandle_Default;                    // 0x0448 (size: 0x8)
    FPalDataTableRowName_UIInputAction CancelActionHandle_Escape;                     // 0x0450 (size: 0x8)
    FPalDataTableRowName_UIInputAction SendChatActionhandle;                          // 0x0458 (size: 0x8)
    FPalDataTableRowName_UIInputAction ResetFocusActionName;                          // 0x0460 (size: 0x8)

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
}; // Size: 0x468

#endif
