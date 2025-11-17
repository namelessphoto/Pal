#ifndef UE4SS_SDK_BP_Action_Rolling_HPP
#define UE4SS_SDK_BP_Action_Rolling_HPP

class UBP_Action_Rolling_C : public UBP_ActionStepBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector TempVelocity;

    void OnBeginAction();
    void EndStep();
    void OnBreakAction();
    void ExecuteUbergraph_BP_Action_Rolling(int32 EntryPoint);
};

#endif
