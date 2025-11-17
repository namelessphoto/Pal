#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPalArenaRank.h"
#include "EPalBaseCampWorkerEventType.h"
#include "EPalBaseCampWorkerSickType.h"
#include "EPalCharacterNaturalUpdateType.h"
#include "EPalExpCalcType.h"
#include "EPalFoodStatusEffectType.h"
#include "EPalGenderType.h"
#include "EPalGenusCategoryType.h"
#include "EPalGroupType.h"
#include "EPalInvaderType.h"
#include "EPalPassiveSkillEffectType.h"
#include "EPalSizeType.h"
#include "EPalStatusHungerType.h"
#include "EPalStatusPhysicalHealthType.h"
#include "EPalTribeID.h"
#include "EPalWazaID.h"
#include "EPalWorkSuitability.h"
#include "FixedPoint64.h"
#include "FlagContainer.h"
#include "FloatContainer.h"
#include "PalContainerId.h"
#include "PalFoodRegeneInfo.h"
#include "PalGotStatusPoint.h"
#include "PalIndividualCharacterEquipItemContainerHandler.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalInstanceID.h"
#include "PalPassiveSkillEffectKeyOption.h"
#include "PalPhantomReplicateInfo.h"
#include "PalWorkSuitabilityPreferenceInfo.h"
#include "PalIndividualCharacterParameter.generated.h"

class APalCharacter;
class UPalIndividualCharacterHandle;
class UPalIndividualCharacterParameter;
class UPalItemContainer;

