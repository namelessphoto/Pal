#ifndef UE4SS_SDK_BP_AIActionProtecting_HPP
#define UE4SS_SDK_BP_AIActionProtecting_HPP

class UBP_AIActionProtecting_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class APalCharacter* ProtectCharacter;
    FName RidingSpeedUpFlagName;
    class APalCharacter* OwnerPawn;
    class UPalPartnerSkillParameterComponent* PartnerSkillParam;
    bool IsAborted;
    bool IsGliding;
    bool IsReleased;

    void CancelCheck();
    void onCoopEnd();
    void SetupAction(class APawn* ControlledPawn);
    void SetProtectCharacter(class APalCharacter* RidingCharacter);
    void BindCoopReleaseEvent();
    void OnCoopRelease();
    void UnbindCoopReleaseEvent();
    void OnDead(FPalDeadInfo DeadInfo);
    void StartPartnerSkill();
    void StopPartnerSkill();
    void OnDamage(FPalDamageResult DamageResult);
    void ActionStart(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void OnLanded(class UPalCharacterMovementComponent* Component, const FHitResult& Hit);
    void DeadProc(FPalDeadInfo DeadInfo);
    void ActionAbort(class APawn* ControlledPawn);
    void CoopRelease();
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIActionProtecting(int32 EntryPoint);
};

#endif
