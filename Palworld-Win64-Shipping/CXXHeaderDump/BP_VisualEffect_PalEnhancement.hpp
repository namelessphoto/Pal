#ifndef UE4SS_SDK_BP_VisualEffect_PalEnhancement_HPP
#define UE4SS_SDK_BP_VisualEffect_PalEnhancement_HPP

class UBP_VisualEffect_PalEnhancement_C : public UPalVisualEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    TMap<EPalSizeType, double> EffectScale;
    class UNiagaraComponent* Effect;
    FTimerHandle TimerHandle;
    double FadeOut;
    double Const_FadeoutSpeed;
    double DefaultScale;

    void OnBeginVisualEffect();
    void OnEndVisualEffect();
    void FadeOutLoop();
    void ExecuteUbergraph_BP_VisualEffect_PalEnhancement(int32 EntryPoint);
};

#endif
