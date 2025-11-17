#ifndef UE4SS_SDK_WBP_CharaCre_PartsSelectPanel_HPP
#define UE4SS_SDK_WBP_CharaCre_PartsSelectPanel_HPP

class UWBP_CharaCre_PartsSelectPanel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWrapBox* WrapBox_Main;
    FWBP_CharaCre_PartsSelectPanel_COnClickedAnyContent OnClickedAnyContent;
    void OnClickedAnyContent(FName BindedName);
    TMap<class FName, class UWBP_CharaCre_PartsSelect_sq_C*> ButtonMap;
    class UWBP_CharaCre_PartsSelect_sq_C* LastClickedButton;

    void SetSelectedPresetName(FName PresetName);
    void OnClicked_Internal(class UWBP_CharaCre_PartsSelect_sq_C* Button);
    void GetTopFocusTarget(class UWidget*& Widget);
    void AddPreset(FName PresetName, TSoftObjectPtr<UTexture2D> SoftIconTexture);
    void AddMeshPresets(TMap<class FName, class FPalCharacterCreationMeshPresetDataRow> PresetMap);
    void Construct();
    void ExecuteUbergraph_WBP_CharaCre_PartsSelectPanel(int32 EntryPoint);
    void OnClickedAnyContent__DelegateSignature(FName BindedName);
};

#endif
