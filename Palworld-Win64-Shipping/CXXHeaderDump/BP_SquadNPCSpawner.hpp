#ifndef UE4SS_SDK_BP_SquadNPCSpawner_HPP
#define UE4SS_SDK_BP_SquadNPCSpawner_HPP

class ABP_SquadNPCSpawner_C : public ABP_MonoNPCSpawner_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class UPalIndividualCharacterHandle*> SpawnedHandleList;
    TArray<FF_NPCOnePointSpawnInfo> SpawnInfoList;
    bool IsLoadingFlag;
    TArray<class UPalIndividualCharacterHandle*> SpawnedOtomoHandleList;
    int32 SpawnedCount;
    FBP_SquadNPCSpawner_COnSquadSpawnedCharacter OnSquadSpawnedCharacter;
    void OnSquadSpawnedCharacter(class UPalIndividualCharacterHandle* NewParam);
    TArray<class UPalIndividualCharacterHandle*> Handles;

    void SetNullHandleWhenDestoryOtomoSquad(class AActor* DestroyedActor);
    void OnOtomoSpawnedSquad(class AController* HolderController, class APalCharacter* OtomoPal);
    void GetAllSpawnedNPCHandle(TArray<class UPalIndividualCharacterHandle*>& Handles);
    float GetSpawnPointRadius_0();
    void GetWorldLoadWaitRadius(double& Radius);
    void DeleteOnePoint(class AActor* Point);
    void SetNullHandleWhenDestoryNPC(class AActor* DestroyedActor);
    void DespawnDelegate(FPalInstanceID ID);
    void Despawn();
    void SetCharaNames();
    void SetupSpawnInfoList();
    void SpawnDelegate(FPalInstanceID ID);
    void FindIndividualHandle(FPalInstanceID ID, class UPalIndividualCharacterHandle*& Handle, int32& Index);
    void Spawn();
    void Check Spawn(double DeltaTime);
    void ReceiveBeginPlay();
    void SetAllNPCLocation();
    void ExecuteUbergraph_BP_SquadNPCSpawner(int32 EntryPoint);
    void OnSquadSpawnedCharacter__DelegateSignature(class UPalIndividualCharacterHandle* NewParam);
};

#endif
