#ifndef UE4SS_SDK_BP_MonsterBase_HPP
#define UE4SS_SDK_BP_MonsterBase_HPP

class ABP_MonsterBase_C : public APalMonsterCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0AB0 (size: 0x8)
    class UPalPassiveSkillInvokerComponent* PalPassiveSkillInvoker;                   // 0x0AB8 (size: 0x8)
    class UMotionWarpingComponent* MotionWarping;                                     // 0x0AC0 (size: 0x8)
    class UBP_PalCryComponent_C* BP_PalCryComponent;                                  // 0x0AC8 (size: 0x8)
    class UPalPartnerSkillParameterComponent* PalPartnerSkillParameter;               // 0x0AD0 (size: 0x8)
    class UPalNavigationInvokerComponent* PalNavigationInvoker;                       // 0x0AD8 (size: 0x8)
    class UPalInteractableSphereComponentNative* BP_InteractableSphere;               // 0x0AE0 (size: 0x8)
    class UPalFacialComponent* PalFacial;                                             // 0x0AE8 (size: 0x8)
    TEnumAsByte<ECollisionChannel> CapsuleCollisionChannel;                           // 0x0AF0 (size: 0x1)
    FName CollisionProfileNameCache;                                                  // 0x0AF4 (size: 0x8)
    class UNiagaraComponent* FlyEffect;                                               // 0x0B00 (size: 0x8)
    double EffectiveAttackLogTimer;                                                   // 0x0B08 (size: 0x8)
    FBP_MonsterBase_COnInflictDamageEvent OnInflictDamageEvent;                       // 0x0B10 (size: 0x10)
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
}; // Size: 0xB20

#endif
