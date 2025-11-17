#ifndef UE4SS_SDK_BP_Status_FishingSpotElectrical_HPP
#define UE4SS_SDK_BP_Status_FishingSpotElectrical_HPP

class UBP_Status_FishingSpotElectrical_C : public UBP_Status_WithVisualEffect_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FTimerHandle Timer;

    void PlayFishingSpotElecShockAction();
    void OnBeginStatus();
    void ExecuteUbergraph_BP_Status_FishingSpotElectrical(int32 EntryPoint);
};

#endif
