#ifndef UE4SS_SDK_WBP_BuildObjectIndicator_PowerSufficiency_HPP
#define UE4SS_SDK_WBP_BuildObjectIndicator_PowerSufficiency_HPP

class UWBP_BuildObjectIndicator_PowerSufficiency_C : public UPalUserWidgetWorldHUD
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Base;
    class UCanvasPanel* ElectricPower;
    class UImage* Line;
    class UCanvasPanel* RootCanvas;
    class UBP_PalTextBlock_C* Text_Electric;
    class UPalHUDDispatchParameter_MapObjectEnergyModule* Parameter;
    FDataTableRowHandle PowerOnlineMSGID;
    FDataTableRowHandle PowerOfflineMSGID;

    void OnUpdateEnergyModuleState(class UPalMapObjectEnergyModule* Module);
    void SetupUI();
    void OnSetup();
    void ExecuteUbergraph_WBP_BuildObjectIndicator_PowerSufficiency(int32 EntryPoint);
};

#endif
