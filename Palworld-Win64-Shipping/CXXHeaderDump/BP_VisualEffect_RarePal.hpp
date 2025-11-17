#ifndef UE4SS_SDK_BP_VisualEffect_RarePal_HPP
#define UE4SS_SDK_BP_VisualEffect_RarePal_HPP

class UBP_VisualEffect_RarePal_C : public UPalVisualEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Effect;
    double Scale;

    bool IsEndVisualEffect();
    void OnBeginVisualEffect();
    void OnEndVisualEffect();
    void TickVisualEffect(float DeltaTime);
    void ExecuteUbergraph_BP_VisualEffect_RarePal(int32 EntryPoint);
};

#endif
