#ifndef UE4SS_SDK_WBP_Ingame_Chat_HPP
#define UE4SS_SDK_WBP_Ingame_Chat_HPP

class UWBP_Ingame_Chat_C : public UPalUIChat
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_OpenToClose;
    class UWidgetAnimation* Anm_SendToLog;
    class UVerticalBox* InputVisualBox;
    class UOverlay* Overlay_InputText;
    class UOverlay* Overlay_SendChatGuide;
    class UPalMultiLineEditableTextBox* PalMultiLineEditableTextBox_220;
    class USizeBox* SizeBox_ControlGuide;
    class USizeBox* SizeBox_RecievedText;
    class UBP_PalTextBlock_C* Text_ChatSendCategory;
    class UWBP_PalCommonScrollList_C* WBP_PalCommonScrollList;
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_1;
    FWBP_Ingame_Chat_COnCompleteInput OnCompleteInput;
    void OnCompleteInput();
    FPalUIActionBindData OpenInventoryActionHandle;
    EPalChatCategory SelectCategory;
    FTimerHandle ChatCloseTimer;
    FDataTableRowHandle ChatHintTextMsgID;
    bool IsShowChatInputUI;

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
};

#endif
