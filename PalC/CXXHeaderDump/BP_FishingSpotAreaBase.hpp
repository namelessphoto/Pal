#ifndef UE4SS_SDK_BP_FishingSpotAreaBase_HPP
#define UE4SS_SDK_BP_FishingSpotAreaBase_HPP

class ABP_FishingSpotAreaBase_C : public APalFishingSpotArea
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UBoxComponent* SpawnLocation_9;                                             // 0x03C8 (size: 0x8)
    class UBoxComponent* SpawnLocation_8;                                             // 0x03D0 (size: 0x8)
    class UBoxComponent* SpawnLocation_7;                                             // 0x03D8 (size: 0x8)
    class UBoxComponent* SpawnLocation_6;                                             // 0x03E0 (size: 0x8)
    class UChildActorComponent* Spawner;                                              // 0x03E8 (size: 0x8)
    class UBoxComponent* FishingSpotAttackBlock;                                      // 0x03F0 (size: 0x8)
    class UStaticMeshComponent* LocationBenchmark;                                    // 0x03F8 (size: 0x8)
    class UBoxComponent* SpawnLocation_5;                                             // 0x0400 (size: 0x8)
    class UBoxComponent* SpawnLocation_4;                                             // 0x0408 (size: 0x8)
    class UBoxComponent* SpawnLocation_3;                                             // 0x0410 (size: 0x8)
    class UBoxComponent* SpawnLocation_2;                                             // 0x0418 (size: 0x8)
    class UBoxComponent* SpawnLocation_1;                                             // 0x0420 (size: 0x8)
    class UBoxComponent* SpotAreaVolume;                                              // 0x0428 (size: 0x8)
    class UStaticMeshComponent* DebugMesh;                                            // 0x0430 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0438 (size: 0x8)
    TEnumAsByte<ECollisionEnabled> AttackBlockCollisionType;                          // 0x0440 (size: 0x1)

    void AdjustActorToWater();
    void ReceiveBeginPlay();
    void BndEvt__BP_FishingSpotAreaBase_FishingSpotAttackBlock_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnSpawnFish();
    void OnEmptySpot();
    void ExecuteUbergraph_BP_FishingSpotAreaBase(int32 EntryPoint);
}; // Size: 0x441

#endif
