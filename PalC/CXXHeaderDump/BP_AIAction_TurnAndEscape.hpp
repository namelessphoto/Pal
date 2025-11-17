#ifndef UE4SS_SDK_BP_AIAction_TurnAndEscape_HPP
#define UE4SS_SDK_BP_AIAction_TurnAndEscape_HPP

class UBP_AIAction_TurnAndEscape_C : public UBP_AIAction_CanCombatBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AActor* TargetAct;
    bool Turning;
    bool CancelAble;
    bool IsStopByDelay;

    void OnSquadMemberDeadEvent(FPalDeadInfo DeadInbfo);
    void SoundEvent(FVector EmitLocation);
    void Setup(class AActor* TargetActor);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionStart(class APawn* ControlledPawn);
    void ActionResume(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIAction_TurnAndEscape(int32 EntryPoint);
};

#endif
