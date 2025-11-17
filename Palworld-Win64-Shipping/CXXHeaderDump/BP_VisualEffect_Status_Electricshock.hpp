#ifndef UE4SS_SDK_BP_VisualEffect_Status_Electricshock_HPP
#define UE4SS_SDK_BP_VisualEffect_Status_Electricshock_HPP

class UBP_VisualEffect_Status_Electricshock_C : public UPalVisualEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Niagara;

    void OnBeginVisualEffect();
    void OnEndVisualEffect();
    void ExecuteUbergraph_BP_VisualEffect_Status_Electricshock(int32 EntryPoint);
};

#endif
