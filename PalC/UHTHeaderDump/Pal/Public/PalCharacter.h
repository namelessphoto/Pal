#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Character -FallbackName=Character
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionResponse -FallbackName=ECollisionResponse
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "EPalCharacterCompleteDelegatePriority.h"
#include "EPalCharacterImportanceType.h"
#include "FlagContainer.h"
#include "PalCharacterCapsuleRootSettings.h"
#include "PalDamageRactionInfo.h"
#include "PalDeadInfo.h"
#include "PalOnCharacterCompleteInitializeParameterDelegate.h"
#include "PalCharacter.generated.h"

class AActor;
class APalCharacter;
class UAnimMontage;
class UNiagaraSystem;
class UPalActionComponent;
class UPalAnimNotifyParameterComponent;
class UPalCharacterAroundInfoCollectorComponent;
class UPalCharacterCameraComponent;
class UPalCharacterMovementComponent;
class UPalCharacterParameterComponent;
class UPalDamageReactionComponent;
class UPalFlyMeshHeightCtrlComponent;
class UPalFootIKComponent;
class UPalHeadUpDisplayComponent;
class UPalLookAtComponent;
class UPalNavigationInvokerComponent;
class UPalPassiveSkillComponent;
class UPalShooterSpringArmComponent;
class UPalSkeletalMeshComponent;
class UPalStaticCharacterParameterComponent;
class UPalStatusComponent;
class UPalVisualEffectComponent;
class UPrimitiveComponent;
class USceneComponent;
class USkeletalMeshComponent;
class USphereComponent;

UCLASS()
class APalCharacter : public ACharacter {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRollingDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStillInWorldTriggered);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCompleteSyncPlayerFromServer_InClient);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCompleteInitializeParameter, APalCharacter*, InCharacter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeImportance, EPalCharacterImportanceType, NextType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeBattleModeCharacter, APalCharacter*, SelfCharacter, bool, bIsBattleMode);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeBattleMode, bool, bIsBattleMode);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeActiveActor, bool, bIsActive);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCaptured, APalCharacter*, SelfCharacter, APalCharacter*, Attacker);
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float UpdateGroundInterval;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPalActionComponent* ActionComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPalCharacterParameterComponent* CharacterParameterComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPalStaticCharacterParameterComponent* StaticCharacterParameterComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPalDamageReactionComponent* DamageReactionComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPalStatusComponent* StatusComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPalShooterSpringArmComponent* CameraBoom;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPalCharacterCameraComponent* FollowCamera;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPalLookAtComponent* LookAtComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPalNavigationInvokerComponent* NavInvokerComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPalFootIKComponent* FootIKComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPalVisualEffectComponent* VisualEffectComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPalPassiveSkillComponent* PassiveSkillComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPalHeadUpDisplayComponent* HUDComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPalAnimNotifyParameterComponent* AnimNotifyComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPalCharacterAroundInfoCollectorComponent* AroundInfoCollectorComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USphereComponent* RagdollInteractiveSphere;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeActiveActor OnChangeActiveActorDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FRollingDelegate OnRollingDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FRollingDelegate OnRollingFinishDelegate;
    
    UPROPERTY(Transient, VisibleAnywhere)
    FOnCompleteSyncPlayerFromServer_InClient OnCompleteSyncPlayerFromServer_InClient;
    
    UPROPERTY(BlueprintAssignable)
    FOnStillInWorldTriggered OnStillInWorldTriggered;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeBattleMode OnChangeBattleModeDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeBattleModeCharacter OnChangeBattleModeCharacterDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeImportance OnChangeImportanceDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnCaptured OnCapturedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnCaptured OnCapturedCharacterParameterChangedDelegate;
    
    UPROPERTY(Replicated, Transient)
    bool bIsNeutralGroup;
    
protected:
    UPROPERTY(Transient)
    bool bIsBattleMode;
    
    UPROPERTY(Transient)
    bool bIgnoreChangeBattleModeFlag;
    
    UPROPERTY(Transient)
    bool bIsTalkMode;
    
    UPROPERTY(Instanced, Transient)
    UPalFlyMeshHeightCtrlComponent* FlyMeshHeightCtrlComponent;
    
private:
    UPROPERTY(ReplicatedUsing=OnRep_IsPalActiveActor)
    bool bIsPalActiveActor;
    
    UPROPERTY(ReplicatedUsing=OnRep_IsOtomoCollision)
    bool bIsOtomoCollision;
    
    UPROPERTY()
    bool bIsLocalInitialized;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsDisable_ChangeTickInterval_ByImportance;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsPart;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUseCustomAutoAimTarget;
    
    UPROPERTY(Transient)
    FVector SpawnLocation_ForServer;
    
    UPROPERTY(VisibleInstanceOnly)
    FFlagContainer IsDisableChangeTickInterval;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    EPalCharacterImportanceType ImportanceType;
    
    UPROPERTY(Transient, VisibleAnywhere)
    FVector RideMeshTranslationOffset;
    
    UPROPERTY()
    FTimerHandle CheckIndividualParameterReplicateTimerHandle;
    
    UPROPERTY(VisibleInstanceOnly, ReplicatedUsing=OnRep_RootCollisionProfileName)
    FName RootCollisionProfileName;
    
    UPROPERTY(Transient)
    TMap<EPalCharacterCompleteDelegatePriority, FOnCompleteInitializeParameter> OnCompleteInitializeParameterDelegateMap;
    
    UPROPERTY(Transient)
    TMap<UPrimitiveComponent*, TEnumAsByte<ECollisionResponse>> OtomoResponseMap;
    
    UPROPERTY(Transient)
    int32 CurrentAirDashCount;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_CapsuleRootSettings)
    FPalCharacterCapsuleRootSettings CapsuleRootSettings;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_bUseBodyPartsCollisionProfileNameBaseCamp)
    bool bUseBodyPartsCollisionProfileNameBaseCamp;
    
