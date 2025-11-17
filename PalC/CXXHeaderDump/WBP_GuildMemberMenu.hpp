#ifndef UE4SS_SDK_WBP_GuildMemberMenu_HPP
#define UE4SS_SDK_WBP_GuildMemberMenu_HPP

class UWBP_GuildMemberMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Base;
    class UImage* BaseShadow;
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_122;
    class UImage* HeadBase;
    class UWBP_GuildMemberMenuList_C* WBP_GuildMemberMenuList;
    class UWBP_GuildMemberMenuList_C* WBP_GuildMemberMenuList_1;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    FDataTableRowHandle ChangeAdminMsgID;
    FDataTableRowHandle BanPlayerMsgID;
    FWBP_GuildMemberMenu_COnClickedChangeAdmin OnClickedChangeAdmin;
    void OnClickedChangeAdmin();
    FWBP_GuildMemberMenu_COnClickedBanPlayer OnClickedBanPlayer;
    void OnClickedBanPlayer();
    FWBP_GuildMemberMenu_COnClickedMenuCancel OnClickedMenuCancel;
    void OnClickedMenuCancel();

    void GetTopFocusTarget(class UWidget*& TargetWidget);
    void SetPlayerName(FString DisplayName);
    void OnInitialized();
    void BndEvt__WBP_GuildMemberMenu_WBP_GuildMemberMenuList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWBP_GuildMemberMenuList_C* Button);
    void BndEvt__WBP_GuildMemberMenu_WBP_GuildMemberMenuList_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWBP_GuildMemberMenuList_C* Button);
    void BndEvt__WBP_GuildMemberMenu_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_GuildMemberMenu(int32 EntryPoint);
    void OnClickedMenuCancel__DelegateSignature();
    void OnClickedBanPlayer__DelegateSignature();
    void OnClickedChangeAdmin__DelegateSignature();
};

#endif
