#ifndef UE4SS_SDK_WBP_Ingame_PalSkillGauge_HPP
#define UE4SS_SDK_WBP_Ingame_PalSkillGauge_HPP

class UWBP_Ingame_PalSkillGauge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Unlock;
    class UWidgetAnimation* Anm_Lock;
    class UWidgetAnimation* Anm_Activate_Keep;
    class UWidgetAnimation* Anm_Activate;
    class UWidgetAnimation* Anm_InputHold;
    class UWidgetAnimation* Anm_CoolTime_Over;
    class UWidgetAnimation* Anm_Disable;
    class UWidgetAnimation* Anm_Enable;
    class UBP_PalTextBlock_C* BPPalTextBlock_SkillCT;
    class UCanvasPanel* CanvasPanelGaugeCIrcle;
    class UCanvasPanel* CanvasPanelGaugeSq;
    class UCanvasPanel* CanvasPanelKey;
    class UImage* Icon;
    class UImage* IconLock;
    class UImage* Image_ActivateEff_LineBase;
    class UImage* Image_ActivateEff_LineFlare;
    class UImage* Image_Circle_ActiveEff;
    class UImage* Image_Circle_ActiveEff_1;
    class UImage* KeyGuideCircle;
    class UImage* KeyGuideCircle_Sq;
    class UPalRetainerBox* PalRetainerBox;
    class UProgressBar* ProgressBar_SkillTime;
    class UProgressBar* ProgressBar_SkillTime_Sq;
    class UImage* ReticleCircle_00;
    class UImage* ReticleCircle_01;
    class UBP_PalTextBlock_C* Text_SkillName;
    class UWBP_Ingame_PalSkill_Flight_C* WBP_Ingame_PalSkill_Flight_Down;
    class UWBP_Ingame_PalSkill_Flight_C* WBP_Ingame_PalSkill_Flight_UP;
    class UWBP_PlayerInputKeyGuideIcon_C* WBP_PlayerInputKeyGuideIcon;
    bool IsCoolDown;
    TArray<class UMaterialInstanceDynamic*> skillGaugeMaterials;
    TArray<class UMaterialInstanceDynamic*> coolDownGaugeMaterials;

    void ShowFlyKeyGuide(bool Show);
    void Set Skill Name Locked();
    void Hide Key Guide(bool Hide);
    void Set Skill Name(FText SkillNameText);
    void ClearIcon();
    void Setup Icon Texture();
    void Set Cool Down Gauge Percent(double Now, double Max);
    void Set Skill Gauge Percent(double Percent);
    void AnmEvent_SkillEnable();
    void AnmEvent_CoolDown();
    void AnmEvent_CoolDownComplated();
    void AnmEvent_Lock();
    void AnmEvent_Unlock();
    void AnmEvent_InputHold();
    void AnmEvent_InputRelease();
    void AnmEvent_StartSkill();
    void AnmEvent_UsingSkill(bool TogglePlay);
    void Construct();
    void OnInputMethodChanged(ECommonInputType bNewInputType);
    void ExecuteUbergraph_WBP_Ingame_PalSkillGauge(int32 EntryPoint);
};

#endif
