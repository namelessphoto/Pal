#ifndef UE4SS_SDK_WBP_Ingame_TimeZone_HPP
#define UE4SS_SDK_WBP_Ingame_TimeZone_HPP

class UWBP_Ingame_TimeZone_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_DayToNight;
    class UImage* Gauge;
    class UImage* IconDay;
    class UImage* IconNight;

    void OnInitialized();
    void UpdateTime();
    void ExecuteUbergraph_WBP_Ingame_TimeZone(int32 EntryPoint);
};

#endif
