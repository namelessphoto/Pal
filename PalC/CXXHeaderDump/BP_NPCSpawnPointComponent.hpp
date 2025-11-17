#ifndef UE4SS_SDK_BP_NPCSpawnPointComponent_HPP
#define UE4SS_SDK_BP_NPCSpawnPointComponent_HPP

class UBP_NPCSpawnPointComponent_C : public UStaticMeshComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    FPalDataTableRowName_PalHumanData NPCName;
    TSubclassOf<class UPalAIActionBase> OverrideDefaultAction;
    int32 OverrideLevel;
    TArray<class UBP_NPCPathWalkPointComponent_1_C*> WalkPointRefarence;
    FPalDataTableRowName_PalMonsterData OtomoName;

    void GetOneSpawnInfo(FF_NPCOnePointSpawnInfo& Info);
    void Setup Walk Point Ref();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_NPCSpawnPointComponent(int32 EntryPoint);
};

#endif
