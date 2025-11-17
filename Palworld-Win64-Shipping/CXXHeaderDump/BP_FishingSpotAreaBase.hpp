#ifndef UE4SS_SDK_BP_FishingSpotAreaBase_HPP
#define UE4SS_SDK_BP_FishingSpotAreaBase_HPP

class ABP_FishingSpotAreaBase_C : public APalFishingSpotArea
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* SpawnLocation_9;
    class UBoxComponent* SpawnLocation_8;
    class UBoxComponent* SpawnLocation_7;
    class UBoxComponent* SpawnLocation_6;
    class UChildActorComponent* Spawner;
    class UBoxComponent* FishingSpotAttackBlock;
    class UStaticMeshComponent* LocationBenchmark;
    class UBoxComponent* SpawnLocation_5;
    class UBoxComponent* SpawnLocation_4;
    class UBoxComponent* SpawnLocation_3;
    class UBoxComponent* SpawnLocation_2;
    class UBoxComponent* SpawnLocation_1;
    class UBoxComponent* SpotAreaVolume;
    class UStaticMeshComponent* DebugMesh;
    class USceneComponent* DefaultSceneRoot;
    TEnumAsByte<ECollisionEnabled> AttackBlockCollisionType;

    void AdjustActorToWater();
    void ReceiveBeginPlay();
    void BndEvt__BP_FishingSpotAreaBase_FishingSpotAttackBlock_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnSpawnFish();
    void OnEmptySpot();
    void ExecuteUbergraph_BP_FishingSpotAreaBase(int32 EntryPoint);
};

#endif
