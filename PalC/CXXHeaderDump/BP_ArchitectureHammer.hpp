#ifndef UE4SS_SDK_BP_ArchitectureHammer_HPP
#define UE4SS_SDK_BP_ArchitectureHammer_HPP

class ABP_ArchitectureHammer_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* SkeletalMesh;
    class USceneComponent* DefaultSceneRoot;

    void DestroyRegister();
    void ExecuteUbergraph_BP_ArchitectureHammer(int32 EntryPoint);
};

#endif
