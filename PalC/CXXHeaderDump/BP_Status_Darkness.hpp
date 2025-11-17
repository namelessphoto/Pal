#ifndef UE4SS_SDK_BP_Status_Darkness_HPP
#define UE4SS_SDK_BP_Status_Darkness_HPP

class UBP_Status_Darkness_C : public UBP_Status_WithVisualEffect_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void DisableDebugSetting(bool& Disable);
    void OnBeginStatus();
    void OnEndStatus();
    void ExecuteUbergraph_BP_Status_Darkness(int32 EntryPoint);
};

#endif
