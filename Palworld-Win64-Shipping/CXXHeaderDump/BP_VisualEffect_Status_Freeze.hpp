#ifndef UE4SS_SDK_BP_VisualEffect_Status_Freeze_HPP
#define UE4SS_SDK_BP_VisualEffect_Status_Freeze_HPP

class UBP_VisualEffect_Status_Freeze_C : public UPalVisualEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Effect;
    double FadeOutTime;
    double FadeOutTimer;
    class UCurveFloat* FadeOutCurve;
    double FadeOutTime01;
    TMap<class EPalSizeType, class UNiagaraSystem*> EffectAsset_Cube;
    TMap<class EPalSizeType, class UNiagaraSystem*> EffectAsset_End;

    void Set Frostbite(double Value);
    void OnBeginVisualEffect();
    void OnEndVisualEffect();
    void TerminatingTickVisualEffect(float DeltaTime);
    void ExecuteUbergraph_BP_VisualEffect_Status_Freeze(int32 EntryPoint);
};

#endif
