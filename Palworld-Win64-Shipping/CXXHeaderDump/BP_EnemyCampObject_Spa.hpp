#ifndef UE4SS_SDK_BP_EnemyCampObject_Spa_HPP
#define UE4SS_SDK_BP_EnemyCampObject_Spa_HPP

class ABP_EnemyCampObject_Spa_C : public APalBuildObject
{
    class UPalEnemyCampObjectSpawnMapObjectComponent* EnemyCampObjectSpawnMapObject;
    class UNiagaraComponent* NS_PalSpaSteam;
    class UStaticMeshComponent* SM_PalSpa;
    class UBoxComponent* CheckOverlapCollision;
    class USceneComponent* Root;

};

#endif
