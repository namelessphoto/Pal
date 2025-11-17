#ifndef UE4SS_SDK_BP_MonsterBase_HPP
#define UE4SS_SDK_BP_MonsterBase_HPP

class ABP_MonsterBase_C : public APalMonsterCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalPassiveSkillInvokerComponent* PalPassiveSkillInvoker;
    class UMotionWarpingComponent* MotionWarping;
    class UBP_PalCryComponent_C* BP_PalCryComponent;
    class UPalPartnerSkillParameterComponent* PalPartnerSkillParameter;
    class UPalNavigationInvokerComponent* PalNavigationInvoker;
    class UPalInteractableSphereComponentNative* BP_InteractableSphere;
    class UPalFacialComponent* PalFacial;
    TEnumAsByte<ECollisionChannel> CapsuleCollisionChannel;
    FName CollisionProfileNameCache;
    class UNiagaraComponent* FlyEffect;
    double EffectiveAttackLogTimer;
    FBP_MonsterBase_COnInflictDamageEvent OnInflictDamageEvent;
    void OnInflictDamageEvent(FPalDamageResult DamageResult);

    void OnLanded_Proc(class UPalCharacterMovementComponent* Component, FHitResult Hit);
    void AddEffectivceAttackLog(FPalDeadInfo Info);
    void AddTargetDefeatLog(FPalDeadInfo Info);
    void GetVisual_ExceptMainMesh_SyncAnyway(TArray<class USceneComponent*>& OutComponent);
    void GetJumpEffectSpawnLocation(FVector& Location);
    void GetEffectScale(double& Scale);
    void PlayJumpSound();
    void GetFlyEffectAttachOffset(FTransform& EffectTransform);
    void UpdateFlyEffect(double DeltaTime);
    void OnNotifyEnd_098E824D485481E7313DA1A9DC5E74B5(FName NotifyName);
    void OnNotifyBegin_098E824D485481E7313DA1A9DC5E74B5(FName NotifyName);
    void OnInterrupted_098E824D485481E7313DA1A9DC5E74B5(FName NotifyName);
    void OnBlendOut_098E824D485481E7313DA1A9DC5E74B5(FName NotifyName);
    void OnCompleted_098E824D485481E7313DA1A9DC5E74B5(FName NotifyName);
    void OnLoaded_4AE31D724846BFB2E85A948698F32C16(class UObject* Loaded);
    void ReceiveBeginPlay();
    void BndEvt__BP_MonsterBase_CharacterMovement_K2Node_ComponentBoundEvent_0_OnJumpDelegate__DelegateSignature(class UPalCharacterMovementComponent* Component);
    void ReceiveTick(float DeltaSeconds);
    void Event_DeadGiftExp(FPalDeadInfo DeadInfo);
    void SetUpDelegate();
    void BndEvt__BP_MonsterBase_CharacterMovement_K2Node_ComponentBoundEvent_1_OnLandedDelegate__DelegateSignature(class UPalCharacterMovementComponent* Component, const FHitResult& Hit);
    void BndEvt__BP_MonsterBase_CharacterMovement_K2Node_ComponentBoundEvent_2_OnFlyDelegate__DelegateSignature(class UPalCharacterMovementComponent* Component);
    void OnDefeatCharacter(const FPalDeadInfo& DeadInfo);
    void OnInflictDamage(const FPalDamageResult& DamageResult);
    void OnInitialized(class APalCharacter* InCharacter);
    void OnUpdateLevelDelegate_イベント_0(int32 addLevel, int32 nowLevel);
    void RegisterSwimEvent();
    void OnEnterWater();
    void OnExitWater();
    void UnregisterSwimEvent();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
    void OnUpdateAboveWater(bool IsAboveWater);
    void ExecuteUbergraph_BP_MonsterBase(int32 EntryPoint);
    void OnInflictDamageEvent__DelegateSignature(FPalDamageResult DamageResult);
};

#endif
