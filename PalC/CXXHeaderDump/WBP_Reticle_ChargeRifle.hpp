#ifndef UE4SS_SDK_WBP_Reticle_ChargeRifle_HPP
#define UE4SS_SDK_WBP_Reticle_ChargeRifle_HPP

class UWBP_Reticle_ChargeRifle_C : public UPalUIAimReticleBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Gauge_Main_L;
    class UImage* Gauge_Main_R;
    class UOverlay* Overlay_Gauge;
    TSoftObjectPtr<ABP_ChargeLaserRifle_C> SoftWeaponActor;
    class UMaterialInstanceDynamic* MainGaugeMaterialL;
    class UMaterialInstanceDynamic* MainGaugeMaterialR;

    void OnReleaseTrigger();
    void OnPullTrigger();
    void OnChangedChargeValue(double CurretnChargeValue);
    void OnReticleActivted(const FPalItemId& WeaponItemId);
    void OnReticleDeactivated();
    void OnInitialized();
    void ExecuteUbergraph_WBP_Reticle_ChargeRifle(int32 EntryPoint);
};

#endif
