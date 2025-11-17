#ifndef UE4SS_SDK_BP_BuildObject_JapaneseStyle_WindowWall_HPP
#define UE4SS_SDK_BP_BuildObject_JapaneseStyle_WindowWall_HPP

class ABP_BuildObject_JapaneseStyle_WindowWall_C : public APalBuildObjectBasicBase
{
    class UBP_InteractableBox_C* BP_InteractableBox;
    class UBoxComponent* PlayerBlockBox;
    class UBoxComponent* AffectNavigationBox;
    class UBoxComponent* BuildWorkableBounds;
    class UStaticMeshComponent* SM_Wall_Wood;
    class USceneComponent* Root;
    class UBoxComponent* CheckOverlapCollision;

};

#endif
