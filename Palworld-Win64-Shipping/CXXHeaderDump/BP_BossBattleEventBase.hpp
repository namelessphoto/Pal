#ifndef UE4SS_SDK_BP_BossBattleEventBase_HPP
#define UE4SS_SDK_BP_BossBattleEventBase_HPP

class ABP_BossBattleEventBase_C : public APalBossBattleEventBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    class ABP_BossBattle_BossCharacterSpawner_C* BossSpawner;

    void ActivateCharacterByLocation(class UPalIndividualCharacterHandle* IndividualHandle, const FVector Location);
    void ActivateCharacter(class UPalIndividualCharacterHandle* IndividualHandle, const FVector Offset);
    void GetDebugNo(int32 BitFlag, bool& Result);
    void SetSpawner(class ABP_BossBattle_BossCharacterSpawner_C* Spawner);
    void OnTerminate();
    void ExecuteUbergraph_BP_BossBattleEventBase(int32 EntryPoint);
};

#endif
