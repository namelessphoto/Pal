#ifndef UE4SS_SDK_BP_BuildObject_Stone_WindowWall_HPP
#define UE4SS_SDK_BP_BuildObject_Stone_WindowWall_HPP

class ABP_BuildObject_Stone_WindowWall_C : public APalBuildObjectBasicBase
{
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x0688 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x0690 (size: 0x8)
    class UBoxComponent* PlayerBlockBox;                                              // 0x0698 (size: 0x8)
    class UBoxComponent* AffectNavigationBox;                                         // 0x06A0 (size: 0x8)
    class UStaticMeshComponent* SM_Wall_Stone;                                        // 0x06A8 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x06B0 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x06B8 (size: 0x8)

    void GetStaticMeshComponents(TArray<class UStaticMeshComponent*>& OutComponents);
    void GetStaticMeshInfos(TArray<FPalStaticMeshImposterStaticMeshInfo>& OutStaticMeshInfo);
}; // Size: 0x6C0

#endif
