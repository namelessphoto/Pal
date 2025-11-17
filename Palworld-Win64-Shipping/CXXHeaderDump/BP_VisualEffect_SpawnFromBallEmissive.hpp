#ifndef UE4SS_SDK_BP_VisualEffect_SpawnFromBallEmissive_HPP
#define UE4SS_SDK_BP_VisualEffect_SpawnFromBallEmissive_HPP

class UBP_VisualEffect_SpawnFromBallEmissive_C : public UPalVisualEffectBase
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
    FTimerHandle TickTimerHandle;
    double TickInterval;

    void ModifyEffectBySize(class UNiagaraComponent* Effect, EPalSizeType Size);
    void SetScale(double Value);
    void OnBeginVisualEffect();
    void カスタムイベントUpdate();
    void OnEndVisualEffect();
    void ExecuteUbergraph_BP_VisualEffect_SpawnFromBallEmissive(int32 EntryPoint);
};

#endif
