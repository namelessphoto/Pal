#ifndef UE4SS_SDK_BP_VisualEffect_Status_Poisoned_HPP
#define UE4SS_SDK_BP_VisualEffect_Status_Poisoned_HPP

class UBP_VisualEffect_Status_Poisoned_C : public UPalVisualEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Niagara;

    void OnBeginVisualEffect();
    void OnEndVisualEffect();
    void ExecuteUbergraph_BP_VisualEffect_Status_Poisoned(int32 EntryPoint);
};

#endif
