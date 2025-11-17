#ifndef UE4SS_SDK_BP_InGameMenuBuildModel_HPP
#define UE4SS_SDK_BP_InGameMenuBuildModel_HPP

class UBP_InGameMenuBuildModel_C : public UPalUIInGameMainMenuBuildModel
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalUIBuildModel_C* BuildModel;
    EPalBuildObjectTypeA InitialTypeA;
    FBP_InGameMenuBuildModel_COnUpdateInventoryDelegate OnUpdateInventoryDelegate;
    void OnUpdateInventoryDelegate();

    void Setup();
    void SetInitialTypeA(EPalBuildObjectTypeA TypeA);
    void OnUpdateInventory(class UPalItemContainer* Container);
    void ExecuteUbergraph_BP_InGameMenuBuildModel(int32 EntryPoint);
    void OnUpdateInventoryDelegate__DelegateSignature();
};

#endif
