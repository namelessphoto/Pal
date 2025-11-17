#ifndef UE4SS_SDK_BP_AnimNotifyState_PlaySound_HPP
#define UE4SS_SDK_BP_AnimNotifyState_PlaySound_HPP

class UBP_AnimNotifyState_PlaySound_C : public UAnimNotifyState
{
    bool Mute;
    FPalDataTableRowName_SoundID SoundId;
    bool StopOnNotifyEnded;
    FPalSoundOptions SoundOption;
    FName SocketName;
    TSoftClassPtr<UPalSoundSlot> DebugSoundSlot;
    TEnumAsByte<EPhysicalSurface> DebugPhysicsMaterial;

    bool PlaySound_Editor(class UMeshComponent* MeshComp);
    void PlaySound(class UMeshComponent* MeshComp);
    void Get Raycast Location(class UMeshComponent* Mesh, FVector& St, FVector& Ed);
    bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference);
    bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference);
};

#endif
