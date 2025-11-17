#ifndef UE4SS_SDK_BP_MonsterAIController_Visitor_Guardman_HPP
#define UE4SS_SDK_BP_MonsterAIController_Visitor_Guardman_HPP

class ABP_MonsterAIController_Visitor_Guardman_C : public ABP_MonsterAIControllerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalAISensorComponent* PalAISensor;
    FVector GoalLocation;
    int32 ReturnTimeMinutes;
    int32 WalkAreaSplitNum;
    EPalIVisitorNPCAction ActionTimeLimit;
    FVector Formation Offset;
    class APalCharacter* VisitorLeader;

    void GetMyBB(class UBP_PalAIBlackboard_Common_C*& PalBrackboard);
    void GetLeaderBB(class UBP_PalAIBlackboard_Common_C*& LeaderPalBrackboard);
    void OnCombatSquad(class AActor* TargetActor);
    void SetupVisitorLeader();
    void StartWaitAction();
    void StartReturnToSpawnedPointAction();
    void ReturnSpawnedPoint(FVector GoalLocation);
    void StartTravelToBaseCamp();
    void OnInvaderArrived();
    void BindOnInvaderArrivedDelegate(FBindOnInvaderArrivedDelegateEvent Event);
    void ReceivePossess(class APawn* PossessedPawn);
    void カスタムイベント_1(class APalCharacter* InCharacter);
    void カスタムイベント_OnDead(FPalDeadInfo DeadInfo);
    void BindWaitFinishEvent(class UBP_AIAction_Visitor_WaitInBaseCamp_C* action);
    void OnWaitFinished();
    void OnDeadByVisitorLeader(FPalDeadInfo DeadInfo);
    void OnReturnSpawnedPointByVisitorLeader();
    void BindArriveEvent(class UBP_AIAction_Visitor_TravelToBaseCamp_Guardman_C* action);
    void OnArrivedTargetPoint();
    void ReceiveBeginPlay();
    void OnStuck();
    void SetupVisitorParameter(const FPalVisitorInitParameter& InitParam);
    void ExecuteUbergraph_BP_MonsterAIController_Visitor_Guardman(int32 EntryPoint);
};

#endif
