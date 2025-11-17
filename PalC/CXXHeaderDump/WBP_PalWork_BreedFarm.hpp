#ifndef UE4SS_SDK_WBP_PalWork_BreedFarm_HPP
#define UE4SS_SDK_WBP_PalWork_BreedFarm_HPP

class UWBP_PalWork_BreedFarm_C : public UPalUIMapObjectStatusIndicatorBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_DetailToSimple;
    class UBP_PalTextBlock_C* BP_PalTextBlock_Mate;
    class UImage* CircleGauge_Progress;
    class UImage* Image_Egg;
    class UImage* Image_Mate;
    class UOverlay* Overlay_Condition_NoCake;
    class UBP_PalTextBlock_C* Text_FemaleNum;
    class UBP_PalTextBlock_C* Text_ItemName;
    class UBP_PalTextBlock_C* Text_MaleNum;
    class UWBP_RequirePalInfo_C* WBP_RequirePalInfo;
    FTimerHandle DisplayCheckTimer;
    bool isDisplayedDetail;
    class UPalMapObjectBreedFarmModel* Breed Farm Model;
    FDataTableRowHandle CanBreedMsgId;
    FDataTableRowHandle CantBreedMsgId;
    FDataTableRowHandle BreedEggMsgId;
    FDataTableRowHandle NoMateMsgI;

    void CREATEDELEGATE_PROXYFUNCTION_0(float CurrentProgress, float MaxProgress);
    void OnUpdateContainer(class UPalMapObjectItemContainerModule* Container);
    void On Updated Worker Pal(class UPalWorkBase* Work);
    void OnUpdateProgress(double NowProgress, double MaxProgress);
    void OnSetup();
    void DisplayCheck();
    void Destruct();
    void Construct();
    void ExecuteUbergraph_WBP_PalWork_BreedFarm(int32 EntryPoint);
};

#endif
