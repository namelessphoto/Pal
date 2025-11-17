#ifndef UE4SS_SDK_WBP_Quest_HPP
#define UE4SS_SDK_WBP_Quest_HPP

class UWBP_Quest_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* Canvas_Info;
    class UCanvasPanel* Canvas_RewardEXP;
    class UCanvasPanel* Canvas_RewardInternal;
    class UCanvasPanel* Canvas_Tracking;
    class UWBP_PalInGameMenuItemSlotButton_C* DummyItemSlot;
    class UHorizontalBox* Horizontal_KeyGuide_LiftOne;
    class UHorizontalBox* Horizontal_RewardItem;
    class UHorizontalBox* HorizontalBox_KeyGuide_ShoeMap;
    class UHorizontalBox* HorizontalBox_KeyGuide_Tracking;
    class UImage* Image_Icon_QuestType;
    class UImage* Image_MisteryReward;
    class UOverlay* Overlay_Main;
    class UOverlay* Overlay_Sub;
    class UPalScrollBox* PalScrollBox_QuestDescription;
    class UBP_PalRichTextBlock_C* RichText_QuestDescription;
    class UBP_PalRichTextBlock_C* RichText_QuestName;
    class USizeBox* SizeBox;
    class UBP_PalTextBlock_C* Text_ClientName;
    class UBP_PalTextBlock_C* Text_Distance;
    class UBP_PalTextBlock_C* Text_EXPNum;
    class UBP_PalTextBlock_C* Text_QuestType;
    class UBP_PalTextBlock_C* Text_TrackingQuest;
    class UWBP_PalCommonScrollList_C* WBP_PalCommonScrollList;
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_109;
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_Tracking;
    class UWBP_Quest_Objective_C* WBP_Quest_Objective;
    class UWBP_Quest_Objective_C* WBP_Quest_Objective_1;
    class UWBP_Quest_Objective_C* WBP_Quest_Objective_2;
    class UWBP_QuestTab_C* WBP_QuestTab;
    TArray<class UWBP_Quest_Objective_C*> ObjectiveWidgetArray;
    FWBP_Quest_COnClickedQuestButton OnClickedQuestButton;
    void OnClickedQuestButton(class UWBP_Quest_ListButton_C* QuestWidget);
    FWBP_Quest_COnHoveredQuestButton OnHoveredQuestButton;
    void OnHoveredQuestButton(class UWBP_Quest_ListButton_C* QuestWidget);
    FWBP_Quest_COnUnhoveredQuestButton OnUnhoveredQuestButton;
    void OnUnhoveredQuestButton(class UWBP_Quest_ListButton_C* QuestWidget);
    class UWBP_Quest_List_C* WBP_QuestList;
    FName CurrentDisplayingQuestId;
    bool bFirstSelectTab;
    double RightStickAxisY;
    double ScrollPerSecond;

    void GetTopQuestData(class UPalQuestData*& QuestData);
    void OnUnhoveredRewardItemSlot(class UWBP_PalItemSlotButtonBase_C* Widget);
    void OnHoveredRewardItemSlot(class UWBP_PalItemSlotButtonBase_C* Widget);
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    void GetFocusTargetByQuestId(FName QuestId, class UWidget*& Widget);
    void AddCompletedQuestId(TArray<FName>& QuestIdArray);
    void UpdateTabEnable();
    void PrevTab();
    void NextTab();
    void SelectTab(EPalQuestType QuestType);
    void GetTopFocusTarget(class UWidget*& Widget);
    void SetRewardData(FPalCommonQuestRewardData CommonRewardData);
    void GetCurrentDisplayQuestId(FName& QuestId);
    void UpdateTrackingKeyGuideText();
    void SetTrackingQuestId(FName QuestId);
    void OnUnhoveredQuestButton_Binded(class UWBP_Quest_ListButton_C* Widget);
    void OnHoveredQuestButton_Binded(class UWBP_Quest_ListButton_C* Widget);
    void OnClickedQuestButton_Binded(class UWBP_Quest_ListButton_C* Widget);
    void ResetQuestProgressDetail();
    void SetCommonRewardData(FText NewParam);
    void AddQuestProgress(FText ProgressDesc, FText Progress);
    void AddOrderedQuestData(TArray<class UPalQuestData*>& QuestArray);
    void SetQuestDescription(FText QuestDescText);
    void SetQuestName(FText QuestNameText);
    void SetDisplayQuestData(class UPalQuestData* QuestData);
    void Setup();
    void OnInitialized();
    void Destruct();
    void BndEvt__WBP_Quest_WBP_QuestTab_K2Node_ComponentBoundEvent_0_OnChangedFocusIndex__DelegateSignature(int32 OldIndex, int32 NewIndex, class UWidget* FocusTargetWidget);
    void BndEvt__WBP_Quest_WBP_QuestTab_K2Node_ComponentBoundEvent_1_OnChangeEnableChild__DelegateSignature(int32 Index, class UWidget* ChildWidget, bool IsEnable);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_Quest(int32 EntryPoint);
    void OnUnhoveredQuestButton__DelegateSignature(class UWBP_Quest_ListButton_C* QuestWidget);
    void OnHoveredQuestButton__DelegateSignature(class UWBP_Quest_ListButton_C* QuestWidget);
    void OnClickedQuestButton__DelegateSignature(class UWBP_Quest_ListButton_C* QuestWidget);
};

#endif
