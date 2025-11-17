#ifndef UE4SS_SDK_WBP_IngameMenu_Chest_Filter_HPP
#define UE4SS_SDK_WBP_IngameMenu_Chest_Filter_HPP

class UWBP_IngameMenu_Chest_Filter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UOverlay* Overlay_Desc;                                                     // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* Text_GuildMenberHead;                                   // 0x0288 (size: 0x8)
    class UWBP_CommonButton_1_C* WBP_CommonButton_CheckAll;                           // 0x0290 (size: 0x8)
    class UWBP_CommonButton_1_C* WBP_CommonButton_Confirm;                            // 0x0298 (size: 0x8)
    class UWBP_CommonButton_1_C* WBP_CommonButton_UncheckAll;                         // 0x02A0 (size: 0x8)
    class UWBP_IngameMenu_Chest_FilterContent_C* WBP_IngameMenu_Chest_FilterContent;  // 0x02A8 (size: 0x8)
    class UWBP_IngameMenu_Chest_FilterContent_C* WBP_IngameMenu_Chest_FilterContent_1; // 0x02B0 (size: 0x8)
    class UWBP_IngameMenu_Chest_FilterContent_C* WBP_IngameMenu_Chest_FilterContent_2; // 0x02B8 (size: 0x8)
    class UWBP_IngameMenu_Chest_FilterContent_C* WBP_IngameMenu_Chest_FilterContent_3; // 0x02C0 (size: 0x8)
    class UWBP_IngameMenu_Chest_FilterContent_C* WBP_IngameMenu_Chest_FilterContent_4; // 0x02C8 (size: 0x8)
    class UWBP_IngameMenu_Chest_FilterContent_C* WBP_IngameMenu_Chest_FilterContent_5; // 0x02D0 (size: 0x8)
    class UWBP_IngameMenu_Chest_FilterContent_C* WBP_IngameMenu_Chest_FilterContent_6; // 0x02D8 (size: 0x8)
    class UWBP_IngameMenu_Chest_FilterContent_C* WBP_IngameMenu_Chest_FilterContent_7; // 0x02E0 (size: 0x8)
    class UWBP_IngameMenu_Chest_FilterContent_C* WBP_IngameMenu_Chest_FilterContent_8; // 0x02E8 (size: 0x8)
    class UWBP_IngameMenu_Chest_FilterContent_C* WBP_IngameMenu_Chest_FilterContent_9; // 0x02F0 (size: 0x8)
    class UWBP_IngameMenu_Chest_FilterContent_C* WBP_IngameMenu_Chest_FilterContent_10; // 0x02F8 (size: 0x8)
    class UWBP_IngameMenu_Chest_FilterContent_C* WBP_IngameMenu_Chest_FilterContent_11; // 0x0300 (size: 0x8)
    class UWBP_IngameMenu_Chest_FilterContent_C* WBP_IngameMenu_Chest_FilterContent_12; // 0x0308 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x0310 (size: 0x8)
    class UWBP_PalCommonWindow_C* WBP_PalCommonWindow;                                // 0x0318 (size: 0x8)
    class UWrapBox* WrapBox_FilterList;                                               // 0x0320 (size: 0x8)
    FWBP_IngameMenu_Chest_Filter_COnClickedCloseButton OnClickedCloseButton;          // 0x0328 (size: 0x10)
    void OnClickedCloseButton();
    FWBP_IngameMenu_Chest_Filter_COnClickedAllCheckButton OnClickedAllCheckButton;    // 0x0338 (size: 0x10)
    void OnClickedAllCheckButton();
    FWBP_IngameMenu_Chest_Filter_COnClickedAllUncheckButton OnClickedAllUncheckButton; // 0x0348 (size: 0x10)
    void OnClickedAllUncheckButton();
    FWBP_IngameMenu_Chest_Filter_COnClickedApplyButton OnClickedApplyButton;          // 0x0358 (size: 0x10)
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
}; // Size: 0x368

#endif
