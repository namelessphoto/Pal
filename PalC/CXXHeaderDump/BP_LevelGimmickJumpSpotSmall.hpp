#ifndef UE4SS_SDK_BP_LevelGimmickJumpSpotSmall_HPP
#define UE4SS_SDK_BP_LevelGimmickJumpSpotSmall_HPP

class ABP_LevelGimmickJumpSpotSmall_C : public APalLevelGimmickJumpSpot
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
    void ExecuteUbergraph_BP_LevelGimmickJumpSpotSmall(int32 EntryPoint);
};

#endif
