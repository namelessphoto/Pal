#ifndef UE4SS_SDK_BP_AnimNotify_PlaySound_HPP
#define UE4SS_SDK_BP_AnimNotify_PlaySound_HPP

class UBP_AnimNotify_PlaySound_C : public UAnimNotify
{
    bool Mute;
    FPalDataTableRowName_SoundID SoundId;
    FPalSoundOptions SoundOption;
    FName SocketName;
    TSoftClassPtr<UPalSoundSlot> DebugSoundSlot;
    TEnumAsByte<EPhysicalSurface> DebugPhysicsMaterial;

    void PlaySoundEditor(class UMeshComponent* MeshComp);
    void PlaySound(class UMeshComponent* MeshComp);
    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference);
};

#endif
