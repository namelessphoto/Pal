#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "EPalAdditionalEffectType.h"
#include "EPalElementType.h"
#include "EPalMapBaseCampWorkerOrderType.h"
#include "EPalWorkSuitability.h"
#include "EPalWorkType.h"
#include "EPalWorkWorkerWorkingState.h"
#include "FixedPoint64.h"
#include "FlagContainer.h"
#include "PalCharacterParameter_Work.h"
#include "PalDamageResult.h"
#include "PalInstanceID.h"
#include "PalMapObjectAppearanceData.h"
#include "PalMapObjectAppearanceDataWithId.h"
#include "PalStatusAccumulate.h"
#include "PalWorkAssignHandleId.h"
#include "PalCharacterParameterComponent.generated.h"

class AActor;
class APalCharacter;
class UPalCharacterParameterComponent;
class UPalIndividualCharacterHandle;
class UPalIndividualCharacterParameter;
class UPalItemContainer;
class UPalOtomoAttackStopJudgeByBallList;
class UPalWorkAssign;
class UPalWorkBase;
class UPrimitiveComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalCharacterParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateWorkAssignIdDelegate, UPalCharacterParameterComponent*, Parameter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateParameterDelegate, UPalCharacterParameterComponent*, Parameter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSPOverheatDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeTrapDelegate, bool, IsExist);
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    bool bIsCooping;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    bool bIsEnableSendReticleTarget;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    bool bIsEnableMuteki;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    bool bIsDisableSummonWeapon;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FFixedPoint64 LeanBackPoint;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FFixedPoint64 LeanBackMaxPoint;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FFixedPoint64 StunPoint;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FFixedPoint64 StunMaxPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsSPOverheat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsHyperArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsDebugMuteki;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleInstanceOnly)
    EPalElementType ElementType1;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleInstanceOnly)
    EPalElementType ElementType2;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Transient)
    bool IsOverrideTarget;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Replicated, Transient)
    FVector OverrideTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Transient)
    bool bIsOverrideDefenceTarget;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Transient)
    FVector OverrideDefenceTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_Trainer)
    APalCharacter* Trainer;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleInstanceOnly)
    APalCharacter* OtomoPal;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleInstanceOnly)
    TWeakObjectPtr<AActor> ReticleTargetActor;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    UPalIndividualCharacterHandle* IndividualHandle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, ReplicatedUsing=OnRep_IndividualParameter)
    UPalIndividualCharacterParameter* IndividualParameter;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Transient)
    bool IsStun;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool IsEnableSpeedCollision;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    bool IsCanSneakAttacked;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    bool IsFriendBulletIgnore;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    int32 BiologicalGrade;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    bool IsPredator;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    bool IsEdible;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    int32 HiddenCollisionOverlapCount;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    int32 BurnCollisionOverlapCount;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    int32 LavaCollisionOverlapCount;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    EPalElementType DamageUpElement_ByElementStatus;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    EPalElementType DamageDownElement_ByElementStatus;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool IsDarknessRandomAttack;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 AttackUp;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 DefenseUp;
    
    UPROPERTY(Transient)
    TMap<EPalAdditionalEffectType, FPalStatusAccumulate> StatusAccumulateMap;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool IsSleepAction;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector WildPalDrinkWaterPoint;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool IsDisableOtomoReturnEffect;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool IsPendingMeatCutDeath;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    float MaxHPRate_ForTowerBoss;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float MaxSPBuffRate;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bIsPreCooping;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bRespawnedWaitTeleport;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    FHitResult GroundHitResult;
    
private:
    UPROPERTY(EditDefaultsOnly)
    bool bIsUseGroundRayCast;
    
    UPROPERTY(Transient)
    FFlagContainer DisableGroundRayCast;
    
    UPROPERTY(Transient)
    FFixedPoint64 SP;
    
public:
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    FGuid BaseCampDefenseModelId;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleInstanceOnly)
    EPalMapBaseCampWorkerOrderType BaseCampWorkerOrderType;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bBaseCampWorkerAttackableFriend;
    
    UPROPERTY(Transient)
    TMap<FGuid, FPalMapObjectAppearanceData> UnreachableMapObjectInfos;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool bBeingSleptOnSide;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalCharacterParameter_Work Work;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FPalWorkAssignHandleId WorkAssignId;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    EPalWorkType WorkType;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid BaseCampWalkAroundExcludeMapObjectInstanceId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bAppliedBaseCampWorkerInitialized;
    
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    EPalWorkWorkerWorkingState WorkingState;
    
