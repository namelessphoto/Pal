#ifndef UE4SS_SDK_BP_BuildObject_SF_Pillar_HPP
#define UE4SS_SDK_BP_BuildObject_SF_Pillar_HPP

class ABP_BuildObject_SF_Pillar_C : public APalBuildObjectBasicBase
{
    class UBP_InteractableBox_C* BP_InteractableBox;
    class UBoxComponent* AffectNavigationBox;
    class UBoxComponent* BuildWorkableBounds;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* Root;
    class UBoxComponent* CheckOverlapCollision;

    void GetStaticMeshComponents(TArray<class UStaticMeshComponent*>& OutComponents);
    void GetStaticMeshInfos(TArray<FPalStaticMeshImposterStaticMeshInfo>& OutStaticMeshInfo);
};

#endif
