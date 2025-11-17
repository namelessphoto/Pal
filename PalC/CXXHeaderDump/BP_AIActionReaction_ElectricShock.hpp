#ifndef UE4SS_SDK_BP_AIActionReaction_ElectricShock_HPP
#define UE4SS_SDK_BP_AIActionReaction_ElectricShock_HPP

class UBP_AIActionReaction_ElectricShock_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalActionBase* tempAction;
    float Duration;
    TSubclassOf<class UPalActionBase> actionClass;

    void OnFinishElectricShock();
    void ActionStart(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIActionReaction_ElectricShock(int32 EntryPoint);
};

#endif
