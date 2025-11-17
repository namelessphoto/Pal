#ifndef UE4SS_SDK_WBP_PalCraftInfo_HPP
#define UE4SS_SDK_WBP_PalCraftInfo_HPP

class UWBP_PalCraftInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Set;
    class UWidgetAnimation* Anm_None;
    class UWidgetAnimation* Anm_Detail;
    class UWidgetAnimation* Anm_Simple;
    class UWBP_CommonCircularGauge_C* CircularGauge_Progress;
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
    TArray<class UWBP_PalCraftInfo_Pal_C*> workerPalWidgetArray;
    FDataTableRowHandle InfinityNumMsgId;
    FDataTableRowHandle RequireGenusMSGID;
    FDataTableRowHandle RequireTypeMSGID;

    void SetWorkSuitability(EPalWorkSuitability WorkSuitability);
    void UpdateRequireInfo(class UPalWorkBase* Work, EPalWorkSuitability WorkSuitability);
    bool IsCharacterAssignedFixedToTargetWork(class UPalCharacterParameterComponent* TargetCharacter, FGuid WorkId);
    void Set Invalid Recipe Detail();
    void SetProductItemID(FName ItemId);
    void SetWorkProgressRate(double Rate);
    void SetIcon(FName ItemId);
    void SetInfinityProductMode();
    void SetProductNum(int32 nowProductNum, int32 maxProductNum);
    void SetWorkerPalSlots(TArray<class UPalIndividualCharacterSlot*>& Slots, FGuid WorkId);
    void AnmEvent_ToDetail();
    void AnmEvent_ToSimpleDetail();
    void AnmEvent_NoRecipe();
    void AnmEvent_ForceSimple();
    void OnInitialized();
    void Construct();
    void ExecuteUbergraph_WBP_PalCraftInfo(int32 EntryPoint);
};

#endif
