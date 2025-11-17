#ifndef UE4SS_SDK_WBP_MainMenu_Pal_Skill_Passive_HPP
#define UE4SS_SDK_WBP_MainMenu_Pal_Skill_Passive_HPP

class UWBP_MainMenu_Pal_Skill_Passive_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_EmptySlot_HideToShow;
    class UWidgetAnimation* Anm_SkillUpdate;
    class UWidgetAnimation* Anm_Default;
    class UWidgetAnimation* Anm_Selected;
    class UWidgetAnimation* Anm_CommonFocus;
    class UWidgetAnimation* Anm_ChangeFrame;
    class UWidgetAnimation* AnmDebuff_Normal;
    class UWidgetAnimation* Anm_Buff_Normal;
    class UWidgetAnimation* Anm_Rare2_Normal;
    class UWidgetAnimation* Anm_Rare_Normal;
    class UCanvasPanel* CanvasPanel_Info;
    class UImage* IconRankArrow;
    class UBP_PalTextBlock_C* Text_SkillName;
    class UWBP_MainMenu_Cursor_C* WBP_MainMenu_Cursor;
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;
    FWBP_MainMenu_Pal_Skill_Passive_COnHovered OnHovered;
    void OnHovered(class UWBP_MainMenu_Pal_Skill_Passive_C* SelfWidget);
    FWBP_MainMenu_Pal_Skill_Passive_COnUnhovered OnUnhovered;
    void OnUnhovered(class UWBP_MainMenu_Pal_Skill_Passive_C* SelfWidget);
    FName BindedPassiveSkillName;
    FWBP_MainMenu_Pal_Skill_Passive_COnClicked OnClicked;
    void OnClicked(class UWBP_MainMenu_Pal_Skill_Passive_C* SelfWidget);

    void GetBindedPassiveSkillName(FName& PassiveSkillName);
    void Clear();
    void SetPassiveSkill(FName SkillName);
    void AnmEvent_Rare();
    void AnmEvent_Bad();
    void AnmEvent_Common();
    void AnmEvent_Rare2();
    void AnmEvent_Selected();
    void AnmEvent_Unselect();
    void AnmEvent_Update();
    void AnmEvent_ShowEmptySlot();
    void AnmEvent_HideEmptySlot();
    void Construct();
    void BndEvt__WBP_MainMenu_Pal_Skill_Passive_WBP_PalCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MainMenu_Pal_Skill_Passive_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MainMenu_Pal_Skill_Passive_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_MainMenu_Pal_Skill_Passive(int32 EntryPoint);
    void OnClicked__DelegateSignature(class UWBP_MainMenu_Pal_Skill_Passive_C* SelfWidget);
    void OnUnhovered__DelegateSignature(class UWBP_MainMenu_Pal_Skill_Passive_C* SelfWidget);
    void OnHovered__DelegateSignature(class UWBP_MainMenu_Pal_Skill_Passive_C* SelfWidget);
};

#endif
