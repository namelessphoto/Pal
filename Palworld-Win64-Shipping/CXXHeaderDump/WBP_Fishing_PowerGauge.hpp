#ifndef UE4SS_SDK_WBP_Fishing_PowerGauge_HPP
#define UE4SS_SDK_WBP_Fishing_PowerGauge_HPP

class UWBP_Fishing_PowerGauge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Bad_Loop;
    class UWidgetAnimation* Anm_GoodToBad;
    class UWidgetAnimation* Anm_In;
    class UCanvasPanel* Canvas_KeyGuide;
    class UImage* Image_Base;
    class UImage* Image_BaseFrame;
    class UImage* Image_Center;
    class UImage* Image_Dot_0;
    class UImage* Image_Dot_1;
    class UImage* Image_Dot_2;
    class UImage* Image_Dot_3;
    class UImage* Image_Eff_Bad;
    class UImage* Image_Eff_Good;
    class UImage* Image_Fish;
    class UImage* Image_FishBar;
    class UImage* Image_Frame;
    class UImage* Image_Frame_Bad;
    class UImage* Image_KeyGuide_Base;
    class UImage* Image_White;
    class USlider* Slider_SuitableArea;
    class UWBP_Fishing_TutorialGuide_C* WBP_Fishing_TutorialGuide;
    class UWBP_PlayerInputKeyGuideIcon_C* WBP_PlayerInputKeyGuideIcon;
    TArray<class UImage*> FishBarImages;
    double BarSizeRate;
    double BarSize;
    double DefaultGaugeSize;
    double OriginGaugeSize;
    bool IsInitialized;

    void ShowTutorialGuide();
    void ApplyHandleSize();
    void SetBarSize(double BarSize);
    void SetFishPosition(double Position);
    void SetBarPosition(double Position);
    void AnmEvent_In();
    void AnmEvent_GoodToBad(bool IsStart);
    void AnmEvent_Bad_Loop(bool IsStart);
    void AnmEvent_AllStop();
    void AnmEvent_Out();
    void OnInitialized();
    void ShowUI();
    void HideUI();
    void ExecuteUbergraph_WBP_Fishing_PowerGauge(int32 EntryPoint);
};

#endif
