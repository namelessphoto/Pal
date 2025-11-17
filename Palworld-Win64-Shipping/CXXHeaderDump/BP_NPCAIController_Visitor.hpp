#ifndef UE4SS_SDK_BP_NPCAIController_Visitor_HPP
#define UE4SS_SDK_BP_NPCAIController_Visitor_HPP

class ABP_NPCAIController_Visitor_C : public ABP_NPCAIController_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector GoalLocation;
    int32 ReturnTimeMinutes;
    int32 WalkAreaSplitNum;
    EPalIVisitorNPCAction ActionTimeLimit;
    FBP_NPCAIController_Visitor_COnReturnSpawnedPoint OnReturnSpawnedPoint;
    void OnReturnSpawnedPoint();
    FVector Formation Offset;
    FBP_NPCAIController_Visitor_COnBaseCampArrived OnBaseCampArrived;
    void OnBaseCampArrived();

    void StartTravelToBaseCamp();
    void OnDead(const class AActor* LastAttacker);
    void FindTargetPlayer(class AActor*& TargetActor);
    void StartRaid();
    void StartReturnToSpawnedPointAction();
    void StartWaitAction();
    void StartDefaultAIAction();
    void ReceiveBeginPlay();
    void BindArriveEvent(class UBP_AIAction_Visitor_TravelToBaseCamp_C* action);
    void OnArrivedTargetPoint();
    void BindWaitFinishEvent(class UBP_AIAction_Visitor_WaitInBaseCamp_C* action);
    void OnWaitFinished();
    void OnStuck();
    void SetupVisitorParameter(const FPalVisitorInitParameter& InitParam);
    void ReceivePossess(class APawn* PossessedPawn);
    void OnRecruited();
    void ExecuteUbergraph_BP_NPCAIController_Visitor(int32 EntryPoint);
    void OnBaseCampArrived__DelegateSignature();
    void OnReturnSpawnedPoint__DelegateSignature();
};

#endif
