#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMovementMode -FallbackName=EMovementMode
#include "EPalBattleBGMType.h"
#include "EPalBossBattleDifficulty.h"
#include "EPalCharacterMovementCustomMode.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "EPalPlayerBattleFinishType.h"
#include "EPalPlayerEquipLantern.h"
#include "PalArenaEntryPair.h"
#include "PalCharacter.h"
#include "PalDamageResult.h"
#include "PalDeadInfo.h"
#include "PalDyingEndInfo.h"
#include "PalInstanceID.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalPlayerDataCharacterMakeInfo.h"
#include "PalPlayerDataEquipLanternData.h"
#include "Templates/SubclassOf.h"
#include "PalPlayerCharacter.generated.h"

class AActor;
class APalPlayerCharacter;
class APalPlayerController;
class APalPlayerState;
class UAnimMontage;
class UPalActionBase;
class UPalArenaSequencer;
class UPalBaseCampModel;
class UPalBuilderComponent;
class UPalCharacterMovementComponent;
class UPalInsideBaseCampCheckComponent;
class UPalInteractComponent;
class UPalLoadoutSelectorComponent;
class UPalObjectReplicatorComponent;
class UPalPlayerBattleSituation;
class UPalPlayerGenderChanger;
class UPalShooterComponent;
class USkeletalMeshComponent;

UCLASS()
class APalPlayerCharacter : public APalCharacter, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnToggleSleepPlayerBedDelegate, bool, IsSleep);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnToggleGrapplingCancelDelegate, bool, CancelEnable);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerReviveDelegate, APalPlayerCharacter*, Player);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerRespawnDelegate, APalPlayerCharacter*, Player);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerMoveToRespawnLocationDelegate, APalPlayerCharacter*, Player, FVector, Location);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPlayerDeathAction);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNoArenaEntryDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLiftupCampPalDelegate, APalCharacter*, LiftingPal);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInsufficientPalStaminaDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnForceUpdataWarningLoupeDelegate, APalCharacter*, TargetCharacter, bool, AlwaysDisplay);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnForceUpdataHPGaugeUIDelegate, APalCharacter*, TargetCharacter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEndLiftCampPalDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCombatStartUIActionDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCombatRankDownDelegate, EPalPlayerBattleFinishType, FinishType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterMakeInfoUpdateDelegate, FPalPlayerDataCharacterMakeInfo, MakeInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeRegionAreaDelegate, const FName&, RegionNameID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangePlayerBattleMode, bool, IsBattle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnChangeBossTowerEntrancePlayer, FName, BossType, EPalBossBattleDifficulty, Difficulty, const TArray<APalPlayerCharacter*>&, PlayerList);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeBattleBGMDelegate, EPalBattleBGMType, Rank);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnArenaSequenceStartDelegate, UPalArenaSequencer*, ArenaSequencer);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnArenaSequenceEndDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnArenaEntranceInfoUpdateDelegate, FPalArenaEntryPair, EntryPair);
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPalShooterComponent* ShooterComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPalInteractComponent* InteractComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPalBuilderComponent* BuilderComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPalLoadoutSelectorComponent* LoadoutSelectorComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPalInsideBaseCampCheckComponent* InsideBaseCampCheckComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPalObjectReplicatorComponent* HighPriorityObjectReplicatorComponent;
    
    UPROPERTY(BlueprintAssignable)
    FOnPlayerReviveDelegate OnPlayerReviveDelegate;
    
    UPROPERTY(BlueprintCallable)
    FOnPlayerReviveDelegate OnEndPlayerReviveActionByPartnerSkillDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnPlayerRespawnDelegate OnPlayerRespawnDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnPlayerMoveToRespawnLocationDelegate OnPlayerMoveToRespawnLocationDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnCombatRankDownDelegate OnCombatRankDownDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeBattleBGMDelegate OnChangeBattleBGMDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangePlayerBattleMode OnChangeBattleModeDelegate_ForPlayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnPlayerDeathAction OnPlayerDeathAction;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeBossTowerEntrancePlayer OnChangeBossTowerEntrancePlayer;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeBossTowerEntrancePlayer OnChangeBossEntrancePlayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnCombatStartUIActionDelegate OnCombatStartUIAction;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeRegionAreaDelegate OnChangeRegionArea;
    
    UPROPERTY(BlueprintAssignable)
    FOnLiftupCampPalDelegate OnLiftupCampPal;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnEndLiftCampPalDelegate OnEndLiftCampPal;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnToggleSleepPlayerBedDelegate OnToggleSleepPlayerBed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnToggleGrapplingCancelDelegate OnGrapplingCancelPlayerBed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnInsufficientPalStaminaDelegate OnInsufficientPalStamina;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnCharacterMakeInfoUpdateDelegate OnCharacterMakeInfoUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnArenaSequenceStartDelegate OnArenaSequenceStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnArenaSequenceEndDelegate OnArenaSequenceEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnArenaEntranceInfoUpdateDelegate OnArenaEntranceInfoUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnNoArenaEntryDelegate OnNoArenaEntry;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnForceUpdataHPGaugeUIDelegate OnForceAddHPGaugeUI;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnForceUpdataHPGaugeUIDelegate OnForceRemoveHPGaugeUI;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnForceUpdataWarningLoupeDelegate OnForceAddWarningLoupe;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnForceUpdataWarningLoupeDelegate OnForceRemoveWarningLoupe;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnForceUpdataWarningLoupeDelegate OnWarningLoupeActWarning;
    
    UPROPERTY(Transient)
    FName LastInsideRegionNameID;
    
