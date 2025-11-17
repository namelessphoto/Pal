#ifndef UE4SS_SDK_BP_BuildObject_Stone_Foundation_HPP
#define UE4SS_SDK_BP_BuildObject_Stone_Foundation_HPP

class ABP_BuildObject_Stone_Foundation_C : public APalBuildObjectBasicBase
{
    class UBP_InteractableBox_C* BP_InteractableBox;
    class UBoxComponent* BuildWorkableBounds;
    class UStaticMeshComponent* SM_Floor_Stone;
    class UBoxComponent* CheckOverlapCollision;
    class USceneComponent* Root;

    void GetStaticMeshComponents(TArray<class UStaticMeshComponent*>& OutComponents);
    void GetStaticMeshInfos(TArray<FPalStaticMeshImposterStaticMeshInfo>& OutStaticMeshInfo);
};

#endif
