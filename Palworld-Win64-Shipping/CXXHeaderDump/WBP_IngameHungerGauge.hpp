#ifndef UE4SS_SDK_WBP_IngameHungerGauge_HPP
#define UE4SS_SDK_WBP_IngameHungerGauge_HPP

class UWBP_IngameHungerGauge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Down_Loop;
    class UWidgetAnimation* Anm_Gauge_Default;
    class UWidgetAnimation* Anm_Gauge_Low;
    class UWidgetAnimation* Anm_NormalToDown;
    class UCanvasPanel* CanvasPanel_Debuff;
    class UImage* Dot;
    class UImage* Dot_1;
    class UImage* Dot_2;
    class UImage* Dot_3;
    class UImage* Dot_02;
    class UImage* Dot_03;
    class UImage* Dot_04;
    class UImage* Dot_05;
    class UImage* Icon;
    class UImage* Image_78;
    class UImage* Image_Base;
    class UImage* Image_Line;
    class UInvalidationBox* InvalidationBox_0;
    class UProgressBar* ProgressBar_219;

    void SetHunger_ByRate(double Rate);
    void SetHunger(FFixedPoint nowHunger, FFixedPoint maxHunger);
    void AnmEvent_Debuff();
    void AnmEvent_Normal();
    void Construct();
    void ExecuteUbergraph_WBP_IngameHungerGauge(int32 EntryPoint);
};

#endif
