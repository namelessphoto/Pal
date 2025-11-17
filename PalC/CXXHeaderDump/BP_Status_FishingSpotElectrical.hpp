#ifndef UE4SS_SDK_BP_Status_FishingSpotElectrical_HPP
#define UE4SS_SDK_BP_Status_FishingSpotElectrical_HPP

class UBP_Status_FishingSpotElectrical_C : public UBP_Status_WithVisualEffect_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0060 (size: 0x8)
    FTimerHandle Timer;                                                               // 0x0068 (size: 0x8)

    void PlayFishingSpotElecShockAction();
    void OnBeginStatus();
    void ExecuteUbergraph_BP_Status_FishingSpotElectrical(int32 EntryPoint);
}; // Size: 0x70

#endif
