#ifndef UE4SS_SDK_WBP_CharaCre_PlayerNameEdit_HPP
#define UE4SS_SDK_WBP_CharaCre_PlayerNameEdit_HPP

class UWBP_CharaCre_PlayerNameEdit_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_57;
    class UPalEditableTextBox* PalEditableTextBox_83;
    class UBP_PalTextBlock_C* Text_Head;
    class UWBP_CommonButton_C* WBP_CommonButton;
    class UWBP_Menu_btn_C* WBP_Menu_btn;
    class UWBP_PalCommonWindow_C* WBP_PalCommonWindow;
    FDataTableRowHandle NoPlayerNameMsgID;
    FDataTableRowHandle NoPalNameMsgID;
    int32 MaxNameLength;
    FPalDataTableRowName_UIInputAction ShortcutConfirmInputAction;
    FPalUIActionBindData ShortcutConfirmInputActionHandle;
    bool ForPlayer;
    FDataTableRowHandle TitleMsgID_Player;
    FDataTableRowHandle TitleMsgID_Pal;

    void ClampInputName(FText InText, FText& clampedNickName);
    void OnShortcutConfirm();
    class UWidget* BP_GetDesiredFocusTarget();
    void SetEnableConfirmButton(bool IsEnable);
    void OnSetup();
    void BndEvt__WBP_CharaCre_PlayerNameEdit_WBP_CommonButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void BndEvt__WBP_CharaCre_PlayerNameEdit_WBP_Menu_btn_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature();
    void OnCancelAction();
    void BndEvt__WBP_CharaCre_PlayerNameEdit_PalEditableTextBox_83_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__WBP_CharaCre_PlayerNameEdit_PalEditableTextBox_83_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
    void ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit(int32 EntryPoint);
};

#endif
