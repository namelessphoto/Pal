#ifndef UE4SS_SDK_WBP_InGameMainMenu_HPP
#define UE4SS_SDK_WBP_InGameMainMenu_HPP

class UWBP_InGameMainMenu_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* CanvasPanel_106;
    class UWBP_MainMenu_C* WBP_MainMenu;
    class UWBP_MainMenu_bg_C* WBP_MainMenu_bg;
    class UWBP_Menu_btn_C* WBP_Menu_btn;
    class UPalUserWidget* CurrentContentWidget;
    FPalDataTableRowName_UIInputAction NextTabActionName;
    FPalDataTableRowName_UIInputAction PrevTabActionName;
    FPalDataTableRowName_UIInputAction CloseMenuActionName;
    TMap<TEnumAsByte<EPalUIInGameMainMenuTabType>, FDataTableRowHandle> TitleMsgIDMap;
    bool LockCurrentTab;
    bool bDisableCancelOnce;
    FWBP_InGameMainMenu_COnRequestOpenMap_ByQuest OnRequestOpenMap_ByQuest;
    void OnRequestOpenMap_ByQuest(FName QuestId);

    void OnRequestShowMap(FName QuestId);
    void SelectQuestTab();
    class UWidget* BP_GetDesiredFocusTarget();
    void SelectGuildTab();
    void SelectInventoryEquipmentTab();
    void Select Option Tab();
    void OnAllNewFlagCleared_PalDex();
    void On Update Player Status Point();
    void On Unused Status Points Changed(int32 UnusedPoint);
    void SetupAllAttentionDot();
    void Setup Attention Dot(TEnumAsByte<EPalUIInGameMainMenuTabType> Tab);
    void On Changed Tab Index Event(int32 OldIndex, int32 NewIndex, class UWidget* FocusTargetWidget);
    void SelectPaldexTab();
    void SetupBgText(TEnumAsByte<EPalUIInGameMainMenuTabType> Type);
    void OnCancelAction();
    void AddChildToContentBody(class UPalUserWidget* Widget);
    void OnNextTabAction();
    void OnPrevTabAction();
    void SelectPalTab();
    void SelectTechnologyTab();
    void Select Tab(TEnumAsByte<EPalUIInGameMainMenuTabType> TabType);
    void Setup Input Action();
    void AnmEvent_AllOpen();
    void BndEvt__WBP_InGameMainMenu_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void OnSetup();
    void OnInitialized();
    void Construct();
    void Destruct();
    void ExecuteUbergraph_WBP_InGameMainMenu(int32 EntryPoint);
    void OnRequestOpenMap_ByQuest__DelegateSignature(FName QuestId);
};

#endif