public:
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_PossessStaticItemId)
    FName PossessStaticItemId;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    bool bBeingRescued;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    float DyingHP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Replicated)
    float DyingMaxHP;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_ItemContainer)
    UPalItemContainer* ItemContainer;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool IsCapturedProcessing;
    
public:
    UPROPERTY(BlueprintAssignable)
    FUpdateParameterDelegate OnUpdatePossessItemDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateWorkAssignIdDelegate OnUpdateWorkAssignIdDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FSPOverheatDelegate OnSPOverheatDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeTrapDelegate OnChangeTrapLegHoldDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeTrapDelegate OnChangeTrapMovingPanelDelegate;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FVector TrapDirection;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TMap<FPalInstanceID, int32> DamageMap;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool CanDropItem;
    
    UPROPERTY(Transient)
    FFlagContainer DisableNaturalHealing_Component;
    
    UPROPERTY(BlueprintReadWrite, Replicated)
    bool IsImmortality;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsMimicryMode;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsAttackNonCriminal;
    
protected:
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<AActor>> TrapLegHoldList;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<AActor>> TrapMovingPanelList;
    
    UPROPERTY(Transient)
    UPalOtomoAttackStopJudgeByBallList* OtomoAttackStopJudge;
    
public:
    UPROPERTY(Replicated, Transient)
    TArray<FPalMapObjectAppearanceDataWithId> UnreachableMapObjectRepInfoArray;
    
    UPalCharacterParameterComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(Reliable, Server)
    void ZeroDyingHP_ToServer();
    
public:
    UFUNCTION(BlueprintCallable)
    void ZeroDyingHP();
    
    UFUNCTION(BlueprintCallable)
    void SubDyingHP(float SubHP);
    
    UFUNCTION(BlueprintCallable)
    void SetupBiologicalGradeFromDatabase();
    
    UFUNCTION(BlueprintCallable)
    void SetTrainer(APalCharacter* inTrainer);
    
    UFUNCTION(BlueprintCallable)
    void SetSP(FFixedPoint64 NewSP);
    
