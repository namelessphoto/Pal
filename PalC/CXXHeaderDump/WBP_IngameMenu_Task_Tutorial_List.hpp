#ifndef UE4SS_SDK_WBP_IngameMenu_Task_Tutorial_List_HPP
#define UE4SS_SDK_WBP_IngameMenu_Task_Tutorial_List_HPP

class UWBP_IngameMenu_Task_Tutorial_List_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Updated;
    class UWidgetAnimation* Anm_Out;
    class UWidgetAnimation* Anm_Cleared;
    class UWidgetAnimation* Anm_In;
    class UCheckBox* CheckBox;
    class UImage* Image_ClearEff;
    class UImage* Image_ClearEff_1;
    class UBP_PalRichTextBlock_C* RichText_QuestDescription;
    class UBP_PalTextBlock_C* Text_TaskDetail_Progress;
    FWBP_IngameMenu_Task_Tutorial_List_COnEndCloseAnim OnEndCloseAnim;
    void OnEndCloseAnim(class UWBP_IngameMenu_Task_Tutorial_List_C* Widget);
    class UPalQuestData* MyQuest;

    void OnCompleteQuest(class UPalQuestData* CompletedQuest);
    void OnUpdateQuest(class UPalQuestData* UpdatedQuest);
    void Setup(class UPalQuestData* QuestData);
    void Finished_8C570D2F49F607FCB9D12EBC618DA2B5();
    void Finished_781203AD4157D75A23805F92A2357ADB();
    void AnmEvent_In();
    void AnmEvent_OutAndRemove();
    void AnmEvent_Update();
    void Destruct();
    void ExecuteUbergraph_WBP_IngameMenu_Task_Tutorial_List(int32 EntryPoint);
    void OnEndCloseAnim__DelegateSignature(class UWBP_IngameMenu_Task_Tutorial_List_C* Widget);
};

#endif
