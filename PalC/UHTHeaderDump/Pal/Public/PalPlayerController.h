#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonGame -ObjectName=CommonPlayerController -FallbackName=CommonPlayerController
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "ActionDynamicParameter.h"
#include "DelegateTickFunction.h"
#include "EPalGlobalStorageImportResult.h"
#include "EPalGuildJoinRequestConfirm.h"
#include "EPalGuildJoinRequestResult.h"
#include "EPalLiftupRequestResult.h"
#include "EPalLogPriority.h"
#include "EPalShooterFlagContainerPriority.h"
#include "EPalStepAxisType.h"
#include "EPalTribeID.h"
#include "EPalWazaID.h"
#include "EWeaponNotifyType.h"
#include "PalCharacterContainerSortInfo.h"
#include "PalDamageInfo.h"
#include "PalDamageResult.h"
#include "PalGlobalPalStorageImportOption.h"
#include "PalGlobalPalStorageImportResultAdditionalData.h"
#include "PalGlobalPalStorageSaveParameter.h"
#include "PalGotStatusPoint.h"
#include "PalInstanceID.h"
#include "PalItemId.h"
#include "PalItemSlotIdAndNum.h"
#include "PalKillLogDisplayData.h"
#include "PalLogAdditionalData.h"
#include "PalOptionKeyboardSettings.h"
#include "PalOptionPadSettings.h"
#include "PalPlayerDataCharacterMakeInfo.h"
#include "PalStageInstanceId.h"
#include "Templates/SubclassOf.h"
#include "PalPlayerController.generated.h"

class AActor;
class APalAntiAirMissileLauncher;
class APalCharacter;
class APalNetworkTransmitter;
class APalOilRigCannonBase;
class APalPlayerCharacter;
class APalPlayerState;
class APalSphereBodyBase;
class APawn;
class UCameraShakeBase;
class UCurveFloat;
class UForceFeedbackEffect;
class UPalAIActionComponent;
class UPalActionBase;
class UPalActionComponent;
class UPalArenaSpectateComponent;
class UPalCannonDamageReactionComponent;
class UPalCharacterMovementComponent;
class UPalCutsceneComponent;
class UPalDamageExplodeComponent;
class UPalDynamicWeaponItemDataBase;
class UPalIndividualCharacterHandle;
class UPalKillLogFilteringWaiter;
class UPalLoadoutSelectorComponent;
class UPalLongPressObject;
class UPalNPCTalkFlowComponent;
class UPalPlayerDamageCamShakeRegulator;
class UPalPlayerInputOneFlameCommandList;
class UPalShooterComponent;
class UPalSpectateComponent;
class UPalStageEnterParameterRoom;
class UPalUserWidgetTimerGaugeBase;

UCLASS()
class APalPlayerController : public ACommonPlayerController {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnReleasedThrowPalButtonDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnReleasedSpawnPalButtonDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPressedThrowPalButtonDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPressedSpawnPalButtonDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPressedPartnerInstructionsButtonDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPressedMoveForwardDelegate, float, InputValue, bool, IsController);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPressedJumpDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPressConstructionMenuButtonDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNotifyUnableToPlaySkillDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNotifyRideWallStopDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMoveInputDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLongReleasedSpawnPalButtonDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLongPressedSpawnPalButtonDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInteractDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCoopRequestDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCoopReleaseDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAntiAirMissleAttackDelegate, FVector, AttackerLocation, bool, IsEnable, FGuid, AttackerID);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    bool bAdmin;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UPalAIActionComponent* AIActionComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPalCutsceneComponent* CutsceneComponent;
    
protected:
    UPROPERTY(Replicated)
    APalNetworkTransmitter* Transmitter;
    
