#ifndef UE4SS_SDK_WBP_PalWorkPowerPlant_Gauge_HPP
#define UE4SS_SDK_WBP_PalWorkPowerPlant_Gauge_HPP

class UWBP_PalWorkPowerPlant_Gauge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Change;
    class UImage* Gauge;
    bool Current Changing;
    bool ShouldShow;

    void SetState(bool IsLow, bool Show);
    void AnmEvent_Changing(bool IsChanging);
    void ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge(int32 EntryPoint);
};

#endif
