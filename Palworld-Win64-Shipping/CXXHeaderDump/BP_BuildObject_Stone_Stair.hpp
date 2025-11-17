#ifndef UE4SS_SDK_BP_BuildObject_Stone_Stair_HPP
#define UE4SS_SDK_BP_BuildObject_Stone_Stair_HPP

class ABP_BuildObject_Stone_Stair_C : public APalBuildObjectBasicBase
{
    class UBP_InteractableBox_C* BP_InteractableBox;
    class UStaticMeshComponent* SM_Stair_Stone;
    class UBoxComponent* CheckOverlapCollision;
    class USceneComponent* Root;

    void GetStaticMeshComponents(TArray<class UStaticMeshComponent*>& OutComponents);
    void GetStaticMeshInfos(TArray<FPalStaticMeshImposterStaticMeshInfo>& OutStaticMeshInfo);
};

#endif
