#ifndef UE4SS_SDK_BP_AIAction_NPC_Relax_Talk_HPP
#define UE4SS_SDK_BP_AIAction_NPC_Relax_Talk_HPP

class UBP_AIAction_NPC_Relax_Talk_C : public UBP_AIAction_NPC_RelaxBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalActionBase* TalkAction;
    FPalInstanceID SelfID;
    bool IsTalkingMotion;
    int32 currentTalkID;
    double talkTimer;
    bool IsListeningMotion;
    double TalkInterval;

    void PlayDefaultAction();
    void StopAction();
    void GetMemberID(TArray<FPalInstanceID>& OutList);
    void ActionStart(class APawn* ControlledPawn);
    void ActionResume(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ActionAbort(class APawn* ControlledPawn);
    void ActionPause(class APawn* ControlledPawn);
    void ActionPostTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk(int32 EntryPoint);
};

#endif
