#ifndef UE4SS_SDK_WBP_InventoryEquipment_ItemInfo_TecnologyList_HPP
#define UE4SS_SDK_WBP_InventoryEquipment_ItemInfo_TecnologyList_HPP

class UWBP_InventoryEquipment_ItemInfo_TecnologyList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Base;
    class UBP_PalTextBlock_C* BP_PalTextBlock_Name;
    class UBP_PalTextBlock_C* BP_PalTextBlock_Num;
    class UBP_PalTextBlock_C* BP_PalTextBlock_sp;
    class UBP_PalTextBlock_C* BP_PalTextBlock_Stock;
    class UImage* Icon;

    void SetInfo(FText Name, int32 Num, TSoftObjectPtr<UTexture2D> Icon, int32 Stock);
    void Construct();
    void ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_TecnologyList(int32 EntryPoint);
};

#endif
