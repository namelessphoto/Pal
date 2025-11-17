#ifndef UE4SS_SDK_BP_Ammo_HPP
#define UE4SS_SDK_BP_Ammo_HPP

class ABP_Ammo_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Ammo;
    class USceneComponent* Scene;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Ammo(int32 EntryPoint);
};

#endif
