#ifndef UE4SS_SDK_BP_HUDDispatchPrameter_WorldSettingCaution_HPP
#define UE4SS_SDK_BP_HUDDispatchPrameter_WorldSettingCaution_HPP

class UBP_HUDDispatchPrameter_WorldSettingCaution_C : public UPalHUDDispatchParameterBase
{
    FPalOptionWorldSettings CheckWorldSettings;                                       // 0x0038 (size: 0x1A0)
    bool bOutCanceled;                                                                // 0x01D8 (size: 0x1)
    TEnumAsByte<E_PalWOrldSettingThresoldCautionDialogOpenType> OpenType;             // 0x01D9 (size: 0x1)

}; // Size: 0x1DA

#endif
