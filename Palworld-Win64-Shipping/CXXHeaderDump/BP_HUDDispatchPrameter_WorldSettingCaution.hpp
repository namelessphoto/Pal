#ifndef UE4SS_SDK_BP_HUDDispatchPrameter_WorldSettingCaution_HPP
#define UE4SS_SDK_BP_HUDDispatchPrameter_WorldSettingCaution_HPP

class UBP_HUDDispatchPrameter_WorldSettingCaution_C : public UPalHUDDispatchParameterBase
{
    FPalOptionWorldSettings CheckWorldSettings;
    bool bOutCanceled;
    TEnumAsByte<E_PalWOrldSettingThresoldCautionDialogOpenType> OpenType;

};

#endif
