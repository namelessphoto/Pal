#ifndef UE4SS_SDK_WBP_PalWork_FishPond_HPP
#define UE4SS_SDK_WBP_PalWork_FishPond_HPP

class UWBP_PalWork_FishPond_C : public UPalUIMapObjectStatusIndicatorBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_DetailToSimple;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Hour;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Hour_1;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Minute;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Minute_1;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Second;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Second_1;
    class UImage* CircleGauge_Progress;
    class UHorizontalBox* HorizontalBox_RemainTime;
    class UImage* Image_Icon_FishPond;
    class UBP_PalTextBlock_C* Text_MaxItemNum;
    class UBP_PalTextBlock_C* Text_NowItemNum;
    class UBP_PalTextBlock_C* Text_TargetName;
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal;
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_1;
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_2;
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_3;
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_4;
    class UWBP_RequirePalInfo_C* WBP_RequirePalInfo;
    TMap<class EPalFarmCropState, class FDataTableRowHandle> StateMsgIdMap;
    TArray<class UWBP_PalCraftInfo_Pal_C*> PalInfos;
    FTimerHandle DisplayCheckTimer;
    bool isDisplayedDetail;
    bool HideNextState;
    int32 LastNum;

    void SetRemainTime(int32 RemainingSecond);
    void OnUpdateProductNumInfo(class UPalUIMapObjectFishPondStatusIndicatorModel* UIModel);
    void OnUpdateSelectedTarget(class UPalUIMapObjectFishPondStatusIndicatorModel* UIModel);
    class UPalMapObjectConcreteModelBase* GetOwnerConcreteModel();
    class UPalUIMapObjectFishPondStatusIndicatorModel* GetIndicatorModel();
    void GetMapObjectLocation(FVector& Location);
    void Setup();
    void On Updated Worker Pal(class UPalWorkBase* Work);
    void OnUpdateProgress(class UPalWorkProgress* Progress);
    void OnSetup();
    void DisplayCheck();
    void Destruct();
    void Construct();
    void ExecuteUbergraph_WBP_PalWork_FishPond(int32 EntryPoint);
};

#endif
