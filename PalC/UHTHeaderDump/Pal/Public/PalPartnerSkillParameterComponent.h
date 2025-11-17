#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalMapObjectTreasureGradeType.h"
#include "EPalRidingActiveSkillNotWeaponCondition.h"
#include "EPalWazaID.h"
#include "FixedPoint.h"
#include "FlagContainer.h"
#include "PalCoopSkillSearchEffectParameter.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalInstanceID.h"
#include "PalPartnerSkillParameterRide.h"
#include "PalPassivePartnerSkillIdAndParameters.h"
#include "PalResidentSkillNotifyParameter.h"
#include "Templates/SubclassOf.h"
#include "PalPartnerSkillParameterComponent.generated.h"

class AActor;
class APalAIController;
class APalCharacter;
class APalFunnelCharacter;
class UPalCoopSkillModuleBase;
class UPalItemContainer;
class UPalPartnerSkillPassiveSkill;
class UPalResidentSkillModuleBase;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalPartnerSkillParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnToggleExecute, bool, IsExecuting);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStop);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStart);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSearchEffect);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnOverheat);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEffectTimeChanged, FFixedPoint, EffectTime, FFixedPoint, effectTimeMax);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCoolDownTimeChanged, FFixedPoint, CoolDownTime, FFixedPoint, coolDownTimeMax);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCoolDownCompleted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeDisableGlider, bool, isDisable);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeDisableFunnel, bool, isDisable);
    
    UPROPERTY(BlueprintAssignable)
    FOnOverheat OnOverheat;
    
    UPROPERTY(BlueprintAssignable)
    FOnCoolDownCompleted OnCoolDownCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FOnEffectTimeChanged OnEffectTimeChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnCoolDownTimeChanged OnCoolDownTimeChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnStart OnStart;
    
    UPROPERTY(BlueprintAssignable)
    FOnStop OnStop;
    
    UPROPERTY(BlueprintAssignable)
    FOnToggleExecute OnToggleExecute;
    
    UPROPERTY(BlueprintAssignable)
    FOnSearchEffect OnSearchEffectExecute;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeDisableFunnel OnChangeDisableFunnel;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeDisableGlider OnChangeDisableGlider;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPalDataTableRowName_ItemData> RestrictionItems;
    
    UPROPERTY(EditDefaultsOnly)
    FName SkillName;
    
    UPROPERTY(EditDefaultsOnly)
    EPalWazaID WazaID;
    
    UPROPERTY(VisibleInstanceOnly)
    FFixedPoint EffectTime;
    
    UPROPERTY(VisibleInstanceOnly)
    FFixedPoint effectTimeMax;
    
    UPROPERTY(VisibleInstanceOnly)
    FFixedPoint ExecCost;
    
    UPROPERTY(VisibleInstanceOnly)
    FFixedPoint IdleCost;
    
    UPROPERTY(VisibleInstanceOnly)
    FFixedPoint IdleTime;
    
    UPROPERTY(VisibleInstanceOnly)
    FFixedPoint CoolDownTime;
    
    UPROPERTY(VisibleInstanceOnly)
    FFixedPoint coolDownTimeMax;
    
    UPROPERTY(VisibleInstanceOnly)
    bool bCanThrowPal;
    
    UPROPERTY(VisibleInstanceOnly)
    bool bCanChangeWeapon;
    
    UPROPERTY(VisibleInstanceOnly)
    bool bIsToggleKey;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIdlelCostDecreaseEveryFrame;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsExecSkillContinuation;
    
    UPROPERTY(VisibleInstanceOnly)
    bool bIsRunning;
    
    UPROPERTY(VisibleInstanceOnly)
    bool bIsOverheat;
    
    UPROPERTY(VisibleInstanceOnly)
    bool bIsExecuting;
    
    UPROPERTY(VisibleInstanceOnly)
    UPalCoopSkillModuleBase* SkillModule;
    
    UPROPERTY(Replicated, VisibleInstanceOnly)
    UPalResidentSkillModuleBase* ResidentSkillModule;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FPalPassivePartnerSkillIdAndParameters> PassiveSkills;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    FPalPartnerSkillParameterRide RideParameter;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<APalFunnelCharacter> FunnelCharacterClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<APalAIController> FunnelControllerClass;
    
    UPROPERTY(EditDefaultsOnly)
    EPalWazaID FunnelAttackWazaID;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalResidentSkillModuleBase> ResidentModuleClass;
    
private:
    UPROPERTY(VisibleAnywhere)
    UPalPartnerSkillPassiveSkill* PassiveSkill;
    
    UPROPERTY(Replicated)
    TArray<FName> CachedPassiveSkillList;
    
    UPROPERTY(EditDefaultsOnly)
    FName ActiveSkill_MainValue_Overview_EditorOnly;
    
    UPROPERTY(EditDefaultsOnly)
    bool IsRidingActiveSkillNotWeapon;
    
    UPROPERTY(EditDefaultsOnly)
    EPalRidingActiveSkillNotWeaponCondition RidingActiveSkillNotWeaponCondition;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsToggleRidingActiveSkillNotWeapon;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> ActiveSkill_MainValueByRank;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> ActiveSkill_OverWriteCoolTimeByRank;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFlagContainer FunnelDisableFlag;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFlagContainer GliderDisableFlag;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> ResidentSkill_MainValueByRank;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFlagContainer ResidentSkillDisableFlag;
    
