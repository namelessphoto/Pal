#ifndef UE4SS_SDK_BP_LevelGimmickJumpSpotLarge_HPP
#define UE4SS_SDK_BP_LevelGimmickJumpSpotLarge_HPP

class ABP_LevelGimmickJumpSpotLarge_C : public APalLevelGimmickJumpSpot
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* debug_arrow;
    class UBoxComponent* BoxComponent;
    class UNiagaraComponent* ParticleSystemComponent;
    class UStaticMeshComponent* Cone;
    class UPalSoundPlayerComponent* PalSoundPlayerComponent;

    class USceneComponent* EventOnGetAkOwnerComponent();
    void ReceiveBeginPlay();
    void EventOnLaunchCharacter();
    void ExecuteUbergraph_BP_LevelGimmickJumpSpotLarge(int32 EntryPoint);
};

#endif
