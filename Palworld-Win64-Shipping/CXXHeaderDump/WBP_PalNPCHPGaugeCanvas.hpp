#ifndef UE4SS_SDK_WBP_PalNPCHPGaugeCanvas_HPP
#define UE4SS_SDK_WBP_PalNPCHPGaugeCanvas_HPP

class UWBP_PalNPCHPGaugeCanvas_C : public UPalUINPCHPGaugeCanvasBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Default_In;
    class UCanvasPanel* Canvas_Root;
    class UWrapBox* WrapBox;
    TMap<class APalCharacter*, class UWBP_PalNPCHPGauge_C*> DisplayedPalGaugeMap;
    TMap<class APalCharacter*, class UPalUICharacterHPGaugeBase*> DisplayedBossUGaugeMap;
    TMap<class APalCharacter*, class UWBP_PlayerHPGauge_C*> DisplayedPlayerGaugeMap;
    double DisplayGaugeDistance;
    double HideTimer;
    double HideTime;
    double DisplayGaugeRange_Sight;
    bool IsOverHideTime;
    bool IsConflicted;
    TArray<class UBP_UIIndividualParameterInitializeWaiter_C*> InitializeWaiters;
    FTimerHandle UpdateTimerHandle;
    TArray<class UWidget*> DelayCloseGauges;
    float DisplayGaugeDistance_SameGuildPlayer;
    bool CachedEnableTalentCheck;
    float OtherOtomoPVPDisplayDistance_Sight;
    float OtherOtomoPVPDisplayDistance;
    double GaugeInSightDistance;
    bool IsPvPMode;
    int32 LastVisibleBossGaugeCount;

    void CREATEDELEGATE_PROXYFUNCTION_0(const FPalDamageInfo& DamageInfo, class AActor* Defender);
    void Get Sight Display Require Distance(class APalCharacter* TargetCharacter, double& Distance);
    void Add Target Characters HPGauge(TArray<class APalCharacter*>& Characters);
    void Remove Target Character HPGauge(class APalCharacter* TargetCharacter);
    void IsMimicry(class APalCharacter* Character, bool& IsMimicryMode);
    void OnChangedEquipment(class UPalItemSlot* itemSlot, EPalPlayerEquipItemSlotType slotType);
    void CloseDelayGauges(class UWidget* Widget);
    void SetGaugeVisibility(class UWidget* Widget, class AActor* TargetActor, bool DelayClose, bool Close);
    void OnDamagePopup(FPalDamageInfo DamageInfo, class AActor* Actor);
    void Update Visibility Player Gauges();
    void Setup();
    void On End Player(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
    void OnEndPlayBossPal(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
    void OnEndPlayNormalPal(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
    void UpdateVisibility_BossGauge();
    void Update Children Timer();
    void Is Sight Display(class APalCharacter* Actor, bool& Return);
    void Is Display Distance(double Distance, class APalCharacter* TargetCharacter, bool& isDisplay);
    void Update Visibility Pal HPGauges();
    void OnBossDead(class APalCharacter* TargetCharacter);
    void OnInitializedCharacter(class APalCharacter* TargetCharacter, class UBP_UIIndividualParameterInitializeWaiter_C* selfObject);
    void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void GetCameraLocationAndForwardVector(FVector& Location, FVector& ForwardVector);
    void IsAiming(bool& IsAiming);
    void On Begin Overlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Add Player Gauge(class APalCharacter* TargetCharacter);
    void AddNormalPalGauge(class APalCharacter* TargetCharacter);
    void Add Boss Gauge(class APalCharacter* TargetCharacter);
    void UpdateChildren_ForTick(double DeltaTime);
    void IsConflict(bool& IsConflict);
    void Remove Children();
    void Add New Gauge UI(class APalCharacter* TargetCharacter);
    void IsDisplayGaugeByPlayerRotation(class APalCharacter* TargetCharacter, bool& isDisplay);
    void Try Process DIsplay Gauge(class APalCharacter* TargetCharacter);
    double GetDistanceByPlayer(class AActor* TargetActor);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Destruct();
    void ExecuteUbergraph_WBP_PalNPCHPGaugeCanvas(int32 EntryPoint);
};

#endif
