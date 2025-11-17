#ifndef UE4SS_SDK_BP_CookingSpatula_HPP
#define UE4SS_SDK_BP_CookingSpatula_HPP

class ABP_CookingSpatula_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_WoodenSpatula;
    class USceneComponent* DefaultSceneRoot;

    void DelayDestroy(double Delay);
    void ExecuteUbergraph_BP_CookingSpatula(int32 EntryPoint);
};

#endif
