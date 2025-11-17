#ifndef UE4SS_SDK_BP_AIAction_WildPalDrinkWater_HPP
#define UE4SS_SDK_BP_AIAction_WildPalDrinkWater_HPP

class UBP_AIAction_WildPalDrinkWater_C : public UBP_AIAction_CanCombatBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector GoalPos;
    class UPalActionBase* EatAction;

    void OnFail_3323B09A4DA8EB0F652C87B9DFF6FF56(TEnumAsByte<EPathFollowingResult> MovementResult);
    void OnSuccess_3323B09A4DA8EB0F652C87B9DFF6FF56(TEnumAsByte<EPathFollowingResult> MovementResult);
    void ActionStart(class APawn* ControlledPawn);
    void ActionAbort(class APawn* ControlledPawn);
    void ActionPause(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ActionResume(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIAction_WildPalDrinkWater(int32 EntryPoint);
};

#endif
