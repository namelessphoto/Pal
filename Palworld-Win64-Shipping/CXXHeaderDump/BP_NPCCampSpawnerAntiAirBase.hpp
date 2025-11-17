#ifndef UE4SS_SDK_BP_NPCCampSpawnerAntiAirBase_HPP
#define UE4SS_SDK_BP_NPCCampSpawnerAntiAirBase_HPP

class ABP_NPCCampSpawnerAntiAirBase_C : public APalNPCCampSpawnerBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalLimitVolumeSphereComponent* PalLimitVolumeSphere;
    class UStaticMeshComponent* DebugMesh;
    double Probability;
    class ABP_NPCCampPresetBase_C* CampObject;
    FName RewardName;
    double RespawnTime_RealMinutes;
    FTimerHandle TimerHand;
    bool SpawnPossible;
    double RespawnDistance_FromPlayer;
    double DisableDistance_FromBaseCamp;
    FF_NPCCampPreset Preset;
    TArray<class UPalIndividualCharacterHandle*> CampEnemys;
    bool LoadCamp;
    TSubclassOf<class ABP_NPCCampPresetBase_C> PresetClass;

    void CREATEDELEGATE_PROXYFUNCTION_0(class UPalIndividualCharacterHandle* NewParam);
    void OnReceivedReward();
    void ResetCamp();
    FName GetRewardName();
    void SetupCampStatus();
    void Start Reset Timer(double RespawnTime);
    void OnEnemyDead(FPalDeadInfo DeadInfo);
    void OnEnemySpawned(class UPalIndividualCharacterHandle*& SpawnHandle);
    void CheckWorldLoadComplete(bool& Loaded);
    void SetSpawnAble();
    void TryCampSpawn();
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_NPCCampSpawnerAntiAirBase(int32 EntryPoint);
};

#endif
