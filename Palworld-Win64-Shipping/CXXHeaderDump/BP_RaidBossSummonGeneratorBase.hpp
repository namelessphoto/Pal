#ifndef UE4SS_SDK_BP_RaidBossSummonGeneratorBase_HPP
#define UE4SS_SDK_BP_RaidBossSummonGeneratorBase_HPP

class ABP_RaidBossSummonGeneratorBase_C : public APalRaidBossSummonGeneratorBase
{
    class USceneComponent* DefaultSceneRoot;

    void CalcSpawnTransform(int32 Index, int32 MaxNum, FVector CenterPos, double Height, FTransform& SpawnTF);
    void SpawnSpawner(class AActor* BossActor, FGuid CampID, int32 GeneralIndex);
};

#endif
