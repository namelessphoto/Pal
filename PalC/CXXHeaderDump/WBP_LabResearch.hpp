#ifndef UE4SS_SDK_WBP_LabResearch_HPP
#define UE4SS_SDK_WBP_LabResearch_HPP

class UWBP_LabResearch_C : public UPalUIMapObjectStatusIndicatorBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_DetailToSimple;
    class UCanvasPanel* CanvasPanel_NoResearch;
    class UCanvasPanel* CanvasPanel_ResearchInfo;
    class UImage* CircleGauge_Progress;
    class UHorizontalBox* HorizontalBox_Progress;
    class UHorizontalBox* HorizontalBox_Progress_Percent;
    class UBP_PalTextBlock_C* Text_Complete;
    class UBP_PalTextBlock_C* Text_ItemName;
    class UBP_PalTextBlock_C* Text_MaxItemNum;
    class UBP_PalTextBlock_C* Text_MaxItemNum_2;
    class UBP_PalTextBlock_C* Text_MaxItemNum_3;
    class UBP_PalTextBlock_C* Text_NowItemNum;
    class UBP_PalTextBlock_C* Text_NowPercent;
    class UBP_PalTextBlock_C* Text_NowPercent_1;
    class UBP_PalTextBlock_C* Text_Workload_Progress;
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal;
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_1;
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_2;
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_3;
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_4;
    class UWBP_RequirePalInfo_C* WBP_RequirePalInfo;
    class UWBP_ResearchEffectIcon_C* WBP_ResearchEffectIcon;
    TMap<class EPalFarmCropState, class FDataTableRowHandle> StateMsgIdMap;
    TArray<class UWBP_PalCraftInfo_Pal_C*> PalInfos;
    FTimerHandle DisplayCheckTimer;
    bool isDisplayedDetail;
    bool HideNextState;
    class UPalMapObjectLabModel* LabModel;
    FTimerHandle ProgressUpdateTimer;
    FTimerHandle WorkSyncTimer;

    void CheckWorkSync();
    void On Current Research Updated(class UPalMapObjectLabModel* LabModel);
    void Update Research Progress();
    void GetMapObjectLocation(FVector& Location);
    void Setup();
    void On Updated Worker Pal(class UPalWorkBase* Work);
    void OnSetup();
    void DisplayCheck();
    void Destruct();
    void Construct();
    void ExecuteUbergraph_WBP_LabResearch(int32 EntryPoint);
};

#endif
