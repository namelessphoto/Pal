#ifndef UE4SS_SDK_WBP_Guild_MemberList_HPP
#define UE4SS_SDK_WBP_Guild_MemberList_HPP

class UWBP_Guild_MemberList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_NormalToFocus;
    class UImage* Network;
    class UBP_PalTextBlock_C* Text_Admin;
    class UBP_PalTextBlock_C* Text_LoginState;
    class UBP_PalTextBlock_C* Text_PlayerName;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    FDataTableRowHandle OnlineMsgID;
    FDataTableRowHandle OfflineMsgID;
    FWBP_Guild_MemberList_COnClicked OnClicked;
    void OnClicked(class UWBP_Guild_MemberList_C* Widget);
    FPalUIGuildMemberDisplayInfo MyDisplayInfo;
    FWBP_Guild_MemberList_COnHovered OnHovered;
    void OnHovered(class UWBP_Guild_MemberList_C* Widget);
    FGuid Player UId;

    void GetFocusTarget(class UWidget*& TargetWidget);
    void GetDisplayInfo(FPalUIGuildMemberDisplayInfo& DisplayInfo);
    void SetPlayerName(FString PlayerName);
    void SetIsAdmin(bool IsAdmin);
    void Setup(FPalUIGuildMemberDisplayInfo DisplayInfo, FGuid PlayerUId);
    void SetIsOnline(bool IsOnline);
    void BndEvt__WBP_Guild_MemberList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Guild_MemberList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Guild_MemberList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Guild_MemberList(int32 EntryPoint);
    void OnHovered__DelegateSignature(class UWBP_Guild_MemberList_C* Widget);
    void OnClicked__DelegateSignature(class UWBP_Guild_MemberList_C* Widget);
};

#endif
