#ifndef UE4SS_SDK_WBP_IngameMenu_Chest_Filter_HPP
#define UE4SS_SDK_WBP_IngameMenu_Chest_Filter_HPP

class UWBP_IngameMenu_Chest_Filter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UOverlay* Overlay_Desc;
    class UBP_PalTextBlock_C* Text_GuildMenberHead;
    class UWBP_CommonButton_1_C* WBP_CommonButton_CheckAll;
    class UWBP_CommonButton_1_C* WBP_CommonButton_Confirm;
    class UWBP_CommonButton_1_C* WBP_CommonButton_UncheckAll;
    class UWBP_IngameMenu_Chest_FilterContent_C* WBP_IngameMenu_Chest_FilterContent;
    class UWBP_IngameMenu_Chest_FilterContent_C* WBP_IngameMenu_Chest_FilterContent_1;
    class UWBP_IngameMenu_Chest_FilterContent_C* WBP_IngameMenu_Chest_FilterContent_2;
    class UWBP_IngameMenu_Chest_FilterContent_C* WBP_IngameMenu_Chest_FilterContent_3;
    class UWBP_IngameMenu_Chest_FilterContent_C* WBP_IngameMenu_Chest_FilterContent_4;
    class UWBP_IngameMenu_Chest_FilterContent_C* WBP_IngameMenu_Chest_FilterContent_5;
    class UWBP_IngameMenu_Chest_FilterContent_C* WBP_IngameMenu_Chest_FilterContent_6;
    class UWBP_IngameMenu_Chest_FilterContent_C* WBP_IngameMenu_Chest_FilterContent_7;
    class UWBP_IngameMenu_Chest_FilterContent_C* WBP_IngameMenu_Chest_FilterContent_8;
    class UWBP_IngameMenu_Chest_FilterContent_C* WBP_IngameMenu_Chest_FilterContent_9;
    class UWBP_IngameMenu_Chest_FilterContent_C* WBP_IngameMenu_Chest_FilterContent_10;
    class UWBP_IngameMenu_Chest_FilterContent_C* WBP_IngameMenu_Chest_FilterContent_11;
    class UWBP_IngameMenu_Chest_FilterContent_C* WBP_IngameMenu_Chest_FilterContent_12;
    class UWBP_Menu_btn_C* WBP_Menu_btn;
    class UWBP_PalCommonWindow_C* WBP_PalCommonWindow;
    class UWrapBox* WrapBox_FilterList;
    FWBP_IngameMenu_Chest_Filter_COnClickedCloseButton OnClickedCloseButton;
    void OnClickedCloseButton();
    FWBP_IngameMenu_Chest_Filter_COnClickedAllCheckButton OnClickedAllCheckButton;
    void OnClickedAllCheckButton();
    FWBP_IngameMenu_Chest_Filter_COnClickedAllUncheckButton OnClickedAllUncheckButton;
    void OnClickedAllUncheckButton();
    FWBP_IngameMenu_Chest_Filter_COnClickedApplyButton OnClickedApplyButton;
    void OnClickedApplyButton();

    void FocusToConfirmButton();
    void SetAllChecker(bool Checked);
    void SetupAsItemFilter();
    class UWBP_IngameMenu_Chest_FilterContent_C* AddContentItem(FName FilterId, FName FilterTextId);
    void ClearContent();
    void GetDesiredFocusTarget(class UWidget*& NewParam);
    void BndEvt__WBP_IngameMenu_Chest_Filter_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_Chest_Filter_WBP_CommonButton_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_Chest_Filter_WBP_CommonButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_Chest_Filter_WBP_CommonButton_Confirm_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_IngameMenu_Chest_Filter(int32 EntryPoint);
    void OnClickedApplyButton__DelegateSignature();
    void OnClickedAllUncheckButton__DelegateSignature();
    void OnClickedAllCheckButton__DelegateSignature();
    void OnClickedCloseButton__DelegateSignature();
};

#endif