UCLASS(BlueprintType, EditInlineNew)
class UPalIndividualCharacterParameter : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWorkSuitabilityChangedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateWorkSuitabilityRankDelegate, EPalWorkSuitability, WorkSuitability);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateWorkSuitabilityOptionDelegate, const FPalWorkSuitabilityPreferenceInfo&, NewWorkSuitabilityOption);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateUnusedStatusPointDelegate, int32, UnusedPoint);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FUpdateStatusPointDelegate, FName, StatusName, int32, prevPoint, int32, NewPoint);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FUpdateSPDelegate, FFixedPoint64, nowSP, FFixedPoint64, nowMaxSP, bool, isOverHeated);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateSkinNameDelegate, const FName&, NewSkinName);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateShieldMaxHPDelegate, FFixedPoint64, nowShieldMaxHP);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateShieldHPDelegate, FFixedPoint64, nowShieldMaxHP, FFixedPoint64, nowShieldHP);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateSanityDelegate, float, nowSanity, float, oldSanity);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateReviveTimerDelegate, float, NowReviveTimer);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateRankUpExpDelegate, int32, nowRankUpExp, int32, oldRankUpExp);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateRankDelegate, int32, NowRank, int32, OldRank);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateNickNameWithParameterDelegate, UPalIndividualCharacterParameter*, IndividualParameter, const FString&, NewNickName);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateNickNameDelegate, const FString&, NewNickName);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateLevelDelegate, int32, addLevel, int32, nowLevel);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateIndividualIDDelegate, FPalInstanceID, IndividualId, UPalIndividualCharacterParameter*, IndividualParameter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateHungerTypeDelegate, EPalStatusHungerType, Current, EPalStatusHungerType, Last);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateHPDelegate, FFixedPoint64, nowHP, FFixedPoint64, nowMaxHP);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateGroupIdDelegate, const FGuid&, NewGroupId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateFullStomachDelegate, float, Current, float, Last);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FUpdateFriendshipRankDelegate, UPalIndividualCharacterParameter*, IndividualParameter, const int32, NewFriendshipRank, const int32, OldRank, bool, bFavoriteChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateFriendshipPointDelegate, UPalIndividualCharacterParameter*, IndividualParameter, const int32, NewPoint);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateBaseCampIdDelegate, const FGuid&, NewBaseCampId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateArenaRankPointDelegate, UPalIndividualCharacterParameter*, IndividualParameter, int32, NewArenaRankPoint);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTriedConsumeFoodDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTalentChangedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FStatusRankChangedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FShieldDamageDelegate, int32, Damage, bool, IsShieldBroken);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRevivedParameterDelegate, UPalIndividualCharacterParameter*, IndividualParameter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRevivedDelegate, UPalIndividualCharacterParameter*, IndividualParameter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPassiveSkillUpdateDelegate, const TArray<FName>&, PassiveIds);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGenderUpdateDelegate, EPalGenderType, NewGender);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangedFavoriteIndexDelegate, const int32, NewIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnChangedAssignedToExpeditionDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FInvaderTargetChangedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGotStatusPointListChangedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndMedicalBedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDeadBodyDelegate, UPalIndividualCharacterHandle*, IndividualHandle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FConditionChangedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChangeMasteredWazaDelegate, UPalIndividualCharacterParameter*, IndividualParameter, EPalWazaID, WazaID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangeEquipWazaDelegate, UPalIndividualCharacterParameter*, IndividualParameter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FChangeBuffStatusDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAddExpDelegate, int64, addExp, int64, NowExp, EPalExpCalcType, ExpType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAddEquipWazaDelegate, EPalWazaID, WazaID);
    
    UPROPERTY(BlueprintAssignable)
    FUpdateLevelDelegate OnUpdateLevelDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateRankDelegate OnUpdateRankDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateRankUpExpDelegate OnUpdateRankUpExpDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FAddExpDelegate OnAddExpDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateHPDelegate OnUpdateHPDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FRevivedParameterDelegate OnRevivedParameterDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateSPDelegate OnUpdateSPDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateFullStomachDelegate OnUpdateFullStomachDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateHungerTypeDelegate OnUpdateHungerTypeDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateNickNameDelegate OnUpdateNickNameDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateNickNameWithParameterDelegate OnUpdateNickNameWithParameterDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateShieldMaxHPDelegate OnUpdateShieldMaxHPDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateShieldHPDelegate OnUpdateShieldHPDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FShieldDamageDelegate OnShieldDamageDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateSanityDelegate OnUpdateSanityDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateUnusedStatusPointDelegate OnUpdateUnusedStatusPoint;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateStatusPointDelegate OnUpdateStatusPointDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FChangeBuffStatusDelegate OnChangeBuffDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FConditionChangedDelegate OnConditionChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FWorkSuitabilityChangedDelegate OnWorkSuitabilityChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FGotStatusPointListChangedDelegate OnGotStatusPointListChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FStatusRankChangedDelegate OnStatusRankChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FInvaderTargetChangedDelegate OnInvaderTargetChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FTriedConsumeFoodDelegate OnTriedConsumeFoodDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateGroupIdDelegate OnUpdateGroupIdDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateReviveTimerDelegate OnUpdateReviveTimerDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateWorkSuitabilityOptionDelegate OnUpdateWorkSuitabilityOptionDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FTalentChangedDelegate OnTalentChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateBaseCampIdDelegate OnUpdateBaseCampIdDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangedFavoriteIndexDelegate OnChangedFavoriteIndexDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangedAssignedToExpeditionDelegate OnChangedAssignedToExpeditionDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateIndividualIDDelegate OnUpdateIndividualIDDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateWorkSuitabilityRankDelegate OnUpdateWorkSuitabilityRankDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnPassiveSkillUpdateDelegate OnPassiveSkillUpdateDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnGenderUpdateDelegate OnGenderUpdateDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateFriendshipRankDelegate OnUpdateFriendshipRankDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateFriendshipPointDelegate OnUpdateFriendshipPointDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FEndMedicalBedDelegate OnEndMedicalBedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnRevivedDelegate OnRevivedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FDeadBodyDelegate OnDeadBodyDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateSkinNameDelegate OnUpdateSkinNameDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateArenaRankPointDelegate OnUpdateArenaRankPointDelegate;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_IndividualActor)
    APalCharacter* IndividualActor;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_IndividualId)
    FPalInstanceID IndividualId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<int32, APalCharacter*> PhantomActorMap;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_PhantomActorReplicateArray)
    TArray<FPalPhantomReplicateInfo> PhantomActorReplicateArray;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    bool bIsParts;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    UPalIndividualCharacterParameter* ParentParameter;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    bool bRedirectDamage;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    bool bCanTargetFromAI;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bNeedResetShieldHP;
    
    UPROPERTY(EditInstanceOnly, ReplicatedUsing=OnRep_SaveParameter)
    FPalIndividualCharacterSaveParameter SaveParameter;
    
    UPROPERTY(BlueprintAssignable)
    FAddEquipWazaDelegate OnAddEquipWazaDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FChangeEquipWazaDelegate OnChangeEquipWazaDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FChangeMasteredWazaDelegate OnChangeMasteredWazaDelegate;
    
