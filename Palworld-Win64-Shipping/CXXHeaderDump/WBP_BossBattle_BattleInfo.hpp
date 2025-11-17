#ifndef UE4SS_SDK_WBP_BossBattle_BattleInfo_HPP
#define UE4SS_SDK_WBP_BossBattle_BattleInfo_HPP

class UWBP_BossBattle_BattleInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_BossBattle_BossEliminated_C* WBP_BossBattle_BossEliminated;
    class UWBP_BossBattle_TimeOut_C* WBP_BossBattle_TimeOut;
    class UWBP_BossBattle_Timer_C* WBP_BossBattle_Timer;
    class APalBossTower* CurrentBossTower;
    FTimerHandle CurrentTimer;
    class UBP_PalRaidBossComponent_C* CurrentRaid;
    TArray<class UBP_PalRaidBossComponent_C*> CachedRaids;

    void Finished_3EF5F8014E85067431DFCC89EED868D4();
    void Finished_8C451D0644B19738D91CB8BD4A008BD2();
    void Finished_C4E7DBA04E1A39E6670703A0D0184F95();
    void Finished_413432514DE4FC814BDA5192337698D2();
    void ActUICombatResult(EPalBossBattleCombatResult CombatResult);
    void StartCombatTimer();
    void GetBossTower(class APalBossTower* BossTower);
    void CountDown_TowerBoss();
    void CloseTimer();
    void OnRaidBossBattleStart(FGuid CampID);
    void OnRaidBossBattleEnd(FGuid CampID, EPalRaidBossBattleFinishType EndType);
    void CountDown_Raid();
    void ExecuteUbergraph_WBP_BossBattle_BattleInfo(int32 EntryPoint);
};

#endif
