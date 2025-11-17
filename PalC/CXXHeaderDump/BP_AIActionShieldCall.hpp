#ifndef UE4SS_SDK_BP_AIActionShieldCall_HPP
#define UE4SS_SDK_BP_AIActionShieldCall_HPP

class UBP_AIActionShieldCall_C : public UBP_AIAction_CallBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void DoRide(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIActionShieldCall(int32 EntryPoint);
};

#endif
