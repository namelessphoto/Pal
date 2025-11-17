#ifndef UE4SS_SDK_BP_VisualEffect_ChangeElementBase_HPP
#define UE4SS_SDK_BP_VisualEffect_ChangeElementBase_HPP

class UBP_VisualEffect_ChangeElementBase_C : public UPalVisualEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraSystem* EffectAsset;
    class UNiagaraComponent* EffectInstance;
    class UNiagaraSystem* ChangeEffectAsset;

    void DeleteEffect();
    void SpawnhEffect();
    void SetLimLight(double Intensity);
    void OnBeginVisualEffect();
    void OnEndVisualEffect();
    void TickVisualEffect(float DeltaTime);
    void ExecuteUbergraph_BP_VisualEffect_ChangeElementBase(int32 EntryPoint);
};

#endif
