#ifndef UE4SS_SDK_WBP_Menu_Pal_Potencial_HPP
#define UE4SS_SDK_WBP_Menu_Pal_Potencial_HPP

class UWBP_Menu_Pal_Potencial_C : public UUserWidget
{
    class UBP_PalTextBlock_C* BPPalTextBlock_HP_1;
    class UImage* Image_14;
    class UImage* Image_15;
    class UImage* Image_16;
    class UImage* Image_47;
    class UImage* Image_96;
    class UImage* Image_145;
    class UImage* Image_Frame;
    class UBP_PalTextBlock_C* Text_ATK;
    class UBP_PalTextBlock_C* Text_DEF;
    class UBP_PalTextBlock_C* Text_HP;

    void GetRankText(int32 TalentValue, FText& RankText);
    void SetupByParameter(class UPalIndividualCharacterParameter* TargetParameter);
    void SetupByNum(int32 Talent_HP, int32 Talent_Attack, int32 Talent_Defense);
};

#endif
