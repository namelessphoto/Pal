#ifndef UE4SS_SDK_WBP_ItemInfo_ForItemBooth_HPP
#define UE4SS_SDK_WBP_ItemInfo_ForItemBooth_HPP

class UWBP_ItemInfo_ForItemBooth_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_InventoryEquipment_ItemInfo_C* WBP_InventoryEquipment_ItemInfo_Cost;
    class UWBP_InventoryEquipment_ItemInfo_C* WBP_InventoryEquipment_ItemInfo_Product;

    void SetItemPairInfo(FPalItemAndNum Product, FPalItemAndNum Cost);
    void ExecuteUbergraph_WBP_ItemInfo_ForItemBooth(int32 EntryPoint);
};

#endif
