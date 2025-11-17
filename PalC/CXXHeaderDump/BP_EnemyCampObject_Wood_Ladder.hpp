#ifndef UE4SS_SDK_BP_EnemyCampObject_Wood_Ladder_HPP
#define UE4SS_SDK_BP_EnemyCampObject_Wood_Ladder_HPP

class ABP_EnemyCampObject_Wood_Ladder_C : public APalBuildObjectBasicBase
{
    class UPalEnemyCampObjectSpawnMapObjectComponent* EnemyCampObjectSpawnMapObject;
    class UBP_InteractableBox_C* BP_InteractableBox;
    class UBoxComponent* AffectNavigationBox;
    class UBoxComponent* BuildWorkableBounds;
    class UStaticMeshComponent* SM_Wall_Wood;
    class USceneComponent* Root;
    class UBoxComponent* CheckOverlapCollision;

    float GetClimbMoveSpeedRate();
    float GetConsumeStaminaSpeedRate();
    void GetStaticMeshComponents(TArray<class UStaticMeshComponent*>& OutComponents);
    void GetStaticMeshInfos(TArray<FPalStaticMeshImposterStaticMeshInfo>& OutStaticMeshInfo);
};

#endif
