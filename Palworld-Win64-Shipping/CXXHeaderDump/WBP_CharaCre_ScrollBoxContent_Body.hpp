#ifndef UE4SS_SDK_WBP_CharaCre_ScrollBoxContent_Body_HPP
#define UE4SS_SDK_WBP_CharaCre_ScrollBoxContent_Body_HPP

class UWBP_CharaCre_ScrollBoxContent_Body_C : public UWBP_CharaCre_ScrollBoxContentBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_CharaCre_ColorSelect_sq_C* WBP_CharaCre_ColorSelect_sq;
    class UWBP_Chara_Cre_PartsSizeSlider_C* WBP_PartsSizeSlider_Arm;
    class UWBP_Chara_Cre_PartsSizeSlider_C* WBP_PartsSizeSlider_Leg;
    class UWBP_Chara_Cre_PartsSizeSlider_C* WBP_PartsSizeSlider_Torso;
    class UWrapBox* WrapBox_Body;
    TMap<class FName, class FPalCharacterCreationMeshPresetDataRow> BodyMeshMap;
    TArray<FLinearColor> PresetColors;
    FWBP_CharaCre_ScrollBoxContent_Body_COnSelectedSkinColor OnSelectedSkinColor;
    void OnSelectedSkinColor(FLinearColor Color);
    class UWidget* RestoreFocusWIdget;
    FWBP_CharaCre_ScrollBoxContent_Body_COnClickedBodyType OnClickedBodyType;
    void OnClickedBodyType(FName PresetName);
    class UWBP_CharaCre_BodyTypeButton_C* LastClickedBodyTypeButton;

    void SetDefaultBodyTypePresetName(FName PresetName);
    void OnClickedBodyTypeButton(class UWBP_CharaCre_BodyTypeButton_C* Widget);
    class UWidget* CustomNavi_ToSkinColor(EUINavigation Navigation);
    class UWidget* CustomNavi_ToTorsoSlider(EUINavigation Navigation);
    void GetRestoreFocusTarget(class UWidget*& Widget);
    void OnChangedSelectColor(FLinearColor Color);
    void OnClosedCOlorSelectWindow(class UPalHUDDispatchParameterBase* Param);
    void ApplyMakeInfo(FPalPlayerDataCharacterMakeInfo MakeInfo);
    void GetTopFocusTarget(class UWidget*& Widget);
    void Construct();
    void BndEvt__WBP_CharaCre_ScrollBoxContent_Body_WBP_CharaCre_ColorSelect_sq_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWBP_CharaCre_ColorSelect_sq_C* Widget);
    void ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Body(int32 EntryPoint);
    void OnClickedBodyType__DelegateSignature(FName PresetName);
    void OnSelectedSkinColor__DelegateSignature(FLinearColor Color);
};

#endif
