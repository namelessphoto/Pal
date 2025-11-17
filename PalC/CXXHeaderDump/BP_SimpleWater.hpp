#ifndef UE4SS_SDK_BP_SimpleWater_HPP
#define UE4SS_SDK_BP_SimpleWater_HPP

class ABP_SimpleWater_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* SwimmingVolume;
    class UHierarchicalInstancedStaticMeshComponent* HierarchicalInstancedStaticMesh;
    int32 TileCount;
    double MeshScaleOffset;
    class UStaticMesh* WaterPlaneMesh;
    class UMaterialInterface* WaterMaterial;
    FVector OceanMin;
    FVector OceanMax;
    FVector SwimVolumeScale;
    FVector SwimVolumeLocation;
    double Depth;
    bool bWorldOceanPlane;

    void DeactivateDigArea();
    void RemoveDigArea();
    void UpdateSwimmingVolume(int32 StartIndex, int32 EndIndex, double MeshScale);
    void GenerateOpenSeePlane();
    void GenerateWaterPlane();
    void GenerateOceanPlane();
    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_SimpleWater_SwimmingVolume_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_SimpleWater_SwimmingVolume_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_SimpleWater(int32 EntryPoint);
};

#endif
