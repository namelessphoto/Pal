#ifndef UE4SS_SDK_WBP_Ingame_QuestBoard_List_HPP
#define UE4SS_SDK_WBP_Ingame_QuestBoard_List_HPP

class UWBP_Ingame_QuestBoard_List_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Updated;
    class UWidgetAnimation* Anm_Out;
    class UWidgetAnimation* Anm_Cleared;
    class UWidgetAnimation* Anm_In;
    class UImage* Image_ClearEff;
    class UImage* Image_ClearEff_1;
    class UImage* Image_QuestIcon;
    class UBP_PalRichTextBlock_C* RichText_QuestDescription;
    class UBP_PalTextBlock_C* Text_TaskDetail_Progress;
    FWBP_Ingame_QuestBoard_List_COnEndCloseAnim OnEndCloseAnim;
    void OnEndCloseAnim(class UWBP_Ingame_QuestBoard_List_C* Widget);
    class UPalQuestData* MyQuest;
    FName CachedQuestId;
    bool CompleteSound;
    FTimerHandle UpdateTextTimerHandle;

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
};

#endif
