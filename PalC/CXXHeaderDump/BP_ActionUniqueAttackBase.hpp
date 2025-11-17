#ifndef UE4SS_SDK_BP_ActionUniqueAttackBase_HPP
#define UE4SS_SDK_BP_ActionUniqueAttackBase_HPP

class UBP_ActionUniqueAttackBase_C : public UPalActionWazaBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    double RotateSpeed;
    class UAnimMontage* CurrentMontage;
    class AActor* UniqueActionTarget;
    double FindFrontTargetDegree;
    double FindFrontTargetDistance;
    double FindFrontTargetHeight;
    FName flagName;
    bool IsTargetInFrontCamera;
    TArray<TSoftObjectPtr<APalSkillEffectBase>> SpawnedEffects;
    TMap<class FName, class FSkillEffectSpawnParameter> SkillEffectSpawnParameters;
    bool IsHoldTarget;
    TSubclassOf<class UPalUniqueSkillModule> SkillModuleClass;
    bool IsUseDummy;

    void SetMoveState_Collision(bool isDisable);
    void SweepAdjustToTargetLocation(FVector TargetLocation);
    void SetMoveState_BlowVelocity(bool isDisable);
    void GetCheckedTeleportDestination(int32 WarpCheckCount, double WarpFaceOriDegree, double WarpDestinationDistance, double WarpDestinationDistance_MapOb, bool AcceptSideBlockPos, bool IgnoreFloor, bool IsRiding, bool SearchUpper, FVector& TargetLocation, bool& HasFloor);
    void CalculateTeleportDestination(bool IsCharacter, double SearchDegree, double TeleportCheckDistance, FVector& Destination);
    void GetCapsuleHalfRadius(double& HalfRadius);
    void GetCapsuleHalfHeight(double& HalfHeight);
    void GetPalAnimInstance(class UPalAnimInstance*& AnimInstance);
    void CreateSkillActionModule(TSubclassOf<class UPalUniqueSkillModule> UniqueSkillModuleClass, class UBP_UniqueSkillModule_Tackle_C*& Module);
    void FindEffectByClass(TSubclassOf<class APalSkillEffectBase> EffectClass, class APalSkillEffectBase*& Effect);
    void OnSpawnEffect(class APalSkillEffectBase* Effect);
    void AttachToOwner(class APalSkillEffectBase* Effect, FVector Offset, FName SocketName);
    void SetMoveState_Gravity(double GravityRate);
    void SetMoveState_Rotate(bool isDisable);
    void SetMoveState_Common(bool isDisable);
    void GetFootLocation(FVector& Location);
    void GetHeightToFloor(double& Height);
    void IsMontagePlaying(class UAnimMontage* Montage, bool& IsPlaying);
    void GetUniqueActionTarget(class AActor*& TargetActor);
    void GetAttackTargetLocation(bool IsFrontLocation, double FrontDistance, FVector& Location);
    void GetRotation(double DeltaTime, bool NoInterp, FRotator& Rotation);
    void FindActionTarget();
    void OnEndAction();
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void SpawnEffect(FName EffectKey);
    void ExecuteUbergraph_BP_ActionUniqueAttackBase(int32 EntryPoint);
};

#endif
