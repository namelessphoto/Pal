#ifndef UE4SS_SDK_BP_Status_Muddy_HPP
#define UE4SS_SDK_BP_Status_Muddy_HPP

class UBP_Status_Muddy_C : public UBP_Status_WithVisualEffect_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnBeginStatus();
    void OnEndStatus();
    void カスタムイベント_2();
    void ExecuteUbergraph_BP_Status_Muddy(int32 EntryPoint);
};

#endif
