#ifndef UE4SS_SDK_BP_Status_RaidBossModeChange_HPP
#define UE4SS_SDK_BP_Status_RaidBossModeChange_HPP

class UBP_Status_RaidBossModeChange_C : public UPalStatusBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    double ReGeneTime;
    double ReGeneRate;
    double Timer;
    TArray<EPalStatusID> IgnoreStatusID;
    FPalRaidBossSpawnInfo Boss Info;

    void FindModeChangeVisualEffectType(EPalElementType Element, EPalVisualEffectID& VisualEffect);
    void FindRaidBossData(FPalRaidBossSpawnInfo& BossInfo);
    void OnBeginStatus();
    void TickStatus(float DeltaTime);
    void OnEndStatus();
    void SetupStatus();
    void CompEvent(class APalCharacter* InCharacter);
    void ExecuteUbergraph_BP_Status_RaidBossModeChange(int32 EntryPoint);
};

#endif
