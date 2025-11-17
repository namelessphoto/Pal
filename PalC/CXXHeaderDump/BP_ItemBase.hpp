#ifndef UE4SS_SDK_BP_ItemBase_HPP
#define UE4SS_SDK_BP_ItemBase_HPP

class ABP_ItemBase_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Niagara;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_ItemBase(int32 EntryPoint);
};

#endif
