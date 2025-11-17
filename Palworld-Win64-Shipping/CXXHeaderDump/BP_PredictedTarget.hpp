#ifndef UE4SS_SDK_BP_PredictedTarget_HPP
#define UE4SS_SDK_BP_PredictedTarget_HPP

class ABP_PredictedTarget_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* DebugSphere;
    class USceneComponent* DefaultSceneRoot;
    float LifeTime;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_PredictedTarget(int32 EntryPoint);
};

#endif
