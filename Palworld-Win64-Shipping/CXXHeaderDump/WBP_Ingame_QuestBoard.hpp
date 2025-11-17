#ifndef UE4SS_SDK_WBP_Ingame_QuestBoard_HPP
#define UE4SS_SDK_WBP_Ingame_QuestBoard_HPP

class UWBP_Ingame_QuestBoard_C : public UUserWidget
{
    class UCanvasPanel* Canvas_Quest_Title;
    class UVerticalBox* VerticalBox_List;
    TMap<class UWBP_Ingame_QuestBoard_List_C*, class UPalQuestData*> CreatedWidgetMap;

    void UpdateQuestDetail(FName QuestId);
    void CompleteQuest(FName QuestId);
    void UpdateTrackingQuestDetail(bool bIgnoreAlreadyCreatedWidget);
    void GetNowDisplayQuestWidgetNum(int32& Num);
    void OnClosedQuestWidget(class UWBP_Ingame_QuestBoard_List_C* Widget);
};

#endif
