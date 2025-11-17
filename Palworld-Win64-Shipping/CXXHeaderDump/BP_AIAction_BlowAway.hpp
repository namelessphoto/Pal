#ifndef UE4SS_SDK_BP_AIAction_BlowAway_HPP
#define UE4SS_SDK_BP_AIAction_BlowAway_HPP

class UBP_AIAction_BlowAway_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalActionComponent* ActionComp;

    void ActionStart(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIAction_BlowAway(int32 EntryPoint);
};

#endif
