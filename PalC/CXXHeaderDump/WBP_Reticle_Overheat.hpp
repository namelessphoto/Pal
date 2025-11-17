#ifndef UE4SS_SDK_WBP_Reticle_Overheat_HPP
#define UE4SS_SDK_WBP_Reticle_Overheat_HPP

class UWBP_Reticle_Overheat_C : public UPalUIAimReticleBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Gauge_Main_L;
    class UImage* Gauge_Main_R;
    class UImage* Image;
    class UImage* Image_45;
    class UOverlay* Overlay_Gauge;
    TSoftObjectPtr<ABP_OverheatRifle_C> SoftWeaponActor;
    class UMaterialInstanceDynamic* GaugeMaterialL;
    class UMaterialInstanceDynamic* GaugeMaterialR;

    void OnChangedHeatValue(bool bOverHeated, double HeatValue);
    void OnReticleDeactivated();
    void OnReticleActivted(const FPalItemId& WeaponItemId);
    void OnInitialized();
    void ExecuteUbergraph_WBP_Reticle_Overheat(int32 EntryPoint);
};

#endif
