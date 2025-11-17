#ifndef UE4SS_SDK_BP_PalSphere_ThrowObject_HPP
#define UE4SS_SDK_BP_PalSphere_ThrowObject_HPP

class ABP_PalSphere_ThrowObject_C : public ABP_ThrowCaptureObjectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Trail;
    class USkeletalMeshComponent* SK_Weapon_PalSphere_001;
    class USphereComponent* Sphere;
    class APalCharacter* TargetPal;
    FVector preLocation;
    bool IsBounce;
    FRotator ThrowRotator;
    FRotator CurrentBallRotator;
    class UNiagaraSystem* sneakEffect;
    bool tempCaptureAble;
    FPalDataTableRowName_SoundID SoundId_Bounce;
    FPalDataTableRowName_SoundID SoundId_HitPal;
    bool IsLocalControlled;
    bool IsInServer;
    bool IsSneakHit;
    FVector2D CurveVelocity;
    FRotator StartVelocityRotation;
    double CurveInterval;
    double CurveIntervalTimer;
    EPalCurveBall CurveID;
    double Forward Velocity;
    FVector2D InitCurveVelocity;
    bool bIsCriticalCapture;

    void FillOverlap();
    void IsCritical(class UPrimitiveComponent* OverlappedComponent, bool& bCritical);
    void SetupCurveID();
    void Setup Horming();
    void SetCurveParameter(EPalCurveBall CurveID);
    void UpdateCurve(double DeltaTime);
    void GetOwnerCharacterOrRidingCharacter(class AActor*& RidingCharacter);
    void IsOwnerLocalControlActor(bool& IsLocalControlActor);
    void OnSpawnJudgeBall(FGuid SpawnGUID, class AActor* SpawnActor);
    void Play Sound Bounce(FHitResult HitResult);
    void IsCountDestroy(bool& IsDestroy);
    void Capture Start Process After Delay(class ABP_PalCaptureBodyBase_C* Body, class APalCharacter* TargetActor, bool SneakAttack);
    void SetProjectileMovement(class AActor* HitActor);
    void CaptureStartProcess();
    void IsCaptureablePal(class AActor* TargetActor, bool& Captureable, class APalCharacter*& TargetPalCharacter);
    void GetMaxBoundCount(int32& Count);
    void GetBodyClass(TSubclassOf<class ABP_PalCaptureBodyBase_C>& bodyClass);
    void UpdateRotator(double DeltaTime);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_CaptureDrone_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_CaptureDrone_ThrowObject_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    void DelayCaptureBodyStart(class ABP_PalCaptureBodyBase_C* BodyActor, class APalCharacter* Target, double Delay, bool SneakAttack);
    void OnOverlap(class AActor* Actor, class UPrimitiveComponent* PrimitiveComponent);
    void UpdateHoming();
    void ExecuteUbergraph_BP_PalSphere_ThrowObject(int32 EntryPoint);
};

#endif
