#ifndef UE4SS_SDK_BP_NPCAIController_Invader_HPP
#define UE4SS_SDK_BP_NPCAIController_Invader_HPP

class ABP_NPCAIController_Invader_C : public ABP_NPCAIController_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBP_NPCAIController_Invader_COnInvaderArrivedDelegate OnInvaderArrivedDelegate;
    void OnInvaderArrivedDelegate();

    void ReturnSpawnedPoint(FVector ReturnPos);
    void StartMarch(FVector GoalPos);
    void ForceBattleStartForOutside(class AActor* StartActor);
    void StartDefaultAIAction();
    void SetAutoDefaultAIAction();
    void ReceiveBeginPlay();
    void OnInvaderArrived();
    void BindOnInvaderArrivedDelegate(FBindOnInvaderArrivedDelegateEvent Event);
    void ExecuteUbergraph_BP_NPCAIController_Invader(int32 EntryPoint);
    void OnInvaderArrivedDelegate__DelegateSignature();
};

#endif
