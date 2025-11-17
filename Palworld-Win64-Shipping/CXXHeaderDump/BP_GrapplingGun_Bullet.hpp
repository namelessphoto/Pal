#ifndef UE4SS_SDK_BP_GrapplingGun_Bullet_HPP
#define UE4SS_SDK_BP_GrapplingGun_Bullet_HPP

class ABP_GrapplingGun_Bullet_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Anchor;
    class UCableComponent* Cable;
    class USceneComponent* DefaultSceneRoot;

    void AttachSocket(class USceneComponent* Component, FName SocketName);
    void UpdateCable(FVector Start, FVector End, bool IsHit, bool IsVisible);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_GrapplingGun_Bullet(int32 EntryPoint);
};

#endif