public:
    UPROPERTY(EditAnywhere)
    float WeaponPaletteLongPressTime;
    
    UPROPERTY(EditAnywhere)
    float PawnChangeCameraInterpChangeTime;
    
    UPROPERTY(BlueprintReadWrite)
    bool isOpenConstructionMenu;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnCoopRequestDelegate OnCoopRequestDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnCoopReleaseDelegate OnCoopReleaseDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnInteractDelegate OnInteractDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnInteractDelegate OnInteract2Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnInteractDelegate OnInteract3Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnInteractDelegate OnInteract4Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnPressedJumpDelegate OnPressedJumpDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnPressedMoveForwardDelegate OnInputMoveForwardDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnMoveInputDelegate OnMoveInputDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnAntiAirMissleAttackDelegate OnAntiAirMissleAttack;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnPressedThrowPalButtonDelegate OnPressedThrowPalButtonDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnReleasedThrowPalButtonDelegate OnReleasedThrowPalButtonDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnPressedSpawnPalButtonDelegate OnPressedSpawnPalButtonDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnLongPressedSpawnPalButtonDelegate OnLongPressedSpawnPalButtonDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnReleasedSpawnPalButtonDelegate OnReleasedSpawnPalButtonDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnLongReleasedSpawnPalButtonDelegate OnLongReleasedSpawnPalButtonDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnPressedPartnerInstructionsButtonDelegate OnPressedPartnerInstructionsButtonDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnPressConstructionMenuButtonDelegate OnPressConstructionMenuButtonDelegate;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnNotifyRideWallStopDelegate OnNotifyRideWallStopDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnNotifyUnableToPlaySkillDelegate OnNotifyUnableToPlaySkill;
    
