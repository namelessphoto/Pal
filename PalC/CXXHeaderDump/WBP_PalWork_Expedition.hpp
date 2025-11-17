#ifndef UE4SS_SDK_WBP_PalWork_Expedition_HPP
#define UE4SS_SDK_WBP_PalWork_Expedition_HPP

class UWBP_PalWork_Expedition_C : public UPalUIMapObjectStatusIndicatorBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UWidgetAnimation* Anm_DetailToSimple;                                       // 0x0410 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_CompletedExpedition;            // 0x0418 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Hour;                // 0x0420 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Hour_1;              // 0x0428 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Minute;              // 0x0430 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Minute_1;            // 0x0438 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Second;              // 0x0440 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Second_1;            // 0x0448 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Complete;                                         // 0x0450 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Progress;                                         // 0x0458 (size: 0x8)
    class UWBP_CommonCircularGauge_C* CircularGauge_Progress;                         // 0x0460 (size: 0x8)
    class UHorizontalBox* HorizontalBox_RemainTime;                                   // 0x0468 (size: 0x8)
    class UImage* Image_Icon_Expedition;                                              // 0x0470 (size: 0x8)
    class UBP_PalTextBlock_C* Text_StageName;                                         // 0x0478 (size: 0x8)
    bool IsSimpleDetail;                                                              // 0x0480 (size: 0x1)

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
}; // Size: 0x481

#endif
