#ifndef UE4SS_SDK_WBP_MenuESC_PlayerBlockListPopup_HPP
#define UE4SS_SDK_WBP_MenuESC_PlayerBlockListPopup_HPP

class UWBP_MenuESC_PlayerBlockListPopup_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_224;
    class UImage* Image_225;
    class UImage* Image_226;
    class UImage* Image_227;
    class UWBP_PalCommonScrollList_C* TRASH_WBP_PalCommonScrollList_Members_0;
    class UWBP_Menu_btn_C* WBP_Menu_btn;
    class UWBP_PalCommonWindow_C* WBP_PalCommonWindow;
    FWBP_MenuESC_PlayerBlockListPopup_COnCloseBlockList OnCloseBlockList;
    void OnCloseBlockList();
    class UWBP_MenuESCPlayerBlockListItem_C* WBP_MenuESCPlayerBlockItem;

    class UWidget* BP_GetDesiredFocusTarget();
    void OnSessionMemberUnBlockList(FString UserId);
    void CreateBlockList();
    void OnInitialized();
    void BndEvt__WBP_MenuESC_PlayerBlockListPopup_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void OnClose();
    void OnSetup();
    void ExecuteUbergraph_WBP_MenuESC_PlayerBlockListPopup(int32 EntryPoint);
    void OnCloseBlockList__DelegateSignature();
};

#endif
