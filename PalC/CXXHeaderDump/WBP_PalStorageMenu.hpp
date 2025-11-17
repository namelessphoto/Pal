#ifndef UE4SS_SDK_WBP_PalStorageMenu_HPP
#define UE4SS_SDK_WBP_PalStorageMenu_HPP

class UWBP_PalStorageMenu_C : public UPalUIPalStorageMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UWidgetAnimation* Default_In;                                               // 0x0438 (size: 0x8)
    class UWBP_IngameMenu_PalBox_C* WBP_IngameMenu_PalBox;                            // 0x0440 (size: 0x8)
    FDataTableRowHandle titleMsgId;                                                   // 0x0448 (size: 0x10)
    FDataTableRowHandle loosePalCheckMsgId;                                           // 0x0458 (size: 0x10)
    TSoftObjectPtr<UPalIndividualCharacterSlot> CachedLooseSlot;                      // 0x0468 (size: 0x30)
    TEnumAsByte<EPalBoxHoveredSlotType> hoverdSlotType;                               // 0x0498 (size: 0x1)
    FPalDataTableRowName_UIInputAction prevCursorShortcutInput;                       // 0x049C (size: 0x8)
    FPalDataTableRowName_UIInputAction nextCursorShortcutInput;                       // 0x04A4 (size: 0x8)
    FPalDataTableRowName_UIInputAction SendSlotInput;                                 // 0x04AC (size: 0x8)
    FPalUIActionBindData SendSlotInputHandle;                                         // 0x04B4 (size: 0x4)
    FPalUIActionBindData ViewDetailInputHandle;                                       // 0x04B8 (size: 0x4)
    FPalUIActionBindData FavoriteInputHandle;                                         // 0x04BC (size: 0x4)
    class UPalIndividualCharacterSlot* CachedLastHoveredSlot;                         // 0x04C0 (size: 0x8)
    FPalDataTableRowName_UIInputAction ViewDetailInput;                               // 0x04C8 (size: 0x8)
    TArray<class UPalIndividualCharacterSlot*> LockSlotList;                          // 0x04D0 (size: 0x10)
    FPalDataTableRowName_UIInputAction FavoriteShortcutInput;                         // 0x04E0 (size: 0x8)
    bool bIsBaseCamp;                                                                 // 0x04E8 (size: 0x1)

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
}; // Size: 0x4E9

#endif
