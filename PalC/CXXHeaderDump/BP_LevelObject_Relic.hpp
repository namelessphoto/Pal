#ifndef UE4SS_SDK_BP_LevelObject_Relic_HPP
#define UE4SS_SDK_BP_LevelObject_Relic_HPP

class ABP_LevelObject_Relic_C : public APalLevelObjectRelic
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UMaterialBillboardComponent* MaterialBillboard;
    class USceneComponent* ObtainFXOrigin;
    class UStaticMeshComponent* StaticMesh_Base;
    class UNiagaraComponent* AuraEffect;
    class UPalInteractableSphereComponentNative* BP_InteractableSphere;
    class UStaticMeshComponent* StaticMesh_Gem;
    class USceneComponent* DefaultSceneRoot;

    FVector GetObtainFXLocation();
    void OnUpdatePickupStatus(class APalLevelObjectObtainable* LevelObject);
    void SetActiveSelf(class APalLevelObjectObtainable* LevelObject);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_LevelObject_Relic(int32 EntryPoint);
};

#endif
