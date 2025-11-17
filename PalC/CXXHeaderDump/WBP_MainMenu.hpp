#ifndef UE4SS_SDK_WBP_MainMenu_HPP
#define UE4SS_SDK_WBP_MainMenu_HPP

class UWBP_MainMenu_C : public UWBP_PanelWidgetChildrenSelectorBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Close_Main_Menu;
    class UWidgetAnimation* Anm_Open_Main_menu;
    class UHorizontalBox* HorizontalBox_Tab;
    class UWBP_MainMenu_Tab_C* WBP_Tab_00;
    class UWBP_MainMenu_Tab_C* WBP_Tab_01;
    class UWBP_MainMenu_Tab_C* WBP_Tab_02;
    class UWBP_MainMenu_Tab_C* WBP_Tab_03;
    class UWBP_MainMenu_Tab_C* WBP_Tab_04;
    class UWBP_MainMenu_Tab_C* WBP_Tab_05;
    class UWBP_MainMenu_Tab_C* WBP_Tab_06;
    class UWBP_Main_Menu_Tab_Key_C* WBP_Tab_Key_L;
    class UWBP_Main_Menu_Tab_Key_C* WBP_Tab_Key_R;
    TMap<TEnumAsByte<EPalUIInGameMainMenuTabType>, UWBP_MainMenu_Tab_C*> TabWidgetMap;

    void GetTabWidgetByMenuType(TEnumAsByte<EPalUIInGameMainMenuTabType> MenuType, class UWBP_MainMenu_Tab_C*& TabWidget);
    void SelectByMainMenuType(TEnumAsByte<EPalUIInGameMainMenuTabType> Type);
    void OnClickedTabEvent(class UWBP_MainMenu_Tab_C* TabWidget);
    void RegisterPanelWidget(class UPanelWidget*& PanelWidget);
    void OnChangedIndexEvent(int32 OldIndex, int32 NewIndex, class UWidget* FocusTargetWidget);
    void OnPrevEvent(int32 OldIndex, int32 NewIndex);
    void OnNextEvent(int32 OldIndex, int32 NewIndex);
    void Anm_Focus(TEnumAsByte<EPalUIInGameMainMenuTabType> Type);
    void Anm_FocusToNormal(TEnumAsByte<EPalUIInGameMainMenuTabType> Type);
    void Anm_Open();
    void OnInitialized();
    void BndEvt__WBP_MainMenu_WBP_Tab_Key_L_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__WBP_MainMenu_WBP_Tab_Key_R_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_MainMenu(int32 EntryPoint);
};

#endif
