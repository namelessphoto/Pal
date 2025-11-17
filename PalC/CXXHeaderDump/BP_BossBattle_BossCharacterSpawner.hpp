#ifndef UE4SS_SDK_BP_BossBattle_BossCharacterSpawner_HPP
#define UE4SS_SDK_BP_BossBattle_BossCharacterSpawner_HPP

class ABP_BossBattle_BossCharacterSpawner_C : public AActor
{
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;
    class UPalIndividualCharacterHandle* BossCharacterHandle;
    int32 StartPlayerNum;
    FBP_BossBattle_BossCharacterSpawner_COnOtherSpawned OnOtherSpawned;
    void OnOtherSpawned(class UPalIndividualCharacterHandle* SpawnCharacterHandle);
    TArray<class UPalIndividualCharacterHandle*> OtherCharacterHandles;

    void GetDebugNo(int32 BitFlag, bool& Result);
    void SetCharacterStartLocation(class UPalIndividualCharacterHandle* targetHandle, FVector Offset);
    void SetMultiPlayerHPRate(class APalCharacter* SpawnCharacter);
    void SpawnOtherDelegate(FPalInstanceID ID);
    void RequestOtherSpawn(FName CharacterID, int32 Level, TSubclassOf<class APalAIController> AIController, bool IsOutAreaSpawn, bool IsOverrideRotation, FRotator Rotation);
    void SetBossLocationToStartPoint();
    void IsSkipCutscene(bool& Skip);
    void SpawnBossDelegate(FPalInstanceID ID);
    void RequestDespawn();
    void RequestBossSpawn(FName CharacterID, int32 Level);
    void OnOtherSpawned__DelegateSignature(class UPalIndividualCharacterHandle* SpawnCharacterHandle);
};

#endif
