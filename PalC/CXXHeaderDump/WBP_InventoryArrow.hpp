#ifndef UE4SS_SDK_WBP_InventoryArrow_HPP
#define UE4SS_SDK_WBP_InventoryArrow_HPP

class UWBP_InventoryArrow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_ArrowScroll;
    class UImage* ListArrow;
    FWBP_InventoryArrow_COnClicked OnClicked;
    void OnClicked();

    void AnmEvent_Cursor();
    void ExecuteUbergraph_WBP_InventoryArrow(int32 EntryPoint);
    void OnClicked__DelegateSignature();
};

#endif
