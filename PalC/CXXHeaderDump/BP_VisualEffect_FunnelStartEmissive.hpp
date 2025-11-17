#ifndef UE4SS_SDK_BP_VisualEffect_FunnelStartEmissive_HPP
#define UE4SS_SDK_BP_VisualEffect_FunnelStartEmissive_HPP

class UBP_VisualEffect_FunnelStartEmissive_C : public UPalVisualEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    double EmissionTime;
    double EmissionTimer;
    double CurrentEmission;
    double EndEmission;
    double StartEmissive;
    FName flagName;
    double ScaleTime;
    double ScaleTimer;
    bool IsScaleEnable;

    void ModifyEffectBySize(class UNiagaraComponent* Effect, EPalSizeType Size);
    void SetScale(double Value);
    void OnBeginVisualEffect();
    void TickVisualEffect(float DeltaTime);
    void ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive(int32 EntryPoint);
};

#endif
