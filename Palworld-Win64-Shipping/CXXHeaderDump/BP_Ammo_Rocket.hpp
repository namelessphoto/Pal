#ifndef UE4SS_SDK_BP_Ammo_Rocket_HPP
#define UE4SS_SDK_BP_Ammo_Rocket_HPP

class ABP_Ammo_Rocket_C : public AActor
{
    class USkeletalMeshComponent* SkeletalMesh;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;
    FTransform Ammo Reloading Transform;

    void SetTranformForReload(FTransform& AmmoReloadingTransform);
    void UserConstructionScript();
};

#endif
