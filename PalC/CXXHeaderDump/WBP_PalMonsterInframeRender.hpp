#ifndef UE4SS_SDK_WBP_PalMonsterInframeRender_HPP
#define UE4SS_SDK_WBP_PalMonsterInframeRender_HPP

class UWBP_PalMonsterInframeRender_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_Captured;
    class ABP_PalMonsterCaptureSet_C* CaptureCamera;
    class UTextureRenderTarget2D* RenderTarget;
    bool isCaptureEveryFrame;
    TSubclassOf<class ABP_PalMonsterCaptureSet_C> CaptureSetClass;
    double CaptureInterval;
    FTimerHandle CaptureSceneTimerHandle;
    class UMaterialInstanceDynamic* RenderTargetMaterial;
    class ABP_PalMonsterInframeRendererSoundPlayer_C* SoundPlayerActor;
    bool IgnoreFinalizeWhenDestruct;

    void RequestCaptureSkin(FName CharacterID, FName SkinName);
    void Finalize();
    void PlayNowDisplayingPalCryRandom();
    void PlayNowDisplayingPalCry(FName EmoStateName);
    void OnCompleteCapture();
    void OnTimer_CaptureScene();
    void Initialize_Internal(int32 TextureSizeX, int32 TExtureSizeY);
    void ResetRotation();
    void AddRotation(FRotator Rotator);
    void RequestCapture(FName CharacterID);
    void GetCaptureCameraActor(class ABP_PalMonsterCaptureSet_C*& CameraActor);
    void Reset();
    void Initialize_FreeSize(int32 TextureSizeX, int32 TExtureSizeY);
    void Initialize(int32 TextureSize);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Destruct();
    void ExecuteUbergraph_WBP_PalMonsterInframeRender(int32 EntryPoint);
};

#endif
