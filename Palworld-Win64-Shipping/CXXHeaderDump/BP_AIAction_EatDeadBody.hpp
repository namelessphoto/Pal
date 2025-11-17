#ifndef UE4SS_SDK_BP_AIAction_EatDeadBody_HPP
#define UE4SS_SDK_BP_AIAction_EatDeadBody_HPP

class UBP_AIAction_EatDeadBody_C : public UBP_AIAction_CanCombatBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AActor* TargetDeadBody;
    double tempDeltaTime;
    double EatTimer;
    double RecoverTimer;

    void RecoverHP();
    void SelfPawn(class AActor*& SelfPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ActionPause(class APawn* ControlledPawn);
    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIAction_EatDeadBody(int32 EntryPoint);
};

#endif
