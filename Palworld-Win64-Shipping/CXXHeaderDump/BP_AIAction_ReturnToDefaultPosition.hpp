#ifndef UE4SS_SDK_BP_AIAction_ReturnToDefaultPosition_HPP
#define UE4SS_SDK_BP_AIAction_ReturnToDefaultPosition_HPP

class UBP_AIAction_ReturnToDefaultPosition_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector GoalPos;
    double MoveEndRange;

    void Setup(FVector DefaultPos, double MoveEndDistance);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIAction_ReturnToDefaultPosition(int32 EntryPoint);
};

#endif
