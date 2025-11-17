#ifndef UE4SS_SDK_WBP_CharaCre_ScrollBoxContent_Face_HPP
#define UE4SS_SDK_WBP_CharaCre_ScrollBoxContent_Face_HPP

class UWBP_CharaCre_ScrollBoxContent_Face_C : public UWBP_CharaCre_ScrollBoxContentBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_CharaCre_ColorSelect_sq_C* WBP_CharaCre_ColorSelect_sq_Brow;
    class UWBP_CharaCre_ColorSelect_sq_C* WBP_CharaCre_ColorSelect_sq_Eye;
    class UWBP_CharaCre_PartsSelectPanel_C* WBP_PartsSelectPanel_Eye;
    class UWBP_CharaCre_PartsSelectPanel_C* WBP_PartsSelectPanel_Head;
    TMap<class FName, class FPalCharacterCreationMeshPresetDataRow> HeadMeshMap;
    TArray<FLinearColor> BrowColorPreset;
    TArray<FLinearColor> EyeColorPreset;
    FWBP_CharaCre_ScrollBoxContent_Face_COnSelectedEyeColor OnSelectedEyeColor;
    void OnSelectedEyeColor(FLinearColor Color);
    class UWidget* RestoreFocusWIdget;
    FWBP_CharaCre_ScrollBoxContent_Face_COnSelectedBrowColor OnSelectedBrowColor;
    void OnSelectedBrowColor(FLinearColor Color);

    void OnChangedBrowColor(FLinearColor Color);
    void OnCloseBrowColorSelectWindow(class UPalHUDDispatchParameterBase* Param);
    void OnChangedEyeColor(FLinearColor Color);
    void GetRestoreFocusTarget(class UWidget*& Widget);
    void OnClosedEyeColorSelectWindow(class UPalHUDDispatchParameterBase* Param);
    void ApplyMakeInfo(FPalPlayerDataCharacterMakeInfo MakeInfo);
    void GetTopFocusTarget(class UWidget*& Widget);
    void Construct();
    void BndEvt__WBP_CharaCre_ScrollBoxContent_Face_WBP_CharaCre_ColorSelect_sq_Eye_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWBP_CharaCre_ColorSelect_sq_C* Widget);
    void BndEvt__WBP_CharaCre_ScrollBoxContent_Face_WBP_CharaCre_ColorSelect_sq_Brow_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWBP_CharaCre_ColorSelect_sq_C* Widget);
    void ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Face(int32 EntryPoint);
    void OnSelectedBrowColor__DelegateSignature(FLinearColor Color);
    void OnSelectedEyeColor__DelegateSignature(FLinearColor Color);
};

#endif
