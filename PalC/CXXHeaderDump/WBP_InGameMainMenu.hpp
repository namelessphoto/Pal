#ifndef UE4SS_SDK_WBP_InGameMainMenu_HPP
#define UE4SS_SDK_WBP_InGameMainMenu_HPP

class UWBP_InGameMainMenu_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UCanvasPanel* CanvasPanel_106;                                              // 0x0438 (size: 0x8)
    class UWBP_MainMenu_C* WBP_MainMenu;                                              // 0x0440 (size: 0x8)
    class UWBP_MainMenu_bg_C* WBP_MainMenu_bg;                                        // 0x0448 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x0450 (size: 0x8)
    class UPalUserWidget* CurrentContentWidget;                                       // 0x0458 (size: 0x8)
    FPalDataTableRowName_UIInputAction NextTabActionName;                             // 0x0460 (size: 0x8)
    FPalDataTableRowName_UIInputAction PrevTabActionName;                             // 0x0468 (size: 0x8)
    FPalDataTableRowName_UIInputAction CloseMenuActionName;                           // 0x0470 (size: 0x8)
    TMap<TEnumAsByte<EPalUIInGameMainMenuTabType>, FDataTableRowHandle> TitleMsgIDMap; // 0x0478 (size: 0x50)
    bool LockCurrentTab;                                                              // 0x04C8 (size: 0x1)
    bool bDisableCancelOnce;                                                          // 0x04C9 (size: 0x1)
    FWBP_InGameMainMenu_COnRequestOpenMap_ByQuest OnRequestOpenMap_ByQuest;           // 0x04D0 (size: 0x10)
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
}; // Size: 0x4E0

#endif
