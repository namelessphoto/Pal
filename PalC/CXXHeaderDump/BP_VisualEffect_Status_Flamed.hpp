#ifndef UE4SS_SDK_BP_VisualEffect_Status_Flamed_HPP
#define UE4SS_SDK_BP_VisualEffect_Status_Flamed_HPP

class UBP_VisualEffect_Status_Flamed_C : public UPalVisualEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    double Scale;
    class UNiagaraComponent* Niagara;

    void OnBeginVisualEffect();
    void TickVisualEffect(float DeltaTime);
    void OnEndVisualEffect();
    void ExecuteUbergraph_BP_VisualEffect_Status_Flamed(int32 EntryPoint);
};

#endif
