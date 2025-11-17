#ifndef UE4SS_SDK_BP_Status_StepCoolDown_HPP
#define UE4SS_SDK_BP_Status_StepCoolDown_HPP

class UBP_Status_StepCoolDown_C : public UPalStatusBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    double Timer;

    void TickStatus(float DeltaTime);
    void OnBeginStatus();
    void ExecuteUbergraph_BP_Status_StepCoolDown(int32 EntryPoint);
};

#endif
