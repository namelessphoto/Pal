#ifndef UE4SS_SDK_BP_AIAction_RaidBossStandby_Servant_HPP
#define UE4SS_SDK_BP_AIAction_RaidBossStandby_Servant_HPP

class UBP_AIAction_RaidBossStandby_Servant_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_MonsterAIController_RaidBoss_C* AIControllerRaidBoss;

    void On Damage(FPalDamageResult DamageResult);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionStart(class APawn* ControlledPawn);
    void ActionResume(class APawn* ControlledPawn);
    void ActionAbort(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ActionPause(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIAction_RaidBossStandby_Servant(int32 EntryPoint);
};

#endif
