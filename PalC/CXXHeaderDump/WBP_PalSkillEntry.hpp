#ifndef UE4SS_SDK_WBP_PalSkillEntry_HPP
#define UE4SS_SDK_WBP_PalSkillEntry_HPP

class UWBP_PalSkillEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Pressing;
    class UWidgetAnimation* CoolDownFinished;
    class UWidgetAnimation* Activate;
    class UProgressBar* CoolDownProgress;
    class UBP_PalTextBlock_C* Text_WazaName;
    class UWBP_PlayerInputKeyGuideIcon_C* WBP_PlayerInputKeyGuideIcon_Skill;
    TArray<class UBP_PalTextBlock_C*> WazaNametextArray;
    FName InputActionName;
    FName OverridePadActionName;
    FName OverridePadActionName_Additional;

    void CREATEDELEGATE_PROXYFUNCTION_0(float CoolRate);
    void OnInitialized();
    void ActivateEvent();
    void SetSkillText(FText SkillName);
    void CoolStart();
    void CoolFinish();
    void UpdateCoolDown(double Cool);
    void ToggleVisibility(bool IsCooling);
    void Setup(class UPalActiveSkill* ActiveSkill);
    void Unbind(class UPalActiveSkill* ActiveSkill);
    void LongPress(bool Start);
    void AdditionalBind();
    void ResetBind();
    void ExecuteUbergraph_WBP_PalSkillEntry(int32 EntryPoint);
};

#endif
