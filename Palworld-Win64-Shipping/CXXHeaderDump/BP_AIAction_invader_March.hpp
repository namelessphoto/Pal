#ifndef UE4SS_SDK_BP_AIAction_invader_March_HPP
#define UE4SS_SDK_BP_AIAction_invader_March_HPP

class UBP_AIAction_invader_March_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector MarchGoalPosition;
    FVector PrevLocation;
    double StackTimer;
    FVector StartPoint;
    double NotStartTimer;
    bool IsStartAble;

    void Warp Move();
    void CountupNotStartTimer(double DeltaTime);
    void Get Controller Ref(class APalAIController*& AICon);
    void MoveToTargetLocation();
    void SetupSkillSlot();
    void AttackNearestMapObject();
    void FindNearPlayer(class APalPlayerCharacter*& Player);
    void Setup(FVector GoalPosition);
    void StartCombatMode();
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionStart(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIAction_invader_March(int32 EntryPoint);
};

#endif
