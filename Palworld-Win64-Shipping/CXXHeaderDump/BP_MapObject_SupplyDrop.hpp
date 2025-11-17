#ifndef UE4SS_SDK_BP_MapObject_SupplyDrop_HPP
#define UE4SS_SDK_BP_MapObject_SupplyDrop_HPP

class ABP_MapObject_SupplyDrop_C : public APalMapObject
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* StaticMesh7;
    class UStaticMeshComponent* StaticMesh8;
    class UNiagaraComponent* NS_MapObject_DroppedCharacter;
    class UPalMapObjectItemChestParameterComponent* PalMapObjectItemChestParameter;
    class UBoxComponent* CheckOverlapCollision;
    class UBP_InteractableBox_C* BP_InteractableBox;
    class UStaticMeshComponent* Mesh;
    class USceneComponent* Root;

    void SetActiveFXInLocal(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void ExecuteUbergraph_BP_MapObject_SupplyDrop(int32 EntryPoint);
};

#endif
