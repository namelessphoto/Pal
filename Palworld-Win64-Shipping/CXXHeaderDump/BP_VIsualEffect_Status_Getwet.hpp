#ifndef UE4SS_SDK_BP_VIsualEffect_Status_Getwet_HPP
#define UE4SS_SDK_BP_VIsualEffect_Status_Getwet_HPP

class UBP_VIsualEffect_Status_Getwet_C : public UPalVisualEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Effect;
    double FadeOutTime;
    double FadeOutTimer;
    double currentfade;
    double fadeoutmax;

    void Set Wet(double Value);
    void OnBeginVisualEffect();
    void OnEndVisualEffect();
    void TerminatingTickVisualEffect(float DeltaTime);
    void OnDeleteInstance();
    void ExecuteUbergraph_BP_VIsualEffect_Status_Getwet(int32 EntryPoint);
};

#endif
