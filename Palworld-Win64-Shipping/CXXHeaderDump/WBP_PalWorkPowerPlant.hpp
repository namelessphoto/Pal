#ifndef UE4SS_SDK_WBP_PalWorkPowerPlant_HPP
#define UE4SS_SDK_WBP_PalWorkPowerPlant_HPP

class UWBP_PalWorkPowerPlant_C : public UPalUIMapObjectStatusIndicatorBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_DetailToSimple_OnlyStorage;
    class UWidgetAnimation* Anm_DetailToSimple;
    class UImage* Arrow;
    class UBP_PalTextBlock_C* Text_PlantNum;
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal;
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_1;
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_2;
    class UWBP_PalWorkPowerPlant_Gauge_C* WBP_PalWorkPowerPlant_Gauge;
    class UWBP_PalWorkPowerPlant_Gauge_C* WBP_PalWorkPowerPlant_Gauge_1;
    class UWBP_PalWorkPowerPlant_Gauge_C* WBP_PalWorkPowerPlant_Gauge_2;
    class UWBP_PalWorkPowerPlant_Gauge_C* WBP_PalWorkPowerPlant_Gauge_3;
    class UWBP_PalWorkPowerPlant_Gauge_C* WBP_PalWorkPowerPlant_Gauge_4;
    class UWBP_RequirePalInfo_C* WBP_RequirePalInfo;
    FTimerHandle DisplayCheckTimer;
    FTimerHandle ChangeCheckTimer;
    bool isDisplayedDetail;
    TArray<class UWBP_PalCraftInfo_Pal_C*> Pal Infos;
    TArray<class UWBP_PalWorkPowerPlant_Gauge_C*> Gauges;
    double PreviousAmout;
    double CurrentAmout;
    int32 CurrentGauge;
    class UPalUIMapObjectEnergyStatusIndicatorModel* UIIndicatorModel;

    class UWidgetAnimation* GetAnimationDetailToSimple();
    void SetupForMapObjectConcreteModel();
    void OnUpdateEnergyStack(class UPalUIMapObjectEnergyStatusIndicatorModel* Model);
    void On Updated Worker Pal(class UPalWorkBase* Work);
    void SetArrow(bool IsIncrease);
    void OnSetup();
    void Construct();
    void DisplayCheck();
    void Destruct();
    void ChangeCheck();
    void ExecuteUbergraph_WBP_PalWorkPowerPlant(int32 EntryPoint);
};

#endif
