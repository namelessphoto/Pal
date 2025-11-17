#ifndef UE4SS_SDK_BP_AIAction_RandomIncident_MerchantPalWalk_HPP
#define UE4SS_SDK_BP_AIAction_RandomIncident_MerchantPalWalk_HPP

class UBP_AIAction_RandomIncident_MerchantPalWalk_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector GoalPosition;
    FVector Spawned Position;

    void ChangeNextMovePosition();
    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ActionPause(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIAction_RandomIncident_MerchantPalWalk(int32 EntryPoint);
};

#endif
