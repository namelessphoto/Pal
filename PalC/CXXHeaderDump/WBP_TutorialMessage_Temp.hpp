#ifndef UE4SS_SDK_WBP_TutorialMessage_Temp_HPP
#define UE4SS_SDK_WBP_TutorialMessage_Temp_HPP

class UWBP_TutorialMessage_Temp_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Message_Out;
    class UWidgetAnimation* Anm_Message_In;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_TutorialMsg;
    class UCanvasPanel* CanvasPanel_Message;
    TArray<FDataTableRowHandle> TutorialMessages;
    FTimerHandle MessageTimer;
    FDataTableRowHandle CurrentMsg;
    FTimerHandle Interruputer;
    bool Skipable;

    void CreateGuideText(FText InText, FText& OutText);
    void On Input Method Changed(ECommonInputType InputType);
    void Setup();
    void Finished_D8B6F6C240191DC6DD60BAADB6596025();
    void Finished_5267E3844738D65023A58CBEE7C11FAC();
    void QueueTutorial(FDataTableRowHandle TutorialMsgID);
    void PresentMessage();
    void SkipToNextMessage();
    void ExecuteUbergraph_WBP_TutorialMessage_Temp(int32 EntryPoint);
};

#endif
