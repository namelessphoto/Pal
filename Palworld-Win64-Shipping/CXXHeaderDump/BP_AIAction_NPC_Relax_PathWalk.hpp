#ifndef UE4SS_SDK_BP_AIAction_NPC_Relax_PathWalk_HPP
#define UE4SS_SDK_BP_AIAction_NPC_Relax_PathWalk_HPP

class UBP_AIAction_NPC_Relax_PathWalk_C : public UBP_AIAction_NPC_RelaxBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_NPC_WalkPathPoint_1_C* Path;
    int32 CurrentPointIndex;
    FVector TargetPoint;
    bool WaitMode;
    class UPalActionBase* WaitAction;
    FF_NPC_PathWalkArray PathArray;
    FVector PrevLocation;
    double StuckTime;
    double DeltaTime;
    bool IsAlreadyStuck;

    void OnStuck();
    void OnTargetPointUpdateStart();
    void PlayWaitAction();
    void SetupWalkPath(FF_NPC_PathWalkArray PathInfo);
    void UpdateNextTargetPoint();
    void ActionStart(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ActionPause(class APawn* ControlledPawn);
    void ActionResume(class APawn* ControlledPawn);
    void ActionPostTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk(int32 EntryPoint);
};

#endif
