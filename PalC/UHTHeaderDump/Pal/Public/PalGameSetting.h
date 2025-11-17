#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EPalArenaRank.h"
#include "EPalBaseCampItemContainerType.h"
#include "EPalBaseCampPassiveEffectWorkHardType.h"
#include "EPalBuildObjectInstallStrategy.h"
#include "EPalCaptureSphereLevelType.h"
#include "EPalCharacterImportanceType.h"
#include "EPalDamageTextType.h"
#include "EPalElementType.h"
#include "EPalFacialEyeType.h"
#include "EPalMonsterControllerBaseCampLogType.h"
#include "EPalOptimizeType.h"
#include "EPalPassiveSkillEffectTargetItemType.h"
#include "EPalPlayerSprintStaminaDecreaseType.h"
#include "EPalStatusID.h"
#include "EPalSupportedPlatformType.h"
#include "EPalUIRewardDisplayType.h"
#include "EPalWeaponType.h"
#include "EPalWorkAssignableCheckResult.h"
#include "EPalWorkSuitability.h"
#include "EPalWorkType.h"
#include "PalBaseCampPassiveEffectWorkHardInfo.h"
#include "PalCaptureBonusExpTableSetting.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalDataTableRowName_MapObjectData.h"
#include "PalDataTableRowName_RecipeTechnologyData.h"
#include "PalDebugOtomoPalInfo.h"
#include "PalDeforestRankDefineData.h"
#include "PalDungeonMarkerPointSpawnParameter.h"
#include "PalEggRankInfo.h"
#include "PalItemFilterPreference.h"
#include "PalLanternItemSetting.h"
#include "PalMapObjectRepairInfo.h"
#include "PalMiningRankDefineData.h"
#include "PalNavigationUpdateFrequencySetting.h"
#include "PalOptimizeParameter.h"
#include "PalPassiveSkillEffectItemTypeInfo.h"
#include "PalPickingItemSetting.h"
#include "PalWorkAssignDefineDataStaticSetting.h"
#include "PalWorkSuitabilityCollectionDefineData.h"
#include "PalWorkSuitabilityDefineData.h"
#include "PalWorkSuitabilityDeforestDefineData.h"
#include "PalWorkSuitabilityMiningDefineData.h"
#include "PalWorkTypeSet.h"
#include "PalWorldSecurityWantedPoliceSettingData.h"
#include "Templates/SubclassOf.h"
#include "PalGameSetting.generated.h"

class AActor;
class UDataTable;
class UFont;
class UNiagaraSystem;
class UObject;
class UPalIndividualCharacterHandle;
class UPalOptimizeParameterSetting;
class UPalOptionSubsystem;

