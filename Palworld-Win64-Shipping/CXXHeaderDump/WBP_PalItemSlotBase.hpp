#ifndef UE4SS_SDK_WBP_PalItemSlotBase_HPP
#define UE4SS_SDK_WBP_PalItemSlotBase_HPP

class UWBP_PalItemSlotBase_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_PalItemIconBase_C* myIconWidget;
    class UPalItemSlot* TargetSlot;
    FWBP_PalItemSlotBase_COnUpdateSlot OnUpdateSlot;
    void OnUpdateSlot(class UPalItemSlot* TargetSlot);
    FWBP_PalItemSlotBase_COnSetEmpty OnSetEmpty;
    void OnSetEmpty();
    FWBP_PalItemSlotBase_COnSetValidSlot OnSetValidSlot;
    void OnSetValidSlot();
    bool IsDisplayEmpty;
    FWBP_PalItemSlotBase_COnLiftedSlot OnLiftedSlot;
    void OnLiftedSlot(int32 LiftedItemNum);
    FWBP_PalItemSlotBase_COnFinishedLiftSlot OnFinishedLiftSlot;
    void OnFinishedLiftSlot();
    FTimerHandle CheckDurabilityTimerHandle;
    FWBP_PalItemSlotBase_COnNotifyDurability OnNotifyDurability;
    void OnNotifyDurability(double MaxDurability, double NowDurability);
    FWBP_PalItemSlotBase_COnCorruptionUpdate OnCorruptionUpdate;
    void OnCorruptionUpdate();

    void OnUpdateDurability_Internal(float OldDurability, float NewDurability);
    void OnUpdateSlotCorruption_Internal(class UPalItemSlot* Slot);
    void OnTimer_CheckDurability();
    void OnFinishedLiftItem_Internal();
    void Setup(class UPalItemSlot* TargetSlot);
    void OnLiftedSlot_Internal(const int32 LiftItemNum);
    void Unbind Event();
    void BindEvent();
    void On Update Slot Internal(class UPalItemSlot* Slot);
    void RegisterItemIconWidget(class UWBP_PalItemIconBase_C*& iconWidget);
    void OnInitialized();
    void Destruct();
    void ExecuteUbergraph_WBP_PalItemSlotBase(int32 EntryPoint);
    void OnCorruptionUpdate__DelegateSignature();
    void OnNotifyDurability__DelegateSignature(double MaxDurability, double NowDurability);
    void OnFinishedLiftSlot__DelegateSignature();
    void OnLiftedSlot__DelegateSignature(int32 LiftedItemNum);
    void OnSetValidSlot__DelegateSignature();
    void OnSetEmpty__DelegateSignature();
    void OnUpdateSlot__DelegateSignature(class UPalItemSlot* TargetSlot);
};

#endif
