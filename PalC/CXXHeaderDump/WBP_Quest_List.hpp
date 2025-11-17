#ifndef UE4SS_SDK_WBP_Quest_List_HPP
#define UE4SS_SDK_WBP_Quest_List_HPP

class UWBP_Quest_List_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* Vertical_CompletedQuest;
    class UVerticalBox* Vertical_OrderedQuest;
    class UWBP_Quest_ListButton_C* WBP_Dummy1;
    class UWBP_Quest_ListButton_C* WBP_Dummy2;
    FWBP_Quest_List_COnClickedQuestButton OnClickedQuestButton;
    void OnClickedQuestButton(class UWBP_Quest_ListButton_C* Widget);
    FWBP_Quest_List_COnHoveredQuestButton OnHoveredQuestButton;
    void OnHoveredQuestButton(class UWBP_Quest_ListButton_C* Widget);
    FWBP_Quest_List_COnUnhoveredQuestButton OnUnhoveredQuestButton;
    void OnUnhoveredQuestButton(class UWBP_Quest_ListButton_C* Widget);
    TArray<class UPalQuestData*> CompletedQuestDataArray;

    void GetAllQuestWidget(TArray<class UWBP_Quest_ListButton_C*>& NewParam);
    void GetTopQuestWidget(class UWBP_Quest_ListButton_C*& Widget);
    void GetCompletedQuestWidgetByType(EPalQuestType QuestType, TArray<class UWBP_Quest_ListButton_C*>& widgets);
    void GetOrderedQuestWidgetByType(EPalQuestType QuestType, TArray<class UWBP_Quest_ListButton_C*>& widgets);
    void GetTopQuestData(class UPalQuestData*& QuestData);
    void GetTopFocusTarget(class UWidget*& Widget);
    void FilteringInternal(EPalQuestType QuestType);
    void GetTopFocusTarget_CompletedQuest(class UWidget*& Widget);
    void GetTopFocusTarget_OrderedQuest(class UWidget*& Widget);
    void FIlteringSubQuest();
    void FilteringMainQuest();
    void GetCompletedQuestWidget(TArray<class UWBP_Quest_ListButton_C*>& widgets);
    void GetOrderedQuestWidget(TArray<class UWBP_Quest_ListButton_C*>& widgets);
    void SetTrackingQuestId(FName QuestId);
    void AddCompletedQuestId(TArray<FName>& QuestIdArray);
    void OnUnhoveredQuestButton_Binded(class UWBP_Quest_ListButton_C* Widget);
    void OnHoveredQuestButton_Binded(class UWBP_Quest_ListButton_C* Widget);
    void OnClickedQuestButton_Binded(class UWBP_Quest_ListButton_C* Widget);
    void AddOrderedQuest(TArray<class UPalQuestData*>& QuestDataArray);
    void Construct();
    void Destruct();
    void ExecuteUbergraph_WBP_Quest_List(int32 EntryPoint);
    void OnUnhoveredQuestButton__DelegateSignature(class UWBP_Quest_ListButton_C* Widget);
    void OnHoveredQuestButton__DelegateSignature(class UWBP_Quest_ListButton_C* Widget);
    void OnClickedQuestButton__DelegateSignature(class UWBP_Quest_ListButton_C* Widget);
};

#endif
