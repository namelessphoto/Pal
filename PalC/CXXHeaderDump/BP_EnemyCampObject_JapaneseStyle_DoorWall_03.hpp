#ifndef UE4SS_SDK_BP_EnemyCampObject_JapaneseStyle_DoorWall_03_HPP
#define UE4SS_SDK_BP_EnemyCampObject_JapaneseStyle_DoorWall_03_HPP

class ABP_EnemyCampObject_JapaneseStyle_DoorWall_03_C : public APalBuildObjectBasicBase
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
    float _______MoveDoor_47F18B2F47CBAEE2EA9B9BABABEB5C5B;
    TEnumAsByte<ETimelineDirection> ________Direction_47F18B2F47CBAEE2EA9B9BABABEB5C5B;
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
    void ExecuteUbergraph_BP_EnemyCampObject_JapaneseStyle_DoorWall_03(int32 EntryPoint);
};

#endif
