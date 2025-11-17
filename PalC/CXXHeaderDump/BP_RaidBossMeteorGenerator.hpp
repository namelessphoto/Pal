#ifndef UE4SS_SDK_BP_RaidBossMeteorGenerator_HPP
#define UE4SS_SDK_BP_RaidBossMeteorGenerator_HPP

class ABP_RaidBossMeteorGenerator_C : public ABP_RaidBossSummonGeneratorBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FGuid CampGuid;
    int32 Level;
    double Const_SpawnInterval;
    class AActor* BossPal;
    TArray<FF_SummonMeteorSpawnInfo> InfoList;
    int32 CurrentIndex;
    double Timer;

    void SpawnSpawner(class AActor* BossActor, FGuid CampID, int32 GeneralIndex);
    void OneSpawnMeteor();
    void Calc Spawn Transform 22(int32 Index, int32 MaxNum, FVector CampPos, FTransform& SpawnTF);
    void SpawnMeteor(class AActor* BossActor, FGuid CampID, int32 GeneralIndex);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_RaidBossMeteorGenerator(int32 EntryPoint);
};

#endif
