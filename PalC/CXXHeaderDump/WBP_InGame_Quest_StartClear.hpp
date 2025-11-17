#ifndef UE4SS_SDK_WBP_InGame_Quest_StartClear_HPP
#define UE4SS_SDK_WBP_InGame_Quest_StartClear_HPP

class UWBP_InGame_Quest_StartClear_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Out;                                                  // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Complete;                                             // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_Start;                                                // 0x0290 (size: 0x8)
    class UImage* BaseLineC;                                                          // 0x0298 (size: 0x8)
    class UImage* BaseLineC_Bloom;                                                    // 0x02A0 (size: 0x8)
    class UImage* BaseLineL;                                                          // 0x02A8 (size: 0x8)
    class UImage* BaseLineL_Bloom;                                                    // 0x02B0 (size: 0x8)
    class UImage* BaseLineR;                                                          // 0x02B8 (size: 0x8)
    class UImage* BaseLineR_Bloom;                                                    // 0x02C0 (size: 0x8)
    class UImage* Image_190;                                                          // 0x02C8 (size: 0x8)
    class UImage* Image_Flash_Add;                                                    // 0x02D0 (size: 0x8)
    class UImage* Image_Prism;                                                        // 0x02D8 (size: 0x8)
    class UImage* Image_Prism_1;                                                      // 0x02E0 (size: 0x8)
    class UImage* Image_Prism_2;                                                      // 0x02E8 (size: 0x8)
    class UImage* Image_Prism_Add_Complete;                                           // 0x02F0 (size: 0x8)
    class UImage* Image_Prism_Add_Start;                                              // 0x02F8 (size: 0x8)
    class UOverlay* Overlay_KeyGuide;                                                 // 0x0300 (size: 0x8)
    class UBP_PalRichTextBlock_C* RichText_Title;                                     // 0x0308 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Quest_Complete;                                    // 0x0310 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Quest_New;                                         // 0x0318 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x0320 (size: 0x8)
    TArray<FF_PalQuestStartClearNotifyQueData> NotifyQue;                             // 0x0328 (size: 0x10)
    double WaitTime_StartToOut;                                                       // 0x0338 (size: 0x8)
    double WaitTime_ClearToOut;                                                       // 0x0340 (size: 0x8)
    double WaitTIme_NextNotify;                                                       // 0x0348 (size: 0x8)
    bool bPlayingAnimation;                                                           // 0x0350 (size: 0x1)
    FTimerHandle TimerHandle_StartToOut;                                              // 0x0358 (size: 0x8)
    FTimerHandle TimerHandle_WaitNextNotify;                                          // 0x0360 (size: 0x8)
    FName CurrentQuestId;                                                             // 0x0368 (size: 0x8)
    FWBP_InGame_Quest_StartClear_COnStartQuestNotify OnStartQuestNotify;              // 0x0370 (size: 0x10)
    void OnStartQuestNotify(FName QuestId);
    bool CompleteSound;                                                               // 0x0380 (size: 0x1)

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
}; // Size: 0x381

#endif
