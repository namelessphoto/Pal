#ifndef UE4SS_SDK_BP_CookingFryingPan_HPP
#define UE4SS_SDK_BP_CookingFryingPan_HPP

class ABP_CookingFryingPan_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Food_Veg_Carrot_01_Slice_03;
    class UStaticMeshComponent* Food_Veg_Carrot_01_Slice_02;
    class UStaticMeshComponent* Food_Veg_Carrot_01_Slice_01;
    class UStaticMeshComponent* SM_Chickenleg;
    class UStaticMeshComponent* SM_FriedEggs;
    class USkeletalMeshComponent* SkeletalMesh;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void EndAnim();
    void DelayDestroy(double Delay);
    void ExecuteUbergraph_BP_CookingFryingPan(int32 EntryPoint);
};

#endif
