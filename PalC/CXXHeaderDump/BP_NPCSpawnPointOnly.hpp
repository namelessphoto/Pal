#ifndef UE4SS_SDK_BP_NPCSpawnPointOnly_HPP
#define UE4SS_SDK_BP_NPCSpawnPointOnly_HPP

class ABP_NPCSpawnPointOnly_C : public AActor
{
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;
    FPalDataTableRowName_PalHumanData NPCName;
    FPalDataTableRowName_NPCUniqueData UniqueName;
    TSubclassOf<class ABP_NPCAIController_C> OverrideControllerClass;
    TSubclassOf<class UPalAIActionBase> OverrideDefaultActionClass;
    int32 OverrideLevel;

    void GetOneSpawnInfo(FF_NPCOnePointSpawnInfo& Info);
    void Get Spawn One Info(FF_NPCOnePointSpawnInfo& OneInfo);
};

#endif
