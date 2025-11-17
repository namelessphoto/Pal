#ifndef UE4SS_SDK_WBP_PalWork_FishPond_HPP
#define UE4SS_SDK_WBP_PalWork_FishPond_HPP

class UWBP_PalWork_FishPond_C : public UPalUIMapObjectStatusIndicatorBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UWidgetAnimation* Anm_DetailToSimple;                                       // 0x0410 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Hour;                // 0x0418 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Hour_1;              // 0x0420 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Minute;              // 0x0428 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Minute_1;            // 0x0430 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Second;              // 0x0438 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Second_1;            // 0x0440 (size: 0x8)
    class UImage* CircleGauge_Progress;                                               // 0x0448 (size: 0x8)
    class UHorizontalBox* HorizontalBox_RemainTime;                                   // 0x0450 (size: 0x8)
    class UImage* Image_Icon_FishPond;                                                // 0x0458 (size: 0x8)
    class UBP_PalTextBlock_C* Text_MaxItemNum;                                        // 0x0460 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NowItemNum;                                        // 0x0468 (size: 0x8)
    class UBP_PalTextBlock_C* Text_TargetName;                                        // 0x0470 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal;                              // 0x0478 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_1;                            // 0x0480 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_2;                            // 0x0488 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_3;                            // 0x0490 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_4;                            // 0x0498 (size: 0x8)
    class UWBP_RequirePalInfo_C* WBP_RequirePalInfo;                                  // 0x04A0 (size: 0x8)
    TMap<class EPalFarmCropState, class FDataTableRowHandle> StateMsgIdMap;           // 0x04A8 (size: 0x50)
    TArray<class UWBP_PalCraftInfo_Pal_C*> PalInfos;                                  // 0x04F8 (size: 0x10)
    FTimerHandle DisplayCheckTimer;                                                   // 0x0508 (size: 0x8)
    bool isDisplayedDetail;                                                           // 0x0510 (size: 0x1)
    bool HideNextState;                                                               // 0x0511 (size: 0x1)
    int32 LastNum;                                                                    // 0x0514 (size: 0x4)

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
}; // Size: 0x518

#endif
