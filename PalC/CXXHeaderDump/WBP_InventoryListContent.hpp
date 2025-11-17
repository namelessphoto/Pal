#ifndef UE4SS_SDK_WBP_InventoryListContent_HPP
#define UE4SS_SDK_WBP_InventoryListContent_HPP

class UWBP_InventoryListContent_C : public UUserWidget
{
    class UWidgetAnimation* Anm_Create;
    class UWidgetAnimation* Anm_Select;
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_72;
    class UImage* InventoryListLine_C;
    class UImage* InventoryListLine_L;
    class UImage* InventoryListLine_R;
    class UWrapBox* WrapBox_92;

    void GetAllContents(TArray<class UWidget*>& Contents);
    void AddWidget(class UWidget* inWidgett, int32& Index);
    void SetCategoryName(FText CategoryName);
};

#endif
