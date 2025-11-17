#ifndef UE4SS_SDK_BP_AIAction_FriendlyLookat_HPP
#define UE4SS_SDK_BP_AIAction_FriendlyLookat_HPP

class UBP_AIAction_FriendlyLookat_C : public UBP_AIAction_CanCombatBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AActor* TargetActor;
    bool IsFinished;
    bool CanLookatPal;
    bool Rotating;
    bool SingleEffectAble;

    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ActionStart(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIAction_FriendlyLookat(int32 EntryPoint);
};

#endif
