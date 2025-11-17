#ifndef UE4SS_SDK_BP_LevelObject_TowerFastTravelPoint_HPP
#define UE4SS_SDK_BP_LevelObject_TowerFastTravelPoint_HPP

class ABP_LevelObject_TowerFastTravelPoint_C : public APalLevelObjectUnlockableFastTravelPoint
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalSoundPlayerComponent* PalSoundPlayer;
    class UPalLimitVolumeBoxComponent* PalLimitVolumeBox;
    class UNiagaraComponent* Glow;
    class UArrowComponent* WarpPoint;
    class USceneComponent* IndicatorOrigin;
    class UBP_InteractableBox_C* BP_InteractableBox;
    class UStaticMeshComponent* Mesh;
    class UBoxComponent* BuildWorkableBounds;
    class UBoxComponent* CheckOverlapCollision;
    class USceneComponent* Root;
    class UNiagaraSystem* UnlockedGlowEffect;
    class UNiagaraSystem* UnlockedFlashEffect;
    class UAkAudioEvent* UnlockedSound;

    class USceneComponent* OnGetAkComponent();
    class UAkAudioEvent* GetUnlockAkAudioEvent();
    void OnUpdateUnlockState_Internal(bool IsUnlocked, bool IsSpawnUnlockefFlashEffect);
    void OnUpdateUnlockState(class APalLevelObjectUnlockableFastTravelPoint* Object);
    void ReceiveBeginPlay();
    void OnChangeWorldSettings(const FPalOptionWorldSettings& PrevSettings, const FPalOptionWorldSettings& NewSettings);
    void CheckUnuseFastTravel();
    void ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint(int32 EntryPoint);
};

#endif
