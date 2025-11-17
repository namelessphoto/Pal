#ifndef UE4SS_SDK_BP_PalTimeManager_HPP
#define UE4SS_SDK_BP_PalTimeManager_HPP

class UBP_PalTimeManager_C : public UPalTimeManager
{
    FPointerToUberGraphFrame UberGraphFrame;
    double NPCSetTime;
    class UCurveFloat* EmissiveCurve;

    void Tick_BP(float DeltaTime);
    void ExecuteUbergraph_BP_PalTimeManager(int32 EntryPoint);
};

#endif
