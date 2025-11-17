#ifndef UE4SS_SDK_WBP_MainMenu_Pal_Skill_Active_HPP
#define UE4SS_SDK_WBP_MainMenu_Pal_Skill_Active_HPP

class UWBP_MainMenu_Pal_Skill_Active_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anim_Empty;
    class UWidgetAnimation* Anm_NormalToFocus;
    class UWidgetAnimation* Anm_Click;
    class UWidgetAnimation* Anm_Focus;
    class UWidgetAnimation* Anm_Normal;
    class UImage* Image_Element;
    class UImage* Image_Selected;
    class UImage* Image_Selected_1;
    class UImage* SkillBase;
    class UBP_PalTextBlock_C* Text_WazaName;
    class UBP_PalTextBlock_C* Text_WazaPower;
    class UWBP_MainMenu_Cursor_C* WBP_MainMenu_Cursor;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    FWBP_MainMenu_Pal_Skill_Active_COnHovered OnHovered;
    void OnHovered(class UWBP_MainMenu_Pal_Skill_Active_C* SelfWidget);
    FWBP_MainMenu_Pal_Skill_Active_COnUnhovered OnUnhovered;
    void OnUnhovered(class UWBP_MainMenu_Pal_Skill_Active_C* SelfWidget);
    EPalWazaID BindedWazaID;
    FWBP_MainMenu_Pal_Skill_Active_COnClicked OnClicked;
    void OnClicked(class UWBP_MainMenu_Pal_Skill_Active_C* SelfWidget);
    TMap<class EPalElementType, class TSoftObjectPtr<UTexture2D>> ElementTextureMap;
    FDataTableRowHandle EmptySlotMsgID;

    void SetEmptyInfo();
    void GetBindedWazaID(EPalWazaID& WazaID);
    void Clear();
    void SetWazaID(EPalWazaID WazaID);
    void AnmEvent_Selected();
    void AnmEvent_Unselcted();
    void Construct();
    void BndEvt__WBP_MainMenu_Pal_Skill_Active_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MainMenu_Pal_Skill_Active_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MainMenu_Pal_Skill_Active_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_MainMenu_Pal_Skill_Active(int32 EntryPoint);
    void OnClicked__DelegateSignature(class UWBP_MainMenu_Pal_Skill_Active_C* SelfWidget);
    void OnUnhovered__DelegateSignature(class UWBP_MainMenu_Pal_Skill_Active_C* SelfWidget);
    void OnHovered__DelegateSignature(class UWBP_MainMenu_Pal_Skill_Active_C* SelfWidget);
};

#endif
