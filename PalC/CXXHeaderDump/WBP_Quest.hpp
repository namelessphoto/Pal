#ifndef UE4SS_SDK_WBP_Quest_HPP
#define UE4SS_SDK_WBP_Quest_HPP

class UWBP_Quest_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UCanvasPanel* Canvas_Info;                                                  // 0x0410 (size: 0x8)
    class UCanvasPanel* Canvas_RewardEXP;                                             // 0x0418 (size: 0x8)
    class UCanvasPanel* Canvas_RewardInternal;                                        // 0x0420 (size: 0x8)
    class UCanvasPanel* Canvas_Tracking;                                              // 0x0428 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* DummyItemSlot;                          // 0x0430 (size: 0x8)
    class UHorizontalBox* Horizontal_KeyGuide_LiftOne;                                // 0x0438 (size: 0x8)
    class UHorizontalBox* Horizontal_RewardItem;                                      // 0x0440 (size: 0x8)
    class UHorizontalBox* HorizontalBox_KeyGuide_ShoeMap;                             // 0x0448 (size: 0x8)
    class UHorizontalBox* HorizontalBox_KeyGuide_Tracking;                            // 0x0450 (size: 0x8)
    class UImage* Image_Icon_QuestType;                                               // 0x0458 (size: 0x8)
    class UImage* Image_MisteryReward;                                                // 0x0460 (size: 0x8)
    class UOverlay* Overlay_Main;                                                     // 0x0468 (size: 0x8)
    class UOverlay* Overlay_Sub;                                                      // 0x0470 (size: 0x8)
    class UPalScrollBox* PalScrollBox_QuestDescription;                               // 0x0478 (size: 0x8)
    class UBP_PalRichTextBlock_C* RichText_QuestDescription;                          // 0x0480 (size: 0x8)
    class UBP_PalRichTextBlock_C* RichText_QuestName;                                 // 0x0488 (size: 0x8)
    class USizeBox* SizeBox;                                                          // 0x0490 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ClientName;                                        // 0x0498 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Distance;                                          // 0x04A0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_EXPNum;                                            // 0x04A8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_QuestType;                                         // 0x04B0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_TrackingQuest;                                     // 0x04B8 (size: 0x8)
    class UWBP_PalCommonScrollList_C* WBP_PalCommonScrollList;                        // 0x04C0 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_109;                            // 0x04C8 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_Tracking;                       // 0x04D0 (size: 0x8)
    class UWBP_Quest_Objective_C* WBP_Quest_Objective;                                // 0x04D8 (size: 0x8)
    class UWBP_Quest_Objective_C* WBP_Quest_Objective_1;                              // 0x04E0 (size: 0x8)
    class UWBP_Quest_Objective_C* WBP_Quest_Objective_2;                              // 0x04E8 (size: 0x8)
    class UWBP_QuestTab_C* WBP_QuestTab;                                              // 0x04F0 (size: 0x8)
    TArray<class UWBP_Quest_Objective_C*> ObjectiveWidgetArray;                       // 0x04F8 (size: 0x10)
    FWBP_Quest_COnClickedQuestButton OnClickedQuestButton;                            // 0x0508 (size: 0x10)
    void OnClickedQuestButton(class UWBP_Quest_ListButton_C* QuestWidget);
    FWBP_Quest_COnHoveredQuestButton OnHoveredQuestButton;                            // 0x0518 (size: 0x10)
    void OnHoveredQuestButton(class UWBP_Quest_ListButton_C* QuestWidget);
    FWBP_Quest_COnUnhoveredQuestButton OnUnhoveredQuestButton;                        // 0x0528 (size: 0x10)
    void OnUnhoveredQuestButton(class UWBP_Quest_ListButton_C* QuestWidget);
    class UWBP_Quest_List_C* WBP_QuestList;                                           // 0x0538 (size: 0x8)
    FName CurrentDisplayingQuestId;                                                   // 0x0540 (size: 0x8)
    bool bFirstSelectTab;                                                             // 0x0548 (size: 0x1)
    double RightStickAxisY;                                                           // 0x0550 (size: 0x8)
    double ScrollPerSecond;                                                           // 0x0558 (size: 0x8)

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
}; // Size: 0x560

#endif
