#ifndef UE4SS_SDK_BP_MapObject_PickupItem_Base_HPP
#define UE4SS_SDK_BP_MapObject_PickupItem_Base_HPP

class ABP_MapObject_PickupItem_Base_C : public APalMapLevelObject
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalInteractableSphereComponentNative* BP_InteractableSphere;
    class USphereComponent* Sphere;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_MapObject_PickupItem_Base(int32 EntryPoint);
};

#endif
