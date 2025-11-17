#ifndef UE4SS_SDK_BP_MeleeWeaponBase_HPP
#define UE4SS_SDK_BP_MeleeWeaponBase_HPP

class ABP_MeleeWeaponBase_C : public APalWeaponBase
{
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x05E8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x05F0 (size: 0x8)

    bool SeekRightHandOpen();
    bool SeekLeftHandOpen();
    FTransform GetLeftHandTransform();
    bool IsUseLeftHandAttach();
    FName GetEquipSocketName();
}; // Size: 0x5F8

#endif
