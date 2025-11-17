#ifndef UE4SS_SDK_BP_NPCCampSpawnerBase_HPP
#define UE4SS_SDK_BP_NPCCampSpawnerBase_HPP

class ABP_NPCCampSpawnerBase_C : public APalNPCCampSpawnerBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* DebugMesh;
    double Probability;
    class ABP_NPCCampPresetBase_C* CampObject;
    FName RewardName;
    double RespawnTime_RealMinutes;
    FTimerHandle TimerHand;
    bool RespawnPossible;
    double RespawnDistance_FromPlayer;
    double DisableDistance_FromBaseCamp;
    TArray<FF_NPCCampPreset> PresetList;
    TArray<class UPalIndividualCharacterHandle*> CampEnemys;
    bool LoadCamp;

    void CREATEDELEGATE_PROXYFUNCTION_0(class UPalIndividualCharacterHandle* NewParam);
    void EnemyCampClearSetting(FPalEnemyCampStatus EnemyCampStatus);
    void OnOpenMainTreasureBox();
    FName GetRewardName();
    void OnReceivedReward();
    void IsNearPlayerCamp(bool& IsNear);
    void StartDespawnTimer(double DespawnTime);
    void SetupCampStatus();
    void DespawnCamp();
    void StartRespawnTimer(double RespawnTime);
    void OnEnemyDead(FPalDeadInfo DeadInfo);
    void OnEnemySpawned(class UPalIndividualCharacterHandle*& SpawnHandle);
    void CheckWorldLoadComplete(bool& Loaded);
    void IsProbabilitySuccess(bool& Success);
    void PlayerCheck(bool& RespawnOK);
    void SetRespawnAble();
    void TryCampSpawn();
    void RandomLottery(TSubclassOf<class ABP_NPCCampPresetBase_C>& ResultClass, int32& SelectedIndex);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_NPCCampSpawnerBase(int32 EntryPoint);
};

#endif
