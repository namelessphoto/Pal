#ifndef UE4SS_SDK_WBP_MainMenu_Pal_Skill_Unique_HPP
#define UE4SS_SDK_WBP_MainMenu_Pal_Skill_Unique_HPP

class UWBP_MainMenu_Pal_Skill_Unique_C : public UUserWidget
{
    class UWidgetAnimation* Anm_NormalToFocus;
    class UImage* Image_63;
    class UImage* SkillBase;
    class UBP_PalTextBlock_C* Text_WazaLv;
    class UBP_PalTextBlock_C* Text_WazaLvNum;
    class UBP_PalTextBlock_C* Text_WazaName;
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;

    void SetupBySaveParameter(FPalIndividualCharacterSaveParameter Parameter, bool ShowLv);
    void SetupFromHandle(class UPalIndividualCharacterHandle* IndividualHandle);
};

#endif
