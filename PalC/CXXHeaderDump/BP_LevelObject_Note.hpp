#ifndef UE4SS_SDK_BP_LevelObject_Note_HPP
#define UE4SS_SDK_BP_LevelObject_Note_HPP

class ABP_LevelObject_Note_C : public APalLevelObjectNote
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* ObtainFXOrigin;
    class USkeletalMeshComponent* SkeletalMesh;
    class UStaticMeshComponent* StaticMesh_Base;
    class UNiagaraComponent* AuraEffect;
    class UPalInteractableSphereComponentNative* BP_InteractableSphere;
    class USceneComponent* DefaultSceneRoot;

    FVector GetObtainFXLocation();
    void OnUpdatePickupStatus(class APalLevelObjectObtainable* LevelObject);
    void SetActiveSelf(class APalLevelObjectObtainable* LevelObject);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_LevelObject_Note(int32 EntryPoint);
};

#endif
