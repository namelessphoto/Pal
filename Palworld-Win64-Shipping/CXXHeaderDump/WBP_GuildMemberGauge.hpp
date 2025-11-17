#ifndef UE4SS_SDK_WBP_GuildMemberGauge_HPP
#define UE4SS_SDK_WBP_GuildMemberGauge_HPP

class UWBP_GuildMemberGauge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Loop;
    class UBP_PalTextBlock_C* BP_PalTextBlock_Name;
    class UImage* Gauge;
    class UImage* Loupe_Angle;

    void EnableAdditionalWidget(bool IsEnable);
    void UpdateDying(double Remain, double Max);
    void SetName(FString Name);
    void EnableName(bool IsEnable);
    void Construct();
    void ExecuteUbergraph_WBP_GuildMemberGauge(int32 EntryPoint);
};

#endif
