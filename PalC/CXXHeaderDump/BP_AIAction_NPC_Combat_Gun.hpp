#ifndef UE4SS_SDK_BP_AIAction_NPC_Combat_Gun_HPP
#define UE4SS_SDK_BP_AIAction_NPC_Combat_Gun_HPP

class UBP_AIAction_NPC_Combat_Gun_C : public UBP_AIAction_NPC_CombatBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TMap<TEnumAsByte<EPal_NPC_CombatGunState>, TSubclassOf<UBP_AINPC_CombatState_Base_C>> StateMap;
    TEnumAsByte<EPal_NPC_CombatGunState> CurrentState;
    bool IsStopTick;
    double Timer;
    double RandomMoveTime;
    double SideMoveTime;
    double Const_NearOffset;
    bool PreSideMove;

    void SwitchTickState();
    void AddAllState();
    void IsInMeleeAttackRange(bool& InRange);
    void AddTimer(double& CurrentTime);
    void IsNear_FarRange(double Offset, bool& Near);
    void IsNear_NearRange(double Offset, bool& Near);
    void Change_NextState(TEnumAsByte<EPal_NPC_CombatGunState> Next);
    void Add Gun Combat State(TEnumAsByte<EPal_NPC_CombatGunState> GunState);
    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionPause(class APawn* ControlledPawn);
    void ActionResume(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun(int32 EntryPoint);
};

#endif
