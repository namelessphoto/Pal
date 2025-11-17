#ifndef UE4SS_SDK_BP_AnimNotify_FootStep_HPP
#define UE4SS_SDK_BP_AnimNotify_FootStep_HPP

class UBP_AnimNotify_FootStep_C : public UPalAnimNotify_FootStep
{
    double InWaterRate_Feet;
    double Effect_Offset_Z_Feet;
    bool Mute;
    EPalLandingType LandingType;
    EPalFootType FootType;
    TSoftClassPtr<UPalSoundSlot> DebugSoundSlot;
    TEnumAsByte<EPhysicalSurface> DebugPhysicsMaterial;
    int32 StepCount;

    void Get Step Effect Transform(class UPalStaticCharacterParameterComponent* StaticParam, double& Scale, FVector& Offset, class UNiagaraSystem*& Effect);
    void IsSwimming(class AActor* Owner, bool& IsSwimming);
    void Create Footstep Decal(class AActor* Owner, FTransform FootTransform);
    void MakeSwitchStatePalSize(class APalMonsterCharacter* Pal, FString& PalSize);
    void IsPlaySound(bool& PlaySound);
    void SpawnRollStepEffect(class AActor* Owner);
    void IsSteppingShallows(class AActor* ownerActor, bool& NewParam);
    void PlayStepSound(class AActor* Owner);
    void PlaySound(class AActor* Owner, FPalDataTableRowName_SoundID SoundId);
    void IsFootStepRun(class AActor* Owner, bool& IsFootStepRun);
    void Get Foot Transform(class AActor* Owner, EPalFootType FootType, FTransform& NewTransform);
    void CreateEffect(class AActor* Owner, FTransform FootTransform, EPalLandingType NewParam, TEnumAsByte<EPhysicalSurface> PhysicalSurface);
    void Create Foot Step Effect(class AActor* ownerActor, FTransform FootTransform);
    void ProcJumpLanding(class AActor* Owner, EPalFootType FootType);
    void ProcFootStep(class AActor* Owner, EPalFootType FootType);
    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference);
};

#endif
