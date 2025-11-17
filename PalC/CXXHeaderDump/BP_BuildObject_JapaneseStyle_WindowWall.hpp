#ifndef UE4SS_SDK_BP_BuildObject_JapaneseStyle_WindowWall_HPP
#define UE4SS_SDK_BP_BuildObject_JapaneseStyle_WindowWall_HPP

class ABP_BuildObject_JapaneseStyle_WindowWall_C : public APalBuildObjectBasicBase
{
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x0688 (size: 0x8)
    class UBoxComponent* PlayerBlockBox;                                              // 0x0690 (size: 0x8)
    class UBoxComponent* AffectNavigationBox;                                         // 0x0698 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x06A0 (size: 0x8)
    class UStaticMeshComponent* SM_Wall_Wood;                                         // 0x06A8 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x06B0 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x06B8 (size: 0x8)

}; // Size: 0x6C0

#endif
