#ifndef UE4SS_SDK_WBP_PalHUD_InGame_InputListener_HPP
#define UE4SS_SDK_WBP_PalHUD_InGame_InputListener_HPP

class UWBP_PalHUD_InGame_InputListener_C : public UPalUIInGameInputListener
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Default_In;
    class UWBP_Ingame_Chat_Wrapper_C* WBP_Ingame_Chat_Wrapper;
    class UWBP_InGame_Quest_StartClear_C* WBP_InGame_Quest_StartClear;
    class UWBP_PalInteractiveObjectIndicatorCanvas_C* WBP_PalInteractiveObjectIndicatorCanvas;
    class UWBP_PlayerRadialMenu_C* WBP_PlayerRadialMenu;
    FPalDataTableRowName_UIInputAction EscapeActionName;
    FPalDataTableRowName_UIInputAction OpenCharacterMenuActionName;
    FPalDataTableRowName_UIInputAction OpenBuildMenuActionName;
    FPalDataTableRowName_UIInputAction OpenTechnologyMenuActionName;
    FPalDataTableRowName_UIInputAction OpenWorldMapActionName;
    FPalDataTableRowName_UIInputAction OpenPalStatusActionName;
    FPalUIActionBindData CharacterMenuActionHandle;
    FPalDataTableRowName_UIInputAction OpenChatActionName;
    FPalUIActionBindData WorldMapActionHandle;
    FPalUIActionBindData TechnologyMenuActionHandle;
    FPalUIActionBindData PalStatusActionHandle;
    FPalDataTableRowName_UIInputAction BeginAdminSpectateActionName;
    FGuid SpectatorHudGuid;
    FPalUIActionBindData QuestCheckActionHandle;
    FPalDataTableRowName_UIInputAction QuestCheckActionName;
    FTimerHandle TImerHandle_ClearQuestCheckAction;
    FName CurrentDisplayStartQuestId;

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
};

#endif
