#ifndef UE4SS_SDK_BP_ActionReaction_FishingSpotElectricShock_HPP
#define UE4SS_SDK_BP_ActionReaction_FishingSpotElectricShock_HPP

class UBP_ActionReaction_FishingSpotElectricShock_C : public UBP_ActionReaction_ElectricShock_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float OldBuoyancy;
    float OldInWaterRate;
    bool IsResetBuoyancy;
    double BuoyancyResetTimer;
    double OverrideBuoyancy;
    double OverrideInWaterRate;

    void FindOverrideData(bool& IsFound, double& Buoyancy, double& InWaterRate);
    void OnWakeup();
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_ActionReaction_FishingSpotElectricShock(int32 EntryPoint);
};

#endif
