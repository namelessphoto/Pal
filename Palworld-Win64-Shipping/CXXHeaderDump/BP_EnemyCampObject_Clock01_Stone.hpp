#ifndef UE4SS_SDK_BP_EnemyCampObject_Clock01_Stone_HPP
#define UE4SS_SDK_BP_EnemyCampObject_Clock01_Stone_HPP

class ABP_EnemyCampObject_Clock01_Stone_C : public APalBuildObject
{
    class UPalEnemyCampObjectSpawnMapObjectComponent* EnemyCampObjectSpawnMapObject;
    class UStaticMeshComponent* SM_Floor_Clock_comb;
    class UBoxComponent* CheckOverlapCollision;
    class USceneComponent* DefaultSceneRoot;

};

#endif
