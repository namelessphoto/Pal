#ifndef UE4SS_SDK_WBP_Guild_ForDisplay_HPP
#define UE4SS_SDK_WBP_Guild_ForDisplay_HPP

class UWBP_Guild_ForDisplay_C : public UPalUIGuildMenu
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCircularThrobber* CircularThrobber_11;
    class UImage* Image_20;
    class UOverlay* Overlay_Waiting;
    class UWBP_Guild_C* WBP_Guild;
    class UWBP_GuildMemberMenu_C* WBP_GuildMemberMenu;
    TMap<TEnumAsByte<E_PalUIGuildMenuLogCategory>, FDataTableRowHandle> GuildLogCategoryTextMap;
    TMap<FString, TEnumAsByte<E_PalUIGuildMenuLogCategory>> GuildLogStringCategoryMap;
    FDataTableRowHandle GuildExitDialogMsgID_Admin;
    FDataTableRowHandle GuildExitDialogMsgID_Warning;
    FTimerHandle WaitingExitGuildTimeoutTimerHandle;
    FTimerHandle CheckNewGroupTimerHandle;
    bool IsSelectingMemberMenu;
    FDataTableRowHandle BanPlayerDialogMsgID;
    FDataTableRowHandle ChangeAdminDialogMsgID;
    TSoftObjectPtr<UWBP_Guild_MemberList_C> SelectionPlayerWidget;
    FTimerHandle CheckBanPlayerTimerHandle;
    FTimerHandle CheckbanPlayerTimeoutTimerHandle;
    FGuid BanPlayerUId;
    FTimerHandle ChangeAdminTimeoutTimerHandle;
    FTimerHandle CheckChangeAdminTimerHandle;

    void CanClose(bool& CanCloseFlag);
    void OnTimer_CheckChangeAdmin();
    void OnTimer_TimeoutChangeAdmin();
    void OnTimer_CheckBanPlayer();
    void OnTimer_TimeoutBanPlayer();
    void CloseWaitingWindow();
    void OpenWaitingWindow();
    void OnCloseChangeAdminDialog(bool bResult);
    void OpenChangeAdminDialog();
    void OnCloseBanPlayerDialog(bool bResult);
    void OpenBanPlayerDialog();
    void CloseMemberSettingWindow();
    void OnTimer_CheckNewGroup_WaitingExitGuild();
    void OnUpdateGroupId_WaitingExitGuild(const FGuid& NewGroupId);
    void OnTimer_TimeoutExitGuild();
    void OnClosed_GuildExitDialog(bool bResult);
    void OnClosed_GuildExitFailedDialog_Admin(bool bResult);
    void OpenExitGuildDialog();
    void OnUpdatedGuildName(FString NewGuildName);
    class UWidget* BP_GetDesiredFocusTarget();
    void SetupGuildLogCategoryButton();
    void Setup();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__WBP_Guild_ForDisplay_WBP_Guild_K2Node_ComponentBoundEvent_0_OnClickedEditGuildNameButton__DelegateSignature();
    void BndEvt__WBP_Guild_ForDisplay_WBP_Guild_K2Node_ComponentBoundEvent_3_OnClickedGuildMemberButton__DelegateSignature(class UWBP_Guild_MemberList_C* Widget);
    void BndEvt__WBP_Guild_ForDisplay_WBP_Guild_K2Node_ComponentBoundEvent_4_OnClickedLeaveButton__DelegateSignature();
    void BndEvt__WBP_Guild_ForDisplay_WBP_Guild_K2Node_ComponentBoundEvent_2_OnCommiedGuildName__DelegateSignature(FString NewName);
    void Destruct();
    void OnUpdatedMemberInfo(const FGuid& PlayerUId, const FPalUIGuildMemberDisplayInfo& PlayerInfo);
    void OnRemovedMemberInfo(const FGuid& PlayerUId);
    void BndEvt__WBP_Guild_ForDisplay_WBP_GuildMemberMenu_K2Node_ComponentBoundEvent_6_OnClickedChangeAdmin__DelegateSignature();
    void BndEvt__WBP_Guild_ForDisplay_WBP_GuildMemberMenu_K2Node_ComponentBoundEvent_7_OnClickedBanPlayer__DelegateSignature();
    void BndEvt__WBP_Guild_ForDisplay_WBP_GuildMemberMenu_K2Node_ComponentBoundEvent_1_OnClickedMenuCancel__DelegateSignature();
    void ExecuteUbergraph_WBP_Guild_ForDisplay(int32 EntryPoint);
};

#endif
