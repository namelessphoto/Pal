#ifndef UE4SS_SDK_BP_EnemyCampObject_Wood_DoorWall_HPP
#define UE4SS_SDK_BP_EnemyCampObject_Wood_DoorWall_HPP

class ABP_EnemyCampObject_Wood_DoorWall_C : public APalBuildObjectBasicBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalMapObjectDoorParameterComponent* DoorParameter;
    class UPalEnemyCampObjectSpawnMapObjectComponent* EnemyCampObjectSpawnMapObject;
    class UBoxComponent* AffectNavigationBox;
    class UBoxComponent* FrameCollision_02;
    class UBoxComponent* FrameCollision_01;
    class USceneComponent* FrameCollision;
    class UBP_InteractableBox_C* BP_InteractableBox;
    class UBoxComponent* DoorCollision;
    class UStaticMeshComponent* SM_Door_Wood;
    class UBoxComponent* BuildWorkableBounds;
    class UStaticMeshComponent* SM_Doorbase_Wood;
    class USceneComponent* Root;
    class UBoxComponent* CheckOverlapCollision;
    float _______RotateDoor_BB5364B1430E0226CCDF4AAA6074F427;
    TEnumAsByte<ETimelineDirection> ________Direction_BB5364B1430E0226CCDF4AAA6074F427;
    class UTimelineComponent* タイムライン;

    void GetStaticMeshComponents(TArray<class UStaticMeshComponent*>& OutComponents);
    void GetStaticMeshInfos(TArray<FPalStaticMeshImposterStaticMeshInfo>& OutStaticMeshInfo);
    void SetRotateDoor(class UStaticMeshComponent* Mesh, double RotateAngle);
    void OnUpdateSwitchState(class UPalMapObjectSwitchModule* Module);
    void OnReadySwitchModule(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module);
    void タイムライン__FinishedFunc();
    void タイムライン__UpdateFunc();
    void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void OpenDoorAnimation();
    void CloseDoorAnimation();
    void ExecuteUbergraph_BP_EnemyCampObject_Wood_DoorWall(int32 EntryPoint);
};

#endif
