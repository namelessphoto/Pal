#ifndef UE4SS_SDK_WBP_IngameThermometerEff_HPP
#define UE4SS_SDK_WBP_IngameThermometerEff_HPP

class UWBP_IngameThermometerEff_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_OFFToON;
    class UWidgetAnimation* Anm_Cold2To0;
    class UWidgetAnimation* Anm_Hot2To0;
    class UCanvasPanel* CanvasPanelCold;
    class UCanvasPanel* CanvasPanelHot;
    class UImage* Cold0;
    class UImage* Cold1;
    class UImage* Hot;
    class UImage* Hot_1;
    class UImage* HotSpark;
    EPalBodyTemperatureState CachedBodyState;
    int32 CachedDisplayTemperature;
    int32 LimitTenperature;
    float EffectAnimeEndTime;
    bool IsFirstSetup;
    double TargetEffectAnimeTime;
    double NowEffectAnimtTime;
    int32 PreviousDisplayTemperature;
    EPalBodyTemperatureState PreviousBodyState;

    void PlayTemperatureSound();
    void Calc Thermomater Anime Target Time(int32 TargetTenperature, double& targetTime);
    void SetTemperantureBodyState(EPalBodyTemperatureState NewBodyState);
    void SetTemperanture(int32 Temperanture);
    void AnmEvent_On();
    void AnmEvent_Off();
    void AnmEvent_Effect(int32 Temperanture);
    void Construct();
    void OnInitialized();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_IngameThermometerEff(int32 EntryPoint);
};

#endif
