#ifndef UE4SS_SDK_BP_MeleeWeaponBase_HPP
#define UE4SS_SDK_BP_MeleeWeaponBase_HPP

class ABP_MeleeWeaponBase_C : public APalWeaponBase
{
    class USkeletalMeshComponent* SkeletalMesh;
    class USceneComponent* DefaultSceneRoot;

    bool SeekRightHandOpen();
    bool SeekLeftHandOpen();
    FTransform GetLeftHandTransform();
    bool IsUseLeftHandAttach();
    FName GetEquipSocketName();
};

#endif
