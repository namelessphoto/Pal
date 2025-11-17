#ifndef UE4SS_SDK_BP_ActionGeneralAttackBase_HPP
#define UE4SS_SDK_BP_ActionGeneralAttackBase_HPP

class UBP_ActionGeneralAttackBase_C : public UPalActionWazaBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<FSkillEffectSpawnParameter> SkillEffectSpawnParameters;
    TArray<FSkillEffectSpawnParameter> GeneralEffectSpawnParameters;
    bool IsStartMovement;
    bool IsTerminatingAction;
    TArray<FTimerHandle> TimerHandles;
    TArray<TSoftObjectPtr<APalSkillEffectBase>> SpawnedEffects;
    double ReadyAnimationTime;
    double ProcessAnimationTime;
    double AfterAnimationTime;
    EPalGeneralMontageType ReadyAnimationType;
    EPalGeneralMontageType ReadyLoopAnimationType;
    EPalGeneralMontageType ProcessAnimationType;
    EPalGeneralMontageType ProcessLoopAnimationType;
    EPalGeneralMontageType AfterAnimationType;
    class UPalStaticCharacterParameterComponent* StaticCharacterComponent;
    FName flagName;
    bool IsDisableMovement;
    double BeginMovementDisableTime;
    double EndMovementDisableTimeFromEnd;
    double YawRate;
    double BreakActionBlendTime;
    double MovementStartOffset;
    double MovementTime;
    double MovementTimer;
    class UCurveFloat* MovementCurve;
    double MovementPerSec;
    bool IsUseMontageFacialNotify;
    bool EnableShorteningAnimationTimeWhenPalRidden;
    bool IsFindTargetOnRiding;
    double FindTargetHeight;
    double FindTargetDegree;
    double FindTargetDistance;
    FBP_ActionGeneralAttackBase_COnProcess OnProcess;
    void OnProcess();

    void Get Attack Owner(class AActor*& ownerActor);
    void SetWalkSpeed(bool IsSlow);
    void GetSkillEffectTarget(class AActor*& ActionTarget);
    void SetSkillEffectClass(FSkillEffectSpawnParameter& SkillEffectParams, TSubclassOf<class APalSkillEffectBase> NewEffectClass);
    void SetSkillEffectTimeOffset(FSkillEffectSpawnParameter& EffectSpawnParams, double NewTimeOffset);
    void ShortenAnimationTimeWhenPalRidden();
    void CheckMontageFacialNotify_OneAnime(EPalGeneralMontageType AnimType, bool& UseMontageFacialNotify);
    void CheckMontageFacialNotify();
    void EndFacial();
    void TickMovement(double DeltaTime);
    void AttachToOwner(class APalSkillEffectBase* Effect, FVector Offset, FName SocketName, EPalBodyLocationType BodyLocation);
    bool CanGainSP();
    bool CanStepCancel();
    void CheckFastTerminate(double DeltaTime);
    void StopAnimation();
    void OnSpawnEffect(class APalSkillEffectBase* Effect);
    void SetYawRotateRate(double Rate);
    void Set Disable Movement(bool Enable);
    void OnStartAfterAnimation();
    void OnStartProcessAnimation();
    void OnStartReadyAnimation();
    void PlayAfterAnimation();
    void FindEffectByClass(TSubclassOf<class APalSkillEffectBase> EffectClass, class APalSkillEffectBase*& Effect);
    void OnBeginAction();
    void OnEndAction();
    void PlayEffectByTime(TArray<FSkillEffectSpawnParameter>& EffectList);
    void DoProcessAnimation();
    void DoAfterAnimation();
    void DoEnd();
    void SetupMovementControl();
    void SetDisableMovement();
    void Movement Enable();
    void OnBreakAction();
    void TickAction(float DeltaTime);
    void PlayReadyAnimation();
    void PlayProcessAnimation();
    void CallEffect(const FSkillEffectSpawnParameter& Parameter);
    void DoStartMovement();
    void ExecuteUbergraph_BP_ActionGeneralAttackBase(int32 EntryPoint);
    void OnProcess__DelegateSignature();
};

#endif
