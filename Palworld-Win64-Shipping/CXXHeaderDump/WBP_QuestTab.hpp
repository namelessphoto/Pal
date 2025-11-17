#ifndef UE4SS_SDK_WBP_QuestTab_HPP
#define UE4SS_SDK_WBP_QuestTab_HPP

class UWBP_QuestTab_C : public UWBP_PanelWidgetChildrenSelectorBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* HorizontalBox_Tab;
    class UWBP_Main_Menu_Tab_Key_C* WBP_Tab_Key_L;
    class UWBP_Main_Menu_Tab_Key_C* WBP_Tab_Key_R;
    class UWBP_Buildup_TabButton_C* WBP_TabButton_Main;
    class UWBP_Buildup_TabButton_C* WBP_TabButton_Sub;
    FDataTableRowHandle MainMissionMsgId;
    FDataTableRowHandle SubMissionMsgId;

    void OnChangedTabIndex_Internal(int32 OldIndex, int32 NewIndex, class UWidget* FocusTargetWidget);
    void RegisterPanelWidget(class UPanelWidget*& PanelWidget);
    void Construct();
    void OnInitialized();
    void BndEvt__WBP_QuestTab_WBP_TabButton_Main_K2Node_ComponentBoundEvent_0_SwitchTabTo__DelegateSignature(int32 Index);
    void BndEvt__WBP_QuestTab_WBP_TabButton_Sub_K2Node_ComponentBoundEvent_1_SwitchTabTo__DelegateSignature(int32 Index);
    void BndEvt__WBP_QuestTab_WBP_Tab_Key_R_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void BndEvt__WBP_QuestTab_WBP_Tab_Key_L_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_QuestTab(int32 EntryPoint);
};

#endif
