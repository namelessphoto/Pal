#ifndef UE4SS_SDK_BP_ArenaEntrance_HPP
#define UE4SS_SDK_BP_ArenaEntrance_HPP

class ABP_ArenaEntrance_C : public APalArenaEntrance
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* EntryCancel_Trigger;
    class USceneComponent* ItemDropPoint;
    class UStaticMeshComponent* WarpPoint;
    class UBP_InteractableBox_C* BP_InteractableBox;
    class USceneComponent* DefaultSceneRoot;

    FTransform GetItemDropPoint();
    FTransform GetWarpPoint();
    void ReceiveBeginPlay();
    void カスタムイベント(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    void BndEvt__BP_ArenaEntrance_EntryCancel_Trigger_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OpenArenaGuide();
    void ExecuteUbergraph_BP_ArenaEntrance(int32 EntryPoint);
};

#endif
