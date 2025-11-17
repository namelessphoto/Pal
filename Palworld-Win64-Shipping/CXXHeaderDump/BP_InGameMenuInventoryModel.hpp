#ifndef UE4SS_SDK_BP_InGameMenuInventoryModel_HPP
#define UE4SS_SDK_BP_InGameMenuInventoryModel_HPP

class UBP_InGameMenuInventoryModel_C : public UPalUIInGameMainMenuInventoryModel
{
    class UBP_PalInventoryModel_C* InventoryModel;

    void Dispose();
    void Setup();
};

#endif
