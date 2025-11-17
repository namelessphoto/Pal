#ifndef UE4SS_SDK_WBP_IngameMenu_Task_Tutorial_HPP
#define UE4SS_SDK_WBP_IngameMenu_Task_Tutorial_HPP

class UWBP_IngameMenu_Task_Tutorial_C : public UUserWidget
{
    class UCanvasPanel* Canvas_TaskDetail;
    class UVerticalBox* VerticalBox_TaskDetail;
    TMap<class UWBP_IngameMenu_Task_Tutorial_List_C*, class UPalQuestData*> CreatedWidgetMap;

    void GetNowDisplayQuestWidgetNum(int32& Num);
    void OnClosedQuestWidget(class UWBP_IngameMenu_Task_Tutorial_List_C* Widget);
    void AddQuest(class UPalQuestData* QuestData);
};

#endif
