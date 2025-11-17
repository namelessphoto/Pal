#ifndef UE4SS_SDK_BP_AIAction_WanderingCage_HPP
#define UE4SS_SDK_BP_AIAction_WanderingCage_HPP

class UBP_AIAction_WanderingCage_C : public UPalAIActionBaseCampCage
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UObject* Sensor;
    FVector SpawnedPosition;
    FVector GoalPosition;
    double ConstWalkSpeed;
    class UPalDamageReactionComponent* DamageReaction;
    bool InitEnd;

    void ChangeNextMovePosition();
    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ExecuteUbergraph_BP_AIAction_WanderingCage(int32 EntryPoint);
};

#endif
