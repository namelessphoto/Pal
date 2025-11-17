#ifndef UE4SS_SDK_BP_UniqueSkillModule_Tackle_HPP
#define UE4SS_SDK_BP_UniqueSkillModule_Tackle_HPP

class UBP_UniqueSkillModule_Tackle_C : public UPalUniqueSkillModule
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAnimMontage* StartAnimMontage;
    class UAnimMontage* LoopAnimMontage;
    class UAnimMontage* EndAnimMontage;
    double AttackTime;
    double YawMultiply;
    double EndBrakeTime;
    double EndBrakeTimer;
    double MaxSpeedMultiply;
    double MinSpeedMultiply;
    double TackleHomingRate;
    bool StopUpdateYaw;
    FTimerHandle AttackTimerHandle;
    FName flagName;
    TSubclassOf<class ABP_SkillEffectBase_C> StartSkillEffectClass;
    TSubclassOf<class ABP_SkillEffectBase_C> LoopSkillEffectClass;
    class ABP_SkillEffectBase_C* LoopSkillEffect;
    FBP_UniqueSkillModule_Tackle_COnSpawnedLoopEffect OnSpawnedLoopEffect;
    void OnSpawnedLoopEffect(class ABP_SkillEffectBase_C* LoopEffect);
    TEnumAsByte<EAction_Unique_Tackle> State;
    FBP_UniqueSkillModule_Tackle_COnEndAttackDelegate OnEndAttackDelegate;
    void OnEndAttackDelegate();
    FBP_UniqueSkillModule_Tackle_COnMontageNotifyDelegate OnMontageNotifyDelegate;
    void OnMontageNotifyDelegate(class UAnimMontage* Montage, FName NotifyName);
    FBP_UniqueSkillModule_Tackle_COnCompletedEndMontageDelegate OnCompletedEndMontageDelegate;
    void OnCompletedEndMontageDelegate();
    double StartHomingRate;
    bool IsTackleHoming;
    bool IsEffectSpawnOnGround;

    void IsPlayingAnyMontage(TArray<class UAnimMontage*>& Montages, bool& Result);
    void IsPlayingEndMontage(bool& Result);
    void SetFlagName(FName flagName);
    void GetCurrentState(TEnumAsByte<EAction_Unique_Tackle>& State);
    void UpdateYaw();
    void UpdateVelocity();
    void TerminateMotion();
    void ControllInput(double DeltaTime);
    void OnNotifyEnd_26A182C445668EE79190E6AE1D795120(FName NotifyName);
    void OnNotifyBegin_26A182C445668EE79190E6AE1D795120(FName NotifyName);
    void OnInterrupted_26A182C445668EE79190E6AE1D795120(FName NotifyName);
    void OnBlendOut_26A182C445668EE79190E6AE1D795120(FName NotifyName);
    void OnCompleted_26A182C445668EE79190E6AE1D795120(FName NotifyName);
    void OnBeginModule();
    void OnEndModule();
    void TickModule(float DeltaTime);
    void OnEndAttack();
    void OnMontageNotifyEvent(class UAnimMontage* Montage, FName NotifyName);
    void OnStartTossin();
    void OnMontageEnded_Tackle(class UAnimMontage* Montage, bool bInterrupted);
    void ExecuteUbergraph_BP_UniqueSkillModule_Tackle(int32 EntryPoint);
    void OnCompletedEndMontageDelegate__DelegateSignature();
    void OnMontageNotifyDelegate__DelegateSignature(class UAnimMontage* Montage, FName NotifyName);
    void OnEndAttackDelegate__DelegateSignature();
    void OnSpawnedLoopEffect__DelegateSignature(class ABP_SkillEffectBase_C* LoopEffect);
};

#endif
