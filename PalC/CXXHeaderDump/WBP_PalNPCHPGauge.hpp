#ifndef UE4SS_SDK_WBP_PalNPCHPGauge_HPP
#define UE4SS_SDK_WBP_PalNPCHPGauge_HPP

class UWBP_PalNPCHPGauge_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Default_In;
    class UCanvasPanel* Canvas_Innner;
    class UWBP_EnemyGauge_C* WBP_EnemyGauge;
    FTimerHandle checkFriendTimerHandle;
    FTimerHandle CheckActorTimerHandle;
    float ImportedSphereRadius;
    FVector2D DrawOffset;
    bool chachedFriendFlag;
    bool oldFriendFlag;
    bool chachedIsDead;
    bool CachedBattleMode;
    bool CachedRarePalFlag;
    class UPalFlyMeshHeightCtrlComponent* FlyComponent;
    FWBP_PalNPCHPGauge_COnDelayClose OnDelayClose;
    void OnDelayClose(class UWidget* Widget);
    TMap<int32, int32> FontSizeMap;

    void On UISettinga Changed(const FPalOptionUISettings& PrevSettings, const FPalOptionUISettings& NewSettings);
    void SetGender(EPalGenderType GenderType);
    void OnUpdateTalent_Binded();
    void OnTimer_CheckActor();
    void SetRank(int32 Rank);
    void Set Work Suitability(TMap<EPalWorkSuitability, int32> WorkSuitabilities);
    void SetElementType(EPalElementType type1, EPalElementType type2);
    void SetupByActor();
    void OnUpdateCondition_Binded();
    void On Update Sanity Binded(double nowSanity, double nowMaxSanity);
    void OnDead(FPalDeadInfo DeadInfo);
    void IsDead(bool& IsDead);
    void IsFriend(bool& IsFriend);
    void UpdateForTick(double DeltaTime);
    void Unbind();
    void BindFromHandle(class UPalIndividualCharacterHandle* targetHandle);
    void OnUpdateNickName_Binded(FString NewNickName);
    void On Update Level Binded(int32 NewLevel);
    void OnUpdateHP_Binded(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    void IsOtomo(bool& IsOtomo);
    void OnTakeDamage(FPalDamageResult DamageResult);
    void OnBattleModeChanged(bool bIsBattleMode);
    void UpdateWidgetPosition();
    void Update Gauge Type();
    void Construct();
    void OnInitialized();
    void TimerEvent_UpdateDetail();
    void Destruct();
    void InitializeDetail();
    void DelayClose();
    void ExecuteUbergraph_WBP_PalNPCHPGauge(int32 EntryPoint);
    void OnDelayClose__DelegateSignature(class UWidget* Widget);
};

#endif
