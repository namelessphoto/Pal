#ifndef UE4SS_SDK_BP_DropWeaponPart_HPP
#define UE4SS_SDK_BP_DropWeaponPart_HPP

class ABP_DropWeaponPart_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Ammo;
    class USceneComponent* Scene;
    FVector NewVar;

    void CustomBegin(class UStaticMesh* Mesh, FVector Velocity, float AngularIntensify);
    void ExecuteUbergraph_BP_DropWeaponPart(int32 EntryPoint);
};

#endif
