#ifndef UE4SS_SDK_BP_PalUIDismantlingModel_HPP
#define UE4SS_SDK_BP_PalUIDismantlingModel_HPP

class UBP_PalUIDismantlingModel_C : public UPalUIDismantlingModel
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBP_PalUIDismantlingModel_COnUpdateInventoryDelegate OnUpdateInventoryDelegate;
    void OnUpdateInventoryDelegate();

    void OnUpdateInventory(class UPalItemContainer* Container);
    void ExecuteUbergraph_BP_PalUIDismantlingModel(int32 EntryPoint);
    void OnUpdateInventoryDelegate__DelegateSignature();
};

#endif
