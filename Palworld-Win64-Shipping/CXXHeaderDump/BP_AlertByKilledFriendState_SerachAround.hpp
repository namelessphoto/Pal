#ifndef UE4SS_SDK_BP_AlertByKilledFriendState_SerachAround_HPP
#define UE4SS_SDK_BP_AlertByKilledFriendState_SerachAround_HPP

class UBP_AlertByKilledFriendState_SerachAround_C : public UPalStateMachineStateBase_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector InitSelfLocation;
    class APalCharacter* SelfActor;
    FVector MoveLocation;
    FName WalkName;
    class UPalActionBase* AngryAction;

    void GetControllerRef(class APalAIController*& AICon);
    void NextMovePoint(bool& Hit);
    void StateEnter();
    void StateTick(float DeltaTime);
    void StateExit();
    void ExecuteUbergraph_BP_AlertByKilledFriendState_SerachAround(int32 EntryPoint);
};

#endif
