#ifndef UE4SS_SDK_WBP_Ingame_Chat_HPP
#define UE4SS_SDK_WBP_Ingame_Chat_HPP

class UWBP_Ingame_Chat_C : public UPalUIChat
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0428 (size: 0x8)
    class UWidgetAnimation* Anm_OpenToClose;                                          // 0x0430 (size: 0x8)
    class UWidgetAnimation* Anm_SendToLog;                                            // 0x0438 (size: 0x8)
    class UVerticalBox* InputVisualBox;                                               // 0x0440 (size: 0x8)
    class UOverlay* Overlay_InputText;                                                // 0x0448 (size: 0x8)
    class UOverlay* Overlay_SendChatGuide;                                            // 0x0450 (size: 0x8)
    class UPalMultiLineEditableTextBox* PalMultiLineEditableTextBox_220;              // 0x0458 (size: 0x8)
    class USizeBox* SizeBox_ControlGuide;                                             // 0x0460 (size: 0x8)
    class USizeBox* SizeBox_RecievedText;                                             // 0x0468 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ChatSendCategory;                                  // 0x0470 (size: 0x8)
    class UWBP_PalCommonScrollList_C* WBP_PalCommonScrollList;                        // 0x0478 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x0480 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_1;                              // 0x0488 (size: 0x8)
    FWBP_Ingame_Chat_COnCompleteInput OnCompleteInput;                                // 0x0490 (size: 0x10)
    void OnCompleteInput();
    FPalUIActionBindData OpenInventoryActionHandle;                                   // 0x04A0 (size: 0x4)
    EPalChatCategory SelectCategory;                                                  // 0x04A4 (size: 0x1)
    FTimerHandle ChatCloseTimer;                                                      // 0x04A8 (size: 0x8)
    FDataTableRowHandle ChatHintTextMsgID;                                            // 0x04B0 (size: 0x10)
    bool IsShowChatInputUI;                                                           // 0x04C0 (size: 0x1)

    void ResetFocus();
    void LoadChatMessages();
    void AddChatMessage(const FPalChatMessage& Message);
    void OnChangedInputType(ECommonInputType bNewInputType);
    void OnTextCommittedInternal(FText InText, TEnumAsByte<ETextCommit> InTextCommit);
    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void CanChat(bool& Result);
    void ChangeCategory();
    void On Recived Chat(const FPalChatMessage& Message);
    void Hide Chat Log UI();
    void Construct();
    void ShowChatInputUI();
    void HideChatInputUI();
    void OpenChatUI();
    void Destruct();
    void BndEvt__WBP_Ingame_Chat_PalMultiLineEditableTextBox_220_K2Node_ComponentBoundEvent_5_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_Ingame_Chat(int32 EntryPoint);
    void OnCompleteInput__DelegateSignature();
}; // Size: 0x4C1

#endif
