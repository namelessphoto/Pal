#ifndef UE4SS_SDK_WBP_PlayerRadialMenu_HPP
#define UE4SS_SDK_WBP_PlayerRadialMenu_HPP

class UWBP_PlayerRadialMenu_C : public UPalUIPlayerRadialMenuBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Default_In;
    class UCanvasPanel* CanvasPanel_0;
    class UWBP_CommonRadialMenuBase_C* WBP_CommonRadialMenuBase;
    bool isAnyRadialMenuOpened;
    FName cameraModifierName;
    TEnumAsByte<EPlayerRadialMenuOpenType> OpenedRadialType;
    int32 OtomoIndex;
    FPalDataTableRowName_UIInputAction DecideMenuAction;
    FPalUIActionBindData Action Handle;
    FDataTableRowHandle FeedMsgID;
    FDataTableRowHandle FeedWithNameMsgID;
    FDataTableRowHandle CareMsgID;
    FDataTableRowHandle CareWithNameMsgID;
    FDataTableRowHandle EmoteTitleMsgID;
    class UWBP_IngameMenuConstruction_Radial_C* ConstructionMenu;
    FName InteractDIsableFlagName;
    FDataTableRowHandle InstructionAttackMsgID;
    FDataTableRowHandle InstructionAssistMsgID;
    FDataTableRowHandle InstructionEscapetMsgID;
    FDataTableRowHandle EmoteMsgID_0;
    FDataTableRowHandle EmoteMsgID_1;
    FDataTableRowHandle EmoteMsgID_2;
    FDataTableRowHandle EmoteMsgID_3;
    FDataTableRowHandle EmoteMsgID_4;
    FDataTableRowHandle EmoteMsgID_5;
    FDataTableRowHandle EmoteMsgID_6;
    FDataTableRowHandle EmoteMsgID_7;
    FDataTableRowHandle EmoteMsgID_8;
    FDataTableRowHandle SlaughterMsgID;
    FWBP_PlayerRadialMenu_COnRequestOpenChat OnRequestOpenChat;
    void OnRequestOpenChat();
    FDataTableRowHandle OpenChatMsgID;
    TArray<FName> RadialIgnoreTribeList;

    void ShouldDisplayOpenChatPanel(bool& bShouldDisplay);
    void IsPlayerDying(bool& IsDying);
    void IsAnyMenuOpened(bool& IsOpened);
    void SetInteractEnable(bool IsInteractEnable);
    void EmptyFunction();
    void HasConstructionMenu(bool& HasMenu);
    void IsPlayerRiding(bool& IsRiding);
    void CloseConstructionMenu();
    void CreateConstructionMenu(class UWBP_IngameMenuConstruction_Radial_C*& createdWidget);
    void OpenConstructionMenu(FName SelectMapObjectId, int32 SelectedIndex);
    void OnPressConstructionMenuButton();
    void OnDecidedEmoteMenu(int32 Index);
    void CreateEmoteMenu();
    void Open Emote Menu();
    void OnPlayerRideOn(class AActor* RideActor);
    void On Decided Instruction Care(bool& ShouldClose);
    void OnDecidedInstruction_Feed(bool& ShouldClose);
    void OnDecidedPlayerActionMenu(int32 Index);
    void OnOtomoChanged_Inactivated();
    void OnOtomoChanged_Activated();
    void UnbindPlayerActionMenuEvent();
    void BindPlayerActionMenuEvent();
    void CreateInstructionsAdditionalWidget(FText InText, class UWBP_PlayerRadialMenu_MenuContent_C*& createdWidget);
    void OnDamagedPlayer(FPalDamageResult DamageResult);
    void CloseSetup();
    void CloseMenu();
    void CreatePlayerActionMenu();
    void Can Open Player Action Menu(bool& Result);
    void OpenSetup();
    void OpenMenu();
    void OpenPlayerActionMenu();
    void OnPushedAnyWidget(const FGuid& pushedWidgetID);
    void BindOpenPlayerActionMenu();
    void UnbindOpenPlayerActionMenu();
    void SetupEvent();
    void ExecuteUbergraph_WBP_PlayerRadialMenu(int32 EntryPoint);
    void OnRequestOpenChat__DelegateSignature();
};

#endif
