#ifndef UE4SS_SDK_BP_AIAction_Stun_HPP
#define UE4SS_SDK_BP_AIAction_Stun_HPP

class UBP_AIAction_Stun_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalActionComponent* ActionComp;

    void WakeupDirection(int32& Direction);
    void ActionStart(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIAction_Stun(int32 EntryPoint);
};

#endif
