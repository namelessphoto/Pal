#ifndef UE4SS_SDK_BP_BuildObject_SF_DoorWall_02_HPP
#define UE4SS_SDK_BP_BuildObject_SF_DoorWall_02_HPP

class ABP_BuildObject_SF_DoorWall_02_C : public APalBuildObjectBasicBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalMapObjectDoorParameterComponent* DoorParameter;
    class UStaticMeshComponent* Architecture_SF_DoorB_L;
    class UStaticMeshComponent* Architecture_SF_DoorB_R;
    class UBoxComponent* AffectNavigationBox;
    class UBoxComponent* FrameCollision_02;
    class UBoxComponent* FrameCollision_01;
    class USceneComponent* FrameCollision;
    class UBP_InteractableBox_C* BP_InteractableBox;
    class UBoxComponent* DoorCollision;
    class UBoxComponent* BuildWorkableBounds;
    class UStaticMeshComponent* Architecture_SF_DoorB;
    class USceneComponent* Root;
    class UBoxComponent* CheckOverlapCollision;
    float _______MoveDoor_84958E5E48A83A9B2D20A1952BB73F68;
    TEnumAsByte<ETimelineDirection> ________Direction_84958E5E48A83A9B2D20A1952BB73F68;
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
    void ExecuteUbergraph_BP_BuildObject_SF_DoorWall_02(int32 EntryPoint);
};

#endif
