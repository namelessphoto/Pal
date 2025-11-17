#ifndef UE4SS_SDK_BP_MapObject_TreasureBox_EnemyCamp_HPP
#define UE4SS_SDK_BP_MapObject_TreasureBox_EnemyCamp_HPP

class ABP_MapObject_TreasureBox_EnemyCamp_C : public APalMapObjectTreasureBox
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalPickingGameDataComponent* PalPickingGameData;
    class UChildActorComponent* VisualActor;
    class UPalInteractableSphereComponentNative* BP_InteractableSphere;
    class USceneComponent* IndicatorOrigin;
    TMap<class EPalMapObjectTreasureGradeType, class TSubclassOf<AActor>> VisualMap;

    void SetupVisual(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void TriggerOpen();
    void OnFinishOpenVisual();
    void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void OnNotifiedStartOpen();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_MapObject_TreasureBox_EnemyCamp(int32 EntryPoint);
};

#endif
