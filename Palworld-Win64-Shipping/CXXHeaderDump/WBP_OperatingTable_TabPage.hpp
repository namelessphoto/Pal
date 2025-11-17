#ifndef UE4SS_SDK_WBP_OperatingTable_TabPage_HPP
#define UE4SS_SDK_WBP_OperatingTable_TabPage_HPP

class UWBP_OperatingTable_TabPage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_GenderChange;
    class UWidgetAnimation* Anm_GenderDefault;
    class UWidgetAnimation* Anm_ON;
    class UWidgetAnimation* Anm_Empty;
    class UCanvasPanel* Canvas_Gender;
    class UCanvasPanel* Canvas_PassiveSkill;
    class UCanvasPanel* Canvas_ResetInfo;
    class UCanvasPanel* Canvas_Skill;
    class UCanvasPanel* CanvasPanel_Overall;
    class UHorizontalBox* HorizontalBox_Money;
    class UImage* Image_Item_Selectframe;
    class UImage* Image_NoItem;
    class UImage* Image_Skill_Selectframe;
    class UImage* Image_Symbol_After;
    class UImage* Image_Symbol_Before;
    class UImage* Image_Symbol_Result;
    class UBP_PalTextBlock_C* Text_PassiveName;
    class UBP_PalTextBlock_C* Text_RequireMoney_Num;
    class UBP_PalTextBlock_C* Text_SkillSelectGuide;
    class UBP_PalTextBlock_C* Text_Warning;
    class UVerticalBox* VerticalBox_87;
    class UWBP_CommonButton_C* WBP_CommonButton;
    class UWBP_IngameMenu_WorkSpace_Item_C* WBP_IngameMenu_WorkSpace_Item;
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive;
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive_1;
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive_2;
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive_3;
    class UWBP_NoData_C* WBP_NoData;
    class UWBP_PalInGameMenuItemIcon_C* WBP_PalInGameMenuItemIcon;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    FWBP_OperatingTable_TabPage_COnRequireChangeSelectItem OnRequireChangeSelectItem;
    void OnRequireChangeSelectItem();
    TArray<class UWBP_MainMenu_Pal_Skill_Passive_C*> Passives;
    class UPalIndividualCharacterParameter* CachedCharacter;
    FWBP_OperatingTable_TabPage_COnSelectedPassiveIndex OnSelectedPassiveIndex;
    void OnSelectedPassiveIndex(int32 Index);
    FWBP_OperatingTable_TabPage_COnHoveredOtomoPassiveSlot OnHoveredOtomoPassiveSlot;
    void OnHoveredOtomoPassiveSlot(class UWBP_MainMenu_Pal_Skill_Passive_C* Widget);
    FWBP_OperatingTable_TabPage_COnUnhoveredOtomoPassiveSlot OnUnhoveredOtomoPassiveSlot;
    void OnUnhoveredOtomoPassiveSlot();
    int32 CachedPassiveSlotIndex;
    bool EnabledButton;
    FWBP_OperatingTable_TabPage_CRequestChangePassiveSkill RequestChangePassiveSkill;
    void RequestChangePassiveSkill(FName PassiveId, int32 SlotIndex);
    TArray<FName> CurrentPassiveList;
    FWBP_OperatingTable_TabPage_CRequestChangeGender RequestChangeGender;
    void RequestChangeGender(class UPalIndividualCharacterParameter* CharacterParam);
    FName CurrentPassiveId;
    int32 CurrentRequireMoney;

    void ReflectGenderChange();
    void ReflectPassiveChange();
    void Update Button State();
    void OnUnhoveredPassiveSlot(class UWBP_MainMenu_Pal_Skill_Passive_C* SelfWidget);
    void OnHoveredPassiveSlot(class UWBP_MainMenu_Pal_Skill_Passive_C* SelfWidget);
    void GetFocusTarget(class UWidget*& Widget);
    void OnSelectPassiveSlot(class UWBP_MainMenu_Pal_Skill_Passive_C* SelfWidget);
    void Set Gender Reverse();
    void Set Passive Has Item(FName PassiveId);
    void Set Passive Empty Item();
    void SwitchPanel(bool ToPassive);
    void Anm_EmptyLoop();
    void Anm_SetItem();
    void AnmEvent_GenderReverse();
    void AnmEvent_GenderPanelDefault();
    void BndEvt__WBP_OperatingTable_TabPage_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void OnInitialized();
    void Construct();
    void BndEvt__WBP_OperatingTable_TabPage_WBP_CommonButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void ConfirmPassiveOperate(bool OK);
    void ExecuteUbergraph_WBP_OperatingTable_TabPage(int32 EntryPoint);
    void RequestChangeGender__DelegateSignature(class UPalIndividualCharacterParameter* CharacterParam);
    void RequestChangePassiveSkill__DelegateSignature(FName PassiveId, int32 SlotIndex);
    void OnUnhoveredOtomoPassiveSlot__DelegateSignature();
    void OnHoveredOtomoPassiveSlot__DelegateSignature(class UWBP_MainMenu_Pal_Skill_Passive_C* Widget);
    void OnSelectedPassiveIndex__DelegateSignature(int32 Index);
    void OnRequireChangeSelectItem__DelegateSignature();
};

#endif