public:
    UPalPartnerSkillParameterComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void SetName(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableResidentSkill(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetDisableGlider_ToAll(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableFunnel(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetDisableFlagsBySetting(bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetCoopFlag_ForServer(bool IsCoop);
    
    UFUNCTION(BlueprintCallable)
    void Recover();
    
private:
    UFUNCTION()
    void OnUpdateInventoryContainer(UPalItemContainer* Container);
    
    UFUNCTION()
    void OnUpdateCharacterRank(const int32 NowRank, const int32 OldRank);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRideInactivated();
    
    UFUNCTION(BlueprintCallable)
    void OnRideActivated();
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerCharacterSpawned(FPalInstanceID ID);
    
private:
    UFUNCTION()
    void OnInitializedCharacter(APalCharacter* OwnerCharacter);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnInactivatedAsWorker();
    
    UFUNCTION(BlueprintCallable)
    void OnInactivatedAsPartner();
    
    UFUNCTION(BlueprintCallable)
    void OnInactivatedAsOtomoHolder();
    
    UFUNCTION(BlueprintCallable)
    void OnExec();
    
    UFUNCTION(BlueprintCallable)
    void OnComplated();
    
    UFUNCTION()
    void OnCachedPassiveSkillListDelegate(const FString& InOperation, const FName& InSkillName);
    
    UFUNCTION(BlueprintCallable)
    void OnActivatedAsWorker();
    
    UFUNCTION(BlueprintCallable)
    void OnActivatedAsPartner();
    
    UFUNCTION(BlueprintCallable)
    void OnActivatedAsOtomoHolder();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyResidentSkill_ToAll(const FName& NotifyName, const FPalResidentSkillNotifyParameter& NotifyParameter);
    
    UFUNCTION(BlueprintPure)
    bool IsToggleRidingActiveSkillNotWeapon() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggleKey() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRunning() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRestrictedByItems(AActor* Trainer) const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayerTrigger() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayerReviveTrigger() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOverheat() const;
    
    UFUNCTION(BlueprintPure)
    bool IsExistRidingActiveSkilNotWeapon() const;
    
    UFUNCTION(BlueprintPure)
    bool IsExistActiveSkill() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDisableResidentSkill() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDisableGlider() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDisableFunnel() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCoolDown() const;
    
    UFUNCTION()
    float GetWazaPowerRate(EPalWazaID Waza) const;
    
    UFUNCTION(BlueprintPure)
    EPalWazaID GetWazaID() const;
    
    UFUNCTION(BlueprintPure)
    FName GetSkillName() const;
    
    UFUNCTION(BlueprintPure)
    void GetRideParameter(FPalPartnerSkillParameterRide& OutParam);
    
    UFUNCTION(BlueprintPure)
    TArray<FPalDataTableRowName_ItemData> GetRestrictionItems() const;
    
    UFUNCTION(BlueprintPure)
    float GetResidentSkillMainValueByRank() const;
    
private:
    UFUNCTION()
    FFixedPoint GetMainDamage() const;
    
public:
    UFUNCTION(BlueprintPure)
    float GetEffectTimeRatio();
    
    UFUNCTION(BlueprintPure)
    FFixedPoint GetEffectTimeMax() const;
    
    UFUNCTION(BlueprintPure)
    FFixedPoint GetEffectTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetCoolDownTimeRatio();
    
    UFUNCTION(BlueprintPure)
    FFixedPoint GetCoolDownTimeMax() const;
    
    UFUNCTION(BlueprintPure)
    FFixedPoint GetCoolDownTime() const;
    
    UFUNCTION()
    TArray<FName> GetCachedPassiveSkillList() const;
    
    UFUNCTION(BlueprintPure)
    float GetActiveSkillMainValueByRank() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceOverheat();
    
    UFUNCTION(BlueprintCallable)
    void ExecDuring(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    UPalCoopSkillModuleBase* CreateSkillModule(TSubclassOf<UPalCoopSkillModuleBase> SkillModuleClass);
    
    UFUNCTION(BlueprintPure)
    bool CanOpenTreasure(EPalMapObjectTreasureGradeType TreasureGrade) const;
    
    UFUNCTION(BlueprintPure)
    bool CanExecCoopSkill();
    
    UFUNCTION(BlueprintPure)
    bool CanExec() const;
    
    UFUNCTION(BlueprintPure)
    bool CanChangeWeapon() const;
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void CallOnToggleExecute_ToAll(bool Execute);
    
    UFUNCTION(NetMulticast, Reliable)
    void CallOnStop_ToAll();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CallOnStartSearchEffect_ToAll(const FGuid& RequestPlayerUId, const FPalCoopSkillSearchEffectParameter& EffectParam);
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void CallOnStart_ToAll();
    
    UFUNCTION(NetMulticast, Reliable)
    void CallOnOverheat_ToAll();
    
    UFUNCTION(NetMulticast, Reliable)
    void CallOnEffectTimeChanged_ToAll(FFixedPoint NewEffectTime, FFixedPoint NewEffectTimeMax);
    
    UFUNCTION(NetMulticast, Reliable)
    void CallOnCoolDownTimeChanged_ToAll(FFixedPoint NewCoolDownTime, FFixedPoint NewCoolDownTimeMax);
    
    UFUNCTION(NetMulticast, Reliable)
    void CallOnCoolDownCompleted_ToAll();
    
};

