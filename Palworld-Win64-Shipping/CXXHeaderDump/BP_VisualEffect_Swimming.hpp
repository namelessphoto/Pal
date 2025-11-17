#ifndef UE4SS_SDK_BP_VisualEffect_Swimming_HPP
#define UE4SS_SDK_BP_VisualEffect_Swimming_HPP

class UBP_VisualEffect_Swimming_C : public UPalVisualEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* NS_SplashBody;
    class UNiagaraComponent* NS_Swim;
    class UNiagaraComponent* NS_InWater;
    class UPalCharacterMovementComponent* Movement;
    double InWaterRate_Feet;
    double InWaterRate_Body;
    double FeetEffectWaitTimeSec;
    bool IsMoving;
    double FallingVelocityMin;
    double Effect_Offset_Z_Feet;
    double Effect_Offset_Z_Body;
    double Effect_Offset_Z_Swim;
    double Effect_Offset_Z_InWater;
    double Effect_Offset_Z_Dive;
    bool CreateDiveEffectDelay;
    double RadiusScaleForDive;
    bool HasRayCastCash;
    double LengthToBottomCash;
    bool IsNsSplashBodyActive;
    bool IsNsSwimActive;
    double RadiusScaleForSwim;
    bool IsNsInWaterActive;
    double RadiusScaleForInWater;
    double RadiusForJump;
    double EffectOffset_Z_Jump;
    double MovimgVelocityThreshold;
    double RadiusScaleForSplashFeet;
    double RadiusScaleForSplashBody;

    void Transform Character Relative Offset(class AActor* Character, FVector RelativeOffset, FVector& Offset);
    void OnJump(class UPalCharacterMovementComponent* Component);
    void On Swiming(bool IsInSwimming);
    void Update NS InWater(double DeltaTime);
    void Create_NS_InWater();
    void Update Water Plane Effect Transform(class UNiagaraComponent* EffectInst, double OffsetDistance, double BaseScale, EPalWaterEffectType WaterEffectType);
    void GetVelocityLengthXY(double& Velocity);
    void GetOwnerHalfHeight(double& HalfHeight);
    void GetWaterDepth(double& Length);
    void IsMakeDiveEffect(bool& IsFalling);
    void HasMovingVelocity(bool& HasVelocity);
    void Update NS Dive();
    void Update_NS_Swim();
    void Update_NS_SplashBody();
    void Update_NS_SplashFeet(double DeltaTime);
    void Create NS Dive();
    void Create_NS_Swim();
    void Create NS Splash Body();
    void Create_NS_SplashFeet();
    void CreateInWaterEffect();
    void GetInWaterRate(double& Rate);
    void Get Effect Transform(double OffsetDistance, bool IsUseWaterPlaneNormal, FTransform& NewParam);
    void OnBeginVisualEffect();
    void TickVisualEffect(float DeltaTime);
    void OnEndVisualEffect();
    void ExecuteUbergraph_BP_VisualEffect_Swimming(int32 EntryPoint);
};

#endif
