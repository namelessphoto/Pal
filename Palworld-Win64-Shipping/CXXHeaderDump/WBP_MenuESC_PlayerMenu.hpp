#ifndef UE4SS_SDK_WBP_MenuESC_PlayerMenu_HPP
#define UE4SS_SDK_WBP_MenuESC_PlayerMenu_HPP

class UWBP_MenuESC_PlayerMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Base;
    class UImage* BaseShadow;
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_122;
    class UImage* Dot_0;
    class UImage* Dot_1;
    class UImage* Frame;
    class UImage* HeadBase;
    class UWBP_GuildMemberMenuList_C* WBP_GuildMemberMenuList_Block;
    class UWBP_GuildMemberMenuList_C* WBP_GuildMemberMenuList_CopyPlayerUId;
    class UWBP_GuildMemberMenuList_C* WBP_GuildMemberMenuList_CopyUserId;
    class UWBP_GuildMemberMenuList_C* WBP_GuildMemberMenuList_Mute;
    class UWBP_GuildMemberMenuList_C* WBP_GuildMemberMenuList_UnBlock;
    class UWBP_GuildMemberMenuList_C* WBP_GuildMemberMenuList_UnMute;
    class UWBP_GuildMemberMenuList_C* WBP_GuildMemberMenuList_UserReport;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    FDataTableRowHandle UserIDCopyMsgID;
    FDataTableRowHandle PlayerUIDCopyMsgID;
    FDataTableRowHandle PlayerMuteMsgID;
    FDataTableRowHandle PlayerBlockMsgID;
    FWBP_MenuESC_PlayerMenu_COnPlayerMenuCopyUserId OnPlayerMenuCopyUserId;
    void OnPlayerMenuCopyUserId(class UWBP_MenuESCPlayerListItem_C* inTargetWidget);
    FWBP_MenuESC_PlayerMenu_COnPlayerMenuCopyPlayerUId OnPlayerMenuCopyPlayerUId;
    void OnPlayerMenuCopyPlayerUId(class UWBP_MenuESCPlayerListItem_C* inTargetWidget);
    FWBP_MenuESC_PlayerMenu_COnPlayerMenuMute OnPlayerMenuMute;
    void OnPlayerMenuMute();
    FWBP_MenuESC_PlayerMenu_COnPlayerMenuBlock OnPlayerMenuBlock;
    void OnPlayerMenuBlock();
    class UWBP_MenuESCPlayerListItem_C* TargetWidget;
    FWBP_MenuESC_PlayerMenu_COnPlayerMenuUnMute OnPlayerMenuUnMute;
    void OnPlayerMenuUnMute();
    FDataTableRowHandle PlayerUnMuteMsgID;
    FWBP_MenuESC_PlayerMenu_COnPlayerMenuUnBlock OnPlayerMenuUnBlock;
    void OnPlayerMenuUnBlock();
    FDataTableRowHandle PlayerUnBlockMsgID;
    FWBP_MenuESC_PlayerMenu_COnPlayerMenuCancel OnPlayerMenuCancel;
    void OnPlayerMenuCancel();
    FWBP_MenuESC_PlayerMenu_COnPlayerMenuUserReport OnPlayerMenuUserReport;
    void OnPlayerMenuUserReport();
    FDataTableRowHandle PlayerUserReportMsgID;

    void GetTopFocusTarget(class UWidget*& TargetWidget);
    void SetPlayerName(FString DisplayName);
    void BndEvt__WBP_GuildMemberMenu_WBP_GuildMemberMenuList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWBP_GuildMemberMenuList_C* Button);
    void BndEvt__WBP_GuildMemberMenu_WBP_GuildMemberMenuList_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWBP_GuildMemberMenuList_C* Button);
    void BndEvt__WBP_MenuESC_PlayerMenu_WBP_GuildMemberMenuList_2_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UWBP_GuildMemberMenuList_C* Button);
    void BndEvt__WBP_MenuESC_PlayerMenu_WBP_GuildMemberMenuList_3_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UWBP_GuildMemberMenuList_C* Button);
    void BndEvt__WBP_MenuESC_PlayerMenu_WBP_GuildMemberMenuList_UnMute_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UWBP_GuildMemberMenuList_C* Button);
    void BndEvt__WBP_MenuESC_PlayerMenu_WBP_GuildMemberMenuList_UnBlock_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UWBP_GuildMemberMenuList_C* Button);
    void BndEvt__WBP_MenuESC_PlayerMenu_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void OnInitialized();
    void BndEvt__WBP_MenuESC_PlayerMenu_WBP_GuildMemberMenuList_UserReport_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(class UWBP_GuildMemberMenuList_C* Button);
    void ExecuteUbergraph_WBP_MenuESC_PlayerMenu(int32 EntryPoint);
    void OnPlayerMenuUserReport__DelegateSignature();
    void OnPlayerMenuCancel__DelegateSignature();
    void OnPlayerMenuUnBlock__DelegateSignature();
    void OnPlayerMenuUnMute__DelegateSignature();
    void OnPlayerMenuBlock__DelegateSignature();
    void OnPlayerMenuMute__DelegateSignature();
    void OnPlayerMenuCopyPlayerUId__DelegateSignature(class UWBP_MenuESCPlayerListItem_C* inTargetWidget);
    void OnPlayerMenuCopyUserId__DelegateSignature(class UWBP_MenuESCPlayerListItem_C* inTargetWidget);
};

#endif
