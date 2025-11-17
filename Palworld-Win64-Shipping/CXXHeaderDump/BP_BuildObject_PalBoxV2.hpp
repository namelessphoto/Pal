#ifndef UE4SS_SDK_BP_BuildObject_PalBoxV2_HPP
#define UE4SS_SDK_BP_BuildObject_PalBoxV2_HPP

class ABP_BuildObject_PalBoxV2_C : public APalBuildObjectBaseCampPoint
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* CannotOverlapArea;
    class UStaticMeshComponent* AreaRange1;
    class UStaticMeshComponent* AreaRange;
    class UPalNavigationInvokerComponent* PalNavigationInvoker;
    class UWorldPartitionStreamingSourceComponent* WorldPartitionStreamingSource_FarMountain;
    class UWorldPartitionStreamingSourceComponent* WorldPartitionStreamingSource_Foliage;
    class UPalLimitVolumeBoxComponent* PalLimitVolumeBox;
    class UStaticMeshComponent* PalSphereLight;
    class UBoxComponent* BuildWorkableBounds;
    class UStaticMeshComponent* space;
    class UArrowComponent* WorkerSpawnPoint;
    class UArrowComponent* FastTravelPoint;
    class UBP_InteractableCapsule_C* BP_PalBoxInteractableCapsule;
    class UWorldPartitionStreamingSourceComponent* WorldPartitionStreamingSource_MainGrid;
    class UBoxComponent* CheckOverlapCollision;
    class UStaticMeshComponent* PCStaticMesh;
    class USceneComponent* DefaultSceneRoot;

    class UStaticMeshComponent* GetBaseCampPointMeshComponent();
    void UpdateVisibleAreaRange();
    void OnAvailable_BlueprintImpl();
    FTransform GetWorkerSpawnLocalTransform();
    FTransform GetFastTravelLocalTransform();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_BuildObject_PalBoxV2(int32 EntryPoint);
};

#endif