public:
    APalCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateGroundRayCast(bool bImmediateApply);
    
    UFUNCTION(BlueprintCallable)
    void UnbindOnCompleteInitializeParameterDelegate(EPalCharacterCompleteDelegatePriority Priority, const FPalOnCharacterCompleteInitializeParameter& Event);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleHandAttachMesh(bool Active);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleCharacterMesh(bool Active);
    
    UFUNCTION(BlueprintCallable)
    void SetRideMeshTranslationOffset(FVector InNewRideMeshTranslationOffset);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetOtomoCollisionProfile(bool IsOtomoCollision);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableChangeIntervalByImportance(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveCollisionMovement(bool Active);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetActiveActorStayVisible(bool Active);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetActiveActor(bool Active);
    
    UFUNCTION(NetMulticast, Reliable)
    void RPCDummy();
    
    UFUNCTION(BlueprintCallable)
    void ResetTickInterval();
    
    UFUNCTION(BlueprintCallable)
    void RequestJump();
    
    UFUNCTION(BlueprintCallable)
    void RequestExecuteTickNextFrameForAction();
    
    UFUNCTION(BlueprintCallable)
    void ReplaceCurrentReservedMontage_WithPlayRate(UAnimMontage* ReservedMontage, UAnimMontage* NewMontage, float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void Play2Montage_WithPlayRate(UAnimMontage* firstMontage, UAnimMontage* nextMontage, float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void Play2Montage(UAnimMontage* firstMontage, UAnimMontage* nextMontage);
    
    UFUNCTION(Client, Reliable)
    void OnTeleport_ToClient(const FVector& Location, const FQuat& Rotation);
    
private:
    UFUNCTION()
    void OnRep_RootCollisionProfileName();
    
    UFUNCTION()
    void OnRep_IsPalActiveActor(bool PrevIsActiveActor);
    
    UFUNCTION()
    void OnRep_IsOtomoCollision(bool PrevbIsOtomoCollision);
    
protected:
    UFUNCTION()
    void OnRep_CapsuleRootSettings();
    
private:
    UFUNCTION()
    void OnRep_bUseBodyPartsCollisionProfileNameBaseCamp();
    
    UFUNCTION()
    void OnOverlapEndByAroundInfo(AActor* OtherActor);
    
    UFUNCTION()
    void OnOverlapBeginByAroundInfo(AActor* OtherActor);
    
protected:
    UFUNCTION()
    void OnDeadCharacter(FPalDeadInfo DeadInfo);
    
    UFUNCTION()
    void OnDamageReaction(FPalDamageRactionInfo ReactionInfo);
    
private:
    UFUNCTION()
    void OnChangeWetnessStatus(bool IsSwim);
    
public:
    UFUNCTION()
    void LocalInitialized();
    
    UFUNCTION(BlueprintPure)
    bool IsUseCustomAutoAimTarget() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPreCooping() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPart() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCooping() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void GetVisual_ExceptMainMesh_SyncAnyway(TArray<USceneComponent*>& OutComponent);
    
public:
    UFUNCTION(BlueprintPure)
    bool GetTalkMode() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetRideMeshTranslationOffset() const;
    
    UFUNCTION(BlueprintPure)
    UPalCharacterMovementComponent* GetPalCharacterMovementComponent() const;
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UNiagaraSystem> GetOverrideSleepFX() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    USkeletalMeshComponent* GetOverrideFaceMesh();
    
    UFUNCTION(BlueprintPure)
    UPalSkeletalMeshComponent* GetMainMesh() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FVector GetHPGaugeLocation() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    USkeletalMeshComponent* GetHandAttachMesh();
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetCurrentReservedMontage() const;
    
    UFUNCTION(BlueprintPure)
    UPalCharacterParameterComponent* GetCharacterParameterComponent() const;
    
    UFUNCTION(BlueprintPure)
    bool GetBattleMode() const;
    
    UFUNCTION(BlueprintPure)
    bool GetActiveActorFlag() const;
    
    UFUNCTION(BlueprintPure)
    UPalActionComponent* GetActionComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceResetJumpState();
    
    UFUNCTION(NetMulticast, Reliable)
    void ChangeWantFood_ToAll(bool IsWantFood, bool IsExistFood);
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void ChangeTalkModeFlag_ToAll(bool IsTalk);
    
    UFUNCTION(NetMulticast, Reliable)
    void ChangeBattleModeFlag_ToAll(bool IsBattle);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeBattleModeFlag(bool IsBattle);
    
    UFUNCTION()
    void BroadcastOnCompleteInitializeParameter();
    
    UFUNCTION(BlueprintCallable)
    void BindOnCompleteInitializeParameterDelegate(EPalCharacterCompleteDelegatePriority Priority, const FPalOnCharacterCompleteInitializeParameter& Event);
    
};

