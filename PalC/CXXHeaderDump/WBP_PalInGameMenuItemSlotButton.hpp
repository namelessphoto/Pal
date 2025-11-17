#ifndef UE4SS_SDK_WBP_PalInGameMenuItemSlotButton_HPP
#define UE4SS_SDK_WBP_PalInGameMenuItemSlotButton_HPP

class UWBP_PalInGameMenuItemSlotButton_C : public UWBP_PalItemSlotButtonBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_UnselectToSelect;
    class UWidgetAnimation* Anm_Bg_Lock;
    class UWidgetAnimation* Anm_Focus;
    class UWidgetAnimation* Anm_Rarity_0To4;
    class UImage* Base;
    class UImage* Base_Empty;
    class UBP_PalTextBlock_C* BP_PalTextBlock_NumRange;
    class UCanvasPanel* CanvasPanel_BaseShadow;
    class UCanvasPanel* CanvasPanelCorrution;
    class UCanvasPanel* CanvasPanelLineLock;
    class UPalProgressBar* CorruptionProgressBar;
    class UBP_PalTextBlock_C* CorruptionRemainTime;
    class UImage* FocusBase;
    class UImage* FocusFrame;
    class UImage* Frame_Empty;
    class UImage* Frame_Total;
    class UImage* Image_Off;
    class UImage* Image_On;
    class UOverlay* Overlay_Off;
    class UOverlay* Overlay_On;
    class UOverlay* Overlay_OnOff;
    class UOverlay* OverlayRepair;
    class UProgressBar* ProgressBar_Durable;
    class USizeBox* SizeBox_Auto;
    class UBP_PalTextBlock_C* Text_ItemWeight;
    class UWBP_InventoryEquipment_PalIcon_C* WBP_InventoryEquipment_PalIcon;
    class UWBP_PalInGameMenuItemSlot_C* WBP_PalInGameMenuItemSlot;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    class UImage* WeightnumBase;
    bool HasLiftting;
    FPalItemAndNum Item Info;

    void SetLanternEquipMode(EPalPlayerEquipLantern EquipType);
    void SetupByItemAndNumRange(FName StaticItemId, int32 Min, int32 Max);
    void GetItemAndNum(FPalItemAndNum& ItemAndNum);
    void SetupByItemAndNum(FPalItemAndNum ItemInfo);
    void SetEnableDefaultClickSound(bool Enable);
    void Set Pal Gear Icon(FName ItemId);
    void Toggle Corruption Visibility(bool Visible);
    void OnSetCorruptionImpl();
    void On Notify Durability Impl(double MaxDurability, double NowDurability, class UWBP_PalItemSlotButtonBase_C* SelfWidget);
    void OnSetEmptySlotImpl();
    void On Set Valid Slot Impl();
    void RegisterItemSlotWidget(class UWBP_PalItemSlotBase_C*& itemSlotWidget);
    void RegisterButton(class UCommonButtonBase*& Button);
    void BP_OnEntryReleased();
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void AnmEvent_Focus();
    void AnmEvent_Unfocus();
    void AnmEvent_RepairMark(bool IsEnable);
    void AnmEvent_Rarity(int32 Rarity);
    void OnInitialized();
    void OnHoveredEvent(class UWBP_PalItemSlotButtonBase_C* Widget);
    void OnDraggedEvent(class UWBP_PalItemSlotButtonBase_C* Widget);
    void OnDroppedEvent(class UWBP_PalItemSlotButtonBase_C* Widget);
    void OnLiftedEvent(int32 LiftNum, class UWBP_PalItemSlotButtonBase_C* Widget);
    void OnUnhoveredEvent(class UWBP_PalItemSlotButtonBase_C* Widget);
    void OnSetValidSlotEvent();
    void OnEmptyEvent();
    void SetSlotLock();
    void Destruct();
    void ToggleLock(bool Lock);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void Initialize();
    void ExecuteUbergraph_WBP_PalInGameMenuItemSlotButton(int32 EntryPoint);
};

#endif
