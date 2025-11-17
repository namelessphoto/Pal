#ifndef UE4SS_SDK_WBP_PalInGameMenuItemSlot_HPP
#define UE4SS_SDK_WBP_PalInGameMenuItemSlot_HPP

class UWBP_PalInGameMenuItemSlot_C : public UWBP_PalItemSlotBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalTextBlock_C* Text_ItemNum;
    class UWBP_PalInGameMenuItemIcon_C* WBP_PalInGameMenuItemIcon;

    void RegisterItemIconWidget(class UWBP_PalItemIconBase_C*& iconWidget);
    void OnInitialized();
    void UpdateSlotEvent(class UPalItemSlot* TargetSlot);
    void EmptySlotEvent();
    void ValidSlotEvent();
    void ExecuteUbergraph_WBP_PalInGameMenuItemSlot(int32 EntryPoint);
};

#endif
