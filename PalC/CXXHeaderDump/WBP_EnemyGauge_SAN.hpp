#ifndef UE4SS_SDK_WBP_EnemyGauge_SAN_HPP
#define UE4SS_SDK_WBP_EnemyGauge_SAN_HPP

class UWBP_EnemyGauge_SAN_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Gauge;
    class UBP_PalTextBlock_C* Text_SanityValue;
    class UMaterialInstanceDynamic* GaugeMaterial;
    FLinearColor OriginalSanityGaugeColor;
    FLinearColor LowSanityGaugeColor;

    void SetSanityValue(double NowSanityValue, double MaxSanityValue);
    void OnInitialized();
    void ExecuteUbergraph_WBP_EnemyGauge_SAN(int32 EntryPoint);
};

#endif
