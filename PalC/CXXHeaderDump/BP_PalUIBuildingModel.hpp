#ifndef UE4SS_SDK_BP_PalUIBuildingModel_HPP
#define UE4SS_SDK_BP_PalUIBuildingModel_HPP

class UBP_PalUIBuildingModel_C : public UPalUIBuildingModel
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBP_PalUIBuildingModel_COnUpdateInventoryDelegate OnUpdateInventoryDelegate;
    void OnUpdateInventoryDelegate();

    void OnUpdateInventory(class UPalItemContainer* Container);
    void ExecuteUbergraph_BP_PalUIBuildingModel(int32 EntryPoint);
    void OnUpdateInventoryDelegate__DelegateSignature();
};

#endif
