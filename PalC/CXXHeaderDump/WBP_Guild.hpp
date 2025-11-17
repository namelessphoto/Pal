#ifndef UE4SS_SDK_WBP_Guild_HPP
#define UE4SS_SDK_WBP_Guild_HPP

class UWBP_Guild_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Log_NormalToFocus;
    class UPalEditableTextBox* EditableTextBox_GuildName;
    class UCanvasPanel* GuildMember;
    class UImage* Image_2;
    class UImage* Image_3;
    class UImage* Image_60;
    class UImage* Image_NameBase;
    class UImage* Image_NameBase_1;
    class UImage* Image_Symbol;
    class UBP_PalTextBlock_C* Text_GuildMemberNum;
    class UWBP_GuildButton_C* WBP_GuildButton_Leave;
    class UWBP_GuildButton_C* WBP_GuildButton_Rename;
    class UWBP_GuildHeadButton_C* WBP_GuildHeadButton;
    class UWBP_PalCommonScrollList_C* WBP_PalCommonScrollList_Members;
    FWBP_Guild_COnClickedEditGuildNameButton OnClickedEditGuildNameButton;
    void OnClickedEditGuildNameButton();
    FWBP_Guild_COnChangedGuildLogCategory OnChangedGuildLogCategory;
    void OnChangedGuildLogCategory(FString SelectedCategoryName);
    FWBP_Guild_COnClickedGuildMemberButton OnClickedGuildMemberButton;
    void OnClickedGuildMemberButton(class UWBP_Guild_MemberList_C* Widget);
    TSoftObjectPtr<UWBP_Guild_MemberList_C> LastHoveredSoftGuildButton;
    FWBP_Guild_COnClickedLeaveButton OnClickedLeaveButton;
    void OnClickedLeaveButton();
    FWBP_Guild_COnClickedGuildSettingButton OnClickedGuildSettingButton;
    void OnClickedGuildSettingButton();
    FWBP_Guild_COnCommiedGuildName OnCommiedGuildName;
    void OnCommiedGuildName(FString NewName);
    TMap<class FGuid, class UWBP_Guild_MemberList_C*> DisplayWidgetMap;
    FString OriginalGuildName;
    FText TempEditableTextBox_GuildNameText;

    void SetEnableGuildNameEditButton(bool IsEnableFlag);
    class UWidget* CustomNavi_ToGuildLeaveOrNameEdit(EUINavigation Navigation);
    void IsNameEditMode(bool& IsEditing);
    void SetGuildMemberNum(int32 NowMemberNum, int32 MaxMemberNum);
    void SetFocusToExitGuildButton();
    void SetEnableGuildExitButton(bool CanExit);
    class UWidget* CustomNavi_LastHoveredGuildMember(EUINavigation Navigation);
    void OnHoveredGuildMemberButton_Internal(class UWBP_Guild_MemberList_C* Widget);
    void OnClickedGuildMemberButton_Internal(class UWBP_Guild_MemberList_C* Widget);
    void GetTopMemberFocusTarget(class UWidget*& TopButton);
    void SetGuildLogCategoryOptions(TArray<FString>& Options);
    void EndGuildNameEditMode();
    void StartGuildNameMode();
    void RemoveMemberInfo(FGuid PlayerUId);
    void ClearMemberList();
    void UpdateMemberInfo(FGuid PlayerUId, FPalUIGuildMemberDisplayInfo NewDisplayInfo);
    void AddGuildMemberInfo(FGuid PlayerUId, FPalUIGuildMemberDisplayInfo DisplayInfo);
    void AddGuildMemberInfoMap(TMap<class FGuid, class FPalUIGuildMemberDisplayInfo> DisplayInfoMap);
    void SetGuildName(FString InGuildName, FGuid AdminPlayerUId);
    void Construct();
    void BndEvt__WBP_Guild_WBP_GuildButton_Leave_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
    void Destruct();
    void BndEvt__WBP_Guild_WBP_GuildButton_Rename_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
    void BndEvt__WBP_Guild_PalEditableTextBox_60_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__WBP_Guild_PalEditableTextBox_60_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
    void ExecuteUbergraph_WBP_Guild(int32 EntryPoint);
    void OnCommiedGuildName__DelegateSignature(FString NewName);
    void OnClickedGuildSettingButton__DelegateSignature();
    void OnClickedLeaveButton__DelegateSignature();
    void OnClickedGuildMemberButton__DelegateSignature(class UWBP_Guild_MemberList_C* Widget);
    void OnChangedGuildLogCategory__DelegateSignature(FString SelectedCategoryName);
    void OnClickedEditGuildNameButton__DelegateSignature();
};

#endif
