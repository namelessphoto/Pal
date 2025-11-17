#ifndef UE4SS_SDK_BP_Player_ForUI_HPP
#define UE4SS_SDK_BP_Player_ForUI_HPP

class ABP_Player_ForUI_C : public APalUIDisplayCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalSkeletalMeshComponent* HairAttachAccessory;
    class UPalSkeletalMeshComponent* hair;
    class UPalSkeletalMeshComponent* Head;
    class USphereComponent* Sphere;
    FBP_Player_ForUI_COnAppliedBodyMesh OnAppliedBodyMesh;
    void OnAppliedBodyMesh(FLinearColor BodyMeshBasColor);
    FBP_Player_ForUI_COnAppliedHeadMesh OnAppliedHeadMesh;
    void OnAppliedHeadMesh(FLinearColor BrowMeshBaseColor, FLinearColor EyeMeshBaseColor);
    FBP_Player_ForUI_COnAppliedHairMesh OnAppliedHairMesh;
    void OnAppliedHairMesh(FLinearColor HairMeshBaseColor);
    bool IsSpawnedGlider;
    bool NeedRefreshAnimation;

    void PlayAnimation(class UAnimSequence* AnimationSequence);
    void PlayCurrentWeaponIdleAnimation();
    void CopyGlider(TSubclassOf<class AActor> GliderClass);
    void OnAppliedHairMesh_Binded(const class UPalSkeletalMeshComponent* SkeletalMeshComponent);
    void OnAppliedHeadMesh_Binded(const class UPalSkeletalMeshComponent* SkeletalMeshComponent);
    void OnAppliedBodyMesh_Binded(const class UPalSkeletalMeshComponent* SkeletalMeshComponent);
    void CopyWeapon(TSubclassOf<class APalWeaponBase> WeaponClass);
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
    void ExecuteUbergraph_BP_Player_ForUI(int32 EntryPoint);
    void OnAppliedHairMesh__DelegateSignature(FLinearColor HairMeshBaseColor);
    void OnAppliedHeadMesh__DelegateSignature(FLinearColor BrowMeshBaseColor, FLinearColor EyeMeshBaseColor);
    void OnAppliedBodyMesh__DelegateSignature(FLinearColor BodyMeshBasColor);
};

#endif
