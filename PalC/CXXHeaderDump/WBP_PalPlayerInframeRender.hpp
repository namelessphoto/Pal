#ifndef UE4SS_SDK_WBP_PalPlayerInframeRender_HPP
#define UE4SS_SDK_WBP_PalPlayerInframeRender_HPP

class UWBP_PalPlayerInframeRender_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCircularThrobber* CircularThrobber_11;
    class UImage* Image_Captured;
    class UTextureRenderTarget2D* RenderTarget;
    bool isCaptureEveryFrame;
    bool IsBindPlayerEquipment;
    class ABP_PalPlayerCaptureSet_C* CaptureCamera;
    FTimerHandle DelayUpdateMeshTimerHandle;
    TSubclassOf<class ABP_PalPlayerCaptureSet_C> CaptureSetClass;
    double CaptureInterval;
    FTimerHandle CaptureSceneTimerHandle;
    class UMaterialInstanceDynamic* RenderTargetMaterial;
    TMap<class TSoftClassPtr<UPalShooterAnimeAssetBase>, class UPalShooterAnimeAssetBase*> IdleAnimationCache;

    void PlayIdleAnimation by Animation Asset(class UPalShooterAnimeAssetBase* AnimationAsset);
    void PlayIdleAnimationByMakeInfo(FPalPlayerDataCharacterMakeInfo& MakeInfo);
    void ClearAnimationCache();
    void OnLoadedAnimation(class UPalShooterAnimeAssetBase* AnimeAsset);
    void SwitchGliderPreview(TSubclassOf<class AActor> GliderActor);
    void OnTimer_CaptureScene();
    void On Update Equipment Slot(class UPalItemSlot* itemSlot, EPalPlayerEquipItemSlotType slotType);
    void ResetCameraLocation();
    void AddCameraRelativeLocation(FVector AddLocation);
    void ResetRotation();
    void AddRotation(FRotator AddRotator);
    void On Changed Weapon(class APalWeaponBase* Weapon);
    void UnregisterEvent();
    void RegisterEvent();
    void Request Capture By Make Info(FPalPlayerDataCharacterMakeInfo MakeInfo);
    void RequestCaptureMyPlayer();
    void Reset();
    void Initialize(int32 TextureSize);
    void Construct();
    void Destruct();
    void DelayUpdatePlayerMesh(double DelayTime);
    void UpdateMeshEvent();
    void DelayDisplay();
    void ExecuteUbergraph_WBP_PalPlayerInframeRender(int32 EntryPoint);
};

#endif