private:
    UPROPERTY(Replicated, Transient)
    float PlayerCameraYaw;
    
    UPROPERTY(Replicated, Transient)
    float PlayerCameraPitch;
    
    UPROPERTY(Replicated, Transient)
    bool IsAdjustedLocationByLoad;
    
    UPROPERTY(Replicated, Transient)
    bool bIsLogoutPlayer;
    
    UPROPERTY(Transient)
    UAnimMontage* IdleAnimMontage;
    
    UPROPERTY(Replicated, Transient)
    UPalPlayerBattleSituation* PlayerBattleSituation;
    
    UPROPERTY(Transient)
    bool IsNearCommonEnemyFlag;
    
    UPROPERTY(Transient)
    bool bIsSetRespawnTelemetry;
    
    UPROPERTY(Transient)
    APalPlayerState* CachedPlayerState;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalPlayerGenderChanger> GenderChangerClass;
    
    UPROPERTY()
    UPalPlayerGenderChanger* GenderChanger;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_SpectatorMode, meta=(AllowPrivateAccess=true))
    bool bSpectatorMode;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_CharacterMakeInfo)
    FPalPlayerDataCharacterMakeInfo CharacterMakeInfo;
    
    UPROPERTY(Replicated, Transient)
    TArray<FPalInstanceID> ReceivedHateIDs;
    
