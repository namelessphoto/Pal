#ifndef UE4SS_SDK_WBP_PalItemScrollList_HPP
#define UE4SS_SDK_WBP_PalItemScrollList_HPP

class UWBP_PalItemScrollList_C : public UWBP_PalCommonScrollList_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FWBP_PalItemScrollList_COnLeftClickedSlot OnLeftClickedSlot;
    void OnLeftClickedSlot(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    FWBP_PalItemScrollList_COnMiddleClickedSlot OnMiddleClickedSlot;
    void OnMiddleClickedSlot(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    FWBP_PalItemScrollList_COnRightClickedSlot OnRightClickedSlot;
    void OnRightClickedSlot(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    FWBP_PalItemScrollList_COnHoveredSlot OnHoveredSlot;
    void OnHoveredSlot(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    FWBP_PalItemScrollList_COnEndHoveredSlot OnEndHoveredSlot;
    void OnEndHoveredSlot(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    FWBP_PalItemScrollList_COnFocusedSlot OnFocusedSlot;
    void OnFocusedSlot(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    FWBP_PalItemScrollList_COnUnfocusedSlot OnUnfocusedSlot;
    void OnUnfocusedSlot(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    TSubclassOf<class UWBP_PalItemListBlock_C> BlockClass;
    FWBP_PalItemScrollList_COnDragDetectedSlot OnDragDetectedSlot;
    void OnDragDetectedSlot(class UWBP_PalItemSlotButtonBase_C* Widget);
    bool IsDisplayItemInfo;
    bool IsEnableQuickMoveSlot;
    class UWBP_PalItemSlotButtonBase_C* CachedLastHoveredSlotButton;
    class UWBP_PalItemSlotButtonBase_C* CachedNowHoveringSlotButton;
    class UPalItemContainer* QuickMoveTargetContainer;
    FWBP_PalItemScrollList_COnRequestUseItem OnRequestUseItem;
    void OnRequestUseItem(class UWBP_PalItemSlotButtonBase_C* Button);

    void CreateBlockByItemSlotArray(TArray<class UPalItemSlot*>& ItemSlotArray, FText DisplayName, bool IgnoreEmptySlot, class UWBP_PalItemListBlock_C*& createdBlock);
    void GetAllItemSlotButton(TArray<class UWBP_PalItemSlotButtonBase_C*>& Slots);
    void SetQuickMoveTargetContainer(class UPalItemContainer* TargetContainer);
    void GetLastHoveredSlotButton(class UWBP_PalItemSlotButtonBase_C*& SlotButton);
    void ClearAllChildren();
    void OnDragDetected_Internal(class UWBP_PalItemSlotButtonBase_C* Widget);
    void OnRequestUseItem_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void FilteringBySellableItemDataMap(TMap<FName, double> SellableItemDataMap);
    void HiddenEmptySlot();
    void GetFocusTarget(class UWidget*& Target);
    void CreateEmptyBlock(class UWBP_PalItemListBlock_C*& createdBlock);
    void OnUnfocused_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void OnFocused_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void InitializeArrowVisibility();
    void Focus();
    void AddItemSlotArray(TArray<class UPalItemSlot*>& ItemSlotArray, FText DisplayName, bool IgnoreEmptySlot, class UWBP_PalItemListBlock_C*& createdBlock);
    void OnEndHovered_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void OnHovered_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void OnRightClicked_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    void OnMiddleClicked_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void OnLeftClicked_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    void CreateBlock(class UPalItemContainer* TargetContainer, FText DisplayName, bool IgnoreEmptySlot, class UWBP_PalItemListBlock_C*& createdBlock);
    void AddItemContainer(class UPalItemContainer* TargetContainer, FText DisplayName, bool IgnoreEmptySlot, class UWBP_PalItemListBlock_C*& createdBlock);
    void Construct();
    void OnInitialized();
    void Destruct();
    void ExecuteUbergraph_WBP_PalItemScrollList(int32 EntryPoint);
    void OnRequestUseItem__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Button);
    void OnMiddleClickedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void OnDragDetectedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget);
    void OnUnfocusedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void OnFocusedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void OnEndHoveredSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void OnHoveredSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void OnRightClickedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    void OnLeftClickedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
};

#endif
