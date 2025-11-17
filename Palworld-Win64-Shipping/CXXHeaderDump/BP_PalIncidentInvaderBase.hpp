#ifndef UE4SS_SDK_BP_PalIncidentInvaderBase_HPP
#define UE4SS_SDK_BP_PalIncidentInvaderBase_HPP

class UBP_PalIncidentInvaderBase_C : public UPalInvaderIncidentBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class UPalIndividualCharacterHandle*> IndividualHandleList;
    FVector MarchStartPoint;
    int32 MemberCount;
    int32 SpawnedCount;
    class ABP_DummyNavigationInvoker_C* DummyNav_Start;
    class ABP_DummyNavigationInvoker_C* DummyNav_Goal;
    FVector CashedBaseCampLocation;
    bool IsBaseCampLocationCashed;
    TArray<FName> OtomoNames;
    TArray<class UPalIndividualCharacterHandle*> OtomoHandleList;

    void GetIndividualHandleIndex(class UPalIndividualCharacterHandle* IndividualHandle, int32& Index);
    void IsUniqueNPCID(FName CharacterID, bool& IsUnique);
    void SpawnCharacter(const FPalInvaderSpawnCharacterParameter& SpawnParameter, int32 Index, FRotator SpawnRot);
    void OnDespawnOtomoByTerminate(FPalInstanceID ID);
    void SetNullHandleWhenDestoryOtomo(class AActor* DestroyedActor);
    void OnOtomoSpawned(class AController* HolderController, class APalCharacter* OtomoPal);
    FVector CalcSpawnLocation(const FVector& SpawnCenter, const FRotator& Rot, int32 Index);
    TSubclassOf<class APalAIController> GetNPCAIControllerClass(const FPalInvaderSpawnCharacterParameter& SpawnParameter);
    void IsSquad(bool& Result);
    void GetStartLocation(FVector& StartLocation);
    void OnAllCharacterSpawned(TArray<class APalAIController*>& MemberController);
    void OnCharacterSpawned(class APalCharacter* SpawnedCharacter);
    void Get Character Location Type(EPalCharacterLocationType& CharacterLocationType);
    void SpawnMemberCharacters(FVector StartLocation);
    void GetTargetBaseCampPosition(FVector& Location);
    void TerminateProc();
    void EndProc();
    void StartProc();
    void SpawnDummyNavInvoker(class ABP_DummyNavigationInvoker_C*& DummyNav);
    void DummyActorSetLoaction();
    void OnDestroyActor(class AActor* Actor);
    void GoalPointPerAgent(int32 SpawnedIndex, FVector& GoalPosition);
    void RemoveHandleList(class APalCharacter* Character);
    void FindIndividualHandle(FPalInstanceID ID, class UPalIndividualCharacterHandle*& Handle);
    void SpawnDelegate(FPalInstanceID ID);
    void RandomTransform(int32 Index, FVector& RandomPos);
    void OnEndInvade();
    void OnInitialized();
    void OnStartInvade();
    void ExecuteUbergraph_BP_PalIncidentInvaderBase(int32 EntryPoint);
};

#endif
