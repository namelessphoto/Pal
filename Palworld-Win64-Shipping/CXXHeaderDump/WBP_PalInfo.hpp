#ifndef UE4SS_SDK_WBP_PalInfo_HPP
#define UE4SS_SDK_WBP_PalInfo_HPP

class UWBP_PalInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_TextToBonus;
    class UWidgetAnimation* Anm_BonusToText;
    class UWidgetAnimation* Anm_Close;
    class UWidgetAnimation* Anm_Open;
    class UCanvasPanel* Canvas_Passive;
    class UBP_PalRichTextBlock_C* RichText_Info;
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive;
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive_1;
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive_2;
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive_3;
    class UWBP_Paldex_Task_C* WBP_Paldex_Task;
    class UWBP_PalGet_s_C* WBP_PalGet_s;
    bool isDisplaying;
    TArray<FName> stackedCharacterId;
    TArray<class UWBP_MainMenu_Pal_Skill_Passive_C*> PassiveSkillWidgetArray;
    TArray<FFPalUIPalInfoDisplayData> stackedGetInfo;
    TMap<TEnumAsByte<EPalUIPalInfoType>, double> displayTimeMap;
    FTimerHandle CloseTimerHandle;
    FDataTableRowHandle captureTitleMagId;
    FDataTableRowHandle firstCaptureTitleMagId;
    FDataTableRowHandle firstActivatedTitleMagId;
    FTimerHandle DetailChangeTimer;
    bool IsAfterOpenedBonusActivate;
    FFPalUIPalInfoDisplayData DisplayingGetInfo;

    void OnDescToBonus();
    void DisplayFirstActivatedInfo(class APalCharacter* Character);
    void Create Default Get Info(FPalUIPalCaptureInfo CaptureInfo, FFPalUIPalInfoDisplayData& getInfoData, bool& isSuccessed);
    void ClearPassiveList();
    void DisplayPassiveSkill(TArray<FName>& passiveList);
    void DisplayShorDesc(FName CharacterID);
    void TryDIsplayStackedCharacter(bool& displayed);
    void Setup(FFPalUIPalInfoDisplayData getInfo);
    void Finished_DDDBAAA14AFFC8A46E31C0A4BCAC3C07();
    void Finished_8AC905F6491806EF04F1E58EE1398650();
    void AnmEvent_OpenAndSetTimer(TEnumAsByte<EPalUIPalInfoType> infoType, bool AlreadyBonusCompleted);
    void TryDisplayNextInfoEvent();
    void AnmEvent_ForceDesc();
    void AnmEvent_ForceBonus();
    void AnmEvent_BonusToDesc();
    void AnmEvent_DescToBonus(bool AlreadyBonusCompleted);
    void Construct();
    void OnInitialized();
    void SetupCapturePalInfo(FPalUIPalCaptureInfo CaptureInfo);
    void SetupFirstActivatedPalInfo(class UPalIndividualCharacterHandle* Handle);
    void ExecuteUbergraph_WBP_PalInfo(int32 EntryPoint);
};

#endif
