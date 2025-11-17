#ifndef UE4SS_SDK_BP_AIAction_SideStep_HPP
#define UE4SS_SDK_BP_AIAction_SideStep_HPP

class UBP_AIAction_SideStep_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    double Right;
    double Power;
    double Front;

    void GetTargetPos(FVector& Pos);
    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIAction_SideStep(int32 EntryPoint);
};

#endif
