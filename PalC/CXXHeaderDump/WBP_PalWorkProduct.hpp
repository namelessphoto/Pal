#ifndef UE4SS_SDK_WBP_PalWorkProduct_HPP
#define UE4SS_SDK_WBP_PalWorkProduct_HPP

class UWBP_PalWorkProduct_C : public UPalUIMapObjectStatusIndicatorBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_DetailToSimple;
    class UImage* CircleGauge_Progress;
    class UBP_PalTextBlock_C* Text_ItemName;
    class UBP_PalTextBlock_C* Text_MaxItemNum;
    class UBP_PalTextBlock_C* Text_NowItemNum;
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon;
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
    class UPalMapObjectProductItemModel* Product Item Model;

    void GetMapObjectLocation(FVector& Location);
    void Setup();
    void OnUpdateContainer(class UPalItemContainer* Container);
    void On Updated Worker Pal(class UPalWorkBase* Work);
    void OnUpdateProgress(class UPalWorkProgress* Progress);
    void OnSetup();
    void DisplayCheck();
    void Destruct();
    void Construct();
    void ExecuteUbergraph_WBP_PalWorkProduct(int32 EntryPoint);
};

#endif
