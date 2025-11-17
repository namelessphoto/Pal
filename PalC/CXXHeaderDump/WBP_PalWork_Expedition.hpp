#ifndef UE4SS_SDK_WBP_PalWork_Expedition_HPP
#define UE4SS_SDK_WBP_PalWork_Expedition_HPP

class UWBP_PalWork_Expedition_C : public UPalUIMapObjectStatusIndicatorBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_DetailToSimple;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_CompletedExpedition;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Hour;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Hour_1;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Minute;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Minute_1;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Second;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Second_1;
    class UCanvasPanel* CanvasPanel_Complete;
    class UCanvasPanel* CanvasPanel_Progress;
    class UWBP_CommonCircularGauge_C* CircularGauge_Progress;
    class UHorizontalBox* HorizontalBox_RemainTime;
    class UImage* Image_Icon_Expedition;
    class UBP_PalTextBlock_C* Text_StageName;
    bool IsSimpleDetail;

    void ChangeToExpandDetail();
    void ChangeToSimpleDetail(bool bSkipAnimation);
    void ChangeToCompleted();
    void ChangeToInProgress();
    void SetGaugeRate(double Rate);
    void SetRemainSeconds(int64 Seconds);
    void SetTitle(FText TitleText);
    void Destruct();
    void Construct();
    void ExecuteUbergraph_WBP_PalWork_Expedition(int32 EntryPoint);
};

#endif
