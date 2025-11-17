#ifndef UE4SS_SDK_WBP_PalStorageMenu_HPP
#define UE4SS_SDK_WBP_PalStorageMenu_HPP

class UWBP_PalStorageMenu_C : public UPalUIPalStorageMenu
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Default_In;
    class UWBP_IngameMenu_PalBox_C* WBP_IngameMenu_PalBox;
    FDataTableRowHandle titleMsgId;
    FDataTableRowHandle loosePalCheckMsgId;
    TSoftObjectPtr<UPalIndividualCharacterSlot> CachedLooseSlot;
    TEnumAsByte<EPalBoxHoveredSlotType> hoverdSlotType;
    FPalDataTableRowName_UIInputAction prevCursorShortcutInput;
    FPalDataTableRowName_UIInputAction nextCursorShortcutInput;
    FPalDataTableRowName_UIInputAction SendSlotInput;
    FPalUIActionBindData SendSlotInputHandle;
    FPalUIActionBindData ViewDetailInputHandle;
    FPalUIActionBindData FavoriteInputHandle;
    class UPalIndividualCharacterSlot* CachedLastHoveredSlot;
    FPalDataTableRowName_UIInputAction ViewDetailInput;
    TArray<class UPalIndividualCharacterSlot*> LockSlotList;
    FPalDataTableRowName_UIInputAction FavoriteShortcutInput;
    bool bIsBaseCamp;

    void SetupInternal(class UPalHUDDispatchParameter_PalBox* Parameter);
    void OnBoxSlotCreated(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void OnFavoriteShortcut();
    void SetEnableDragDrop(bool bIsEnableDragDrop);
    void OnUpdateSlotHandle(class UPalIndividualCharacterSlot* Slot, class UPalIndividualCharacterHandle* LastHandle);
    void SelectSlot(class UPalIndividualCharacterSlot* Slot, EPalItemSlotPressType PressType);
    void OnViewDetailInput();
    void On Send Slot Input();
    void UnregisterPalOperateInput();
    void Register Pal Operate Input();
    void OnCursorShortcutNext();
    void OnCursorShortcutPrev();
    class UWidget* BP_GetDesiredFocusTarget();
    void RegisterStaticActionInput();
    void Setup();
    void OnSetup();
    void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_4_OnClickedPalBoxPal__DelegateSignature(class UPalIndividualCharacterSlot* Slot, EPalItemSlotPressType PressType);
    void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_5_OnClickedPartySlot__DelegateSignature(class UPalIndividualCharacterSlot* TargetSlot);
    void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_7_OnClickedBaseCampPal__DelegateSignature(class UPalIndividualCharacterSlot* Slot, EPalItemSlotPressType PressType);
    void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_9_OnClickedCloseButton__DelegateSignature();
    void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_10_OnAnySlotHovered__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
    void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_0_OnHoveredPartySlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
    void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_1_OnHoveredBoxSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
    void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_2_OnHoveredWorkerSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
    void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_3_OnAnySlotUnhovered__DelegateSignature();
    void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_12_OnRightClickedBoxSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
    void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_13_OnRightClickedWorkerSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
    void Destruct();
    void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_8_OnSlotCreated__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void ExecuteUbergraph_WBP_PalStorageMenu(int32 EntryPoint);
};

#endif
