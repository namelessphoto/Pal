#ifndef UE4SS_SDK_BP_NPC_WalkPathPoint_1_HPP
#define UE4SS_SDK_BP_NPC_WalkPathPoint_1_HPP

class ABP_NPC_WalkPathPoint_1_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* DebugStaticMesh;
    class USceneComponent* DefaultSceneRoot;
    double WaitTime;
    EPalActionType WaitAction;

    void ExecuteUbergraph_BP_NPC_WalkPathPoint_1(int32 EntryPoint);
};

#endif
