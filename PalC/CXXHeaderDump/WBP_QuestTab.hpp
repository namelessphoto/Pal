#ifndef UE4SS_SDK_WBP_QuestTab_HPP
#define UE4SS_SDK_WBP_QuestTab_HPP

class UWBP_QuestTab_C : public UWBP_PanelWidgetChildrenSelectorBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0460 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Tab;                                          // 0x0468 (size: 0x8)
    class UWBP_Main_Menu_Tab_Key_C* WBP_Tab_Key_L;                                    // 0x0470 (size: 0x8)
    class UWBP_Main_Menu_Tab_Key_C* WBP_Tab_Key_R;                                    // 0x0478 (size: 0x8)
    class UWBP_Buildup_TabButton_C* WBP_TabButton_Main;                               // 0x0480 (size: 0x8)
    class UWBP_Buildup_TabButton_C* WBP_TabButton_Sub;                                // 0x0488 (size: 0x8)
    FDataTableRowHandle MainMissionMsgId;                                             // 0x0490 (size: 0x10)
    FDataTableRowHandle SubMissionMsgId;                                              // 0x04A0 (size: 0x10)

    void OnChangedTabIndex_Internal(int32 OldIndex, int32 NewIndex, class UWidget* FocusTargetWidget);
    void RegisterPanelWidget(class UPanelWidget*& PanelWidget);
    void Construct();
    void OnInitialized();
    void BndEvt__WBP_QuestTab_WBP_TabButton_Main_K2Node_ComponentBoundEvent_0_SwitchTabTo__DelegateSignature(int32 Index);
    void BndEvt__WBP_QuestTab_WBP_TabButton_Sub_K2Node_ComponentBoundEvent_1_SwitchTabTo__DelegateSignature(int32 Index);
    void BndEvt__WBP_QuestTab_WBP_Tab_Key_R_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void BndEvt__WBP_QuestTab_WBP_Tab_Key_L_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_QuestTab(int32 EntryPoint);
}; // Size: 0x4B0

#endif
