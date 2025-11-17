#ifndef UE4SS_SDK_WBP_Fishing_ProgressGauge_HPP
#define UE4SS_SDK_WBP_Fishing_ProgressGauge_HPP

class UWBP_Fishing_ProgressGauge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Loop;
    class UWidgetAnimation* Anm_Fail;
    class UWidgetAnimation* Anm_In;
    class UImage* Image_Base;
    class UImage* Image_Gauge;
    class UImage* Image_gauge_Bloom;
    class UImage* Image_gauge_Eff_Fail;
    class UImage* Image_Icon;
    class UImage* Image_Shadow;
    TArray<class UMaterialInstanceDynamic*> GaugeMaterials;
    double ProgressRate;
    class UCurveLinearColor* ColorCurve;

    void SetProgressRate(double CurrentRate);
    void UpdateDisplayRate(double DeltaTime);
    void Finished_93F8C31949571C5C977F44ADBF602673();
    void AnmEvent_In();
    void AnmEvent_Loop();
    void AnmEvent_Fail();
    void AnmEvent_AllStop();
    void AnmEvent_Out();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void ExecuteUbergraph_WBP_Fishing_ProgressGauge(int32 EntryPoint);
};

#endif
