#ifndef UE4SS_SDK_WBP_PalCommonScrollList_HPP
#define UE4SS_SDK_WBP_PalCommonScrollList_HPP

class UWBP_PalCommonScrollList_C : public UPalCommonScrollListBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* Canvas_Root;
    class UScrollBox* ScrollBox_0;
    class UWBP_InventoryArrow_C* WBP_InventoryArrow_Bottom;
    class UWBP_InventoryArrow_C* WBP_InventoryArrow_Top;
    double lastScrollOffset;
    bool IsDisplayArrow;
    EScrollWhenFocusChanges GamePadFocusChangeScrollType;

    void GetScrollBox(class UScrollBox*& ScrollBox);
    void AddWidget(class UUserWidget* Widget);
    void GetAllChildrenNum(int32& Index);
    void GetIndexFromWidget(class UWidget* Widget, int32& Index);
    void AddScrollOffset(double Offset);
    void OnInputMethodChanged(ECommonInputType bNewInputType);
    void ClearAllChildren();
    void UpdateArrowVisibilityAndAnimation(double CurrentOffset);
    void Construct();
    void Destruct();
    void BndEvt__WBP_PalCommonScrollList_ScrollBox_0_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
    void ExecuteUbergraph_WBP_PalCommonScrollList(int32 EntryPoint);
};

#endif
