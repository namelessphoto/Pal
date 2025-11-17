#ifndef UE4SS_SDK_WBP_PalWorkFarm_HPP
#define UE4SS_SDK_WBP_PalWorkFarm_HPP

class UWBP_PalWorkFarm_C : public UPalUIMapObjectStatusIndicatorBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Progress_Pre_Loop;
    class UWidgetAnimation* Anm_DetailToSimple;
    class UCanvasPanel* Canvas_Text_Progress_Aft;
    class UCanvasPanel* Canvas_Text_Progress_Pre;
    class UCanvasPanel* Canvas_Text_Progress_Simple;
    class UImage* CircleGauge_Progress;
    class UImage* ProgressArrow0;
    class UImage* ProgressArrow0_1;
    class UImage* ProgressArrow0_2;
    class UBP_PalTextBlock_C* Text_ItemName;
    class UBP_PalTextBlock_C* Text_Progress_Aft;
    class UBP_PalTextBlock_C* Text_Progress_Pre;
    class UBP_PalTextBlock_C* Text_Progress_Simple;
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon;
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal;
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_1;
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_2;
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_3;
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_4;
    class UWBP_RequirePalInfo_C* WBP_RequirePalInfo;
    class UPalMapObjectFarmBlockV2Model* Model;
    TMap<class EPalFarmCropState, class FDataTableRowHandle> StateMsgIdMap;
    TArray<class UWBP_PalCraftInfo_Pal_C*> PalInfos;
    FTimerHandle DisplayCheckTimer;
    bool isDisplayedDetail;
    bool HideNextState;

    void CREATEDELEGATE_PROXYFUNCTION_0(float NewValue);
    void On Updated Worker Pal(class UPalWorkBase* Work);
    void OnUpdateProgress(double Progress);
    void OnUpdateState(EPalFarmCropState LastState, EPalFarmCropState NextState);
    void OnSetup();
    void DisplayCheck();
    void Destruct();
    void Construct();
    void ExecuteUbergraph_WBP_PalWorkFarm(int32 EntryPoint);
};

#endif