private:
    UPROPERTY(Transient)
    UCurveFloat* RecoilCurve;
    
    UPROPERTY(EditDefaultsOnly)
    FVector TimerGaugeDisplayOffset;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UCameraShakeBase> DamageCameraShake;
    
    UPROPERTY(EditDefaultsOnly)
    UForceFeedbackEffect* DamageForceFeedbackEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UForceFeedbackEffect* CameraShakeForceFeedbackEffect;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalPlayerDamageCamShakeRegulator> DamageCamShakeRegulatorClass;
    
    UPROPERTY(Transient)
    UPalPlayerDamageCamShakeRegulator* DamageCamShakeRegulator;
    
    UPROPERTY()
    TArray<UPalLongPressObject*> LongPressObjects;
    
    UPROPERTY()
    TMap<FName, float> cameraRotateModifierMap;
    
    UPROPERTY()
    TArray<FRotator> AutoAimRotatorList;
    
    UPROPERTY()
    FDelegateTickFunction PawnAfterTickFunction;
    
    UPROPERTY()
    AActor* AutoAimTarget;
    
    UPROPERTY()
    FVector ReticleTargetOffset;
    
    UPROPERTY()
    FVector2D GamePadNativeAxis;
    
    UPROPERTY()
    FVector2D MouseNativeAxis;
    
    UPROPERTY()
    FRotator CacheActorRotator;
    
    UPROPERTY()
    TArray<UPalKillLogFilteringWaiter*> FilteringWaiterArray;
    
    UPROPERTY()
    TMap<FPalInstanceID, int32> ImportGPSDataContainerIndexMap;
    
    UPROPERTY(Transient)
    UPalPlayerInputOneFlameCommandList* PlayerInputOneFlameCommandList;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid GuildFlowUniqueIdClientCache;
    
    UPROPERTY(Transient)
    bool IsBuldingActiveFlag_ForServer;
    
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPalSpectateComponent* SpectateComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPalArenaSpectateComponent* ArenaSpectateComponent;
    
    APalPlayerController(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(Reliable, Server)
    void UpdateCharacterNickName_ToServer(const FPalInstanceID& InstanceId, const FString& NewNickName);
    
private:
    UFUNCTION(BlueprintCallable)
    bool TrySwitchOtomo();
    
public:
    UFUNCTION(BlueprintCallable)
    void ThrowPalByOutSide(AActor* PreOtomoPal, UPalIndividualCharacterHandle* PreHandle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void TeleportToSafePoint_ToServer();
    
    UFUNCTION(BlueprintCallable)
    bool StopDash();
    
    UFUNCTION(BlueprintCallable)
    void StartStepCoolDownCoolTimer();
    
private:
    UFUNCTION(Reliable, Server)
    void StartFlyToServer();
    
public:
    UFUNCTION(BlueprintCallable)
    void SpectateNextPlayer(int32 Direction);
    
    UFUNCTION(BlueprintCallable)
    void SpectateFreely();
    
    UFUNCTION(Reliable, Server)
    void ShooterComponent_StopReload_ToServer(UPalShooterComponent* Shooter, int32 ID);
    
    UFUNCTION(Server, Unreliable)
    void ShooterComponent_SetTargetDirection_ToServer(UPalShooterComponent* Shooter, FVector targetDirection);
    
    UFUNCTION(Reliable, Server)
    void ShooterComponent_ReloadWeapon_ToServer(UPalShooterComponent* Shooter, int32 ID);
    
    UFUNCTION(Reliable, Server)
    void ShooterComponent_PullCancel_ToServer(UPalShooterComponent* Shooter);
    
    UFUNCTION(Reliable, Server)
    void ShooterComponent_ChangeIsShooting_ToServer(UPalShooterComponent* Shooter, int32 ID, bool IsShooting);
    
    UFUNCTION(Reliable, Server)
    void ShooterComponent_ChangeIsAiming_ToServer(UPalShooterComponent* Shooter, int32 ID, EPalShooterFlagContainerPriority Priority, bool IsAiming);
    
    UFUNCTION(Reliable, Server)
    void SetupInternalForSphere_ToServer(int32 ID, APalSphereBodyBase* Target, APalCharacter* TargetCharacter);
    
    UFUNCTION(NetMulticast, Reliable)
    void SetupInternalForSphere_ToALL(int32 ID, APalSphereBodyBase* Target, APalCharacter* TargetCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetupInternalForSphere(APalSphereBodyBase* Target, APalCharacter* TargetCharacter);
    
    UFUNCTION(Reliable, Server)
    void SetSneakBonusFlagForSphere_ToServer(int32 ID, APalSphereBodyBase* Target, bool isSneak);
    
    UFUNCTION(NetMulticast, Reliable)
    void SetSneakBonusFlagForSphere_ToALL(int32 ID, APalSphereBodyBase* Target, bool isSneak);
    
    UFUNCTION(BlueprintCallable)
    void SetSneakBonusFlagForSphere(APalSphereBodyBase* Target, bool isSneak);
    
    UFUNCTION(Server, Unreliable)
    void SetRiderRelativeRotation_ToServer(FRotator Rotator);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetOtomoSlot(int32 SlotId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHoldOtomo(int32 HoldID, UPalIndividualCharacterHandle* OtomoHandle);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDisableThrowPalFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableSwitchPalFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableSetViewTargetFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableInputFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableCoopFlag(FName flagName, bool isDisable);
    
    UFUNCTION(Reliable, Server)
    void SetCriticalCaptureFlagForSphere_ToServer(int32 PlayerId, APalSphereBodyBase* TargetSphere, bool bIsCritical);
    
    UFUNCTION(NetMulticast, Reliable)
    void SetCriticalCaptureFlagForSphere_ToALL(int32 PlayerId, APalSphereBodyBase* TargetSphere, bool bIsCritical);
    
    UFUNCTION(BlueprintCallable)
    void SetCriticalCaptureFlagForSphere(APalSphereBodyBase* TargetSphere, bool bIsCritical);
    
    UFUNCTION(Reliable, Server)
    void SetCaptureLevelForSphere_ToServer(int32 ID, APalSphereBodyBase* Target, int32 Level);
    
    UFUNCTION(NetMulticast, Reliable)
    void SetCaptureLevelForSphere_ToALL(int32 ID, APalSphereBodyBase* Target, int32 Level);
    
    UFUNCTION(BlueprintCallable)
    void SetCaptureLevelForSphere(APalSphereBodyBase* Target, int32 Level);
    
private:
    UFUNCTION(Server, Unreliable)
    void SetCameraRotatorToPlayerCharacter_ToServer(FRotator CameraRotator);
    
public:
    UFUNCTION(Client, Reliable)
    void SendScreenLogToClient(const FString& Message, FLinearColor Color, float Duration, const FName& Key);
    
private:
    UFUNCTION(Client, Reliable)
    void SendLog_ToClient(const EPalLogPriority Priority, const FText& Text, const FPalLogAdditionalData& AdditionalData);
    
public:
    UFUNCTION(Reliable, Server)
    void SendBuldingActiveFlag_ToServer(bool IsActive);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SelfKillPlayer();
    
    UFUNCTION(NetMulticast, Reliable)
    void RPCDummy();
    
    UFUNCTION(Reliable, Server)
    void ReserveSummonWeapon_ToServer(UPalDynamicWeaponItemDataBase* InDynamicItem);
    
private:
    UFUNCTION(Reliable, Server)
    void RequestUseItemToCharacter_ToServer(const FPalItemSlotIdAndNum& ItemData, const FPalInstanceID& TargetCharacterID);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestUseItemToCharacter(const FPalItemSlotIdAndNum& ItemData, const FPalInstanceID& TargetCharacterID);
    
    UFUNCTION(Reliable, Server)
    void RequestSyncOilrigDestroyObject_ToServer(FGuid ObjectID);
    
    UFUNCTION(Reliable, Server)
    void RequestSwapDimensionStorageData_ToServer(int32 IndexA, int32 IndexB);
    
    UFUNCTION(Reliable, Server)
    void RequestSwapBetweenDimensionStorageAndPalStorage_ToServer(int32 DimensionStorageDataIndex, int32 PalStorageDataIndex);
    
    UFUNCTION(Reliable, Server)
    void RequestStartNPCTalkFlow(UPalNPCTalkFlowComponent* TalkFlowComponent);
    
    UFUNCTION(Reliable, Server)
    void RequestSortDimensionStorage_ToServer(const FPalCharacterContainerSortInfo& SortInfo);
    
    UFUNCTION(Reliable, Server)
    void RequestSendAllDimensionStorage_ToServer();
    
    UFUNCTION(Reliable, Server)
    void RequestRestoreDimensionStorageFixedIndex_ToServer(int32 OriginalLockerDataIndex, int32 TargetRestorePalStorageSlotIndex);
    
    UFUNCTION(Reliable, Server)
    void RequestRestoreDimensionStorage_ToServer(int32 OriginalLockerDataIndex, int32 TargetRestorePalStorageRootPageIndex);
    
    UFUNCTION(Reliable, Server)
    void RequestOpenDimensionStorage_ToServer(const FGuid& LockerMapObjectId);
    
    UFUNCTION(Reliable, Server)
    void RequestOilrigGoalCrateInteract();
    
private:
    UFUNCTION(Reliable, Server)
    void RequestMoveToWorker_ToServer(APalCharacter* TargetCharacter);
    
    UFUNCTION(Reliable, Server)
    void RequestLiftupThrow_ToServer(AActor* Target);
    
    UFUNCTION(Reliable, Server)
    void RequestLiftup_ToServer(APalCharacter* TargetCharacter);
    
public:
    UFUNCTION(Reliable, Server)
    void RequestImportGlobalPalStorageData_ToServer(const FPalGlobalPalStorageSaveParameter& ImportParameter, const int32 TargetSlotIndex, const FPalGlobalPalStorageImportOption& ImportOption);
    
private:
    UFUNCTION(Reliable, Server)
    void RequestFastTravel_ToServer(const FGuid& LocationId);
    
public:
    UFUNCTION(Reliable, Server)
    void RequestExitGuild_ToServer();
    
    UFUNCTION(Reliable, Server)
    void RequestEnterToPlayerGuild_ToServer(APalPlayerCharacter* RespondentPlayerCharacter);
    
private:
    UFUNCTION(Reliable, Server)
    void RequestEnterRoom_ToServer(const FPalStageInstanceId& StageInstanceId, const UPalStageEnterParameterRoom* EnterParameter);
    
public:
    UFUNCTION(Reliable, Server)
    void RequestEndNPCTalkFlow(UPalNPCTalkFlowComponent* TalkFlowComponent, const FGuid& Token, bool bIsCancel);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestDestroyOilrigCannon(APalOilRigCannonBase* Cannon);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestDestroyAntiAirLauncher(APalAntiAirMissileLauncher* Launcher);
    
    UFUNCTION(Reliable, Server)
    void RequestDecreaseWeaponDurability_ToServer(FPalItemId ItemId, float DecreaseValue);
    
    UFUNCTION(Reliable, Server)
    void RequestCloseDimensionStorage_ToServer();
    
    UFUNCTION(Reliable, Server)
    void RequestChangeGuildName_ToServer(const FString& NewGuildName);
    
    UFUNCTION(Reliable, Server)
    void RequestChangeDimensionStoragePage_ToServer(int32 NewPageNum);
    
    UFUNCTION(Reliable, Server)
    void RequestChangeCharacterMakeInfo_ToServer(const FPalPlayerDataCharacterMakeInfo& NewMakeInfo);
    
    UFUNCTION(Reliable, Server)
    void RequestChangeAdminGuild_ToServer(const FGuid& NextAdminPlayerUId);
    
    UFUNCTION(Reliable, Server)
    void RequestBanPlayerFromGuild_ToServer(const FGuid& TargetPlayerUId);
    
    UFUNCTION(Reliable, Server)
    void RequestAddDimensionStorageDataFixedDataIndex_ToServer(int32 TargetLockerDataIndex, int32 OriginalPalStorageDataSlotIndex);
    
    UFUNCTION(Reliable, Server)
    void RequestAddDimensionStorageData_ToServer(const TArray<int32>& OriginalPalStorageDataIndexArray, int32 RootPageIndex);
    
    UFUNCTION(Reliable, Server)
    void ReplaceEquipWaza_ToServer(const FPalInstanceID& InstanceId, const EPalWazaID OldWaza, const EPalWazaID NewWaza);
    
    UFUNCTION(Reliable, Server)
    void RemoveEquipWaza_ToServer(const FPalInstanceID& InstanceId, const EPalWazaID TargetWaza);
    
private:
    UFUNCTION(BlueprintCallable)
    void RemoveCameraRotateSpeedModifierRate(const FName& modifierName);
    
public:
    UFUNCTION(Reliable, Server)
    void ReleaseSummonWeapon_ToServer(UPalDynamicWeaponItemDataBase* InDynamicItem);
    
    UFUNCTION(Client, Reliable)
    void ReceiveSuccessRequestEnterGuild_ToClient(const EPalGuildJoinRequestResult Result, const FPalInstanceID& EnterPlayerInstanceId);
    
    UFUNCTION(Client, Reliable)
    void ReceiveOfferJoinGuildPlayer_ToClient(const FGuid& FlowUniqueId, const FPalInstanceID& RequestPlayerInstanceId);
    
private:
    UFUNCTION(Client, Reliable)
    void ReceiveLiftupRequestResult_ToClient(EPalLiftupRequestResult Result);
    
public:
    UFUNCTION(Client, Reliable)
    void ReceiveFailedRequestGuildWithLog_ToClient(const EPalGuildJoinRequestResult Result);
    
    UFUNCTION(Client, Reliable)
    void ReceiveFailedRequestGuildWithAlert_ToClient(const EPalGuildJoinRequestResult Result);
    
    UFUNCTION(Reliable, Server)
    void ReauestDamageExplode_ToServer(UPalDamageExplodeComponent* ExplodeComponent, const FPalDamageInfo DamageInfo);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool PlaySkill(int32 SlotId);
    
public:
    UFUNCTION(BlueprintCallable)
    void PalDeprojectScreenPositionToWorld(FVector& StartLocation, FVector& RayDirection);
    
private:
    UFUNCTION()
    void OnWeaponNotify(EWeaponNotifyType Type);
    
    UFUNCTION()
    void OnUpdateWeightInventory(float Weight);
    
    UFUNCTION()
    void OnUpdateOtomoSlotWithCompletedInitializedParameter_ServerInternal(APalCharacter* PalCharacter);
    
    UFUNCTION()
    void OnUpdateOtomoSlotWithActor_ServerInternal(int32 SlotIndex, UPalIndividualCharacterHandle* LastHandle);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSwitchOtomoSpawn();
    
private:
    UFUNCTION()
    void OnStartGliding();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartCoopRequest();
    
private:
    UFUNCTION()
    void OnStartAim();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSpawnAndRideSupportPal();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnReleasedSpawnPalButton();
    
    UFUNCTION()
    void OnReceiveConfirmResultRequestGuild_ClientInternal(const bool bResponse);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPressedUseRecoveryItemButton();
    
private:
    UFUNCTION()
    void OnOverWeightInventory(float Weight);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnOtomoChangeIncrement();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnOtomoChangeDecrement();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnOtomo_ShortReleased();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnOtomo_Pressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnOtomo_LongReleased();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnOtomo_LongPressed();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLongReleasedSpawnPalButton();
    
    UFUNCTION()
    void OnLongPressedCoopButton();
    
    UFUNCTION()
    void OnLanded(UPalCharacterMovementComponent* MovementComponent, const FHitResult& Hit);
    
    UFUNCTION()
    void OnJump(UPalCharacterMovementComponent* MovementComponent);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnInitializeLocalPlayer_BP();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnGetOffAndDespawnSupportPal();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFlyRideTakeOff();
    
private:
    UFUNCTION()
    void OnFixedWeightInventory(float Weight);
    
protected:
    UFUNCTION()
    void OnFilteredKillLog(UPalKillLogFilteringWaiter* Waiter, const FPalKillLogDisplayData& KillLogData);
    
private:
    UFUNCTION()
    void OnEndRolling();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnEndCoopRequest();
    
private:
    UFUNCTION()
    void OnEndAim();
    
    UFUNCTION()
    void OnDestroyPawn(AActor* DestroyedActor);
    
    UFUNCTION()
    void OnDamage(FPalDamageResult DamageResult);
    
public:
    UFUNCTION()
    void OnCreatedGPSPalData(FPalInstanceID IndividualId);
    
private:
    UFUNCTION()
    void OnChangeSwimming(bool IsInSwimming);
    
    UFUNCTION()
    void OnChangePadOption(const FPalOptionPadSettings& PrevSettings, const FPalOptionPadSettings& NewSettings);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnChangeOtomoSlot();
    
private:
    UFUNCTION()
    void OnChangeKeyboardOption(const FPalOptionKeyboardSettings& PrevSettings, const FPalOptionKeyboardSettings& NewSettings);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnChangeInstructions();
    
private:
    UFUNCTION()
    void OnActionBegin(const UPalActionBase* ActionBase);
    
public:
    UFUNCTION(Client, Reliable)
    void NotifyWarningSignByAntiAirMissileLauncher_ToClient(bool IsShow, FGuid CannonID, FVector AttaclerLocation);
    
    UFUNCTION(Client, Reliable)
    void NotifyTimeoutDimensionLocker();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyRideWallStop_ToClient();
    
    UFUNCTION(Client, Reliable)
    void NotifyOilrigGoalCrateOpen_ToClient();
    
    UFUNCTION(Client, Reliable)
    void NotifyNPCTalkToken(UPalNPCTalkFlowComponent* TalkFlowComponent, const FGuid& NewToken, const int32 TalkCount);
    
private:
    UFUNCTION(Client, Reliable)
    void NotifyLiftupCampPal_ToClient(APalCharacter* TargetCharacter);
    
public:
    UFUNCTION(Client, Reliable)
    void NotifyImportGlobalPalStorageDataResult_ToClient(EPalGlobalStorageImportResult ImportResult, const FPalGlobalPalStorageImportResultAdditionalData& AdditionalData);
    
private:
    UFUNCTION(Reliable, Server)
    void NotifyConfirmRequestGuild_ToServer(const FGuid& FlowUniqueId, const bool bResponse);
    
public:
    UFUNCTION(Reliable, Server)
    void LostOtomoByInstacneID_ToServer(const FPalInstanceID& InstanceId);
    
private:
    UFUNCTION()
    void JumpCancelPalThrow(UPalCharacterMovementComponent* MovementComponent);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsSwimming() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSpectating() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRidingFlyPal() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRiding() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOtomoPartnerSkillCanTrigger() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCooping() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBuldingActiveFlagForServer() const;
    
    UFUNCTION(Reliable, Server)
    void IncrementFavoriteIndexPal_ToServer(const FPalInstanceID& InstanceId);
    
    UFUNCTION(Reliable, Server)
    void IncrementDimensionStoragePalFavoriteIndex_ToServer(int32 TargetLockerDataIndex);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void InactiveOtomo();
    
    UFUNCTION(BlueprintImplementableEvent)
    TSubclassOf<UPalUserWidgetTimerGaugeBase> GetTimerGaugeWidgetClass();
    
public:
    UFUNCTION(BlueprintPure)
    APalCharacter* GetRiderCharacter() const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetPlayerUId() const;
    
    UFUNCTION(BlueprintCallable)
    UPalSpectateComponent* GetPalSpectateComponent();
    
    UFUNCTION(BlueprintPure)
    APalPlayerState* GetPalPlayerState() const;
    
private:
    UFUNCTION(Reliable, Server)
    void GetOffToServer();
    
protected:
    UFUNCTION(BlueprintPure)
    APawn* GetLowBodyPawn() const;
    
    UFUNCTION(BlueprintPure)
    APalCharacter* GetLowBodyPalCharacter() const;
    
    UFUNCTION(BlueprintPure)
    UPalLoadoutSelectorComponent* GetLoadoutSelectorComponent() const;
    
public:
    UFUNCTION(BlueprintPure)
    FVector2D GetKeyboardMoveValue() const;
    
    UFUNCTION(BlueprintPure)
    APalCharacter* GetDefaultPlayerCharacter() const;
    
    UFUNCTION(BlueprintPure)
    APalCharacter* GetControlPalCharacter() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetControllerRightStickValue() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetControllerLeftStickValue() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void FlushCoopActionLongPressInput();
    
public:
    UFUNCTION(BlueprintCallable)
    void EndSpectate();
    
private:
    UFUNCTION(Reliable, Server)
    void EndFlyToServer();
    
    UFUNCTION()
    void EnableShootingByAction(const UPalActionComponent* Component);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void DoStep(EPalStepAxisType Axis, FVector2D StepDirection);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DoAirDash(EPalStepAxisType Axis, FVector2D DashDirection);
    
public:
    UFUNCTION(Reliable, Server)
    void Debug_TogglePartnerSkillNoDecrease();
    
    UFUNCTION(Reliable, Server)
    void Debug_TeleportToNearestPlayer();
    
    UFUNCTION(Reliable, Server)
    void Debug_TeleportToNearestCamp();
    
    UFUNCTION(Reliable, Server)
    void Debug_TeleportToBotLocation(int32 botIndex);
    
    UFUNCTION(Reliable, Server)
    void Debug_TeleportToBotCamp(int32 botIndex);
    
    UFUNCTION(Reliable, Server)
    void Debug_Teleport2D(const FVector& Location);
    
    UFUNCTION(Reliable, Server)
    void Debug_ShowInvaderDebugLog();
    
    UFUNCTION(Reliable, Server)
    void Debug_SetStatusPoint_ToServer(FName StatusPointName, int32 StatusLevel);
    
    UFUNCTION(Reliable, Server)
    void Debug_SetPalWorldTimeScale(float Rate);
    
    UFUNCTION(Reliable, Server)
    void Debug_SetPalWorldTime(int32 Hour);
    
    UFUNCTION(Reliable, Server)
    void Debug_SetPalCaptureNumRecordAll(const int32 CaptureNum);
    
    UFUNCTION(Reliable, Server)
    void Debug_SetPalCaptureNumRecord(const EPalTribeID TribeId, const int32 CaptureNum);
    
    UFUNCTION(Reliable, Server)
    void Debug_SetFPSForServer(float fps);
    
    UFUNCTION(Reliable, Server)
    void Debug_SetArenaRankPoint(int32 RankPoint);
    
    UFUNCTION(Reliable, Server)
    void Debug_RerollCharacterMake();
    
private:
    UFUNCTION(Client, Reliable)
    void Debug_ReceiveCheatCommand_ToClient(const FString& Message);
    
public:
    UFUNCTION(Reliable, Server)
    void Debug_ParallelForUpdateActiveTiles();
    
    UFUNCTION(Reliable, Server)
    void Debug_NotConsumeMaterialsInCraft();
    
    UFUNCTION(Reliable, Server)
    void Debug_NotConsumeMaterialsInBuild();
    
    UFUNCTION(Reliable, Server)
    void Debug_Muteki_ToServer();
    
    UFUNCTION(Reliable, Server)
    void Debug_InvaderMarchRandom();
    
    UFUNCTION(Reliable, Server)
    void Debug_InvaderMarch();
    
    UFUNCTION(Reliable, Server)
    void Debug_InsightsTraceStop_ToServer();
    
    UFUNCTION(Reliable, Server)
    void Debug_InsightsTraceStart_ToServer();
    
    UFUNCTION(Reliable, Server)
    void Debug_IgnoreRestrictedByItemsForPartnerSkill();
    
    UFUNCTION(Reliable, Server)
    void Debug_HighJump_ToServer();
    
    UFUNCTION(BlueprintCallable)
    void Debug_HighJump();
    
    UFUNCTION(Reliable, Server)
    void Debug_ForceSpawnRarePal_ToServer();
    
    UFUNCTION(Reliable, Server)
    void Debug_EnableCollectPalCount();
    
    UFUNCTION(Reliable, Server)
    void Debug_CheatCommand_ToServer(const FString& Command);
    
    UFUNCTION(Reliable, Server)
    void Debug_AddPlayerExp_ToServer(int32 addExp);
    
    UFUNCTION(Reliable, Server)
    void Debug_AddPartyExp_ToServer(int32 addExp);
    
    UFUNCTION(Reliable, Server)
    void Debug_AddMoney_ToServer(int64 addValue);
    
    UFUNCTION(Reliable, Server)
    void Debug_AddExpForALLPlayer_ToServer(int32 addExp);
    
    UFUNCTION(Reliable, Server)
    void DamageReactionComponent_ProcessDeath_ToServer_ToSelfPlayer();
    
    UFUNCTION(Reliable, Server)
    void DamageReactionComponent_ProcessDeath_ToServer_ToNPC(const AActor* TargetActor);
    
    UFUNCTION(Reliable, Server)
    void DamageReactionComponent_ProcessDamage_ToServer_ToSelfPlayer(const FPalDamageInfo& Info, const AActor* DefenderOtomo);
    
    UFUNCTION(Reliable, Server)
    void DamageReactionComponent_ProcessDamage_ToServer_ToNPC(const FPalDamageInfo& Info, const AActor* Defender);
    
    UFUNCTION(Reliable, Server)
    void DamageReactionComponent_ProcessDamage_ToServer_ToEnemyPlayer(const FPalDamageInfo& Info, const AActor* Defender);
    
    UFUNCTION(Client, Reliable)
    void ConfirmRequestGuild_ToClient(const FGuid& FlowUniqueId, const EPalGuildJoinRequestConfirm ConfirmType);
    
    UFUNCTION(Client, Unreliable)
    void ClientPlayForceFeedbackForPal_Internal(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused);
    
    UFUNCTION(BlueprintCallable)
    void ClientPlayForceFeedbackForPal(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused);
    
    UFUNCTION(Client, Reliable)
    void ClientBeginSpectate(bool bAdminMode);
    
    UFUNCTION(Reliable, Server)
    void ClearSummonWeapon_ToServer(UPalDynamicWeaponItemDataBase* InDynamicItem);
    
    UFUNCTION(BlueprintCallable)
    void ChangeSpectateMoveSpeed(int32 Direction);
    
    UFUNCTION(Reliable, Server)
    void CannonDamageReactionComponent_ProcessDamage_ToServer(UPalCannonDamageReactionComponent* CannonDamage, const FPalDamageInfo& Info);
    
    UFUNCTION(BlueprintPure)
    bool CanCooping() const;
    
private:
    UFUNCTION(Reliable, Server)
    void CallOnCoopReleaseDelegate_ToServer();
    
public:
    UFUNCTION(BlueprintCallable)
    void BeginSpectate(bool bAdminMode);
    
    UFUNCTION(Reliable, Server)
    void AddPlayerStatusPoint_ToServer(const TArray<FPalGotStatusPoint>& AddStatusPointArray);
    
    UFUNCTION(Client, Reliable)
    void AddKillLog_Client(const FPalKillLogDisplayData& KillLogData);
    
    UFUNCTION(Client, Reliable)
    void AddHardcorePlayerDeathLog_Client(const FPalKillLogDisplayData& DeathLogData);
    
    UFUNCTION(Reliable, Server)
    void AddEquipWaza_ToServer(const FPalInstanceID& InstanceId, const EPalWazaID NewWaza);
    
    UFUNCTION(Client, Reliable)
    void AddDeathLog_Client(const FPalKillLogDisplayData& DeathLogData);
    
private:
    UFUNCTION(BlueprintCallable)
    void AddCameraRotateSpeedModifierRate(const FName& modifierName, float Rate);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ActivateCurrentOtomoNearThePlayer();
    
public:
    UFUNCTION(Reliable, Server)
    void ActionComponent_PlayAction_ToServer_ForPlayer(AActor* TargetActor, FActionDynamicParameter Param, TSubclassOf<UPalActionBase> actionClass, int32 issuerID);
    
};

