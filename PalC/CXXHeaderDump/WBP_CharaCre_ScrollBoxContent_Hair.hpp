#ifndef UE4SS_SDK_WBP_CharaCre_ScrollBoxContent_Hair_HPP
#define UE4SS_SDK_WBP_CharaCre_ScrollBoxContent_Hair_HPP

class UWBP_CharaCre_ScrollBoxContent_Hair_C : public UWBP_CharaCre_ScrollBoxContentBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_CharaCre_ColorSelect_sq_C* WBP_CharaCre_ColorSelect_sq_Hair;
    class UWBP_CharaCre_PartsSelectPanel_C* WBP_MeshSelectPanel_Hair;
    TMap<class FName, class FPalCharacterCreationMeshPresetDataRow> HairMeshMap;
    TArray<FLinearColor> HairColorPreset;
    FWBP_CharaCre_ScrollBoxContent_Hair_COnSelectedHairColor OnSelectedHairColor;
    void OnSelectedHairColor(FLinearColor HSV);
    class UWidget* RestoreFocusWIdget;

    void OnChangedHairColor(FLinearColor Color);
    void GetRestoreFocusTarget(class UWidget*& Widget);
    void OnClosedHairColorSelectWindow(class UPalHUDDispatchParameterBase* Param);
    void ApplyMakeInfo(FPalPlayerDataCharacterMakeInfo MakeInfo);
    void GetTopFocusTarget(class UWidget*& Widget);
    void Construct();
    void BndEvt__WBP_CharaCre_ScrollBoxContent_Hair_WBP_CharaCre_ColorSelect_sq_Hair_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWBP_CharaCre_ColorSelect_sq_C* Widget);
    void ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Hair(int32 EntryPoint);
    void OnSelectedHairColor__DelegateSignature(FLinearColor HSV);
};

#endif
