#ifndef UE4SS_SDK_BP_Status_Freeze_HPP
#define UE4SS_SDK_BP_Status_Freeze_HPP

class UBP_Status_Freeze_C : public UBP_Status_WithVisualEffect_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalAIActionBase* AIActionFreeze;
    FVector StartLocation;

    void SetFlag(bool IsFreeze);
    void OnBeginStatus();
    void OnEndStatus();
    void TickStatus(float DeltaTime);
    void ExecuteUbergraph_BP_Status_Freeze(int32 EntryPoint);
};

#endif
