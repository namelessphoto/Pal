#ifndef UE4SS_SDK_WBP_PalWorlSkillFruitFarm_HPP
#define UE4SS_SDK_WBP_PalWorlSkillFruitFarm_HPP

class UWBP_PalWorlSkillFruitFarm_C : public UPalUIMapObjectStatusIndicatorBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Progress_Pre_Loop;
    class UWidgetAnimation* Anm_DetailToSimple;
    class UCanvasPanel* Canvas_Progress_Aft;
    class UCanvasPanel* Canvas_Progress_Pre;
    class UCanvasPanel* Canvas_Progress_Simple;
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
    TArray<class UWBP_PalCraftInfo_Pal_C*> PalInfos;
    FTimerHandle DisplayCheckTimer;
    bool isDisplayedDetail;
    bool HideNextState;
    class UPalMapObjectFarmSkillFruitsModel* MyModel;
    TMap<class EPalFarmSkillFruitsState, class FDataTableRowHandle> StateMsgIdMap;

    void CREATEDELEGATE_PROXYFUNCTION_0(float NewValue);
    void SetGrowingItemId(FName StaticItemId);
    void OnUpdateState(EPalFarmSkillFruitsState NextState);
    void On Updated Worker Pal(class UPalWorkBase* Work);
    void OnUpdateProgress(double Progress);
    void OnSetup();
    void DisplayCheck();
    void Destruct();
    void Construct();
    void ExecuteUbergraph_WBP_PalWorlSkillFruitFarm(int32 EntryPoint);
};

#endif
