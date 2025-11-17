#ifndef UE4SS_SDK_BP_PickMainMeshVolume_HPP
#define UE4SS_SDK_BP_PickMainMeshVolume_HPP

class ABP_PickMainMeshVolume_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    class USceneComponent* DefaultSceneRoot;
    bool CollectPalCharacterOnly;

    void IsPalLit(class UMaterialInterface* Material, bool& IsPalLit);
    void EndOverlapPalLit(class UMaterialInstanceDynamic* Material);
    void BeginOverlapPalLit(class UMaterialInstanceDynamic* Material, bool materialSrc);
    void IsCelShader(class UMaterialInterface* Material, bool& IsCelShader);
    void GetMeshFromActor(class AActor* Actor, TArray<class UMeshComponent*>& Mesh);
    void EndOverlapMainMesh(class UMeshComponent* OutMainMesh);
    void BeginOverlapMainMesh(class UMeshComponent* InMainMesh);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_MaterialVolumeTest_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_PickMainMeshVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Applied Make Info(const class UPalSkeletalMeshComponent* SkeletalMeshComponent);
    void ExecuteUbergraph_BP_PickMainMeshVolume(int32 EntryPoint);
};

#endif
