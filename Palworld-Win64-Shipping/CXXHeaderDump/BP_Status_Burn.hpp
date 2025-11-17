#ifndef UE4SS_SDK_BP_Status_Burn_HPP
#define UE4SS_SDK_BP_Status_Burn_HPP

class UBP_Status_Burn_C : public UBP_Status_WithVisualEffect_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FTimerHandle Timer;
    double DurationTimer_BP;
    FName KeyName;
    double Rate;

    void OnBeginStatus();
    void OnEndStatus();
    void カスタムイベント_SlipDamage();
    void カスタムイベント_2();
    void TickStatus(float DeltaTime);
    void ExecuteUbergraph_BP_Status_Burn(int32 EntryPoint);
};

#endif
