#ifndef UE4SS_SDK_WBP_PalItemListBlock_HPP
#define UE4SS_SDK_WBP_PalItemListBlock_HPP

class UWBP_PalItemListBlock_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_InventoryListContent_C* WBP_InventoryListContent;
    TSubclassOf<class UWBP_PalItemSlotButtonBase_C> ItemSlotButtonClass;
    FWBP_PalItemListBlock_COnLeftClickedAnyContent OnLeftClickedAnyContent;
    void OnLeftClickedAnyContent(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    FWBP_PalItemListBlock_COnMiddleClickedAnyContent OnMiddleClickedAnyContent;
    void OnMiddleClickedAnyContent(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    FWBP_PalItemListBlock_COnRightClickedAnyContent OnRightClickedAnyContent;
    void OnRightClickedAnyContent(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    FWBP_PalItemListBlock_COnHoverdAnyContent OnHoverdAnyContent;
    void OnHoverdAnyContent(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    FWBP_PalItemListBlock_COnEndHoveredAnyContent OnEndHoveredAnyContent;
    void OnEndHoveredAnyContent(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    FWBP_PalItemListBlock_COnFocusedAnyContent OnFocusedAnyContent;
    void OnFocusedAnyContent(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    FWBP_PalItemListBlock_COnUnfocusedAnyContent OnUnfocusedAnyContent;
    void OnUnfocusedAnyContent(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    FWBP_PalItemListBlock_COnCreatedSlotButton OnCreatedSlotButton;
    void OnCreatedSlotButton(class UWBP_PalItemSlotButtonBase_C* createdWidget);
    FVector2D ChildrenPadding;
    FWBP_PalItemListBlock_COnDragDetectedAnyContent OnDragDetectedAnyContent;
    void OnDragDetectedAnyContent(class UWBP_PalItemSlotButtonBase_C* Widget);
    FWBP_PalItemListBlock_COnRequestUseItem OnRequestUseItem;
    void OnRequestUseItem(class UWBP_PalItemSlotButtonBase_C* Button);
    TArray<EPalItemTypeA> FilterTypeA;
    TArray<EPalItemTypeB> FilterTypeB;
    TMap<UPalItemSlot*, int32> SlotMap;

    void On Update Slot Internal(class UPalItemSlot* Slot);
    void On Drag Detected Internal(class UWBP_PalItemSlotButtonBase_C* Widget);
    void OnRequestUse_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void IsAllSlotEmpty(bool& IsALLEmpty);
    void GetAllItemSlotButtons(TArray<class UWBP_PalItemSlotButtonBase_C*>& slotButtons);
    void EditCreatedSlotWidget(class UWBP_PalItemSlotButtonBase_C* createdSlotWidget, class UWidget*& editedWidget);
    void GetFocusTarget(class UWidget*& NewParam);
    void ClearFiltering();
    void FilteringFromItemTypeB(TArray<EPalItemTypeB>& displayItemTypesB, bool isEmptySlotDIsplay);
    void FilteringFromItemTypeA(TArray<EPalItemTypeA>& displayTypesA, bool isEmptySlotDIsplay);
    void OnUnfocusedSlot_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void OnFocusedSlot_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void Focus();
    void SetListName(FText InName);
    void Create Item Slot Widget(class UPalItemSlot* TargetSlot, bool IsEnableQuickMove, bool IgnoreEmptySlot);
    void OnLeftClickedSlot_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    void OnMiddletClickedSlot_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void OnRightClickedSlot_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    void OnEndHoveredSlot_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void OnHoveredSlot_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void ChangeItemSlotButtonClass(TSubclassOf<class UWBP_PalItemSlotButtonBase_C> NewClass);
    void AddItemSlot(class UPalItemSlot* TargetSlot, bool bIsEnableQuickMove, bool bIgnoreEmptySlot);
    void Add Item Container(class UPalItemContainer* TargetContainer, bool IsEnableQuickMove, bool IgnoreEmptySlot);
    void Construct();
    void Destruct();
    void ExecuteUbergraph_WBP_PalItemListBlock(int32 EntryPoint);
    void OnRequestUseItem__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Button);
    void OnMiddleClickedAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void OnDragDetectedAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget);
    void OnCreatedSlotButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* createdWidget);
    void OnUnfocusedAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void OnFocusedAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void OnRightClickedAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    void OnEndHoveredAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void OnHoverdAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void OnLeftClickedAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
};

#endif
