#ifndef UE4SS_SDK_BP_ActionTurnToTarget_HPP
#define UE4SS_SDK_BP_ActionTurnToTarget_HPP

class UBP_ActionTurnToTarget_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;

    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_ActionTurnToTarget(int32 EntryPoint);
};

#endif