UCLASS(Blueprintable)
class UPalGameSetting : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 CharacterMaxLevel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 GuildCharacterMaxLevel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 OtomoLevelSyncAddMaxLevel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalPlayerSprintStaminaDecreaseType PlayerSprintStaminaType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 CharacterMaxRank;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ConsumStamina_PalThrow;
    
    UPROPERTY(EditDefaultsOnly)
    float ReturnOtomoPalCoolTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 OtomoSlotNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OtomoWazaCoolDownSpeedRate;
    
    UPROPERTY(EditDefaultsOnly)
    float BerserkerOtomoSerchRadius_FromPlayer;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OtomoWarpFarDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float OtomoReturnFarDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float OtomoWorkTargetCameraAngleRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PlayerHPRateFromRespawn;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PlayerStomachRateFromRespawn;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RarePal_AppearanceProbability;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RarePal_LevelMultiply;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 BossOrRarePal_TalentMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 CharacterRankUpRequiredNumDefault;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<int32, int32> CharacterRankUpRequiredNumMap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float NaturalUpdateSaveParameterInterval;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CharacterHUDDisplayRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CharacterFedEatingTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CharacterStayingSecondsInSpa;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 PalBoxPageNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 PalBoxSlotNumInPage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 PalBoxTimePeriodRecoverySick;
    
    UPROPERTY(EditDefaultsOnly)
    float PlayerBattleJudge_EnemyDistance;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<int32, float> BodyTemperature_SlipDamage_Percent;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<int32, float> BodyTemperature_StomachDecreaceRate;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UNiagaraSystem> SleepFXDefault;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSoftObjectPtr<UNiagaraSystem>> RemoveFXOnDead;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LiftupCharacterThrownVelocityScalar;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LiftupCharacterClearCollisionDelayTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 NickNameMaxLength;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float IntervalForPalAttackFromBall;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool CanShootRiderByFullRide;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool HitWazaAttackForMapObject;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 KnockBack_MaxHpPercent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float KnockBack_Power;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StunTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StepCooldownTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AirDashCooldownTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Stun_GunDamageRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsEnableAutoReload;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DeadShootImpulseRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DeadShootImpulseMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OtomoDamageRate_Defense;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 DamageValueMin_MapObject;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DamageRate_WealPoint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DamageRate_StrongPoint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DamageRate_SleepHit;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FinalDamageRate_Waza;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FinalDamageRate_Weapon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FinalDamageRate_Mine;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FinalDamageRate_MapObject_Waza;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FinalDamageRate_MapObject_Weapon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FinalDamageRate_MapObject_Mine;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FinalDamageRate_MapObject_WorkActionAttack;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FoliageDefault_Defense;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WazaAttackerLevelDamage_Power;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DamageRandomRate_Min;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DamageRandomRate_Max;
    
    UPROPERTY(EditDefaultsOnly)
    float LevelDamageCorrect;
    
    UPROPERTY(EditDefaultsOnly)
    float LevelStatusAccumulateCorrect;
    
    UPROPERTY(EditDefaultsOnly)
    float DamageElementMatchRate;
    
    UPROPERTY(EditDefaultsOnly)
    float MineAttack_DefensePower;
    
    UPROPERTY(EditDefaultsOnly)
    float PlayerVsPlayer_WeaponPower;
    
    UPROPERTY(EditDefaultsOnly)
    float PlayerVsPlayer_DefensePower;
    
    UPROPERTY(EditDefaultsOnly)
    float PlayerVsPlayer_DamageRate;
    
    UPROPERTY(EditDefaultsOnly)
    float CoolTimeIgnoreLeanBackWildBoss_ByStunAndBlow;
    
    UPROPERTY(EditDefaultsOnly)
    float VsFlyingDamageRateForPvP;
    
    UPROPERTY(EditDefaultsOnly)
    float PlayerToGuildPalDamageRateForPvP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StatusCalculate_LevelMultiply_HP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 StatusCalculate_TribePlus_HP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 StatusCalculate_ConstPlus_HP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StatusCalculate_LevelMultiply_Attack;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 StatusCalculate_ConstPlus_Attack;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StatusCalculate_LevelMultiply_Defense;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 StatusCalculate_ConstPlus_Defense;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StatusCalculate_TribeMultiply_CraftSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StatusCalculate_GenkaiToppa_PerAdd;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StatusCalculate_Talent_PerAdd;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BreakedWeaponDamageRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BreakedArmorDefenseRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ArmorDurabilityDamageDivide;
    
    UPROPERTY(EditDefaultsOnly)
    float PalEnhancement_AttackRate;
    
    UPROPERTY(EditDefaultsOnly)
    float PalEnhancement_AttackRate2;
    
    UPROPERTY(EditDefaultsOnly)
    float PalEnhancement_AttackRate3;
    
    UPROPERTY(EditDefaultsOnly)
    float PalEnhancement_DefenseRate;
    
    UPROPERTY(EditDefaultsOnly)
    float PalEnhancement_DefenseRate2;
    
    UPROPERTY(EditDefaultsOnly)
    float PalEnhancement_DefenseRate3;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ClimbingStamina_Move;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ClimbingStamina_Jump;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RideWazaStaminaRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsEnableJumpPreliminary;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float JumpInterval;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FlyMaxHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FlyHover_SP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FlyHorizon_SP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FlyHorizon_Dash_SP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FlyVertical_SP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AimingSpeedRateInRide;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SlidingEndSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 JumpSP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 StepSP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MeleeAttackSP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SprintSP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GliderSP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SwimmingFallWaitTimeSec;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Swimming_SP_Idle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Swimming_SP_Swim;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Swimming_SP_DashSwim;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FluidFriction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OverWeightSpeedZero_AddPercent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OverWeightMinSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WalkableFloorAngleForDefault;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WalkableFloorAngleForRide;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsEnableSpeedCollision;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CollisionDamageMinSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float SpeedCollisionDamagePower;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CollisionDamageSpeedMultiplay;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CollisionDamageWeightThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AutoHPRegene_Percent_perSecond;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AutoHPRegene_Percent_perSecond_Sleeping;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PosionHPDecrease_Percent_perSecond;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Starvation_DecreaseHP_Percent_perSecond;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AutoSANRegene_Percent_perSecond_PalStorage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StomachDecreace_perSecond_Monster;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StomachDecreace_perSecond_Player;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StomachDecreace_AutoHealing;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StomachDecreace_WorkingRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 HungerStart_StomachValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 FullStomachPalStartEatFood;
    
    UPROPERTY(EditDefaultsOnly)
    float FullStomachCost_ByWazaUse_Base;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<int32, float> FullStomachCost_ByWazaUse_RateMap;
    
    UPROPERTY(EditDefaultsOnly)
    float StomachDecreaceRate_GroundRide_Sprint;
    
    UPROPERTY(EditDefaultsOnly)
    float StomachDecreaceRate_WaterRide;
    
    UPROPERTY(EditDefaultsOnly)
    float StomachDecreaceRate_WaterRide_Sprint;
    
    UPROPERTY(EditDefaultsOnly)
    float StomachDecreaceRate_FlyRide;
    
    UPROPERTY(EditDefaultsOnly)
    float StomachDecreaceRate_FlyRide_Sprint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RemainderOfLife_Second;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HpDecreaseRate_Drowning;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PlayerShield_RecoverStartTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PlayerShield_RecoverPercentPerSecond;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StaminaRecover_PercentPerSecond;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ResuscitationTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PlayerDeath_DropOtomoNum;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PlayerDeath_DropOtomoRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PlayerDeath_DropOtomo_HoursCanOpen;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PlayerDeath_DropOtomo_HoursAutoDestroy;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PlayerDeath_DropItemStorage_HoursCanOpen;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PlayerDeath_DropItemStorage_HoursAutoDestroy;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PlayerDyingDamagePerTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ElementStatus_ResistanceInitialValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ElementStatus_AutoDecreasePerSecond;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ElementStatus_ResetResistanceSecond;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 CraftEXP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 PickupItemOnLevelExp;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MapObjectDestroyProceedExp;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MapObjectDistributeExpRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<int32, int32> OtomoExp_LevelDifferenceMap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 OtomoExp_HigherPlayerLevel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 CaptureExpBonusMaxCount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<int32, FPalCaptureBonusExpTableSetting> CaptureExpBonusTableSettingMap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPalDebugOtomoPalInfo> NewGameOtomoPalSet;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FName, int32> NewGameInventoryItemSet;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FName, int32> NewGameLoadoutItemSet;
    
    UPROPERTY(EditDefaultsOnly)
    FVector WorldHUDDisplayOffsetDefault;
    
    UPROPERTY(EditDefaultsOnly)
    float WorldHUDDisplayRangeDefault;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WorldHUDDetailDisplayRange;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FPalDataTableRowName_ItemData> FarmCropWaterItemIds;
    
    UPROPERTY(EditDefaultsOnly)
    float FarmCropGrowupSpeedBySec;
    
    UPROPERTY(EditDefaultsOnly)
    float FarmCropIncreaseRateByWaterFillRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString MaxMoney;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 DefaultMoney;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SneakAttackBackJudgeAngle_Degree;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SneakAttack_PalMeleeWaza_AttackRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AutoAimCameraMoveRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AutoAimCharacterMoveRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AutoAimCameraAdsorptionSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AutoAimLockOnScreenSpaceRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ForceAutoAimTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SellItemRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PalPriceConstantValueA;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PalPriceConstantValueB;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SellPalRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ImportedPalSellPrice;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SearchRangeOnThrowedCharacterLanded;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WorkCompleteReactionRangeFromPlayer;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 WorkerCollectResourceStackMaxNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalFacialEyeType FacialTypeHardWork;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Timeout_WorkerApproachToTarget;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WaitTime_WorkRepairFailedFindPath;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WorkerWaitingNotifyInterval;
    
    UPROPERTY(EditAnywhere)
    float WarpCheckInterval;
    
    UPROPERTY(EditAnywhere)
    float WarpCheckMoveDistanceThreshold;
    
    UPROPERTY(EditAnywhere)
    float WarpThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AutoDecreaseHateValue_PercentMaxHP_PerSecond;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HateDecreaseDamageRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Hate_ForceUp_HPRate_OtomoActive;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Hate_ForceUp_HPRate_IncidentBattle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CombatEndDistance_BattleStartSelfPos_To_SelfPos;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CombatEndDistance_BattleStartSelfPos_To_TargetPos;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CombatEndDistance_BattleStartSelfPos_To_TargetPos_AddFirstTargetDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float NavigationAreaDivideExtents;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FPalNavigationUpdateFrequencySetting> NavigationUpdateFrequencySettingsFromPlayer;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName SaveDataName_WorldBaseInfo;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName SaveDataName_World;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName SaveDataName_PlayerDirectory;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName SaveDataName_LocalData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName SaveDataName_WorldOption;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName SaveDataName_GlobalPalStorage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName SaveDataName_DimensionPalStorageSuffix;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EPalSupportedPlatformType, int32> MaxWorldDataNumMap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 SaveData_BackupIntrerval;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 PalWorldTime_GameStartHour;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 PalWorldMinutes_RealOneMinute;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 NightStartHour;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 NightEndHour;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 PlayerMorningHour;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 PlayerSleepStartHour;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 NightSkipWaitSecond;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LocalPlayerAndOtomo_LightRangeScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector BuildBaseUnitGridDefinition;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BuildSimulationVerticalAdjustRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BuildSimulationVerticalMinLength;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BuildSimulationFoundationFloatingAllowance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EPalBuildObjectInstallStrategy, FVector> BuildSimulationFoundationCheckCollisionScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BuildSimulationRoofHeightOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BuildSimulationStairHeightOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BuildSimulationFoundationHeightOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BuildSimulationLeanAngleMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BuildingProgressInterpolationSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 PlayerRecord_BuildingObjectMaxNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BuildingMaxZ;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SnapBuildObjectTraceDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SnapBuildObjectInstallReticleDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SnapBuildObjectAttachDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SnapBuildObjectMinBoxExtentZ;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float InBuildProcessObjectExpireRealHours;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 BuildObj_HatchedPalCharacterLevel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BuildObj_DamageScarecrowStartRecoveryTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseCampAreaRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PalArriveToWorkLocationRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PalArriveToWorkLocationRangeZ;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseCampNeighborMinimumDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseCampTreasureMapPointAddRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PalRotateSpeedToWork;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseCampFoliageBoundsRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseCampFoliageWorkableRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseCampHungerApproachToPlayer;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseCampHungerUnreachableObjectTimeoutRealSeconds;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HungerHUDDisplayRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WorkAmountBySecForPlayer;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseCampWorkerEventTriggerInterval;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseCampWorkerEventTriggerProbability;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseCampWorkerSanityWarningThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseCampWorkerFinishEatingFullStomach;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseCampWorkerFinishEatingSanity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 BaseCampWorkerFinishEatCount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseCampWorkerRecoverHungryTurnToTargetTimeout;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseCampWorkerStartSleepHpPercentage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseCampWorkerSleepInPlaceRecoverSanityRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseCampWorkerDistancePickableItem;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<EPalBaseCampItemContainerType> BaseCampBuildingItemContainerTypes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FoliageRespawnFailedExtraRangeOfBaseCamp;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseCampPalCombatRange_AddCampRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseCampExtraWorkAreaRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FFloatInterval BaseCampPalWalkTime_BeforeSleep;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseCampPalSleepMinMinutesThrown;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseCampTimeFinishBattleModeAfterEmptyEnemy;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalCharacterImportanceType BaseCampWorkerSimpleMoveThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalCharacterImportanceType BaseCampWorkerMoveModeChangeThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 BaseCampWorkerDirectorTickForAssignWorkByCount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseCampWorkerTimeDetectContinuousStuck;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseCampWorkerMaxTimeReturnBack;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseCampWorkerWanderingSpeedMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseCampWorkerLookToTargetWork;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ReviveWorkAdditionalRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WorkAroundRangeDefault;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<EPalWorkType> IssueNotifyWorkTypes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WorkAmountByManMonth;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WorkNotifyDelayTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    float WorkFinishDelayCallAddWorkNotifyDelayTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WorkIgnitionTorchWaitTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EPalWorkAssignableCheckResult, EPalMonsterControllerBaseCampLogType> WorkAssignFailedLogTypeMap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WorkTransportingSpeedRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPalDataTableRowName_ItemData> BaseCampNotTransportItemBlackList;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WorkTransportingDelayTimeDropItem;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseCampStopProvideEnergyInterval;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EPalBaseCampPassiveEffectWorkHardType, FPalBaseCampPassiveEffectWorkHardInfo> BaseCampPassiveEffectWorkHardInfoMap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseCampWorkCollectionRestoreStashSeconds;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseCampWorkerDirectorBattleRestoreStashSeconds;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WorkTransportingItemNumRateInShouldTeleportWorker;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FPalWorkTypeSet> WorkTypeAssignPriorityOrder;
    
    UPROPERTY(EditDefaultsOnly)
    FPalWorkAssignDefineDataStaticSetting WorkAssignDefineData_Build;
    
    UPROPERTY(EditDefaultsOnly)
    FPalWorkAssignDefineDataStaticSetting WorkAssignDefineData_FoliageWork;
    
    UPROPERTY(EditDefaultsOnly)
    FPalWorkAssignDefineDataStaticSetting WorkAssignDefineData_ReviveCharacterWork;
    
    UPROPERTY(EditDefaultsOnly)
    FPalWorkAssignDefineDataStaticSetting WorkAssignDefineData_TransportItemInBaseCamp;
    
    UPROPERTY(EditDefaultsOnly)
    FPalWorkAssignDefineDataStaticSetting WorkAssignDefineData_RepairBuildObjectInBaseCamp;
    
    UPROPERTY(EditDefaultsOnly)
    FPalWorkAssignDefineDataStaticSetting WorkAssignDefineData_BreedFarm;
    
    UPROPERTY(EditDefaultsOnly)
    FPalWorkAssignDefineDataStaticSetting WorkAssignDefineData_ExtinguishBurn;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FPalWorkAssignDefineDataStaticSetting> WorkAssignDefineData_TreasureBoxUnlock;
    
    UPROPERTY(EditDefaultsOnly)
    float WorkActionAttackDamageRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 WorkSuitabilityMaxRank;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EPalWorkSuitability, FPalWorkSuitabilityDefineData> WorkSuitabilityDefineDataMap;
    
    UPROPERTY(EditDefaultsOnly)
    FPalWorkSuitabilityCollectionDefineData WorkSuitabilityDefineData_Collection;
    
    UPROPERTY(EditDefaultsOnly)
    FPalWorkSuitabilityDeforestDefineData WorkSuitabilityDefineData_Deforest;
    
    UPROPERTY(EditDefaultsOnly)
    FPalWorkSuitabilityMiningDefineData WorkSuitabilityDefineData_Mining;
    
    UPROPERTY(EditDefaultsOnly)
    int32 DropItemWaitInsertMaxNumPerTick;
    
    UPROPERTY(EditDefaultsOnly)
    float MergeDropItemRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalItemFilterPreference ItemFilterPreference;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FPalDataTableRowName_ItemData, FPalPickingItemSetting> PickingItemSetting;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FPalDataTableRowName_ItemData, FPalLanternItemSetting> LanternItemSetting;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalDungeonMarkerPointSpawnParameter DungeonSpawnParameterDefault;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GamePad_NotAimCameraRotateSpeed_DegreePerSecond;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GamePad_AimCameraRotateSpeed_DegreePerSecond;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Mouse_NotAimCameraRotateSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Mouse_AimCameraRotateSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float YawCameraMaxSpeedRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TimeForCameraMaxSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AimInterpInterval;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 InvaderSelfDeleteAddTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 VisitorSelfDeleteTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float InvadeProbability;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 InvadeOccurablePlayerLevel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 InvadeJudgmentInterval_Minutes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 InvadeCollTime_Max_Minutes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 InvadeCollTime_Min_Minutes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 InvadeReturnTime_NotArrived_Minutes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 InvadeReturnTime_AfterArrival_Minutes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 InvadeStartPoint_BaseCampRadius_Min_cm;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 InvadeStartPoint_BaseCampRadius_Max_cm;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float VisitorNPCProbability;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 VisitorNPCReturnTime_Minutes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RecruitBadPalProbability;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RecruitCarreerTextNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RecruitAppealDefaultTextNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RecruitContractFeeMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RidingAimOpacity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RidingAimLowAngleOpacity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float hideUITimeWhenNotConflict;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float firstCapturedUIDisplayTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float capturedUIDisplayTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float firstActivatedOtomoInfoDisplayTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float playerLevelUpUIDIsplayTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float playerExpGaugeUIDisplayTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float otomoExpGaugeUIDisplayTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float npcGaugeDisplayDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float npcGaugeDisplayDistance_PVP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OtherOtomoGaugeDisplayDistance_PVP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float npcGaugeDisplayRange_CameraSight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float npcGaugeDisplayRange_CameraSight_PVP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OtherOtomoGaugeDisplayRange_CameraSight_PVP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GuildMemberGaugeDisplayDIstance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float downPlayerLoupeDisplayDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float downPlayerGaugeDisplayRange_CameraSight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D ReticleOffsetRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 lowHealthEffectParcent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EPalDamageTextType, int32> damageTextMargineMap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DamageTextDisplayLength;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DamageTextDisplayLength_PVP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D damageTextMaxOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float damageTextOffsetInterpolationLength;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EPalDamageTextType, float> damageTextScaleMap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D damageTextRandomOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 strongEnemyMarkLevel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float otomoInteractUIDisplayDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float enemyMarkUIMinScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float enemyMarkScaleInterpolationLength;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D npcHPGaugeGlobalOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float delayGaugeStartTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float delayGaugeProgressPerSecond;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float inventoryWeaponRangeMaxBorder;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float inventoryWeaponStabilityMinBorder;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float inventoryWeaponAccuracyMinBorder;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float worldmapUIMaskClearSize;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float worldmapUIFTMergeDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 worldmapUIMaxMarker;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float NPCHPGaugeUpdateSpan;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CaptureFailedUIDisplayTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPalDataTableRowName_ItemData> CaptureSphereSortArray;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OpenGameOverUITime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BlockRespawnTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float InventoryWeightAlertRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float InventoryWeightGaugeDIsplayTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OtomoLevelUpNoticeUIDisplayTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OtomoMasteredWazaNoticeUIDisplayTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ProgressGaugeInterpolationSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TeleportFadeInTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TeleportFadeOutTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PlayerTeleportTimeoutTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<float> PassiveSkillAppendNumWeights;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EPalPassiveSkillEffectTargetItemType, FPalPassiveSkillEffectItemTypeInfo> PassiveSkillEffectItemTypeMap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsEggLauncherExplosion;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ThrowPalBattleRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ThrowPalWorkRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RopeHitPowe;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RopePullPower;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DefaultMaxInventoryWeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RaycastLengthForDetectIndoor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MapObjectConnectAnyPlaceRaycastLength;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ShootingTargetRayCastDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<float> CaptureJudgeRateArray;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 CaptureBallBoundCountMax;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> ExceptCapturedItemList;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EPalCaptureSphereLevelType, int32> CaptureSphereLevelMap;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EPalStatusID, float> CaptureRateAddByStatusMap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float IgnoreFirstCaptureFailedHPRate;
    
    UPROPERTY(EditDefaultsOnly)
    float CaptureRateAdd_ByLegHold;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 CriticalCaptureBonus;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LongPressInterval;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LongPressInterval_EnemyCampCage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LongPressInterval_StartRaidBoss;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LongPressInterval_GetHatchedPal;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LongPressInterval_TreasureMapPoint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CrouchLockAttenuation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsEnableCharacterWazaScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsOverrideDamageAdditiveAnimation;
    
    UPROPERTY(EditDefaultsOnly)
    float BlinkInterval;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WorkAnimSpeedPower;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CrimeStateMaintainDurationBaseDefault;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 technologyPointPerLevel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 bossTechnologyPointPerTowerBoss;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 bossTechnologyPointPerNormalBoss;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPalDataTableRowName_RecipeTechnologyData> DefaultUnlockTechnology;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 DefaultTechnologyPoint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 TechnologyPoint_UnlockFastTravel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DecreaseSanity_DamagedMultiply;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 FullStomachPercent_RecoverySanity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RecoverySanity_FullStomach;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DecreaseSanity_Hunger;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DecreaseSanity_Starvation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool Spawner_IsCheckLoadedWorldPartition;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SpawnerDisableDistanceCM_FromBaseCamp;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Spawner_DefaultSpawnRadius_S;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Spawner_DefaultSpawnRadius_M;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Spawner_DefaultSpawnRadius_L;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Spawner_DefaultSpawnRadius_NPC;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Spawner_DefaultDespawnDistance_S;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Spawner_DefaultDespawnDistance_M;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Spawner_DefaultDespawnDistance_L;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Spawner_DefaultDespawnDistance_NPC;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* CharacterHeadMeshDataTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* CharacterBodyMeshDataTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* CharacterHairMeshDataTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* CharacterEquipmentArmorMeshDataTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* CharacterEyeMaterialDataTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* GliderMeshDataTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CharacterMakeColorLimit_SV;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsAutoEquipMasteredWaza;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool ActiveUNKO;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxSpawnableDeathPenaltyChest;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxSpawnableDeathDroppedCharacter;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName BuildObjectInstallStrategy_SinkAllowCollisionPresetName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MapObjectShakeTimeOnDamaged;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector MapObjectShakeOffsetOnDamaged;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MapObjectOutlineByReticleTargetting;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MapObjectOutlineByInteractable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalMapObjectRepairInfo MapObjectRepairInfo;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FoliageExtentsXY;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 FoliageChunkSeparateScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MapObjectHPDisplayDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OilrigCannonHPDisplayDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MapObjectHPDisplayTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MapObjectMultiplayModifierDisplayDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MapObjectMultiplayModifierDisplayTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MapObjectGateLockTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bDirectObtainFromTreasureBox;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float NoDropItemDamageRateFromFoliageMaxHp;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<EPalWeaponType> WeaponTypesForceDropItemFromFoliage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MapObjectEffectTriggerAccumulate_Burn;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MapObjectEffect_Burn_DamageHpRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector MapObjectEffect_Burn_DamageAroundRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MapObjectEffect_Burn_DamageAroundInterval;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MapObjectEffect_Burn_DamageAroundDamageValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MapObjectEffect_Burn_DamageAroundAccumulateValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MapObjectEffect_Burn_DamageAroundAccumulateValue_ForCharacter;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 PasswordLockFailedMaxNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MapObjectItemChestCorruptionRateFromWorkSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MapObjectItemChestUnlockAutoPrivateTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector MapObjectDropItemLocationOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DetectorMaxRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 TreasureMapPointActivateMaxNum;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPalOptimizeParameter RuntimeOptimizeParameter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<int32, FPalWorldSecurityWantedPoliceSettingData> WorldSecurityWantedPoliceSettingDataMap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<int32, FPalWorldSecurityWantedPoliceSettingData> WorldSecurityWantedPoliceSettingDataMapForDS;
    
    UPROPERTY(BlueprintReadOnly)
    int32 StatusPointPerLevel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AddMaxHPPerStatusPoint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AddMaxSPPerStatusPoint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AddPowerPerStatusPoint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AddMaxInventoryWeightPerStatusPoint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AddCaptureLevelPerStatusPoint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AddWorkSpeedPerStatusPoint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AddMaxHPPerHPRank;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AddAttackPerAttackRank;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AddDefencePerDefenceRank;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AddWorkSpeedPerWorkSpeedRank;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxUseablePoint_SumStatusPointAndExStatusPoint_PerParameter;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<float> Combi_TalentInheritNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<float> Combi_PassiveInheritNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<float> Combi_PassiveRandomAddNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Combi_BossPalRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPalEggRankInfo> PalEggRankInfoArray;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EPalElementType, FPalDataTableRowName_MapObjectData> PalEggMapObjectIdMap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<int32, float> PalEggHatchingSpeedRateByTemperature;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UFont* DebugInfoFont;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxGuildNameLength;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float JoinGuildRequestInteractLongPushTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 GuildChestSlotNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TutorialMinDisplayTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TutorialDisplayTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EPalUIRewardDisplayType, float> CommonRewardDisplayTime;
    
    UPROPERTY(EditDefaultsOnly)
    float DeadBodyDestroySecond;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float EnemyCampRespawnCoolTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float EnemyCampDespawnDelayTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PalBoxReviveTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AfterNPCTalkDelayTime_Interact;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MinSprintThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxSprintThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MinHPGaugeDisplayTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CombatHeliHPGaugeDisplayDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxOtomoLoadoutCount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ToggleInteractMoveDelay;
    
    UPROPERTY(EditDefaultsOnly)
    float Arena_PlayerToPlayerDamageRate;
    
    UPROPERTY(EditDefaultsOnly)
    float Arena_PlayerToPalDamageRate;
    
    UPROPERTY(EditDefaultsOnly)
    float Arena_PlayerToPlayerStatusRate;
    
    UPROPERTY(EditDefaultsOnly)
    float Arena_PlayerToPalStatusRate;
    
    UPROPERTY(EditDefaultsOnly)
    float Arena_PalToPlayerDamageRate;
    
    UPROPERTY(EditDefaultsOnly)
    float Arena_PalToPalDamageRate;
    
    UPROPERTY(EditDefaultsOnly)
    float Arena_PalToPlayerStatusRate;
    
    UPROPERTY(EditDefaultsOnly)
    float Arena_PalToPalStatusRate;
    
    UPROPERTY(EditDefaultsOnly)
    int32 Arena_RankPoint_WinToPlayer;
    
    UPROPERTY(EditDefaultsOnly)
    int32 Arena_RankPoint_WinToNPC;
    
    UPROPERTY(EditDefaultsOnly)
    int32 Arena_RankPoint_Lose;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EPalArenaRank, int32> Arena_RankRequirePoints;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<int32, float> Arena_RankPointDiffRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 HardcoreLostPalDespawnTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PalEatMotionSpeedWhenStarvation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalDataTableRowName_ItemData PalReverseGenderItemID;
    
    UPROPERTY(EditDefaultsOnly)
    float TeleportInvincibleTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 DoctorMaxSurgiCountInDay;
    
    UPROPERTY(EditDefaultsOnly)
    int32 IceTypeOtomoCorruptionDecreace;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MapIconSize;
    
    UPROPERTY(EditDefaultsOnly)
    float DimensionLockerTimeoutSec;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 FriendshipPoint_Min;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 FriendshipPoint_Max;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 FriendshipPoint_AutoIncrementRequireSanity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 FriendshipPoint_AutoIncrementInteravalMinutes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 FriendshipPoint_AutoIncrementOtomo;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 FriendshipPoint_AutoIncrementActiveOtomo;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 FriendshipPoint_AutoIncrementWorker;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 FriendshipPoint_StomachRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 FriendshipPoint_SanityRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 FriendshipPoint_Petting;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 FriendshipPoint_Starvation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 FriendshipPoint_Sick;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 FriendshipPoint_Dead;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 FriendshipPoint_SleepOnSide;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EPalBaseCampPassiveEffectWorkHardType, float> FriendshipPoint_WorkHardRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 FriendshipRank_AutoFavorite;
    
    UPROPERTY(EditDefaultsOnly)
    int32 TrialPlayMinute;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    UDataTable* SoundSourceDataTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EPalOptimizeType, TSubclassOf<UPalOptimizeParameterSetting>> OptimizeParameterSettingClass;
    
