#ifndef UE4SS_SDK_BP_EnemyCampObject_JapaneseStyle_DoorWall_03_OneSide_HPP
#define UE4SS_SDK_BP_EnemyCampObject_JapaneseStyle_DoorWall_03_OneSide_HPP

class ABP_EnemyCampObject_JapaneseStyle_DoorWall_03_OneSide_C : public APalBuildObjectBasicBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalMapObjectDoorParameterComponent* DoorParameter;
    class UPalEnemyCampObjectSpawnMapObjectComponent* EnemyCampObjectSpawnMapObject;
    class UStaticMeshComponent* Architecture_JapaneseStyle_DoorC_L;
    class UStaticMeshComponent* Architecture_JapaneseStyle_DoorC_R;
    class UBoxComponent* AffectNavigationBox;
    class UBoxComponent* FrameCollision_02;
    class UBoxComponent* FrameCollision_01;
    class USceneComponent* FrameCollision;
    class UBP_InteractableBox_C* BP_InteractableBox;
    class UBoxComponent* DoorCollision;
    class UBoxComponent* BuildWorkableBounds;
    class UStaticMeshComponent* Architecture_JapaneseStyle_DoorC;
    class USceneComponent* Root;
    class UBoxComponent* CheckOverlapCollision;
    float _______MoveDoor_15AAEA1441F2BF4DF75F48B033E78F2F;
    TEnumAsByte<ETimelineDirection> ________Direction_15AAEA1441F2BF4DF75F48B033E78F2F;
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
    void ExecuteUbergraph_BP_EnemyCampObject_JapaneseStyle_DoorWall_03_OneSide(int32 EntryPoint);
};

#endif
