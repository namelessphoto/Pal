#ifndef UE4SS_SDK_BP_EnemyCampObject_JapaneseStyle_DoorWall_01_HPP
#define UE4SS_SDK_BP_EnemyCampObject_JapaneseStyle_DoorWall_01_HPP

class ABP_EnemyCampObject_JapaneseStyle_DoorWall_01_C : public APalBuildObjectBasicBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0688 (size: 0x8)
    class UPalMapObjectDoorParameterComponent* DoorParameter;                         // 0x0690 (size: 0x8)
    class UPalEnemyCampObjectSpawnMapObjectComponent* EnemyCampObjectSpawnMapObject;  // 0x0698 (size: 0x8)
    class UStaticMeshComponent* Architecture_JapaneseStyle_DoorA_R;                   // 0x06A0 (size: 0x8)
    class UBoxComponent* AffectNavigationBox;                                         // 0x06A8 (size: 0x8)
    class UBoxComponent* FrameCollision_02;                                           // 0x06B0 (size: 0x8)
    class UBoxComponent* FrameCollision_01;                                           // 0x06B8 (size: 0x8)
    class USceneComponent* FrameCollision;                                            // 0x06C0 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x06C8 (size: 0x8)
    class UBoxComponent* DoorCollision;                                               // 0x06D0 (size: 0x8)
    class UStaticMeshComponent* Architecture_JapaneseStyle_DoorA_L;                   // 0x06D8 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x06E0 (size: 0x8)
    class UStaticMeshComponent* Architecture_JapaneseStyle_DoorA;                     // 0x06E8 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x06F0 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x06F8 (size: 0x8)
    float _______MoveDoor_7597B9FE48DD945E999EB1803E2940FB;                           // 0x0700 (size: 0x4)
    TEnumAsByte<ETimelineDirection> ________Direction_7597B9FE48DD945E999EB1803E2940FB; // 0x0704 (size: 0x1)
    class UTimelineComponent* タイムライン;                                                 // 0x0708 (size: 0x8)
    double MoveDoorDistance;                                                          // 0x0710 (size: 0x8)

    void SetMoveDoor(class UStaticMeshComponent* Mesh, double MoveDirection, double MoveDistanceNormal);
    void OnUpdateSwitchState(class UPalMapObjectSwitchModule* Module);
    void OnReadySwitchModule(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module);
    void タイムライン__FinishedFunc();
    void タイムライン__UpdateFunc();
    void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void OpenDoorAnimation();
    void CloseDoorAnimation();
    void ExecuteUbergraph_BP_EnemyCampObject_JapaneseStyle_DoorWall_01(int32 EntryPoint);
}; // Size: 0x718

#endif
