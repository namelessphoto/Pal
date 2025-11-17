#ifndef UE4SS_SDK_WBP_InventoryEquipment_ItemInfo_Caution_HPP
#define UE4SS_SDK_WBP_InventoryEquipment_ItemInfo_Caution_HPP

class UWBP_InventoryEquipment_ItemInfo_Caution_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalRichTextBlock_C* RichText_ItemName;

    void SetRequireName(FText Name);
    void ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Caution(int32 EntryPoint);
};

#endif
