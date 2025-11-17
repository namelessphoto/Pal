#ifndef UE4SS_SDK_BP_Prop_Base_HPP
#define UE4SS_SDK_BP_Prop_Base_HPP

class ABP_Prop_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Mesh;
    class USceneComponent* DefaultSceneRoot;
    FVector HandleLocation;
    FRotator HandleRotation;

    void DestroyRegister();
    void ExecuteUbergraph_BP_Prop_Base(int32 EntryPoint);
};

#endif
