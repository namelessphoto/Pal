#ifndef UE4SS_SDK_BP_DungeonFixedEntrance_HPP
#define UE4SS_SDK_BP_DungeonFixedEntrance_HPP

class ABP_DungeonFixedEntrance_C : public APalDungeonFixedEntrance
{
    class UArrowComponent* DeadItemDropPoint;
    class USceneComponent* IndicatorOrigin;
    class UPalInteractableSphereComponentNative* BP_InteractableSphere;
    class UArrowComponent* WarpPoint;
    class USceneComponent* Scene;

    void GetInteractWidget(class UPalUserWidget*& createdWidget);
    FTransform GetDeadItemDropPoint();
    FTransform GetWarpPoint();
};

#endif
