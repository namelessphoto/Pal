#ifndef UE4SS_SDK_WBP_PalNPCHPGauge_HPP
#define UE4SS_SDK_WBP_PalNPCHPGauge_HPP

class UWBP_PalNPCHPGauge_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0608 (size: 0x8)
    class UWidgetAnimation* Default_In;                                               // 0x0610 (size: 0x8)
    class UCanvasPanel* Canvas_Innner;                                                // 0x0618 (size: 0x8)
    class UWBP_EnemyGauge_C* WBP_EnemyGauge;                                          // 0x0620 (size: 0x8)
    FTimerHandle checkFriendTimerHandle;                                              // 0x0628 (size: 0x8)
    FTimerHandle CheckActorTimerHandle;                                               // 0x0630 (size: 0x8)
    float ImportedSphereRadius;                                                       // 0x0638 (size: 0x4)
    FVector2D DrawOffset;                                                             // 0x0640 (size: 0x10)
    bool chachedFriendFlag;                                                           // 0x0650 (size: 0x1)
    bool oldFriendFlag;                                                               // 0x0651 (size: 0x1)
    bool chachedIsDead;                                                               // 0x0652 (size: 0x1)
    bool CachedBattleMode;                                                            // 0x0653 (size: 0x1)
    bool CachedRarePalFlag;                                                           // 0x0654 (size: 0x1)
    class UPalFlyMeshHeightCtrlComponent* FlyComponent;                               // 0x0658 (size: 0x8)
    FWBP_PalNPCHPGauge_COnDelayClose OnDelayClose;                                    // 0x0660 (size: 0x10)
    void OnDelayClose(class UWidget* Widget);
    TMap<int32, int32> FontSizeMap;                                                   // 0x0670 (size: 0x50)

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
}; // Size: 0x6C0

#endif
