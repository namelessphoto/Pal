#ifndef UE4SS_SDK_BP_AIAction_NPC_Talking_HPP
#define UE4SS_SDK_BP_AIAction_NPC_Talking_HPP

class UBP_AIAction_NPC_Talking_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AActor* TalkTarget;
    bool TurnEnd;
    class AActor* SelfActor;
    double Timer;
    bool IsTalking;
    TArray<class AActor*> TalkingPlayers;
    class UPalActionBase* ActionBase;
    bool IsSetAction;

    void GetNPCTalkingActionClass(TSubclassOf<class UPalActionBase>& TalkAction);
    void GetIsTalking(bool& IsTalking);
    void UpdateTalkTarget();
    void RemoveTalkActor(class AActor* TalkActor);
    void CheckTalkPlayers();
    void AddTalkActor(class AActor* TalkActor);
    void OnTalkFinished();
    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ActionAbort(class APawn* ControlledPawn);
    void ActionPause(class APawn* ControlledPawn);
    void OnActionStop(class APawn* Pawn);
    void ExecuteUbergraph_BP_AIAction_NPC_Talking(int32 EntryPoint);
};

#endif
