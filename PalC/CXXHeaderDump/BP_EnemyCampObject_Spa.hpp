#ifndef UE4SS_SDK_BP_EnemyCampObject_Spa_HPP
#define UE4SS_SDK_BP_EnemyCampObject_Spa_HPP

class ABP_EnemyCampObject_Spa_C : public APalBuildObject
{
    class UPalEnemyCampObjectSpawnMapObjectComponent* EnemyCampObjectSpawnMapObject;  // 0x0688 (size: 0x8)
    class UNiagaraComponent* NS_PalSpaSteam;                                          // 0x0690 (size: 0x8)
    class UStaticMeshComponent* SM_PalSpa;                                            // 0x0698 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x06A0 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x06A8 (size: 0x8)

}; // Size: 0x6B0

#endif
