#ifndef UE4SS_SDK_WBP_InventoryEquipment_ItemInfo_Tecnology_HPP
#define UE4SS_SDK_WBP_InventoryEquipment_ItemInfo_Tecnology_HPP

class UWBP_InventoryEquipment_ItemInfo_Tecnology_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* CanvasPanel_WorkSpace;
    class UVerticalBox* VerticalBox_TechDetails;
    class UImage* WorkSpaceInfo;

    void GetStockNum(FName StaticItemId, bool WithStock, int32& Stock);
    void SetWorkSpaceInfo();
    void SetDetails(const TArray<FPalStaticItemIdAndNum>& MatDetail, bool WithStock);
    void ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology(int32 EntryPoint);
};

#endif
