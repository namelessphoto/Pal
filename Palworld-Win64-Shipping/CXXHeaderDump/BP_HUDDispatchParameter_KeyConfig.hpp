#ifndef UE4SS_SDK_BP_HUDDispatchParameter_KeyConfig_HPP
#define UE4SS_SDK_BP_HUDDispatchParameter_KeyConfig_HPP

class UBP_HUDDispatchParameter_KeyConfig_C : public UPalHUDDispatchParameterBase
{
    FName ActionName;
    ECommonInputType InputType;
    FBP_HUDDispatchParameter_KeyConfig_COnKeyChanged OnKeyChanged;
    void OnKeyChanged(FName ActionName, FKey NewKey, EPalKeyConfigCategory InputType, EPalKeyConfigAxisFilterType AxisType);
    FPalKeyConfigSettings KeyConfigSetting;
    EPalKeyConfigAxisFilterType AxisType;
    bool IsUI;

    void OnKeyChanged__DelegateSignature(FName ActionName, FKey NewKey, EPalKeyConfigCategory InputType, EPalKeyConfigAxisFilterType AxisType);
};

#endif
