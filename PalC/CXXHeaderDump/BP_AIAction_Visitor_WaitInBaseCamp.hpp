#ifndef UE4SS_SDK_BP_AIAction_Visitor_WaitInBaseCamp_HPP
#define UE4SS_SDK_BP_AIAction_Visitor_WaitInBaseCamp_HPP

class UBP_AIAction_Visitor_WaitInBaseCamp_C : public UBP_AIAction_NPC_Relax_Wander_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    double Timer;
    int32 ReturnTimeMinutes;
    FBP_AIAction_Visitor_WaitInBaseCamp_COnWaitTimeFinished OnWaitTimeFinished;
    void OnWaitTimeFinished();

    void SightCheck(EPalAIResponseType CurrentState, bool OverrideIsDamage, class AActor*& Target, EPalAIResponseType& ResponseType);
    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp(int32 EntryPoint);
    void OnWaitTimeFinished__DelegateSignature();
};

#endif
