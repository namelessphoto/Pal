#ifndef UE4SS_SDK_WBP_PalLoupe_HPP
#define UE4SS_SDK_WBP_PalLoupe_HPP

class UWBP_PalLoupe_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Loupe_Angle;
    class UImage* Loupe_Circle;
    class UImage* Pal_base;
    class UWBP_PalCommonCharacterSlot_C* WBP_PalCommonCharacterSlot;
    class UWBP_PalLoupe_GaugeHP_C* WBP_PalLoupe_GaugeHP;
    class UWBP_PalLoupe_GaugeHunger_C* WBP_PalLoupe_GaugeHunger;
    class UPalIndividualCharacterHandle* targetHandle;

    void UpdateHunger(double nowHunger, double nowMaxHunger);
    void UpdateHP(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    void Clear();
    void SetTargetPal(class UPalIndividualCharacterSlot* TargetSlot);
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalLoupe(int32 EntryPoint);
};

#endif
