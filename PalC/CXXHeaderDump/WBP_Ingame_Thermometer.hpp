#ifndef UE4SS_SDK_WBP_Ingame_Thermometer_HPP
#define UE4SS_SDK_WBP_Ingame_Thermometer_HPP

class UWBP_Ingame_Thermometer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_HotToCold;
    class UImage* Base;
    class UCanvasPanel* CanvasPanelBuff;
    class UImage* Flare;
    class UImage* Flare2;
    class UImage* Hand;
    class UImage* IconFire;
    class UImage* IconIce;
    class UImage* PointFire_1;
    class UImage* PointFire_2;
    class UImage* PointFire_3;
    class UImage* PointIce_1;
    class UImage* PointIce_2;
    class UImage* PointIce_3;
    float ThermomaterAnimeEndTime;
    int32 LimitTenperature;
    int32 CachedDisplayTemperature;
    bool IsFirstSetup;
    TArray<class UImage*> HeatMaterArray;
    TArray<class UImage*> ColdMaterArray;
    double TargetTemperatureAnimeTime;
    double NowTemperatureAnimtTime;

    void SetRegistRate(int32 HeatRegist, int32 ColdRegist);
    void SetBodyState(EPalBodyTemperatureState NewState);
    void SetTemperature(int32 NewTenperature);
    void Calc Thermomater Anime Target Time(int32 TargetTenperature, double& targetTime);
    void AnmEvent_ChangeTemperature(int32 TargetTenperature);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void ExecuteUbergraph_WBP_Ingame_Thermometer(int32 EntryPoint);
};

#endif
