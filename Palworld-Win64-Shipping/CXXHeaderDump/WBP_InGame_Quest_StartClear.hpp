#ifndef UE4SS_SDK_WBP_InGame_Quest_StartClear_HPP
#define UE4SS_SDK_WBP_InGame_Quest_StartClear_HPP

class UWBP_InGame_Quest_StartClear_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Out;
    class UWidgetAnimation* Anm_Complete;
    class UWidgetAnimation* Anm_Start;
    class UImage* BaseLineC;
    class UImage* BaseLineC_Bloom;
    class UImage* BaseLineL;
    class UImage* BaseLineL_Bloom;
    class UImage* BaseLineR;
    class UImage* BaseLineR_Bloom;
    class UImage* Image_190;
    class UImage* Image_Flash_Add;
    class UImage* Image_Prism;
    class UImage* Image_Prism_1;
    class UImage* Image_Prism_2;
    class UImage* Image_Prism_Add_Complete;
    class UImage* Image_Prism_Add_Start;
    class UOverlay* Overlay_KeyGuide;
    class UBP_PalRichTextBlock_C* RichText_Title;
    class UBP_PalTextBlock_C* Text_Quest_Complete;
    class UBP_PalTextBlock_C* Text_Quest_New;
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;
    TArray<FF_PalQuestStartClearNotifyQueData> NotifyQue;
    double WaitTime_StartToOut;
    double WaitTime_ClearToOut;
    double WaitTIme_NextNotify;
    bool bPlayingAnimation;
    FTimerHandle TimerHandle_StartToOut;
    FTimerHandle TimerHandle_WaitNextNotify;
    FName CurrentQuestId;
    FWBP_InGame_Quest_StartClear_COnStartQuestNotify OnStartQuestNotify;
    void OnStartQuestNotify(FName QuestId);
    bool CompleteSound;

    void GetStartQuestNotifyTime(double& NewParam);
    void OnTImerEvent_EndOutAnimation();
    void OnTimerEvent_EndStartAnimation();
    void TryNextNotify();
    void CompleteQuest(FName QuestId);
    void StartQuest(FName QuestId);
    void AnmEvent_StartQuest();
    void AnmEvent_Out();
    void AnmEvent_CompleteQuest();
    void SequenceEvent();
    void Destruct();
    void Construct();
    void ExecuteUbergraph_WBP_InGame_Quest_StartClear(int32 EntryPoint);
    void OnStartQuestNotify__DelegateSignature(FName QuestId);
};

#endif