protected:
    UPROPERTY()
    bool IsWaitResponseWordFiltering;
    
    UPROPERTY()
    FString WaitingFilterNickName;
    
    UPROPERTY()
    FGuid WaitingFilterNickNameModifierPlayerUid;
    
    UPROPERTY()
    FString NextFilterNickName;
    
    UPROPERTY()
    FGuid NextFilterNickNameModifierPlayerUid;
    
private:
    UPROPERTY(Transient)
    FFlagContainer DisableNaturalHealing;
    
    UPROPERTY(Transient)
    FFlagContainer DisableNaturalUpdate;
    
    UPROPERTY(Transient)
    FFloatContainer AdditionalNatureHealingRate;
    
    UPROPERTY(Transient)
    FPalIndividualCharacterSaveParameter SaveParameterMirror;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    UPalItemContainer* EquipItemContainer;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid BaseCampId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TSoftClassPtr<APalCharacter> SkinClassPtr;
    
    UPROPERTY(Replicated, Transient)
    EPalExpCalcType LastExpUpdateType;
    
public:
    UPROPERTY(Replicated, Transient)
    FString Debug_CurrentAIActionName;
    
    UPalIndividualCharacterParameter();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool TryFindEatItem(const FPalContainerId& ContainerId, int32& SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void StoreIndividualActorInfoToSaveParameter();
    
    UFUNCTION(BlueprintCallable)
    void StartRemainderOfLifeTimer();
    
    UFUNCTION(BlueprintCallable)
    void StartRecuperatingInMedicalBed();
    
    UFUNCTION(BlueprintCallable)
    void SetWorkSuitabilityAddRank(EPalWorkSuitability WorkSuitability, int32 addRank);
    
    UFUNCTION(BlueprintCallable)
    void SetStatusPoint(FName StatusName, int32 Point);
    
    UFUNCTION(BlueprintCallable)
    void SetSkinName(FName InSkinName);
    
    UFUNCTION(BlueprintCallable)
    void SetSkinAppliedCharacterId(FGuid InCharacterId);
    
    UFUNCTION(BlueprintCallable)
    void SetSkinApplied(bool bIsApplied);
    
    UFUNCTION(BlueprintCallable)
    void SetShieldMaxHP(FFixedPoint64 NextSheildMaxHP);
    
    UFUNCTION(BlueprintCallable)
    void SetShieldHP(FFixedPoint64 NextSheildHP);
    
    UFUNCTION(BlueprintCallable)
    void SetPhysicalHealth(EPalStatusPhysicalHealthType PhysicalHealth);
    
    UFUNCTION(BlueprintCallable)
    void SetParts(UPalIndividualCharacterParameter* InParentParameter, bool InRedirectDamage);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideLevel(int32 OverrideLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetNoFallDamageHeightLastJumpedLocation();
    
    UFUNCTION(BlueprintCallable)
    void SetLastJumpedLocation(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void SetInvaderData(EPalInvaderType InvaderType, const FGuid InBaseCampId);
    
    UFUNCTION(BlueprintCallable)
    void SetInArena(bool InArena);
    
    UFUNCTION(BlueprintCallable)
    void SetForcePartBreak();
    
    UFUNCTION(BlueprintCallable)
    void SetExStatusPoint(FName StatusName, int32 Point);
    
    UFUNCTION()
    void SetDisableNaturalUpdate(FName Key, bool Disable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableNaturalHealing(FName Key, bool Disable);
    
    UFUNCTION(BlueprintCallable)
    void SetDecreaseFullStomachRates(const FName Name, float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetCanTargetFromAI(bool bInCanTargetFromAI);
    
    UFUNCTION(BlueprintCallable)
    void ResetLastJumpedLocation();
    
    UFUNCTION(BlueprintCallable)
    void RemovePassiveSkill(FName SkillId);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEquipWaza(EPalWazaID WazaID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDecreaseFullStomachRates(const FName Name);
    
    UFUNCTION(BlueprintCallable)
    void RecuperateInMedicalBed();
    
    UFUNCTION(BlueprintCallable)
    void PartyPalMealInventoryFood();
    
    UFUNCTION()
    void OnRep_SaveParameter();
    
    UFUNCTION()
    void OnRep_PhantomActorReplicateArray();
    
    UFUNCTION()
    void OnRep_IndividualId();
    
    UFUNCTION()
    void OnRep_IndividualActor();
    
protected:
    UFUNCTION()
    void OnReceivedWordFilteringResult(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode);
    
public:
    UFUNCTION()
    void OnChangedBlockedUsersByUserId(const FString& UserId);
    
protected:
    UFUNCTION()
    void OnChangedBlockedUsers();
    
public:
    UFUNCTION(BlueprintCallable)
    void NaturalUpdateSaveParameter(const EPalCharacterNaturalUpdateType Type);
    
    UFUNCTION(BlueprintPure)
    bool IsStatusPointAllMax();
    
    UFUNCTION(BlueprintPure)
    bool IsStatusPointAddable(FName StatusName, int32& AddablePoint);
    
    UFUNCTION(BlueprintPure)
    bool IsSleeping() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSkinApplied() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRedirectDamage() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRarePal() const;
    
    UFUNCTION(BlueprintPure)
    bool IsParts() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPartBroken() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOverrideLevel() const;
    
    UFUNCTION(BlueprintPure)
    bool IsNoFallDamageLastJumpedLocation() const;
    
    UFUNCTION(BlueprintPure)
    bool IsNocturnal() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLevelMax() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInArena() const;
    
    UFUNCTION(BlueprintPure)
    bool IsImportedCharacter() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHPFullRecovered();
    
    UFUNCTION(BlueprintPure)
    bool IsFavoritePal() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEnablePlayerRespawnInHardcore() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAssignedToExpeditionIn(const FGuid& MapObjectConcreteInstanceId) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAssignedToExpedition() const;
    
private:
    UFUNCTION(BlueprintPure)
    float HungerParameterRate() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool HasWorkSuitabilityRank(const EPalWorkSuitability InWorkSuitability, const int32 SuitabilityRank) const;
    
    UFUNCTION(BlueprintPure)
    bool HasWorkSuitability(const EPalWorkSuitability InWorkSuitability) const;
    
    UFUNCTION(BlueprintPure)
    bool HasMasteredWaza(EPalWazaID WazaID);
    
    UFUNCTION(BlueprintPure)
    bool HasGenusCategory(EPalGenusCategoryType Category);
    
    UFUNCTION(BlueprintPure)
    int32 GetWorkSuitabilityRankWithCharacterRank(const EPalWorkSuitability WorkSuitability) const;
    
    UFUNCTION(BlueprintPure)
    TMap<EPalWorkSuitability, int32> GetWorkSuitabilityRanksWithCharacterRank() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetWorkSuitabilityRank(const EPalWorkSuitability InWorkSuitability) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetWorkSpeedRank() const;
    
    UFUNCTION(BlueprintPure)
    EPalBaseCampWorkerSickType GetWorkerSick() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetUnusedStatusPoint() const;
    
    UFUNCTION(BlueprintPure)
    FName GetUniqueNPCID() const;
    
    UFUNCTION(BlueprintPure)
    EPalTribeID GetTribeID() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTotalStatusPoint(FName StatusName) const;
    
    UFUNCTION(BlueprintPure)
    void GetStatusPointList(TArray<FPalGotStatusPoint>& OutPointList) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetStatusPoint(FName StatusName) const;
    
    UFUNCTION(BlueprintPure)
    FName GetSkinName() const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetSkinAppliedCharacterId() const;
    
    UFUNCTION(BlueprintPure)
    EPalSizeType GetSizeType() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetShotAttack_withBuff() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetShotAttack() const;
    
    UFUNCTION(BlueprintPure)
    FFixedPoint64 GetShieldMaxHP();
    
    UFUNCTION(BlueprintPure)
    FFixedPoint64 GetShieldHP();
    
    UFUNCTION(BlueprintPure)
    FPalIndividualCharacterSaveParameter GetSaveParameter() const;
    
    UFUNCTION(BlueprintPure)
    float GetSanityValue() const;
    
    UFUNCTION(BlueprintPure)
    float GetSanityRate() const;
    
    UFUNCTION(BlueprintPure)
    FPalFoodRegeneInfo GetRegeneItemName() const;
    
private:
    UFUNCTION(BlueprintPure)
    float GetRatePassiveSkillInBaseCamp(EPalPassiveSkillEffectType EffectType, const FPalPassiveSkillEffectKeyOption& EffectOption) const;
    
    UFUNCTION(BlueprintPure)
    float GetRatePartnerSkill(EPalPassiveSkillEffectType EffectType) const;
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetRankUpExp() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRank() const;
    
    UFUNCTION(BlueprintPure)
    EPalStatusPhysicalHealthType GetPhysicalHealth() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetPassiveSkillList();
    
    UFUNCTION(BlueprintPure)
    float GetPassiveRateBySkillEffect(EPalPassiveSkillEffectType EffectType) const;
    
    UFUNCTION(BlueprintPure)
    float GetPassiveRateByEquipment(EPalPassiveSkillEffectType EffectType) const;
    
    UFUNCTION(BlueprintPure)
    UPalIndividualCharacterParameter* GetParentParameter() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPalSoulRank() const;
    
    UFUNCTION(BlueprintPure)
    FPalInstanceID GetPalId() const;
    
    UFUNCTION(BlueprintPure)
    float GetPalEnhancementStatusRate_Defense() const;
    
    UFUNCTION(BlueprintPure)
    float GetPalEnhancementStatusRate_Attack() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetOverrideLevel() const;
    
    UFUNCTION(BlueprintPure)
    void GetNickNameWithOnlineID(FString& outName) const;
    
    UFUNCTION(BlueprintPure)
    void GetNickNameByCheckBlockedUser(FString& outName) const;
    
    UFUNCTION(BlueprintPure)
    void GetNickname(FString& outName) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMeleeAttack_withBuff() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMeleeAttack() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxSanityValue() const;
    
    UFUNCTION(BlueprintPure)
    FFixedPoint64 GetMaxHP_withBuff() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxHP() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxFullStomach() const;
    
    UFUNCTION(BlueprintPure)
    TArray<EPalWazaID> GetMasteredWaza() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetLevel() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLastJumpedLocation() const;
    
    UFUNCTION(BlueprintPure)
    APalCharacter* GetIndividualActor() const;
    
    UFUNCTION(BlueprintPure)
    EPalStatusHungerType GetHungerType() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHPRank() const;
    
    UFUNCTION(BlueprintPure)
    FFixedPoint64 GetHP() const;
    
    UFUNCTION(BlueprintPure)
    EPalGroupType GetGroupType() const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetGroupId() const;
    
    UFUNCTION(BlueprintPure)
    EPalGenderType GetGenderType() const;
    
    UFUNCTION(BlueprintPure)
    float GetFullStomachRate() const;
    
    UFUNCTION(BlueprintPure)
    float GetFullStomachDecreasingRate() const;
    
    UFUNCTION(BlueprintPure)
    float GetFullStomach() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetFriendshipRank() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetFriendshipPoint() const;
    
    UFUNCTION(BlueprintPure)
    float GetFoodStatusRate(EPalFoodStatusEffectType EffectType) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetFavoriteIndex() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetExStatusPoint(FName StatusName) const;
    
    UFUNCTION(BlueprintPure)
    int64 GetExp() const;
    
    UFUNCTION(BlueprintPure)
    TArray<EPalWazaID> GetEquipWaza() const;
    
    UFUNCTION(BlueprintPure)
    FPalContainerId GetEquipItemContainerId() const;
    
    UFUNCTION(BlueprintPure)
    FPalIndividualCharacterEquipItemContainerHandler GetEquipItemContainerHandler() const;
    
    UFUNCTION(BlueprintPure)
    TArray<EPalWazaID> GetEquipableWaza() const;
    
    UFUNCTION(BlueprintPure)
    float GetEffectFoodTimeRate() const;
    
    UFUNCTION(BlueprintPure)
    FName GetEffectFoodName() const;
    
    UFUNCTION()
    bool GetDisableNaturalUpdate();
    
    UFUNCTION(BlueprintPure)
    int32 GetDefense_withBuff() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDefense() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDefenceRank() const;
    
    UFUNCTION(BlueprintPure)
    EPalWorkSuitability GetCurrentWorkSuitability() const;
    
    UFUNCTION(BlueprintPure)
    float GetCraftSpeedSickRate() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCraftSpeedByWorkSuitability(const EPalWorkSuitability WorkSuitability) const;
    
    UFUNCTION(BlueprintPure)
    float GetCraftSpeedBuffRate(const EPalWorkSuitability WorkSuitability) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCraftSpeed_withBuff_WorkSuitability(const EPalWorkSuitability Suitability) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCraftSpeed_withBuff() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCraftSpeed() const;
    
    UFUNCTION(BlueprintPure)
    FName GetCharacterID() const;
    
    UFUNCTION(BlueprintPure)
    TSoftClassPtr<APalCharacter> GetCharacterClass();
    
    UFUNCTION(BlueprintPure)
    EPalBaseCampWorkerEventType GetBaseCampWorkerEventType() const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetBaseCampId() const;
    
    UFUNCTION(BlueprintPure)
    float GetBaseCampCraftSpeedBuffRate() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAttackRank() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetArenaRankPoint() const;
    
    UFUNCTION(BlueprintPure)
    EPalArenaRank GetArenaRank() const;
    
    UFUNCTION(BlueprintPure)
    float GetAffectSanityValue() const;
    
    UFUNCTION(BlueprintCallable)
    void FullRecoveryHP();
    
    UFUNCTION(BlueprintCallable)
    void EndRecuperatingInMedicalBed();
    
    UFUNCTION(BlueprintCallable)
    void DecrementUnusedStatusPoint();
    
    UFUNCTION(BlueprintCallable)
    void DecreaseShieldHPByDamage(int32 Damage);
    
    UFUNCTION(BlueprintCallable)
    void ClearEquipWaza();
    
    UFUNCTION(BlueprintPure)
    bool CanTargetFromAI() const;
    
    UFUNCTION(BlueprintPure)
    bool CanAddTalentByItem(FName ItemName) const;
    
    UFUNCTION(BlueprintCallable)
    void AddPassiveSkill(FName AddSkill, FName OverrideSkill);
    
    UFUNCTION(BlueprintCallable)
    void AddHP(FFixedPoint64 PlusHP);
    
    UFUNCTION(BlueprintCallable)
    void AddFriendShip(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void AddEquipWaza(EPalWazaID WazaID);
    
};

