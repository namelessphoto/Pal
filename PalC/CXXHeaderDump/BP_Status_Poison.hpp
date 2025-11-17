#ifndef UE4SS_SDK_BP_Status_Poison_HPP
#define UE4SS_SDK_BP_Status_Poison_HPP

class UBP_Status_Poison_C : public UBP_Status_WithVisualEffect_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FTimerHandle Timer;
    double Rate;

    void GetDamageRate(double& NewParam);
    void OnBeginStatus();
    void カスタムイベント_SlipDamage();
    void OnEndStatus();
    void ExecuteUbergraph_BP_Status_Poison(int32 EntryPoint);
};

#endif
