#ifndef UE4SS_SDK_BP_VisualEffect_SelfDestructEmissive_HPP
#define UE4SS_SDK_BP_VisualEffect_SelfDestructEmissive_HPP

class UBP_VisualEffect_SelfDestructEmissive_C : public UPalVisualEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FMaterialParameterInfo Material Parameter Info;
    bool isBlinking;
    double ElapsedTime;
    double DefaultEmissiveDuration;
    double DefaultNoEmissiveDuration;
    double MinEmissiveDuration;
    double DecayRateOfEmissiveTime;
    bool IsEndAction;
    class UNiagaraComponent* NiagaraEffect;

    void Initialize Float Parameters();
    void FlashWithAcceleration(double DeltaTime);
    void SetOverlayMaterial(class UMaterialInterface* NewOverlayMaterial);
    void SetEmissive(float Value);
    void OnBeginVisualEffect();
    void TickVisualEffect(float DeltaTime);
    void OnEndVisualEffect();
    void ExecuteUbergraph_BP_VisualEffect_SelfDestructEmissive(int32 EntryPoint);
};

#endif
