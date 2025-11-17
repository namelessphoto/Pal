#ifndef UE4SS_SDK_WBP_Ingame_PlayerStamina_Circle_HPP
#define UE4SS_SDK_WBP_Ingame_PlayerStamina_Circle_HPP

class UWBP_Ingame_PlayerStamina_Circle_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_StaminaWarning_Loop;
    class UWidgetAnimation* Anm_StaminaWarning_InToOut;
    class UWidgetAnimation* Anm_1To3;
    class UCanvasPanel* Canvas_PalStaminaIcon;
    class UCanvasPanel* CanvasPanel_StaminaWarning;
    class UImage* Gauge_Delay;
    class UImage* Gauge_Main;
    class UImage* GaugeFlare;
    class UImage* GaugeShadow;
    class UImage* PalIcon;
    class UImage* PalIconB;
    class UImage* PalIconBarB;
    class UImage* PalIconBarF;
    class UImage* PalIconCircleB;
    class UImage* PalIconCircleF;
    bool isLastOverHeated;
    FLinearColor DefaultFillColor;
    double ChachedSPPercent;
    class UCanvasPanelSlot* EdgeImageSlot;
    class UCanvasPanelSlot* GaugeSlot;
    class UPalUIDelayGaugeCalculator* DelayGauge;
    class UMaterialInstanceDynamic* MainGaugeMat;
    class UMaterialInstanceDynamic* ShadowGaugeMat;
    class UMaterialInstanceDynamic* FlareGaugeMat;
    FTimerHandle delayGaugeTimer;
    bool IsActiveDelayGauge;
    double DelayGaugePercent;
    class UMaterialInstanceDynamic* DelayGaugeMat;
    double CachedLastTickSP;
    double StackedDelayGauge;
    double LastDecreaseDelayGauge;
    bool IsWarning;

    void SetOtomoMarkVisible(bool IsVisible);
    void GetChachedSPPercent(double& Percent);
    void SetPercent(double Percent, bool isOverHeated);
    void Finished_A235210E4CFA5CD880150D987765704F();
    void Finished_06A641D34FCE57CEABA661947727700A();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void ShowNotEnoughStamina();
    void HideNotEnoughStamina();
    void ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle(int32 EntryPoint);
};

#endif
