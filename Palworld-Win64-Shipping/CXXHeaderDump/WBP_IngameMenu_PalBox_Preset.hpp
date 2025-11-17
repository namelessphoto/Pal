#ifndef UE4SS_SDK_WBP_IngameMenu_PalBox_Preset_HPP
#define UE4SS_SDK_WBP_IngameMenu_PalBox_Preset_HPP

class UWBP_IngameMenu_PalBox_Preset_C : public UPalUIOtomoLoadoutBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* Canvas_MenuGuide;
    class UScrollBox* ScrollBox_0;
    class UBP_PalTextBlock_C* Text_MenuGuide;
    class UWBP_CommonSelectList_C* WBP_CommonSelectList;
    class UWBP_IngameMenu_PalBox_PalDetail_C* WBP_IngameMenu_PalBox_PalDetail;
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_1;
    int32 LastHoveredIndex;
    int32 LastPinedIndex;
    FPalUIActionBindData RightClickDisplayAction;
    class UWBP_IngameMenu_PalBox_PresetList_C* LastViewDetailLoadoutGroup;
    TArray<FPalInstanceID> ReplicatedInstanceIds;
    TMap<class FPalInstanceID, class UPalIndividualCharacterHandle*> ReplicateCharacterParameterMap;
    FPalInstanceID CurrentWaitSyncInstanceId;

    void HideCharacterDetail();
    void Show Character Detail(int32 LoadoutIndex, int32 CharaIndex);
    void OnSyncIndividualParameter(class UPalIndividualCharacterHandle* Handle, class UPalIndividualCharacterParameter* Parameter);
    void ToggleIndividualParamReplicate(bool Replicate);
    void ClearExtraUIDisplay();
    void OnCloseNameEditWindow(class UPalHUDDispatchParameterBase* Param);
    void EmptyFunction();
    void CancelAction();
    void RightClick_Pad();
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void ChangePresetName();
    void OverwritePreset(bool IsConfirm);
    void DeletePreset();
    void SetupListWidget(class UWBP_IngameMenu_PalBox_PresetList_C* ListUI, bool AsPreset, int32 Index);
    void OnPrestOptionSelect(FName SelectId);
    void OnButtonUnhovered(int32 Index);
    void OnButtonHovered(int32 Index);
    void OnPresetRightClicked(int32 Index);
    class UWidget* BP_GetDesiredFocusTarget();
    void OnPresetClicked(int32 Index);
    void OnAddButtonClicked(int32 Index);
    void Setup();
    void Construct();
    void OnSetup();
    void BndEvt__WBP_IngameMenu_PalBox_Preset_ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
    void Destruct();
    void ExecuteUbergraph_WBP_IngameMenu_PalBox_Preset(int32 EntryPoint);
};

#endif
