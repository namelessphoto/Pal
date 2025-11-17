#ifndef UE4SS_SDK_BP_VisualEffect_Status_Darkness_HPP
#define UE4SS_SDK_BP_VisualEffect_Status_Darkness_HPP

class UBP_VisualEffect_Status_Darkness_C : public UPalVisualEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Niagara;

    void OnBeginVisualEffect();
    void OnEndVisualEffect();
    void TickVisualEffect(float DeltaTime);
    void ExecuteUbergraph_BP_VisualEffect_Status_Darkness(int32 EntryPoint);
};

#endif
