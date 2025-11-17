#ifndef UE4SS_SDK_BP_VisualEffect_AboveWater_HPP
#define UE4SS_SDK_BP_VisualEffect_AboveWater_HPP

class UBP_VisualEffect_AboveWater_C : public UPalVisualEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalCharacterMovementComponent* Movement;
    class UNiagaraComponent* NS_AboveWater;
    double MovimgVelocityThreshold;
    double HoveringVelocityThreshold;
    bool IsNsActive;
    class UNiagaraComponent* NS_AboveWaterIdle;
    bool IsNsIdleActive;
    double IdleEffectBaseScale;
    double MoveEffectBaseScale;

    void UpdateAboveWaterIdleEffect();
    void CreateAboveWaterIdleEffect();
    void Get Effect Transform(double OffsetDistance, bool IsUseWaterPlaneNormal, FTransform& NewParam);
    void Update Water Plane Effect Transform(class UNiagaraComponent* EffectInst, double OffsetDistance, double BaseScale, EPalWaterEffectType WaterEffectType);
    void GetVelocityLengthXY(double& Velocity);
    void UpdateAboveWaterEffect();
    void CreateAboveWaterEffect();
    void OnBeginVisualEffect();
    void TickVisualEffect(float DeltaTime);
    void OnEndVisualEffect();
    void ExecuteUbergraph_BP_VisualEffect_AboveWater(int32 EntryPoint);
};

#endif
