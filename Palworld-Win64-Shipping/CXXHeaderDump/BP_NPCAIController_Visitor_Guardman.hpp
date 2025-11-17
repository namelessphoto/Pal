#ifndef UE4SS_SDK_BP_NPCAIController_Visitor_Guardman_HPP
#define UE4SS_SDK_BP_NPCAIController_Visitor_Guardman_HPP

class ABP_NPCAIController_Visitor_Guardman_C : public ABP_NPCAIController_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector GoalLocation;
    int32 ReturnTimeMinutes;
    int32 WalkAreaSplitNum;
    EPalIVisitorNPCAction ActionTimeLimit;
    FVector Formation Offset;
    class APalCharacter* VisitorLeader;

    void StartTravelToBaseCamp();
    void SetupVisitorLeader();
    void FindTargetPlayer(class AActor*& TargetActor);
    void StartRaid();
    void StartReturnToSpawnedPointAction();
    void StartWaitAction();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BindArriveEvent(class UBP_AIAction_Visitor_TravelToBaseCamp_Guardman_C* action);
    void OnArrivedTargetPoint();
    void BindWaitFinishEvent(class UBP_AIAction_Visitor_WaitInBaseCamp_C* action);
    void OnWaitFinished();
    void OnStuck();
    void OnDeadByVisitorLeader(FPalDeadInfo DeadInfo);
    void OnReturnSpawnedPointByVisitorLeader();
    void SetupVisitorParameter(const FPalVisitorInitParameter& InitParam);
    void ExecuteUbergraph_BP_NPCAIController_Visitor_Guardman(int32 EntryPoint);
};

#endif
