#ifndef UE4SS_SDK_BP_AIAction_CombatPal_RaidBoss_HPP
#define UE4SS_SDK_BP_AIAction_CombatPal_RaidBoss_HPP

class UBP_AIAction_CombatPal_RaidBoss_C : public UBP_AIAction_CombatPal_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool IsPowerUpMode;
    FGuid Camp ID;
    bool CanModeChange;
    double HPOneTimer;
    double Const_NotActionTime;
    int32 PlayerNotTargetCounter;
    bool CanSummon;
    int32 NextSummonHPRateIndex;

    FPalRaidBossDataRow FindRaidBossData();
    void CanNextSummon(bool& CanSummon);
    void GetCombatModuleRaid(class UPalAICombatModule_RaidBoss*& ModuleRaidBoss);
    void OnDead(FPalDeadInfo Dead);
    void AddStatusOneCharacter(class AActor* Actor, EPalStatusID Status);
    void OnPlayAction(class UPalActionBase* action);
    void Add Status by Action End Timing();
    void ChangeNextAction_ConsiderBaseCamp();
    void ChangeCombatStartLocation(bool& Change);
    void FindNearestCampTarget(class AActor*& TargetActor);
    void PlayWarpAction();
    void IsFarFromBaseCamp(bool& IsFar);
    void GetSelfPalSpawnInfo(FPalRaidBossSpawnInfo& BossInfo);
    void AddStatusToAllTarget(EPalStatusID Status);
    void ChangeNextAction();
    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIAction_CombatPal_RaidBoss(int32 EntryPoint);
};

#endif
