#ifndef UE4SS_SDK_BP_BuildObject_Stone_WindowWall_HPP
#define UE4SS_SDK_BP_BuildObject_Stone_WindowWall_HPP

class ABP_BuildObject_Stone_WindowWall_C : public APalBuildObjectBasicBase
{
    class UBP_InteractableBox_C* BP_InteractableBox;
    class UBoxComponent* BuildWorkableBounds;
    class UBoxComponent* PlayerBlockBox;
    class UBoxComponent* AffectNavigationBox;
    class UStaticMeshComponent* SM_Wall_Stone;
    class USceneComponent* Root;
    class UBoxComponent* CheckOverlapCollision;

    void GetStaticMeshComponents(TArray<class UStaticMeshComponent*>& OutComponents);
    void GetStaticMeshInfos(TArray<FPalStaticMeshImposterStaticMeshInfo>& OutStaticMeshInfo);
};

#endif