private:
    UFUNCTION(Reliable, Server)
    void SetReticleTarget_ToServer(AActor* Actor);
    
    UFUNCTION(Server, Unreliable)
    void SetOverrideTargetLocation_ToServer(FVector TargetLocation);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetOverrideTargetLocation(FVector TargetLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideDefenceTargetLocation(FVector TargetLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetMuteki(FName flagName, bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetMP(FFixedPoint64 NewMP);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxSP(FFixedPoint64 NewMaxSP);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxMP(FFixedPoint64 NewMaxMP);
    
private:
    UFUNCTION(Reliable, Server)
    void SetIsOverrideTarget_ToServer(int32 ID, bool IsOverride);
    
    UFUNCTION(NetMulticast, Reliable)
    void SetIsOverrideTarget_ToALL(int32 ID, bool IsOverride);
    
    UFUNCTION()
    void SetIsOverrideTarget_Innner(bool IsOverride);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIsOverrideTarget(bool IsOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetIsCapturedProcessing(bool IsCaptureProcess);
    
    UFUNCTION(BlueprintCallable)
    void SetHP(FFixedPoint64 NewHP);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSendReticleTarget(FName flagName, bool IsEnable);
    
    UFUNCTION()
    void SetElementTypeFromDatabase(APalCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableSummonWeapon(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableNaturalHealing_Component(FName Key, bool Disable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableCreateUNKO(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetCoopingFlag(bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    void ReviveFromDying();
    
    UFUNCTION(BlueprintCallable)
    void ResetSP();
    
    UFUNCTION(BlueprintCallable)
    void ResetOverrideDefenceTarget();
    
    UFUNCTION(BlueprintCallable)
    void ResetDyingHP();
    
    UFUNCTION(BlueprintCallable)
    void RemoveTrapMovingPanel(AActor* TrapActor);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTrapLegHold(AActor* TrapActor);
    
private:
    UFUNCTION()
    void OnSlipDamage(int32 Damage);
    
protected:
    UFUNCTION()
    void OnRep_Trainer();
    
private:
    UFUNCTION()
    void OnRep_PossessStaticItemId();
    
protected:
    UFUNCTION()
    void OnRep_ItemContainer();
    
public:
    UFUNCTION()
    void OnRep_IndividualParameter();
    
private:
    UFUNCTION()
    void OnInitializedCharacter(APalCharacter* OwnerCharacter);
    
    UFUNCTION()
    void OnInitialize_AfterSetIndividualParameter(APalCharacter* Character);
    
    UFUNCTION()
    void OnDamage(FPalDamageResult DamageResult);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPlayersOtomo() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPartBroken() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOverrideDefenceTarget() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOtomo() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMuteki();
    
    UFUNCTION(BlueprintPure)
    bool IsLive() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInHiddenCollision();
    
    UFUNCTION(BlueprintPure)
    bool IsHyperArmor() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHittingLava() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDyingHPZero() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDyingHPMax() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDying() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDisableSummonWeapon() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCooping() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAssignedToAnyWork() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAssignedFixed() const;
    
    UFUNCTION(BlueprintPure)
    bool HasFloorPhysMaterial() const;
    
    UFUNCTION(BlueprintPure)
    bool HasElementType(const EPalElementType ElementType) const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetWorkId() const;
    
    UFUNCTION(BlueprintPure)
    UPalWorkAssign* GetWorkAssign() const;
    
    UFUNCTION(BlueprintPure)
    UPalWorkBase* GetWork() const;
    
    UFUNCTION(BlueprintPure)
    FFixedPoint64 GetSP();
    
    UFUNCTION(BlueprintPure)
    int32 GetShotAttack();
    
    UFUNCTION(BlueprintPure)
    float GetSanity();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetReticleTargetActor();
    
    UFUNCTION(BlueprintPure)
    float GetRadius() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetOverrideTargetLocation_ConsiderRide();
    
    UFUNCTION(BlueprintPure)
    FVector GetOverrideDefenceTargetLocation() const;
    
    UFUNCTION(BlueprintPure)
    UPalOtomoAttackStopJudgeByBallList* GetOtomoAttackStopJudge();
    
    UFUNCTION(BlueprintPure)
    void GetNickNameWithOnlineID(FString& outName);
    
    UFUNCTION(BlueprintPure)
    void GetNickNamebyByCheckBlockedUser(FString& outName);
    
    UFUNCTION(BlueprintPure)
    void GetNickname(FString& outName);
    
    UFUNCTION(BlueprintPure)
    FFixedPoint64 GetMP();
    
    UFUNCTION(BlueprintPure)
    int32 GetMeleeAttack();
    
    UFUNCTION(BlueprintPure)
    FFixedPoint64 GetMaxSP();
    
    UFUNCTION(BlueprintPure)
    float GetMaxSanity();
    
    UFUNCTION(BlueprintPure)
    FFixedPoint64 GetMaxMP();
    
    UFUNCTION(BlueprintPure)
    FFixedPoint64 GetMaxHP();
    
    UFUNCTION(BlueprintPure)
    float GetMaxFullStomach();
    
    UFUNCTION(BlueprintPure)
    FGuid GetMapObjectInstanceIdApproachTo() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetLevel();
    
    UFUNCTION(BlueprintPure)
    int32 GetLegHoldResistLevel();
    
    UFUNCTION(BlueprintPure)
    bool GetIsCapturedProcessing();
    
    UFUNCTION(BlueprintPure)
    UPalIndividualCharacterParameter* GetIndividualParameter() const;
    
    UFUNCTION(BlueprintPure)
    float GetHPRate();
    
    UFUNCTION(BlueprintPure)
    FFixedPoint64 GetHP() const;
    
    UFUNCTION(BlueprintPure)
    FHitResult GetHitGroundResult() const;
    
    UFUNCTION(BlueprintPure)
    float GetFullStomach();
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EPhysicalSurface> GetFloorPhisicalSurface() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetFloorLocation() const;
    
    UFUNCTION()
    UPrimitiveComponent* GetFloorComponent() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDefense();
    
    UFUNCTION(BlueprintPure)
    int32 GetCraftSpeed_WorkSuitability(const EPalWorkSuitability WorkSuitability);
    
    UFUNCTION(BlueprintPure)
    int32 GetCraftSpeed();
    
    UFUNCTION(BlueprintPure)
    float GetCapsuleRadius() const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetBaseCampId() const;
    
    UFUNCTION(BlueprintPure)
    bool CanTargetFromAI() const;
    
    UFUNCTION(BlueprintCallable)
    void AddTrapMovingPanel(AActor* TrapActor);
    
    UFUNCTION(BlueprintCallable)
    void AddTrapLegHold(AActor* TrapActor);
    
private:
    UFUNCTION(Reliable, Server)
    void AddHPByRate_ToServer(float Rate);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddHPByRate(float Rate);
    
private:
    UFUNCTION(Reliable, Server)
    void AddHP_ToServer(FFixedPoint64 NewAddHP);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddHP(FFixedPoint64 PlusHP);
    
    UFUNCTION(BlueprintCallable)
    void AddDyingHP(float NewAddHP);
    
};

