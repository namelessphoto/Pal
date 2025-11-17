#ifndef UE4SS_SDK_WBP_Ingame_Incubator_HPP
#define UE4SS_SDK_WBP_Ingame_Incubator_HPP

class UWBP_Ingame_Incubator_C : public UPalUIMapObjectStatusIndicatorBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_DetailToSimple;
    class UWidgetAnimation* Anm_Buff_OnToOff;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_HatchState;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Hour;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Hour_1;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Minute;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Minute_1;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Second;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Second_1;
    class UImage* CircleGauge_Complete;
    class UImage* CircleGauge_Progress;
    class UHorizontalBox* HorizontalBox_RemainTime;
    class UOverlay* OverlayBuff;
    class UOverlay* OverlayStatus;
    class UImage* StatusBase;
    class UBP_PalTextBlock_C* Text_Buff_Value;
    class UBP_PalTextBlock_C* Text_EggName;
    class UBP_PalTextBlock_C* Text_Status;
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon;
    class UWBP_RequirePalInfo_C* WBP_RequirePalInfo;
    class UPalMapObjectHatchingEggModel* Model;
    int32 LastNum;
    FDataTableRowHandle UnusedMsgId;
    FDataTableRowHandle completeMsgID;
    FTimerHandle DisplayCheckTimer;
    bool isDisplayedDetail;
    FName CachedItemId;
    TArray<FDataTableRowHandle> TemperatureMsgIds;
    bool HasEgg;
    bool HasChara;
    bool LackPower;

    void UpdatePowerSuffcient(class UPalMapObjectEnergyModule* Module);
    void RatioToPersentOffsetText(double Ratio, FText& Persent);
    void UpdateEggDisplay();
    void Set Second(int32 RemainingSecond);
    void OnUpdateHatchTemperature(int32 TempDiff);
    void OnUpdateHatchedCharacter(class UPalMapObjectHatchingEggModel* Model);
    void OnUpdateItemContainer(class UPalItemContainer* Container);
    void On Update Work Amount(class UPalWorkProgress* WorkProgress);
    void OnSetup();
    void DisplayCheck();
    void Destruct();
    void Construct();
    void ExecuteUbergraph_WBP_Ingame_Incubator(int32 EntryPoint);
};

#endif
