#ifndef UE4SS_SDK_BP_PalSphere_HomingThrowObjectBase_HPP
#define UE4SS_SDK_BP_PalSphere_HomingThrowObjectBase_HPP

class ABP_PalSphere_HomingThrowObjectBase_C : public ABP_PalSphere_ThrowObject_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class APalCharacter* TargetPal_0;
    FVector preLocation_0;
    bool IsBounce_0;
    FRotator ThrowRotator_0;
    FVector InitVelocity;
    FVector HomingFowerd;
    double ZVelocity;
    TMap<class EPalCaptureSphereLevelType, class UMaterialInstance*> MaterialMap;
    TMap<class EPalCaptureSphereLevelType, class TSubclassOf<ABP_PalCaptureBodyBase_C>> BodyClassMap;
    EPalCaptureSphereLevelType CaptureLevelType;

    void Setup Horming();
    void SetCaptureLevelType(EPalCaptureSphereLevelType LevelType);
    void SetMaterialByType(EPalCaptureSphereLevelType CaptureLevelType);
    void SetAttackTarget(class APalCharacter* Target);
    void GetBodyClass(TSubclassOf<class ABP_PalCaptureBodyBase_C>& bodyClass);
    void Rotate Self(double DeltaTime);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_CaptureDrone_ThrowObject_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    void ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase(int32 EntryPoint);
};

#endif
