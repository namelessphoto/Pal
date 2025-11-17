#ifndef UE4SS_SDK_BP_SquadNPCSpawner_ForCampBase_HPP
#define UE4SS_SDK_BP_SquadNPCSpawner_ForCampBase_HPP

class ABP_SquadNPCSpawner_ForCampBase_C : public ABP_SquadNPCSpawner_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool IgnoreRayAdjustFloor;

    void AdjustFloor(class AActor* SpaenedChara);
    void RayAdjustFloor();
    void DeleteOnePoint(class AActor* Point);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SquadNPCSpawner_ForCampBase(int32 EntryPoint);
};

#endif
