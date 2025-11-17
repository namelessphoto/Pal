#ifndef UE4SS_SDK_BP_EnemyCampObject_JapaneseStyle_DoorWall_01_HPP
#define UE4SS_SDK_BP_EnemyCampObject_JapaneseStyle_DoorWall_01_HPP

class ABP_EnemyCampObject_JapaneseStyle_DoorWall_01_C : public APalBuildObjectBasicBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalMapObjectDoorParameterComponent* DoorParameter;
    class UPalEnemyCampObjectSpawnMapObjectComponent* EnemyCampObjectSpawnMapObject;
    class UStaticMeshComponent* Architecture_JapaneseStyle_DoorA_R;
    class UBoxComponent* AffectNavigationBox;
    class UBoxComponent* FrameCollision_02;
    class UBoxComponent* FrameCollision_01;
    class USceneComponent* FrameCollision;
    class UBP_InteractableBox_C* BP_InteractableBox;
    class UBoxComponent* DoorCollision;
    class UStaticMeshComponent* Architecture_JapaneseStyle_DoorA_L;
    class UBoxComponent* BuildWorkableBounds;
    class UStaticMeshComponent* Architecture_JapaneseStyle_DoorA;
    class USceneComponent* Root;
    class UBoxComponent* CheckOverlapCollision;
    float _______MoveDoor_7597B9FE48DD945E999EB1803E2940FB;
    TEnumAsByte<ETimelineDirection> ________Direction_7597B9FE48DD945E999EB1803E2940FB;
    class UTimelineComponent* タイムライン;
    double MoveDoorDistance;

    void SetMoveDoor(class UStaticMeshComponent* Mesh, double MoveDirection, double MoveDistanceNormal);
    void OnUpdateSwitchState(class UPalMapObjectSwitchModule* Module);
    void OnReadySwitchModule(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module);
    void タイムライン__FinishedFunc();
    void タイムライン__UpdateFunc();
    void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void OpenDoorAnimation();
    void CloseDoorAnimation();
    void ExecuteUbergraph_BP_EnemyCampObject_JapaneseStyle_DoorWall_01(int32 EntryPoint);
};

#endif