public:
    APalPlayerCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateLanternSetting(EPalPlayerEquipLantern NewEquipType);
    
    UFUNCTION(BlueprintCallable)
    void UpdateForceWarningLoupeList(APalCharacter* TargetCharacter, bool IsAdd, bool AlwaysDisplay);
    
    UFUNCTION(BlueprintCallable)
    void UpdateForceHPGaugeList(APalCharacter* TargetCharacter, bool IsAdd);
    
    UFUNCTION()
    void StopIdleAnimation();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetSpectatorMode(bool bSpectator);
    
    UFUNCTION()
    void SetNearCommonEnemy(bool IsExistNearEnemy);
    
    UFUNCTION(BlueprintCallable)
    void SetDisablePlayerInput(FName flagName, bool Disable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableCollisionBlockCharacter(bool bDisable);
    
    UFUNCTION(NetMulticast, Reliable)
    void SetCharacterMakeInfo_ToAll(FPalPlayerDataCharacterMakeInfo NextInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterMakeInfo(FPalPlayerDataCharacterMakeInfo& NextInfo, const bool& IgnoreEquip);
    
    UFUNCTION()
    void PlayIdleAnimation(UAnimMontage* Montage);
    
    UFUNCTION()
    void PlayEatAnimation();
    
    UFUNCTION()
    void OnUpdateLanternEquipSetting(const FPalPlayerDataEquipLanternData& NewLanternSetting);
    
protected:
    UFUNCTION()
    void OnTriggerInteract(AActor* OtherActor, EPalInteractiveObjectIndicatorType IndicatorType);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartGliding();
    
private:
    UFUNCTION()
    void OnSPOverhead();
    
    UFUNCTION()
    void OnRep_SpectatorMode(bool before);
    
    UFUNCTION()
    void OnRep_CharacterMakeInfo();
    
    UFUNCTION()
    void OnReloadStart();
    
    UFUNCTION()
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION()
    void OnJumpDisable();
    
    UFUNCTION()
    void OnEnterBaseCamp_StartBaseCampCombat(UPalBaseCampModel* CampModel);
    
    UFUNCTION()
    void OnEndIdle();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnEndGliding();
    
private:
    UFUNCTION()
    void OnDyingDeadEnd_Server(APalPlayerCharacter* PlayerCharacter, const FPalDyingEndInfo& DyingEndInfo);
    
    UFUNCTION()
    void OnDyingDeadEnd_All(APalPlayerCharacter* PlayerCharacter, const FPalDyingEndInfo& DyingEndInfo);
    
    UFUNCTION(NetMulticast, Reliable)
    void OnDownBattleEnemyRank(EPalPlayerBattleFinishType FinishType);
    
    UFUNCTION()
    void OnDeadPlayer_Server(FPalDeadInfo DeadInfo);
    
    UFUNCTION()
    void OnDamagePlayer_Server(FPalDamageResult DamageResult);
    
    UFUNCTION()
    void OnCompleteInitializeParameter(APalCharacter* InCharacter);
    
    UFUNCTION()
    void OnChangeShooterState(bool IsAim, bool IsShoot);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangePrevWeapon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeNextWeapon();
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void OnChangeNearEnemy_ToAll(bool IsExist);
    
    UFUNCTION()
    void OnChangeMovementMode(UPalCharacterMovementComponent* Component, TEnumAsByte<EMovementMode> PrevMode, TEnumAsByte<EMovementMode> NewMode, EPalCharacterMovementCustomMode PrevCustomMode, EPalCharacterMovementCustomMode NewCustomMode);
    
    UFUNCTION(NetMulticast, Reliable)
    void OnChangeBattleBGM(EPalBattleBGMType Rank);
    
    UFUNCTION()
    void OnBeginAction(const UPalActionBase* action);
    
    UFUNCTION()
    bool IsIdle() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsGuildMaster() const;
    
    UFUNCTION(BlueprintPure)
    bool IsGliding() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCharacterMakeInfoInitialized() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAdjustedLocation() const;
    
    UFUNCTION(BlueprintPure)
    APalPlayerController* GetPalPlayerController() const;
    
    UFUNCTION(BlueprintPure)
    void GetLastInsideRegionNameID(FName& OutNameID) const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    USkeletalMeshComponent* GetHeadMesh();
    
    UFUNCTION(BlueprintPure)
    void GetForceWarningLoupeList(TArray<APalCharacter*>& List) const;
    
    UFUNCTION(BlueprintPure)
    void GetForceHPGaugeList(TArray<APalCharacter*>& List) const;
    
    UFUNCTION(BlueprintPure)
    FPalPlayerDataCharacterMakeInfo GetCharacterMakeInfo() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetCameraRotator() const;
    
    UFUNCTION(BlueprintPure)
    APalPlayerState* GetCachedPlayerState() const;
    
    UFUNCTION(BlueprintCallable)
    void Editor_ChangeToMale();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateLantern();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ClearLantern();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CallReviveDelegate();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CallRespawnDelegate();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CallMoveToRespawnLocationDelegate(FVector Location);
    
private:
    UFUNCTION()
    void AdjustLocationByLoad(APalCharacter* InCharacter);
    

    // Fix for true pure virtual functions not being implemented
};

