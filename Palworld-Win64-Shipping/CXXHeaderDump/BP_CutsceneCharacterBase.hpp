#ifndef UE4SS_SDK_BP_CutsceneCharacterBase_HPP
#define UE4SS_SDK_BP_CutsceneCharacterBase_HPP

class ABP_CutsceneCharacterBase_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Cube;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CutsceneCharacterBase(int32 EntryPoint);
};

#endif
