#ifndef UE4SS_SDK_BP_AlertByKilledFriendState_QuestionMark_HPP
#define UE4SS_SDK_BP_AlertByKilledFriendState_QuestionMark_HPP

class UBP_AlertByKilledFriendState_QuestionMark_C : public UPalStateMachineStateBase_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;

    void StateEnter();
    void ExecuteUbergraph_BP_AlertByKilledFriendState_QuestionMark(int32 EntryPoint);
};

#endif
