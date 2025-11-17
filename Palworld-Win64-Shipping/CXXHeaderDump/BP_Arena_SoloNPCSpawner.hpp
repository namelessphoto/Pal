#ifndef UE4SS_SDK_BP_Arena_SoloNPCSpawner_HPP
#define UE4SS_SDK_BP_Arena_SoloNPCSpawner_HPP

class ABP_Arena_SoloNPCSpawner_C : public APalArenaSoloNPCSpawner
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    class UPalIndividualCharacterHandle* NPCHandle;
    TArray<class UPalIndividualCharacterHandle*> OtomoHandleList;
    int32 SpawnedNum;

    void SpawnOtomoDelegate(FPalInstanceID ID);
    void AllSpawnedCheck();
    void SpawnNPCDelegate(FPalInstanceID ID);
    TArray<class UPalIndividualCharacterHandle*> GetOtomoHandleList();
    class UPalIndividualCharacterHandle* GetNPCHandle();
    void RequestSpawn();
    void ReceiveDestroyed();
    void カスタムイベント(FPalInstanceID ID);
    void ExecuteUbergraph_BP_Arena_SoloNPCSpawner(int32 EntryPoint);
};

#endif
