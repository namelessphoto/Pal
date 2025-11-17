#ifndef UE4SS_SDK_WBP_PlayerInventoryWeightInfo_HPP
#define UE4SS_SDK_WBP_PlayerInventoryWeightInfo_HPP

class UWBP_PlayerInventoryWeightInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_NormalToFull;
    class UProgressBar* ProgressBar_ItemWeight;
    class USizeBox* SizeBox_CurrentWeightArrow;
    class USizeBox* SizeBox_MaxWeightArrow;
    class UBP_PalTextBlock_C* Text_MaxWeight;
    class UBP_PalTextBlock_C* Text_NowWeight;
    float CachedInventoryWeightRate;

    void CREATEDELEGATE_PROXYFUNCTION_0(float ChangedWeight);
    void OnUpdateCurrentWeightBuff(double ChangedCurrentWeight);
    void OnUpdateMaxWeightBuff();
    void UpdateWeight_Internal(double NowWeight, double MaxWeight, bool ForceSkipAnim);
    void OnUpdateMaxWeight(float MaxWeight);
    void OnUpdateWeight(float NowWeight);
    void AnmEvent_ForceNormal();
    void AnmEvent_ForceFull();
    void AnmEvent_FullToNormal();
    void AnmEvent_NormalToFull();
    void Construct();
    void Destruct();
    void ExecuteUbergraph_WBP_PlayerInventoryWeightInfo(int32 EntryPoint);
};

#endif
