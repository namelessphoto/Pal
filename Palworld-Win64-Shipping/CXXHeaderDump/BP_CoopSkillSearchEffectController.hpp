#ifndef UE4SS_SDK_BP_CoopSkillSearchEffectController_HPP
#define UE4SS_SDK_BP_CoopSkillSearchEffectController_HPP

class UBP_CoopSkillSearchEffectController_C : public UPalCoopSkillSearchEffectController
{
    FPointerToUberGraphFrame UberGraphFrame;
    double FadeOutSec;
    double FadeOutElapsed;
    bool isEffectExtends;
    bool isEffectFadeOut;
    double SearchRadiusFrom;
    double SearchRadiusTo;
    double ExtSearchRadiusPerSec;
    double SearchRadiusElapsed;

    bool IsFadingOut();
    bool IsRunning();
    bool IsFinished();
    void GetCurrentSearchRadius(double& CurrentRadius);
    void ProcTick(double DeltaTime);
    void ProcStart(FPalCoopSkillSearchEffectParameter EffectParam);
    void FadeOut(double DeltaTime);
    void ExtendEffect(double DeltaTime, double CurrentSearchRadius);
    void Start(FPalCoopSkillSearchEffectParameter EffectParam);
    void Tick(float DeltaTime);
    void End();
    void ExecuteUbergraph_BP_CoopSkillSearchEffectController(int32 EntryPoint);
};

#endif
