#ifndef UE4SS_SDK_BP_EnemyCampObject_Wood_Gate_HPP
#define UE4SS_SDK_BP_EnemyCampObject_Wood_Gate_HPP

class ABP_EnemyCampObject_Wood_Gate_C : public APalBuildObject
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalEnemyCampObjectSpawnMapObjectComponent* PalEnemyCampObjectSpawnMapObject;
    class UPalMapObjectDoorParameterComponent* DoorParameter;
    class UBoxComponent* PillarAffectNavigationBox1;
    class UBoxComponent* PillarAffectNavigationBox;
    class UBoxComponent* AffectNavigationBox;
    class UStaticMeshComponent* SM_Gate_Base_Wood;
    class UStaticMeshComponent* SM_Wall_Door1;
    class UBoxComponent* VirtualMeshCollision;
    class UBP_InteractableBox_C* BP_InteractableBox;
    class UBoxComponent* BuildWorkableBounds;
    class UStaticMeshComponent* SM_Wall_Door;
    class USceneComponent* Root;
    class UBoxComponent* CheckOverlapCollision;
    float _______RotateDoor_B5B5645F48BC85AE7D1625928A094A77;
    TEnumAsByte<ETimelineDirection> ________Direction_B5B5645F48BC85AE7D1625928A094A77;
    class UTimelineComponent* タイムライン;

    void SetRotateDoor(class UStaticMeshComponent* Mesh, double RotateAngle);
    void OnUpdateSwitchState(class UPalMapObjectSwitchModule* Module);
    void OnReadySwitchModule(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module);
    void タイムライン__FinishedFunc();
    void タイムライン__UpdateFunc();
    void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void OpenDoorAnimation();
    void CloseDoorAnimation();
    void OnAvailable_BlueprintImpl();
    void ExecuteUbergraph_BP_EnemyCampObject_Wood_Gate(int32 EntryPoint);
};

#endif
