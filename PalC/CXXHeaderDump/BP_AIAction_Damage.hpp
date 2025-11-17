#ifndef UE4SS_SDK_BP_AIAction_Damage_HPP
#define UE4SS_SDK_BP_AIAction_Damage_HPP

class UBP_AIAction_Damage_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector BlowVelocity;

    void ActionStart(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIAction_Damage(int32 EntryPoint);
};

#endif
