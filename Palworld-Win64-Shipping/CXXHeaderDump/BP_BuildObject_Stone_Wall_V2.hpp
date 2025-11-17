#ifndef UE4SS_SDK_BP_BuildObject_Stone_Wall_V2_HPP
#define UE4SS_SDK_BP_BuildObject_Stone_Wall_V2_HPP

class ABP_BuildObject_Stone_Wall_V2_C : public APalBuildObjectBasicBase
{
    class UBP_InteractableBox_C* BP_InteractableBox;
    class UBoxComponent* AffectNavigationBox;
    class UStaticMeshComponent* SM_Wall_Stone;
    class USceneComponent* Root;
    class UBoxComponent* CheckOverlapCollision;

    void GetStaticMeshComponents(TArray<class UStaticMeshComponent*>& OutComponents);
    void GetStaticMeshInfos(TArray<FPalStaticMeshImposterStaticMeshInfo>& OutStaticMeshInfo);
};

#endif
