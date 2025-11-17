#ifndef UE4SS_SDK_BP_NPCAIController_Visitor_Guardman_HPP
#define UE4SS_SDK_BP_NPCAIController_Visitor_Guardman_HPP

class ABP_NPCAIController_Visitor_Guardman_C : public ABP_NPCAIController_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05A8 (size: 0x8)
    FVector GoalLocation;                                                             // 0x05B0 (size: 0x18)
    int32 ReturnTimeMinutes;                                                          // 0x05C8 (size: 0x4)
    int32 WalkAreaSplitNum;                                                           // 0x05CC (size: 0x4)
    EPalIVisitorNPCAction ActionTimeLimit;                                            // 0x05D0 (size: 0x1)
    FVector Formation Offset;                                                         // 0x05D8 (size: 0x18)
    class APalCharacter* VisitorLeader;                                               // 0x05F0 (size: 0x8)

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
}; // Size: 0x5F8

#endif
