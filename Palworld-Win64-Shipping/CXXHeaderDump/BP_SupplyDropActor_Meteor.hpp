#ifndef UE4SS_SDK_BP_SupplyDropActor_Meteor_HPP
#define UE4SS_SDK_BP_SupplyDropActor_Meteor_HPP

class ABP_SupplyDropActor_Meteor_C : public APalSupplyDropActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Sphere;
    class UNiagaraComponent* Niagara;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void OnLanded_BP();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
    void ExecuteUbergraph_BP_SupplyDropActor_Meteor(int32 EntryPoint);
};

#endif
