#ifndef UE4SS_SDK_WBP_MenuESC_tabset_HPP
#define UE4SS_SDK_WBP_MenuESC_tabset_HPP

class UWBP_MenuESC_tabset_C : public UWBP_PanelWidgetChildrenSelectorBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* HorizontalBox_Tab;
    class UWBP_Main_Menu_Tab_Key_C* WBP_Main_Menu_Tab_Key_L;
    class UWBP_Main_Menu_Tab_Key_C* WBP_Main_Menu_Tab_Key_R;
    class UWBP_Paldex_tab_C* WBP_Paldex_tab_Distribution;
    class UWBP_Paldex_tab_C* WBP_Paldex_tab_Model;
    FWBP_MenuESC_tabset_COnSelectedModelTab OnSelectedModelTab;
    void OnSelectedModelTab();
    FWBP_MenuESC_tabset_COnSelectedDistributionTab OnSelectedDistributionTab;
    void OnSelectedDistributionTab();

    void OnPrevEvent(int32 OldIndex, int32 NewIndex);
    void OnNextEvent(int32 OldIndex, int32 NewIndex);
    void OnChangedIndexEvent(int32 OldIndex, int32 NewIndex, class UWidget* FocusTargetWidget);
    void RegisterPanelWidget(class UPanelWidget*& PanelWidget);
    void BndEvt__WBP_Paldex_tabset_WBP_Paldex_tab_Distribution_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__WBP_Paldex_tabset_WBP_Paldex_tab_Model_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void OnInitialized();
    void BndEvt__WBP_Paldex_tabset_WBP_Main_Menu_Tab_Key_R_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void BndEvt__WBP_Paldex_tabset_WBP_Main_Menu_Tab_Key_L_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_MenuESC_tabset(int32 EntryPoint);
    void OnSelectedDistributionTab__DelegateSignature();
    void OnSelectedModelTab__DelegateSignature();
};

#endif
