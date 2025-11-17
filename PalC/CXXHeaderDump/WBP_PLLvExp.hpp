#ifndef UE4SS_SDK_WBP_PLLvExp_HPP
#define UE4SS_SDK_WBP_PLLvExp_HPP

class UWBP_PLLvExp_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Close;
    class UWidgetAnimation* Anm_Open;
    class UProgressBar* Gage_Exp_Back;
    class UProgressBar* Gauge_Exp;
    class UBP_PalTextBlock_C* Text_Exp;
    class UWBP_LvNum_C* WBP_LvNum;
    double closeAnimeDelay;
    bool IsOpened;
    double delayGaugeTimer;
    double delayGaugeTime;
    double delayGaugeProgressPerSecond;
    double targetPercent;
    int64 totalDIsplayExp;
    double CloseTimer;

    void UpdateLevel(int32 NewLevel);
    void UpdateExp(int64 addExp, int64 oldExp, double nowExpRate);
    void Setup();
    void SetAddExpText(int64 Value);
    void Finished_D0ED7FF7495A5D9266FC3DB1824EA6F6();
    void Finished_45DAD3564BCF5FB025F120A933EEC011();
    void AnmEvent_Open_UI();
    void AnmEvent_Close_UI();
    void OnInitialized();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_PLLvExp(int32 EntryPoint);
};

#endif
