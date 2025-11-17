#ifndef UE4SS_SDK_WBP_Arena_RuleSetting_HPP
#define UE4SS_SDK_WBP_Arena_RuleSetting_HPP

class UWBP_Arena_RuleSetting_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalTextBlock_C* BP_PalTextBlock_RestrictOtomo;
    class UCanvasPanel* CanvasPanel_Matching;
    class UImage* Image_RankIcon;
    class UScrollBox* ScrollBox;
    class UBP_PalTextBlock_C* Text_PlayerName_Lv;
    class UBP_PalTextBlock_C* Text_PlayerName_P1;
    class UWBP_Arena_PalIcon_C* WBP_Arena_PalIcon;
    class UWBP_Arena_PalIcon_C* WBP_Arena_PalIcon_1;
    class UWBP_Arena_PalIcon_C* WBP_Arena_PalIcon_2;
    class UWBP_Arena_PalIcon_C* WBP_Arena_PalIcon_3;
    class UWBP_Arena_PalIcon_C* WBP_Arena_PalIcon_4;
    class UWBP_Arena_Rule_ListGroup_C* WBP_Arena_Rule_ListGroup;
    class UWBP_Arena_RuleSetting_Pal_C* WBP_Arena_RuleSetting_Pal;
    class UWBP_CommonButton_C* WBP_CommonButton;
    class UWBP_IngameMenu_PalBox_PalDetail_C* WBP_IngameMenu_PalBox_PalDetail;
    class UWBP_MainMenu_PalSkillInfo_C* WBP_MainMenu_PalSkillInfo;
    class UWBP_Menu_btn_C* WBP_Menu_btn;
    class UPalHUDDispatchParameter_ArenaRule* ArenaRuleParamter;
    FPalArenaRule CurrentRule;
    TArray<class UWBP_Arena_PalIcon_C*> OtomoPalIcons;
    FPalUIActionBindData SaveRuleAction;
    FPalUIActionBindData DefaultRuleAction;

    void SaveRule();
    void SetDefaultRule();
    class UWidget* BP_GetDesiredFocusTarget();
    void RefreshOtomoRestriction();
    void CancelAction();
    void ShowRestrictPalDetail();
    void OnotomoIconUnhovered();
    void OnOtomoIconHovered(class UWBP_Arena_PalIcon_C* Icon);
    void OnRuleChanged(FPalArenaRule NewRule);
    void Setup();
    void BndEvt__WBP_Arena_RuleSetting_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void OnSetup();
    void BndEvt__WBP_Arena_RuleSetting_WBP_CommonButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void OnInitialized();
    void Construct();
    void BndEvt__WBP_Arena_RuleSetting_WBP_Arena_RuleSetting_Pal_K2Node_ComponentBoundEvent_2_OnCloseButtonClicked__DelegateSignature();
    void BndEvt__WBP_Arena_RuleSetting_WBP_Arena_RuleSetting_Pal_K2Node_ComponentBoundEvent_3_OnToggleCharacterRestrict__DelegateSignature(FName CharacterID, class UWBP_Arena_RuleSetting_PalListButton_C* Widget);
    void BndEvt__WBP_Arena_RuleSetting_WBP_Arena_RuleSetting_Pal_K2Node_ComponentBoundEvent_4_OnChangeAll__DelegateSignature(bool IsBan);
    void BndEvt__WBP_Arena_RuleSetting_WBP_Arena_Rule_ListGroup_K2Node_ComponentBoundEvent_5_ToggleLevelSyncInfo__DelegateSignature(bool Show);
    void ExecuteUbergraph_WBP_Arena_RuleSetting(int32 EntryPoint);
};

#endif
