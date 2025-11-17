#ifndef UE4SS_SDK_BP_BuildObject_Glass_Wall_HPP
#define UE4SS_SDK_BP_BuildObject_Glass_Wall_HPP

class ABP_BuildObject_Glass_Wall_C : public APalBuildObjectBasicBase
{
    class UBP_InteractableBox_C* BP_InteractableBox;
    class UBoxComponent* AffectNavigationBox;
    class UBoxComponent* BuildWorkableBounds;
    class UStaticMeshComponent* SM_Wall_Wood;
    class USceneComponent* Root;
    class UBoxComponent* CheckOverlapCollision;

    void GetStaticMeshComponents(TArray<class UStaticMeshComponent*>& OutComponents);
    void GetStaticMeshInfos(TArray<FPalStaticMeshImposterStaticMeshInfo>& OutStaticMeshInfo);
};

#endif
