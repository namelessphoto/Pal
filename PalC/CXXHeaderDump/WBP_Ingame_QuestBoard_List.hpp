#ifndef UE4SS_SDK_WBP_Ingame_QuestBoard_List_HPP
#define UE4SS_SDK_WBP_Ingame_QuestBoard_List_HPP

class UWBP_Ingame_QuestBoard_List_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UWidgetAnimation* Anm_Updated;                                              // 0x0410 (size: 0x8)
    class UWidgetAnimation* Anm_Out;                                                  // 0x0418 (size: 0x8)
    class UWidgetAnimation* Anm_Cleared;                                              // 0x0420 (size: 0x8)
    class UWidgetAnimation* Anm_In;                                                   // 0x0428 (size: 0x8)
    class UImage* Image_ClearEff;                                                     // 0x0430 (size: 0x8)
    class UImage* Image_ClearEff_1;                                                   // 0x0438 (size: 0x8)
    class UImage* Image_QuestIcon;                                                    // 0x0440 (size: 0x8)
    class UBP_PalRichTextBlock_C* RichText_QuestDescription;                          // 0x0448 (size: 0x8)
    class UBP_PalTextBlock_C* Text_TaskDetail_Progress;                               // 0x0450 (size: 0x8)
    FWBP_Ingame_QuestBoard_List_COnEndCloseAnim OnEndCloseAnim;                       // 0x0458 (size: 0x10)
    void OnEndCloseAnim(class UWBP_Ingame_QuestBoard_List_C* Widget);
    class UPalQuestData* MyQuest;                                                     // 0x0468 (size: 0x8)
    FName CachedQuestId;                                                              // 0x0470 (size: 0x8)
    bool CompleteSound;                                                               // 0x0478 (size: 0x1)
    FTimerHandle UpdateTextTimerHandle;                                               // 0x0480 (size: 0x8)

    void OnTimerEvent_UpdateText();
    void GetQuestId(FName& QuestId);
    void CompleteQuest();
    void UpdateQuest(class UPalQuestData* UpdatedQuest);
    void Setup(class UPalQuestData* QuestData);
    void Finished_FF8D72744040101F84C0D59873B7619D();
    void Finished_4B02D5D84C3448AD992E259045BE3FFE();
    void AnmEvent_In();
    void AnmEvent_OutAndRemove();
    void AnmEvent_Update();
    void Destruct();
    void ExecuteUbergraph_WBP_Ingame_QuestBoard_List(int32 EntryPoint);
    void OnEndCloseAnim__DelegateSignature(class UWBP_Ingame_QuestBoard_List_C* Widget);
}; // Size: 0x488

#endif
