#ifndef UE4SS_SDK_BP_EnemyCampObject_MedicineFacility_01_HPP
#define UE4SS_SDK_BP_EnemyCampObject_MedicineFacility_01_HPP

class ABP_EnemyCampObject_MedicineFacility_01_C : public APalBuildObject
{
    class UPalEnemyCampObjectSpawnMapObjectComponent* EnemyCampObjectSpawnMapObject;
    class UStaticMeshComponent* SM_MedicineFacilityMedieval;
    class UBoxComponent* CheckOverlapCollision;
    class USceneComponent* Root;

};

#endif
