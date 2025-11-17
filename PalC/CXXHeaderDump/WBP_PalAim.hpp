#ifndef UE4SS_SDK_WBP_PalAim_HPP
#define UE4SS_SDK_WBP_PalAim_HPP

class UWBP_PalAim_C : public UPalUIAimReticleWindowBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* Canvas_AdditionalReticle;
    class UCanvasPanel* Canvas_CommonReticle;
    class UCanvasPanel* CanvasPanel_CommonReticle;
    class UImage* Image_Fishing_NG;
    class UImage* Image_Fishing_OK;
    class UImage* Image_Grappling;
    class UImage* Image_Outline;
    class UImage* Image_Reticle;
    class UWBP_Reticle_KeyGuide_C* WBP_Reticle_KeyGuide_Cancel;
    class UWBP_Reticle_Pal_C* WBP_Reticle_Pal;
    double TargetScale;
    double nowScale;
    bool isThrowPalMode;
    class APalCharacter* CurrentCampLiftingPal;
    TMap<class FPalDataTableRowName_ItemData, class TSubclassOf<UPalUIAimReticleBase>> FixedItemIDReticleClassMap;
    TMap<class EPalItemTypeB, class TSubclassOf<UPalUIAimReticleBase>> ItemTypeBReticleClassMap;
    TMap<class EPalItemTypeA, class TSubclassOf<UPalUIAimReticleBase>> ItemTypeAReticleClassMap;
    TMap<class TSubclassOf<UPalUIAimReticleBase>, class UPalUIAimReticleBase*> AdditionalReticleWidgetMap;
    class UPalUIAimReticleBase* CurrentAdditionalWidget;

    void ActivateAdditionalWidget(FPalItemId WeaponItemId, bool& bActivated);
    void UpdateFishingReticle();
    void On Changed UISettings(const FPalOptionUISettings& PrevSettings, const FPalOptionUISettings& NewSettings);
    void UpdateGrapplingReticle();
    void SetGrapplingReticleVisible(bool IsVisible);
    void OnEndLiftCampPal();
    void OnLiftCampPal(class APalCharacter* TargetCharacter);
    void On Dead Detail();
    void DisplayOutlineTarget(FHitResult& HitResult);
    void Raycast Reticle Direction Body();
    void EndThrowPalMode();
    void StartThrowPalMode();
    void Get Reticle Hit Result(FHitResult& HitResult);
    void GetNowSelectedOtomoParameter(class UPalCharacterParameterComponent*& Parameter);
    void Show Assignable Throwing Pal(FHitResult& HitResult);
    void OnChangedWeaon(class APalWeaponBase* Weapon);
    void Setup_AfterCreatedPlayer();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void InitializeReticleMap();
    void ExecuteUbergraph_WBP_PalAim(int32 EntryPoint);
};

#endif
