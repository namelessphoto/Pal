#ifndef UE4SS_SDK_BP_AIAction_CallBase_HPP
#define UE4SS_SDK_BP_AIAction_CallBase_HPP

class UBP_AIAction_CallBase_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FName CallApproachSpeedName;
    class APalCharacter* ApproachTarget;
    class APalCharacter* OwnerChara;
    double WalkSpeedMulti;
    bool IsSimpleMoveToActor;
    FVector PrevTargetLocation;

    void CanCoopPlayer(bool& CanCoop);
    void IsInteractingPlayer(bool& IsInteracting);
    void GetMasterCameraRotate(FRotator& CameraRotate);
    void ActionStart(class APawn* ControlledPawn);
    void OnCoopRelease_Event();
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void OnChildActionFinished(class UPawnAction* action, TEnumAsByte<EPawnActionResult> WithResult);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIAction_CallBase(int32 EntryPoint);
};

#endif
