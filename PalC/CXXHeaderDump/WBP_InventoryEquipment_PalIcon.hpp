#ifndef UE4SS_SDK_WBP_InventoryEquipment_PalIcon_HPP
#define UE4SS_SDK_WBP_InventoryEquipment_PalIcon_HPP

class UWBP_InventoryEquipment_PalIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* IconPal;
    class UMaterialInstanceDynamic* dynamicMaterial;

    void Setup(FName IconId);
    void ExecuteUbergraph_WBP_InventoryEquipment_PalIcon(int32 EntryPoint);
};

#endif
