#ifndef UE4SS_SDK_WBP_PalWorkerInfo_HPP
#define UE4SS_SDK_WBP_PalWorkerInfo_HPP

class UWBP_PalWorkerInfo_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Close;
    class UWidgetAnimation* Anm_Open;
    class UHorizontalBox* HorizontalBox_PalWorkIcon;
    class UProgressBar* ProgressBar_HPGauge;
    class UProgressBar* ProgressBar_HungerGauge;
    class UBP_PalTextBlock_C* Text_MaxSanity;
    class UBP_PalTextBlock_C* Text_NowSanity;
    class UBP_PalTextBlock_C* Text_PalLV;
    class UBP_PalTextBlock_C* Text_PalLVNum;
    class UBP_PalTextBlock_C* Text_PalName;
    class UBP_PalTextBlock_C* Text_SANTitle;
    class UBP_PalTextBlock_C* Text_WorkerComment;
    class UBP_PalTextBlock_C* Text_WorkTypeName;
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive;
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive_1;
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive_2;
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive_3;
    class UWBP_MainMenu_Pal_State_C* WBP_MainMenu_Pal_State_0;
    class UWBP_MainMenu_Pal_State_C* WBP_MainMenu_Pal_State_1;
    class UWBP_MainMenu_Pal_State_C* WBP_MainMenu_Pal_State_2;
    class UMaterial* defaultSanityTextMaterial;
    TArray<class UWBP_MainMenu_Pal_State_C*> ConditionWidgetArray;
    TArray<class UWBP_MainMenu_Pal_Skill_Passive_C*> PassiveSkillWidget;
    TMap<class EPalWorkSuitability, class UWBP_MainMenu_Pal_WorkIcon_C*> WorkSuitabilityWidgetMap;

    void OnUpdateCondition_Binded();
    void SetPassiveSkill(TArray<FName>& PassiveSkills);
    void Set Work Suitability(TMap<EPalWorkSuitability, int32> WorkSuitabilities);
    void Check Valid Work Suitability(EPalWorkSuitability InWorkSuitability, bool& IsValid, EPalWorkSuitability& OutWorkSuitability);
    void UpdateHunger(double nowHunger, double nowMaxHunger);
    void UpdateLevel(int32 NewLevel);
    void UpdateNickname(FString NewNickName);
    void UpdateSanity(double nowSanity, double nowMaxSanity);
    void UpdateHP(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    void SetWorkerComment(class UPalIndividualCharacterHandle* targetHandle);
    void SetWorkType(class UPalIndividualCharacterHandle* targetHandle);
    void Setup(class UPalIndividualCharacterHandle* targetHandle);
    void AnmEvent_Open();
    void AnmEvent_Close();
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalWorkerInfo(int32 EntryPoint);
};

#endif
