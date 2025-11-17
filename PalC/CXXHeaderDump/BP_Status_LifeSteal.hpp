#ifndef UE4SS_SDK_BP_Status_LifeSteal_HPP
#define UE4SS_SDK_BP_Status_LifeSteal_HPP

class UBP_Status_LifeSteal_C : public UPalStatusLifeSteal
{
    FPointerToUberGraphFrame UberGraphFrame;
    FString OutText;
    double EffectIntervalTimeSec;
    double SpawnEffectWaitTimer;

    void OnBeginStatus();
    void OnEndStatus();
    void OnLifeSteal(int32 Damage);
    void TickStatus(float DeltaTime);
    void ExecuteUbergraph_BP_Status_LifeSteal(int32 EntryPoint);
};

#endif
