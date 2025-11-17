#ifndef UE4SS_SDK_WBP_DebugItemSearchWindow_HPP
#define UE4SS_SDK_WBP_DebugItemSearchWindow_HPP

class UWBP_DebugItemSearchWindow_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image;
    class UImage* Image_27;
    class UImage* Image_56;
    class UPalCheckBox* PalCheckBox_119;
    class USpinBox* SpinBox_37;
    class UWBP_IngameMenu_ItemSearchList_C* WBP_IngameMenu_ItemSearchList;
    class UWBP_Menu_btn_C* WBP_Menu_btn;
    TArray<FPalItemAndNum> LegalItemInfos;
    TArray<FName> LegalItemIds;
    FPalDataTableRowName_UIInputAction EscAction;

    void CreateItemMap();
    void OnClickedSlotInternal(class UWBP_PalItemSlotButtonBase_C* Slot);
    void OnCancelAction();
    void BndEvt__WBP_DebugItemSearchWindow_WBP_IngameMenu_ItemSearchList_K2Node_ComponentBoundEvent_0_OnRightClickSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Slot, EPalItemSlotPressType PressType);
    void OnSetup();
    void BndEvt__WBP_DebugItemSearchWindow_WBP_Menu_btn_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_DebugItemSearchWindow(int32 EntryPoint);
};

#endif
