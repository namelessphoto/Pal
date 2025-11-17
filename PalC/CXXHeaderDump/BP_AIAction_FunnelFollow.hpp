#ifndef UE4SS_SDK_BP_AIAction_FunnelFollow_HPP
#define UE4SS_SDK_BP_AIAction_FunnelFollow_HPP

class UBP_AIAction_FunnelFollow_C : public UBP_AIAction_OtomoFollow_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<double> TargetLocationDistanceForwardList;
    TArray<double> TargetLocationDistanceRightList;

    void Update Location Distance();
    void GetFollowSpeedFromController(double& FollowSpeed);
    void GetFollowInterpolatedPosFromController(FVector& FollowInterpolatedPos);
    void TryGetTrainer(class APalCharacter*& Trainer);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIAction_FunnelFollow(int32 EntryPoint);
};

#endif
