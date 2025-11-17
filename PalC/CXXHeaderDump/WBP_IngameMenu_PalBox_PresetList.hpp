#ifndef UE4SS_SDK_WBP_IngameMenu_PalBox_PresetList_HPP
#define UE4SS_SDK_WBP_IngameMenu_PalBox_PresetList_HPP

class UWBP_IngameMenu_PalBox_PresetList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Save;
    class UWidgetAnimation* Anm_NormalToFocus;
    class UBP_PalTextBlock_C* BP_PalTextBlock_Name;
    class UCanvasPanel* CanvasPanel_Slots;
    class UOverlay* Overlay_NewAdd;
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton;
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton_1;
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton_2;
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton_3;
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton_4;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    TArray<class UWBP_PalCommonCharacterSlotButton_C*> CharacterSlots;
    int32 Index;
    bool IsPreset;
    FWBP_IngameMenu_PalBox_PresetList_COnAddPresetClicked OnAddPresetClicked;
    void OnAddPresetClicked(int32 Index);
    FWBP_IngameMenu_PalBox_PresetList_COnPresetClicked OnPresetClicked;
    void OnPresetClicked(int32 Index);
    FWBP_IngameMenu_PalBox_PresetList_COnButtonHovered OnButtonHovered;
    void OnButtonHovered(int32 Index);
    FWBP_IngameMenu_PalBox_PresetList_COnButtonUnhovered OnButtonUnhovered;
    void OnButtonUnhovered(int32 Index);
    FWBP_IngameMenu_PalBox_PresetList_COnPresetRightClicked OnPresetRightClicked;
    void OnPresetRightClicked(int32 Index);
    FWBP_IngameMenu_PalBox_PresetList_COnCharaSlotHovered OnCharaSlotHovered;
    void OnCharaSlotHovered(int32 LoadoutIndex, int32 SlotIndex);
    FWBP_IngameMenu_PalBox_PresetList_COnCharaSlotUnhovered OnCharaSlotUnhovered;
    void OnCharaSlotUnhovered();

    void TogglePresetButton(bool ToCharacterSlot);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void SetupAdd(int32 Index);
    void SetupPreset(FPalOtomoLoadoutData LoadoutData, int32 Index);
    void AnmEvent_Focus();
    void AnmEvent_Normal();
    void AnmEvent_Save();
    void OnInitialized();
    void BndEvt__WBP_IngameMenu_PalBox_PresetList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_PalBox_PresetList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_PalBox_PresetList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void OnCharacterSlotHovered(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnCharacterSlotUnhovered(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void ExecuteUbergraph_WBP_IngameMenu_PalBox_PresetList(int32 EntryPoint);
    void OnCharaSlotUnhovered__DelegateSignature();
    void OnCharaSlotHovered__DelegateSignature(int32 LoadoutIndex, int32 SlotIndex);
    void OnPresetRightClicked__DelegateSignature(int32 Index);
    void OnButtonUnhovered__DelegateSignature(int32 Index);
    void OnButtonHovered__DelegateSignature(int32 Index);
    void OnPresetClicked__DelegateSignature(int32 Index);
    void OnAddPresetClicked__DelegateSignature(int32 Index);
};

#endif
