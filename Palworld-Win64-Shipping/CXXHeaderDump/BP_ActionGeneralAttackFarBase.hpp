#ifndef UE4SS_SDK_BP_ActionGeneralAttackFarBase_HPP
#define UE4SS_SDK_BP_ActionGeneralAttackFarBase_HPP

class UBP_ActionGeneralAttackFarBase_C : public UBP_ActionGeneralAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool IsBullet;
    bool IsHoming;
    double BulletSpeed;
    bool HasStartedAction;
    bool RotPitchTowardTarget;
    bool RotPitchTowardReticle;
    float ReadyTargetingSpeed;
    float ProcessTargetingSpeed;
    bool HasSpawnedEffect;
    class APalSkillEffectBase* Effect;
    bool DoPredict?;
    TSubclassOf<class AActor> PredictedTargetClass;
    class AActor* PredictedTarget;
    float PredictPowerRate;
    double PredictWeekDistance;
    bool EnableDestroyEffectOnBreakAction;
    float CurrentMeshPitch;
    bool IsInitialUpdateMeshPitch;
    bool OnAfterAnimation;
    bool DestroyPredictedTargetOnEndAction;

    void IsEnableRotPitch(bool& IsEnable);
    void SetEffectVelocityTowardNearestEnemy(bool& Success);
    void SetEffectVelocityTowardReticle();
    class APalCharacter* GetTargetEnemy();
    void SetHomingTarget(class APalSkillEffectBase* Effect);
    bool IsSpecificEffect(class APalSkillEffectBase* Effect, TEnumAsByte<EEffectSpawnParametersType> ParametersType, int32 Index);
    void OnStartAfterAnimation();
    void RestorePalPitch();
    void GetPredictedTargetLocation(FVector& Location);
    void UpdatePredictedTargetLocation();
    void SetPredictedTarget();
    void AdjustEffectRotPitchToTarget();
    void UpdatePalYawAndPitchToTarget();
    void SetBulletSpeed(class APalSkillEffectBase*& Effect);
    void UpdateEffectPitchToTarget();
    void UpdateRiddenPalYawToTarget();
    void BulletHasShooted(class APalSkillEffectBase* Effect);
    void OnLoaded_8D503426441FF5C878F58A8373F67BE7(class UObject* Loaded);
    void CallEffect(const FSkillEffectSpawnParameter& Parameter);
    void OnBreakAction();
    void TickAction(float DeltaTime);
    void OnStartReadyAnimation();
    void OnStartProcessAnimation();
    void OnSpawnEffect(class APalSkillEffectBase* Effect);
    void OnEndAction();
    void OnBeginAction();
    void ExecuteUbergraph_BP_ActionGeneralAttackFarBase(int32 EntryPoint);
};

#endif
