#ifndef UE4SS_SDK_BP_MapObject_PickupItem_PalEgg_Base_HPP
#define UE4SS_SDK_BP_MapObject_PickupItem_PalEgg_Base_HPP

class ABP_MapObject_PickupItem_PalEgg_Base_C : public APalMapObjectPalEgg
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Niagara;
    class UStaticMeshComponent* SM_basket;
    class UPalInteractableSphereComponentNative* BP_InteractableSphere;
    class USphereComponent* Sphere;
    class USkeletalMeshComponent* SK_Kurinuki_EggA;
    double Scale;

    void OnRep_Scale();
    void GetPalEggScale(int32 PalRarity, double& PalEggScale);
    void SetupPalEggScale();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_MapObject_PickupItem_PalEgg_Base(int32 EntryPoint);
};

#endif