public:
    UPalGameSetting();

    UFUNCTION(BlueprintPure)
    bool TryGetWorkSuitabilityDefineData(const EPalWorkSuitability WorkSuitability, FPalWorkSuitabilityDefineData& outDefineData);
    
    UFUNCTION(BlueprintPure)
    bool IsSoundMuteable(FName RowName);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float GetWeakScale(int32 weakCount);
    
    UFUNCTION(BlueprintPure)
    int32 GetSoundRadius_cm(FName RowName);
    
protected:
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    UPalOptionSubsystem* GetOptionSubsystem(const UObject* WorldContextObject) const;
    
public:
    UFUNCTION(BlueprintPure)
    void GetMiningRankDefineData(int32 MiningRank, FPalMiningRankDefineData& outDefineData);
    
    UFUNCTION(BlueprintPure)
    float GetMiningDamageRate(int32 MiningRank);
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    float GetEnemyMarkScale(const FVector& targetPosition, const FVector& selfPosition);
    
    UFUNCTION(BlueprintPure)
    void GetDeforestRankDefineData(int32 DeforestRank, FPalDeforestRankDefineData& outDefineData);
    
    UFUNCTION(BlueprintPure)
    float GetDeforestDamageRate(int32 DeforestRank);
    
    UFUNCTION(BlueprintPure)
    float GetCollectionDropNumRate(int32 CollectionRank);
    
protected:
    UFUNCTION(BlueprintPure)
    float GetCaptureRateByStatus_ForGameSettingBP(const AActor* TargetPal);
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetCaptureLevelBySphereType(EPalCaptureSphereLevelType SphereType) const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    float CalcCaptureRate(float captureItemLevel, const UPalIndividualCharacterHandle* targetHandle, const UPalIndividualCharacterHandle* throwCharacterHandle);
    
};

