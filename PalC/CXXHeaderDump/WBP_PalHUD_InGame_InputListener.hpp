#ifndef UE4SS_SDK_WBP_PalHUD_InGame_InputListener_HPP
#define UE4SS_SDK_WBP_PalHUD_InGame_InputListener_HPP

class UWBP_PalHUD_InGame_InputListener_C : public UPalUIInGameInputListener
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    class UWidgetAnimation* Default_In;                                               // 0x0428 (size: 0x8)
    class UWBP_Ingame_Chat_Wrapper_C* WBP_Ingame_Chat_Wrapper;                        // 0x0430 (size: 0x8)
    class UWBP_InGame_Quest_StartClear_C* WBP_InGame_Quest_StartClear;                // 0x0438 (size: 0x8)
    class UWBP_PalInteractiveObjectIndicatorCanvas_C* WBP_PalInteractiveObjectIndicatorCanvas; // 0x0440 (size: 0x8)
    class UWBP_PlayerRadialMenu_C* WBP_PlayerRadialMenu;                              // 0x0448 (size: 0x8)
    FPalDataTableRowName_UIInputAction EscapeActionName;                              // 0x0450 (size: 0x8)
    FPalDataTableRowName_UIInputAction OpenCharacterMenuActionName;                   // 0x0458 (size: 0x8)
    FPalDataTableRowName_UIInputAction OpenBuildMenuActionName;                       // 0x0460 (size: 0x8)
    FPalDataTableRowName_UIInputAction OpenTechnologyMenuActionName;                  // 0x0468 (size: 0x8)
    FPalDataTableRowName_UIInputAction OpenWorldMapActionName;                        // 0x0470 (size: 0x8)
    FPalDataTableRowName_UIInputAction OpenPalStatusActionName;                       // 0x0478 (size: 0x8)
    FPalUIActionBindData CharacterMenuActionHandle;                                   // 0x0480 (size: 0x4)
    FPalDataTableRowName_UIInputAction OpenChatActionName;                            // 0x0484 (size: 0x8)
    FPalUIActionBindData WorldMapActionHandle;                                        // 0x048C (size: 0x4)
    FPalUIActionBindData TechnologyMenuActionHandle;                                  // 0x0490 (size: 0x4)
    FPalUIActionBindData PalStatusActionHandle;                                       // 0x0494 (size: 0x4)
    FPalDataTableRowName_UIInputAction BeginAdminSpectateActionName;                  // 0x0498 (size: 0x8)
    FGuid SpectatorHudGuid;                                                           // 0x04A0 (size: 0x10)
    FPalUIActionBindData QuestCheckActionHandle;                                      // 0x04B0 (size: 0x4)
    FPalDataTableRowName_UIInputAction QuestCheckActionName;                          // 0x04B4 (size: 0x8)
    FTimerHandle TImerHandle_ClearQuestCheckAction;                                   // 0x04C0 (size: 0x8)
    FName CurrentDisplayStartQuestId;                                                 // 0x04C8 (size: 0x8)

    void CREATEDELEGATE_PROXYFUNCTION_0(const FPalKeyConfigSettings& PrevSettings, const FPalKeyConfigSettings& NewSettings);
    void OnTriggerWorldMapWithQuestId(FName QuestId);
    void OnRequestOpenMap_ByQuest(FName QuestId);
    void OnRequestOpenQuest_ByMap(FName QuestId);
    void OnTimerEvent_ClearQuestCheckAction();
    void OnStartQuestNotify(FName QuestId);
    void OnInputAction_QuestCheck();
    void OnCompleteQuest(const FName& QuestId);
    void OnOrderedQuest(const FName& QuestId);
    void SetupQuestEvent();
    void On End Arena Spectate();
    void On Begin Arena Spectate();
    void BeginAdminSpectate();
    void OnEndSpectate();
    void OnBeginSpectateNextTick();
    void OnBeginSpectate();
    void SetupSpectateEvent();
    void OnKeyConfigChanged(FPalKeyConfigSettings PreSetting, FPalKeyConfigSettings NewSetting);
    void OpenChat();
    void Can Open Any UI(bool& CanOpenUI);
    void OpenBuildRadialMenuWithSelectedIndex(const int32 SelectedIndex);
    void OpenBuildRadialMenu(const FName BuildObjectId);
    void OnTriggerWorldMap();
    void Setup Input Action();
    void OpenBuildMenu(const int32 BuildObjectTypeA);
    void OpenMenu_Internal(TEnumAsByte<EPalUIInGameMainMenuTabType> TabType, EPalBuildObjectTypeA BuildObjectTypeA, bool bDisableFirstCancelAction, FName QuestId);
    void OnTriggerEscape();
    void OnTriggerOpenPalStatus();
    void OnTriggerOpenTechnologyMenu();
    void OnTriggerOpenBuildMenu();
    void OnTriggerOpenCraftMenu();
    void On Trigger Open Inventory Menu();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnSetup_AfterCreatedPlayer();
    void BndEvt__WBP_PalHUD_InGame_InputListener_WBP_PlayerRadialMenu_K2Node_ComponentBoundEvent_1_OnRequestOpenChat__DelegateSignature();
    void BndEvt__WBP_PalHUD_InGame_InputListener_WBP_InGame_Quest_StartClear_K2Node_ComponentBoundEvent_0_OnStartQuestNotify__DelegateSignature(FName QuestId);
    void ExecuteUbergraph_WBP_PalHUD_InGame_InputListener(int32 EntryPoint);
}; // Size: 0x4D0

#endif
