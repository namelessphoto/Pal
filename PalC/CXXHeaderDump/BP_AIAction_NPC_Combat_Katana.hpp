#ifndef UE4SS_SDK_BP_AIAction_NPC_Combat_Katana_HPP
#define UE4SS_SDK_BP_AIAction_NPC_Combat_Katana_HPP

class UBP_AIAction_NPC_Combat_Katana_C : public UBP_AIAction_NPC_CombatBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TEnumAsByte<EPal_NPC_CombatMeleeState> CurrentState;
    double ConstAttackStartRange;
    bool IsStopTick;
    double ConstNearAttackRange;
    double Timer;
    TMap<TEnumAsByte<EPal_NPC_CombatMeleeState>, TSubclassOf<UBP_AINPC_CombatState_Base_C>> StateMap;
    double BackwardMiniTime;

    void AddTimer(double& CurrentTime);
    void AddMeleeCombatState(TEnumAsByte<EPal_NPC_CombatMeleeState> MeleeState);
    void Change_NextState(TEnumAsByte<EPal_NPC_CombatMeleeState> Next);
    void ActionResume(class APawn* ControlledPawn);
    void ActionPause(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionStart(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIAction_NPC_Combat_Katana(int32 EntryPoint);
};

#endif
