#ifndef UE4SS_SDK_WBP_MenuESCPlayerListItem_HPP
#define UE4SS_SDK_WBP_MenuESCPlayerListItem_HPP

class UWBP_MenuESCPlayerListItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_NormalToFocus;
    class UImage* Base;
    class UHorizontalBox* Horizontal_KeyGuide_Equip;
    class UHorizontalBox* Horizontal_KeyGuide_Move;
    class UImage* Image_Icon;
    class UImage* Image_Icon_MuteBlock;
    class UBP_PalTextBlock_C* Text_Equip;
    class UBP_PalTextBlock_C* Text_PlayerName;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_1;
    FDataTableRowHandle OnlineMsgID;
    FDataTableRowHandle OfflineMsgID;
    FWBP_MenuESCPlayerListItem_COnClicked OnClicked;
    void OnClicked(class UWBP_Guild_MemberList_C* Widget);
    FPalUIGuildMemberDisplayInfo MyDisplayInfo;
    FWBP_MenuESCPlayerListItem_COnHovered OnHovered;
    void OnHovered(class UWBP_Guild_MemberList_C* Widget);
    FString Player UId;
    FString Player Name;
    FString User Id;
    class UTexture2D* Texture;
    FWBP_MenuESCPlayerListItem_COnRightClicked OnRightClicked;
    void OnRightClicked(class UWBP_MenuESCPlayerListItem_C* ButtonBase);
    FString Display Player Name;
    bool IsSamePlatform;

    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void BlockPlayerUId(FString InPlayerUId, FString InPlayerName);
    void MutePlayerUId(FString InPlayerUId, FString InPlayerName);
    void CopyPlayerUId(FString InPlayerUId, FString InPlayerName);
    void CopyUserId(FString InUserId, FString InPlayerName);
    void On Right Clicked Internal();
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void GetFocusTarget(class UWidget*& TargetWidget);
    void GetDisplayInfo(FPalUIGuildMemberDisplayInfo& DisplayInfo);
    void SetPlayerName(FString PlayerName);
    void Setup(FString PlayerName, FString PlayerUId, FString UserId, FString NickName, EPalPlayerPlatform PlayerPlatform, bool bMute);
    void カスタムイベント(bool bResult);
    void BndEvt__WBP_Guild_MemberList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Guild_MemberList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Guild_MemberList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_MenuESCPlayerListItem(int32 EntryPoint);
    void OnRightClicked__DelegateSignature(class UWBP_MenuESCPlayerListItem_C* ButtonBase);
    void OnHovered__DelegateSignature(class UWBP_Guild_MemberList_C* Widget);
    void OnClicked__DelegateSignature(class UWBP_Guild_MemberList_C* Widget);
};

#endif
