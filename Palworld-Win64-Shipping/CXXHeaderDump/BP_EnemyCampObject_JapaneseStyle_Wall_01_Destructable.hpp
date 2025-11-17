#ifndef UE4SS_SDK_BP_EnemyCampObject_JapaneseStyle_Wall_01_Destructable_HPP
#define UE4SS_SDK_BP_EnemyCampObject_JapaneseStyle_Wall_01_Destructable_HPP

class ABP_EnemyCampObject_JapaneseStyle_Wall_01_Destructable_C : public APalBuildObjectBasicBase
{
    class UPalEnemyCampObjectSpawnMapObjectComponent* EnemyCampObjectSpawnMapObject;
    class UBoxComponent* AffectNavigationBox;
    class UBoxComponent* BuildWorkableBounds;
    class UStaticMeshComponent* SM_Wall_Wood;
    class USceneComponent* Root;
    class UBoxComponent* CheckOverlapCollision;

};

#endif
