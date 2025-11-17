#ifndef UE4SS_SDK_BP_AIAction_NPCOtomoFollow_HPP
#define UE4SS_SDK_BP_AIAction_NPCOtomoFollow_HPP

class UBP_AIAction_NPCOtomoFollow_C : public UBP_AIAction_CanCombatBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AActor* Trainer;
    class APawn* SelfPawn;

    void FindTrainerKillEnemy(class AActor*& Enemy);
    void OnFail_9D776B464FB7F1A972DAFDBCCA1BDFFF(TEnumAsByte<EPathFollowingResult> MovementResult);
    void OnSuccess_9D776B464FB7F1A972DAFDBCCA1BDFFF(TEnumAsByte<EPathFollowingResult> MovementResult);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionStart(class APawn* ControlledPawn);
    void ActionPause(class APawn* ControlledPawn);
    void ActionAbort(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ExecuteUbergraph_BP_AIAction_NPCOtomoFollow(int32 EntryPoint);
};

#endif
