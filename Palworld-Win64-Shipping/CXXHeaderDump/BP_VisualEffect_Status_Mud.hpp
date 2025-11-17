#ifndef UE4SS_SDK_BP_VisualEffect_Status_Mud_HPP
#define UE4SS_SDK_BP_VisualEffect_Status_Mud_HPP

class UBP_VisualEffect_Status_Mud_C : public UPalVisualEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Effect;
    double FadeOutTime;
    double FadeOutTimer;
    class UCurveFloat* FadeOutCurve;

    void OnBeginVisualEffect();
    void OnEndVisualEffect();
    void TerminatingTickVisualEffect(float DeltaTime);
    void ExecuteUbergraph_BP_VisualEffect_Status_Mud(int32 EntryPoint);
};

#endif
