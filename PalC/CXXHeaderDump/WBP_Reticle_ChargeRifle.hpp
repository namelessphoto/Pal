#ifndef UE4SS_SDK_WBP_Reticle_ChargeRifle_HPP
#define UE4SS_SDK_WBP_Reticle_ChargeRifle_HPP

class UWBP_Reticle_ChargeRifle_C : public UPalUIAimReticleBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0438 (size: 0x8)
    class UImage* Gauge_Main_L;                                                       // 0x0440 (size: 0x8)
    class UImage* Gauge_Main_R;                                                       // 0x0448 (size: 0x8)
    class UOverlay* Overlay_Gauge;                                                    // 0x0450 (size: 0x8)
    TSoftObjectPtr<ABP_ChargeLaserRifle_C> SoftWeaponActor;                           // 0x0458 (size: 0x30)
    class UMaterialInstanceDynamic* MainGaugeMaterialL;                               // 0x0488 (size: 0x8)
    class UMaterialInstanceDynamic* MainGaugeMaterialR;                               // 0x0490 (size: 0x8)

    void OnReleaseTrigger();
    void OnPullTrigger();
    void OnChangedChargeValue(double CurretnChargeValue);
    void OnReticleActivted(const FPalItemId& WeaponItemId);
    void OnReticleDeactivated();
    void OnInitialized();
    void ExecuteUbergraph_WBP_Reticle_ChargeRifle(int32 EntryPoint);
}; // Size: 0x498

#endif
