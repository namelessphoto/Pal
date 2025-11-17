#ifndef UE4SS_SDK_BP_Status_Electrical_HPP
#define UE4SS_SDK_BP_Status_Electrical_HPP

class UBP_Status_Electrical_C : public UBP_Status_WithVisualEffect_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FTimerHandle Timer;

    void PlayElecShockAction();
    void OnBeginStatus();
    void OnBeginSomeStatus();
    void ExecuteUbergraph_BP_Status_Electrical(int32 EntryPoint);
};

#endif
