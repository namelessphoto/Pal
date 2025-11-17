#ifndef UE4SS_SDK_BP_CaptureWireBullet_HPP
#define UE4SS_SDK_BP_CaptureWireBullet_HPP

class ABP_CaptureWireBullet_C : public ABP_ThrowObjectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* StaticMesh;
    class APalCharacter* CaptureTarget;
    bool isBound;
    FRotator ThrowRotator;

    void UpdateRotator(double DeltaTime);
    void SpawnDelegate(FGuid Guid, class AActor* Actor);
    void OnHitToActor(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_CaptureWireBullet(int32 EntryPoint);
};

#endif
