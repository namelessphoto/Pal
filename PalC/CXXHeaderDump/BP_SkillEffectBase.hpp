#ifndef UE4SS_SDK_BP_SkillEffectBase_HPP
#define UE4SS_SDK_BP_SkillEffectBase_HPP

class ABP_SkillEffectBase_C : public APalSkillEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* HomingLimit;
    class USphereComponent* MovementSphereRoot;
    bool SpanwHitGroundEffect;
    EPalWazaID Waza;
    TArray<class UNiagaraSystem*> Load Cache;
    TArray<int32> Foliage Index;
    bool Is Poison;
    bool DoDestroyOnHitGround;
    bool StartEffectFadeOut;
    double FadeOutTimer;
    double FadeOutTime;
    class UCurveFloat* FadeOutCurve;
    TSubclassOf<class UPalHitEffectSlot> HitEffectSlot;
    TArray<FTimerHandle> TimerHandles;
    class ABP_PredictedTarget_C* PredictedTarget;
    bool EnableDisplayHitNum;
    class UPrimitiveComponent* Other Hit Component;

    void GetAttackLocationByTargetActor(class AActor* TargetActor, FVector& AttackLocation);
    void FindTargetLocationConsiderRide(FVector& TargetPos);
    void GetHomingEndDot(double& Dot);
    void FindTargetConsiderRide(class AActor*& TargetActor);
    void Is Hitable Target Collision(class UPrimitiveComponent* MyHitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherHitComp, bool& IsHitAble);
    void GetPredictedTargetLocation(FVector& Location);
    void GetOwnerAction(class UPalActionBase*& action);
    bool HasProjectileMoveComp();
    void SetHomingTarget(class AActor* Target, bool& Success);
    void CheckToStopHoming();
    void ApplyDamageCustomHit(class AActor* Defender, class USceneComponent* AttackerHitComponent, class USceneComponent* DefenderHitComponent, FVector HitLocation, TArray<int32>& FoliageIndex);
    void IsValidHitCustomRange(class AActor* hitTarget, class UPrimitiveComponent* MyHitComponent, class UPrimitiveComponent* HitTargetComponent, bool& IsHit);
    void Print Log When Collision Object Type Is Bullet();
    void Spawn Elemental Hit Effect Far(FVector Location, double EffectScale);
    void OnLoaded_15409DED4FCA4A2F1D5599B619A24205(class UObject* Loaded);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnHitDelegate_イベント(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, const TArray<int32>& FoliageIndex, FVector HitLocation, int32 HitCount);
    void LoadAndPlayEffect(TSoftObjectPtr<UNiagaraSystem> Niagara System, FTransform Transform);
    void FadeOutEffect(double DeltaSecond);
    void OnHitGround();
    void OnHitCustomRange(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, const TArray<int32>& FoliageIndex, FVector HitLocation, int32 HitCount);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
    void BndEvt__BP_SkillEffectBase_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature(class AActor* Defencer, FPalDamageInfo DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
    void ExecuteUbergraph_BP_SkillEffectBase(int32 EntryPoint);
};

#endif
