#ifndef UE4SS_SDK_BP_BuildObject_PalBoxV2_HPP
#define UE4SS_SDK_BP_BuildObject_PalBoxV2_HPP

class ABP_BuildObject_PalBoxV2_C : public APalBuildObjectBaseCampPoint
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0688 (size: 0x8)
    class UBoxComponent* CannotOverlapArea;                                           // 0x0690 (size: 0x8)
    class UStaticMeshComponent* AreaRange1;                                           // 0x0698 (size: 0x8)
    class UStaticMeshComponent* AreaRange;                                            // 0x06A0 (size: 0x8)
    class UPalNavigationInvokerComponent* PalNavigationInvoker;                       // 0x06A8 (size: 0x8)
    class UWorldPartitionStreamingSourceComponent* WorldPartitionStreamingSource_FarMountain; // 0x06B0 (size: 0x8)
    class UWorldPartitionStreamingSourceComponent* WorldPartitionStreamingSource_Foliage; // 0x06B8 (size: 0x8)
    class UPalLimitVolumeBoxComponent* PalLimitVolumeBox;                             // 0x06C0 (size: 0x8)
    class UStaticMeshComponent* PalSphereLight;                                       // 0x06C8 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x06D0 (size: 0x8)
    class UStaticMeshComponent* space;                                                // 0x06D8 (size: 0x8)
    class UArrowComponent* WorkerSpawnPoint;                                          // 0x06E0 (size: 0x8)
    class UArrowComponent* FastTravelPoint;                                           // 0x06E8 (size: 0x8)
    class UBP_InteractableCapsule_C* BP_PalBoxInteractableCapsule;                    // 0x06F0 (size: 0x8)
    class UWorldPartitionStreamingSourceComponent* WorldPartitionStreamingSource_MainGrid; // 0x06F8 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x0700 (size: 0x8)
    class UStaticMeshComponent* PCStaticMesh;                                         // 0x0708 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0710 (size: 0x8)

    class UStaticMeshComponent* GetBaseCampPointMeshComponent();
    void UpdateVisibleAreaRange();
    void OnAvailable_BlueprintImpl();
    FTransform GetWorkerSpawnLocalTransform();
    FTransform GetFastTravelLocalTransform();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_BuildObject_PalBoxV2(int32 EntryPoint);
}; // Size: 0x718

#endif
