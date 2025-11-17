#ifndef UE4SS_SDK_BP_SupplyDropActor_Capsule_HPP
#define UE4SS_SDK_BP_SupplyDropActor_Capsule_HPP

class ABP_SupplyDropActor_Capsule_C : public APalSupplyDropActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Cylinder;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void OnLanded_BP();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
    void ExecuteUbergraph_BP_SupplyDropActor_Capsule(int32 EntryPoint);
};

#endif
