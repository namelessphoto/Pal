#ifndef UE4SS_SDK_WBP_IngameMenu_ItemSearchList_HPP
#define UE4SS_SDK_WBP_IngameMenu_ItemSearchList_HPP

class UWBP_IngameMenu_ItemSearchList_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCommonTileView* CommonTileView;
    class UImage* FrameFlare;
    class UCanvasPanel* HorizontalBox_SearchName;
    class UPalEditableTextBox* PalEditableTextBox_Search;
    class UBP_PalTextBlock_C* Text_TargetContainerName;
    class UWBP_CommonButton_1_C* WBP_CommonButton_Filter;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_SerchName;
    TMap<class FName, class UWBP_PalInGameMenuItemSlotButton_C*> CurrentViewingItemInfoMap;
    FWBP_IngameMenu_ItemSearchList_COnRightClickSlot OnRightClickSlot;
    void OnRightClickSlot(class UWBP_PalItemSlotButtonBase_C* Slot, EPalItemSlotPressType PressType);
    TArray<FName> Current Filter;
    FText CurrentNameFilter;
    class UWBP_PalItemSlotButtonBase_C* LastHoverSlot;
    FWBP_IngameMenu_ItemSearchList_COnSlotHovered OnSlotHovered;
    void OnSlotHovered();
    TMap<class FName, class UBP_ItemSlotEntryData_C*> CurrentItemMap;
    bool Remove Essential;
    bool bCanSearchByItemId;

    void RefreshForFilter();
    void RefreshTileViewItem();
    void GetCurrentFilterResult(const FName StaticItemId, bool& Enabled);
    void GetLastFocusSlot(class UWidget*& Slot);
    void FocusToFilterButton();
    void Apply Filter to Item(class UPalStaticItemDataBase* ItemData, bool& Visible);
    void Apply Filter(TArray<FName>& Types);
    void On Click Internal(class UWBP_PalItemSlotButtonBase_C* Slot, EPalItemSlotPressType PressType);
    void UpdateTargetSlot(FPalItemAndNum ItemInfo);
    void AddTargetSlot(FPalItemAndNum ItemInfo);
    void RemoveTargetSlot(FName ItemInfo);
    void Update Item Stack Info(TArray<FPalItemAndNum>& StackInfo, TArray<FName>& IdArray, bool& SlotUpdated);
    void Construct();
    void BndEvt__WBP_IngameMenu_ItemSearchList_WBP_CommonButton_Filter_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_ItemSearchList_PalEditableTextBox_Search_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
    void BndEvt__WBP_IngameMenu_ItemSearchList_WBP_PalInvisibleButton_SerchName_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void OnHoverSlot(class UWBP_PalItemSlotButtonBase_C* Slot);
    void BndEvt__WBP_IngameMenu_ItemSearchList_WBP_PalInvisibleButton_SerchName_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_ItemSearchList_WBP_PalInvisibleButton_SerchName_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_ItemSearchList_CommonTileView_K2Node_ComponentBoundEvent_5_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
    void BndEvt__WBP_IngameMenu_ItemSearchList_CommonTileView_K2Node_ComponentBoundEvent_6_OnListEntryReleasedDynamic__DelegateSignature(class UUserWidget* Widget);
    void ExecuteUbergraph_WBP_IngameMenu_ItemSearchList(int32 EntryPoint);
    void OnSlotHovered__DelegateSignature();
    void OnRightClickSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Slot, EPalItemSlotPressType PressType);
};

#endif
