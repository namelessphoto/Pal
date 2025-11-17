#ifndef UE4SS_SDK_WBP_DebugItemSearchWindow_HPP
#define UE4SS_SDK_WBP_DebugItemSearchWindow_HPP

class UWBP_DebugItemSearchWindow_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UImage* Image;                                                              // 0x0438 (size: 0x8)
    class UImage* Image_27;                                                           // 0x0440 (size: 0x8)
    class UImage* Image_56;                                                           // 0x0448 (size: 0x8)
    class UPalCheckBox* PalCheckBox_119;                                              // 0x0450 (size: 0x8)
    class USpinBox* SpinBox_37;                                                       // 0x0458 (size: 0x8)
    class UWBP_IngameMenu_ItemSearchList_C* WBP_IngameMenu_ItemSearchList;            // 0x0460 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x0468 (size: 0x8)
    TArray<FPalItemAndNum> LegalItemInfos;                                            // 0x0470 (size: 0x10)
    TArray<FName> LegalItemIds;                                                       // 0x0480 (size: 0x10)
    FPalDataTableRowName_UIInputAction EscAction;                                     // 0x0490 (size: 0x8)

    void CreateItemMap();
    void OnClickedSlotInternal(class UWBP_PalItemSlotButtonBase_C* Slot);
    void OnCancelAction();
    void BndEvt__WBP_DebugItemSearchWindow_WBP_IngameMenu_ItemSearchList_K2Node_ComponentBoundEvent_0_OnRightClickSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Slot, EPalItemSlotPressType PressType);
    void OnSetup();
    void BndEvt__WBP_DebugItemSearchWindow_WBP_Menu_btn_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_DebugItemSearchWindow(int32 EntryPoint);
}; // Size: 0x498

#endif
