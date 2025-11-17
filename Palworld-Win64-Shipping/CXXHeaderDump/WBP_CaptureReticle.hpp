#ifndef UE4SS_SDK_WBP_CaptureReticle_HPP
#define UE4SS_SDK_WBP_CaptureReticle_HPP

class UWBP_CaptureReticle_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* Canvas_Root;
    class UWBP_PalGetReticle_C* WBP_PalGetReticle;
    class UWBP_Reticle_KeyGuide_C* WBP_Reticle_Cancel;
    class APalPlayerController* localController;
    TArray<TEnumAsByte<EObjectTypeQuery>> traceObjectTypeQueryArray;
    TEnumAsByte<EPalCaptureReticleSeqence> reticleSeqence;
    TSoftObjectPtr<APalMonsterCharacter> NowTargetMonster;
    class UPalLoadoutSelectorComponent* LoadoutSelector;
    bool isCaptureItemEquiped;
    TSoftObjectPtr<APalWeaponBase> lastEquipedWeapon;
    TMap<class TSoftObjectPtr<ABP_PalCaptureBodyBase_C>, class UWBP_PalGetReticle_C*> secondStepWidgetMap;
    bool isBonusEnabledWhenLastCheck;
    bool IsStopReticleUpdate;
    double ReticleStopTimer;
    TMap<class TSoftObjectPtr<APalCharacter>, class UWBP_CaptureFailedPercent_C*> FailedCaptureRateWidgetMap;
    TMap<TEnumAsByte<E_PalCaptureSphereBouncedReason>, EPalLogType> BouncedBallLogTypeMap;

    void Set Display Capture Rate(class APalMonsterCharacter* TargetMonster, class APalWeaponBase* WeaponBase);
    void ShouldReticleDIsplay(bool& ShouldDisplay);
    void DisplayCaptureFailedLog(class UPalIndividualCharacterHandle* targetHandle);
    void OnBouncedBall(TEnumAsByte<E_PalCaptureSphereBouncedReason> reasonType, class UPalIndividualCharacterHandle* targetHandle);
    void OnFailedPercentWidgetClear(class UWBP_CaptureFailedPercent_C* SelfWidget);
    void UpdateFailedWidgets(double DeltaTime);
    void CalcCaptureSuccessRate(TArray<double>& rateArray, double& successRate);
    void IsBonusEnabled(FVector baseLocation, class APalMonsterCharacter* targeActor, bool& Enabled);
    void Get Display Rate(class APalWeaponBase* captureItemActor, class APalMonsterCharacter* TargetMonster, double& Rate, bool& isSneakBonus);
    void On Shake Ball(class ABP_PalCaptureBodyBase_C* shakedBody);
    void UpdateSecondStepWidgetPosition();
    void OnPassingJudge(int32 PhaseCount, class UPalIndividualCharacterHandle* targetHandle);
    void OnFailedCapture(class UPalIndividualCharacterHandle* targetHandle, TEnumAsByte<EPalSphereCaptureFailedReason> failedReason);
    void OnSuccessedCapture(class UPalIndividualCharacterHandle* targetHandle);
    void OnStartedCapture(class AActor* createdBodyActor, class UPalIndividualCharacterHandle* targetHandle, bool bIsSneakBonus, bool bIsCriticalBonus);
    void OnThrowCaptureWeapon(class AActor* Bullet);
    void RegisterWeaponEvent(class APalWeaponBase* newWeapon);
    void Unregister Weapon Event();
    void On Change Weapon(class APalWeaponBase* Weapon);
    void SetupAfterPlayerSpawned();
    void ChangeSeqence(TEnumAsByte<EPalCaptureReticleSeqence> newSeqence);
    void FindTargetCharacter(class APalMonsterCharacter*& TargetMonster);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void OnSetup_AfterCreatedPlayer();
    void ExecuteUbergraph_WBP_CaptureReticle(int32 EntryPoint);
};

#endif
