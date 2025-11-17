#ifndef UE4SS_SDK_BP_AlertByKilledFriendState_SurprisedReaction_HPP
#define UE4SS_SDK_BP_AlertByKilledFriendState_SurprisedReaction_HPP

class UBP_AlertByKilledFriendState_SurprisedReaction_C : public UPalStateMachineStateBase_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;

    void StateEnter();
    void ExecuteUbergraph_BP_AlertByKilledFriendState_SurprisedReaction(int32 EntryPoint);
};

#endif
