#ifndef UE4SS_SDK_WBP_IngameProgress_HPP
#define UE4SS_SDK_WBP_IngameProgress_HPP

class UWBP_IngameProgress_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Assinged;
    class UWidgetAnimation* Anm_NonWorker;
    class UWidgetAnimation* Anm_Finish;
    class UWidgetAnimation* Anm_Close;
    class UWidgetAnimation* Anm_Open;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Hour;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Hour_1;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Minute;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Minute_1;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Second;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Second_1;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_sp2;
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_64;
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_95;
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_1150;
    class UCanvasPanel* BuilddingCanvas;
    class UHorizontalBox* HorizontalBox_RemainTime;
    class UCanvasPanel* NonWorkerCanvas;
    class UImage* Progress_Finish;
    class UProgressBar* ProgressBar_Progress;
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_01;
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_02;
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_03;
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_04;
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_05;
    class UCanvasPanel* WorkerPalCanvas;
    TArray<class UWBP_PalCraftInfo_Pal_C*> workerPalInfoWidgets;
    int32 LastNum;
    bool HasWorker;

    void SetWorkerPal(TArray<class UPalIndividualCharacterSlot*>& Slots);
    void Set Work Amount(double WorkAmount);
    void Change Non Worker Mode(bool isNonWorker);
    void Set Visible Number(ESlateVisibility NewVisibility);
    void Set Second(int32 RemainingSecond);
    void AnmEvent_NonWorker();
    void AnmEvent_DisplayWorker();
    void OnInitialized();
    void ExecuteUbergraph_WBP_IngameProgress(int32 EntryPoint);
};

#endif
