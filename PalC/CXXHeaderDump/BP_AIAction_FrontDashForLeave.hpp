#ifndef UE4SS_SDK_BP_AIAction_FrontDashForLeave_HPP
#define UE4SS_SDK_BP_AIAction_FrontDashForLeave_HPP

class UBP_AIAction_FrontDashForLeave_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class APalCharacter* SelfActor;
    class AActor* TargetActor;
    TArray<FVector> GoalPositionList;
    double RandomRight;

    void AddGoalList(double Right, double DistanceRate, FVector FrontVector, FVector RightVector);
    void InitByOutside(class APalCharacter* SelfCharacter, class AActor* CombatTarget);
    void FindGoalPosition(FVector& GoalPos, bool& Success);
    void OnFail_EAE5FEB94CA8D53F1F50028C752C9624(TEnumAsByte<EPathFollowingResult> MovementResult);
    void OnSuccess_EAE5FEB94CA8D53F1F50028C752C9624(TEnumAsByte<EPathFollowingResult> MovementResult);
    void OnNotifyEnd_DD579A8A44C50B0353DE318F089B04F8(FName NotifyName);
    void OnNotifyBegin_DD579A8A44C50B0353DE318F089B04F8(FName NotifyName);
    void OnInterrupted_DD579A8A44C50B0353DE318F089B04F8(FName NotifyName);
    void OnBlendOut_DD579A8A44C50B0353DE318F089B04F8(FName NotifyName);
    void OnCompleted_DD579A8A44C50B0353DE318F089B04F8(FName NotifyName);
    void ActionStart(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ActionPause(class APawn* ControlledPawn);
    void ActionAbort(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIAction_FrontDashForLeave(int32 EntryPoint);
};

#endif
