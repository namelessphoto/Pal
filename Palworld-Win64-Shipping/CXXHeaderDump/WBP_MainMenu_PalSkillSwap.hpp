#ifndef UE4SS_SDK_WBP_MainMenu_PalSkillSwap_HPP
#define UE4SS_SDK_WBP_MainMenu_PalSkillSwap_HPP

class UWBP_MainMenu_PalSkillSwap_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Open;
    class UImage* BaseBlack;
    class UBP_PalTextBlock_C* BP_PalTextBlock_Title;
    class UVerticalBox* VerticalBox_SkillList;
    class UWBP_MainMenu_Pal_Skill_Active_C* WBP_MainMenu_Pal_Skill_Active;
    class UWBP_MainMenu_Pal_Skill_Active_C* WBP_MainMenu_Pal_Skill_Active_1;
    class UWBP_MainMenu_PalSkillInfo_C* WBP_MainMenu_PalSkillInfo;
    FWBP_MainMenu_PalSkillSwap_COnSelected OnSelected;
    void OnSelected(EPalWazaID SelectedWazaId);
    FDataTableRowHandle SkillSwapMsgID;
    FDataTableRowHandle SkillSwapNothingMsgID;

    class UWidget* BP_GetDesiredFocusTarget();
    FEventReply On_BaseBlack_MouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnClicked_Internal(class UWBP_MainMenu_Pal_Skill_Active_C* SkillWidget);
    void OnUnhovered_Internal(class UWBP_MainMenu_Pal_Skill_Active_C* SkillWidget);
    void OnHovered_Internal(class UWBP_MainMenu_Pal_Skill_Active_C* SkillWidget);
    void Setup(TArray<EPalWazaID>& MasteredSkills, TArray<EPalWazaID>& EquipedSkills);
    void OnSetup();
    void OnClosed();
    void Destruct();
    void ExecuteUbergraph_WBP_MainMenu_PalSkillSwap(int32 EntryPoint);
    void OnSelected__DelegateSignature(EPalWazaID SelectedWazaId);
};

#endif
