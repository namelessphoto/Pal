#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPalACEWordFilterAPIType.h"
#include "EPalAudioBus.h"
#include "EPalBiomeType.h"
#include "EPalLanguageType.h"
#include "EPalMapObjectOperationResult.h"
#include "EPalMovementSpeedType.h"
#include "EPalRandomizerType.h"
#include "EPalStatusID.h"
#include "PalArenaRule.h"
#include "PalArrowSettings.h"
#include "PalDataTableRowName_GameProgressPreset.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalDataTableRowName_PassiveSkillData.h"
#include "PalDebugAttachPassiveSkillInfo.h"
#include "PalDebugItemCreateInfo.h"
#include "PalDebugOtomoPalInfo.h"
#include "PalDebugPalCaptureInfo.h"
#include "PalStaticItemIdAndNum.h"
#include "Templates/SubclassOf.h"
#include "PalDebugSetting.generated.h"

class APalSoundDebugModel;

UCLASS(BlueprintType, Config=Game)
class UPalDebugSetting : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLoadingScreenVisibilityChangedDelegate, bool, Visible);
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableCommandToServer;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    EPalLanguageType EditorPlayTextLanguageType;
    
    UPROPERTY(Config, EditAnywhere)
    bool IsRequiredLoadPlayerSaveData;
    
    UPROPERTY(Config, EditAnywhere)
    FString DefaultLoadPlayerSaveDataName;
    
    UPROPERTY(Config, EditAnywhere)
    bool IsRequiredLoadWorldSaveData;
    
    UPROPERTY(Config, EditAnywhere)
    FString DefaultLoadWorldSaveDataName;
    
private:
    UPROPERTY(Config, EditAnywhere)
    bool bIsRequiredLoadLocalWorldSaveData;
    
public:
    UPROPERTY(Config, EditAnywhere)
    FGuid EditorServerPlayerUIdOverwrite;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<int32, FGuid> EditorPlayerSaveDataOverwriteMap;
    
    UPROPERTY(Config, EditAnywhere)
    FString PlayerAutoSaveDataName;
    
    UPROPERTY(Config, EditAnywhere)
    FString WorldAutoSaveDataName;
    
    UPROPERTY(Config, EditAnywhere)
    bool bDontAutoSaveInMulti;
    
    UPROPERTY(Config, EditAnywhere)
    FName EditorSaveDirectoryName;
    
    UPROPERTY(Config, EditAnywhere)
    float autoSaveSpan;
    
    UPROPERTY(Config, EditAnywhere)
    bool autoSaveEnable;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAutoSetTruePalMainStats;
    
    UPROPERTY(Config, EditAnywhere)
    FPalDataTableRowName_GameProgressPreset PlayerDefaultPreset;
    
    UPROPERTY(Config, EditAnywhere)
    int32 PlayerLevel;
    
    UPROPERTY(Config, EditAnywhere)
    int32 ForceFixLevelForWildPal;
    
    UPROPERTY(Config, EditAnywhere)
    int32 ForceFixTalent;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TArray<FPalDebugOtomoPalInfo> DefaultOtomoPal;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FPalDebugPalCaptureInfo> DefaultCapturePalInfos;
    
    UPROPERTY(Config, EditAnywhere)
    int32 DefaultCapturePalRandomNum;
    
    UPROPERTY(Config, EditAnywhere)
    int32 DebugInventorySize;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FPalDebugItemCreateInfo> DefaultItem;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FPalDebugItemCreateInfo> DefaultLoadoutItem;
    
    UPROPERTY(Config, EditAnywhere)
    int32 PlayStart_PalWorldTime;
    
    UPROPERTY(Config, EditAnywhere)
    float DebugRate_PalWorldTime;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIgnoreOverWeightMove;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsDisableReticleShoot;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEquipDefaultWeapon;
    
    UPROPERTY(Config, EditAnywhere)
    bool bGetAllBulletItems;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIgnoreItemDurabilityDecrease;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bNotConsumeMaterialsInRepair;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIgnoreDamageCheckByServer;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsMutekiALL;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsMutekiForPlayer;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsMutekiForFriend;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsRemainHpOneOnDamage;
    
    UPROPERTY(Config, EditAnywhere)
    bool bDisableDeathPenalty;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bIgnoreRespawnTimer;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bIsDisableDyingCountdown;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsFixedSP;
    
    UPROPERTY(Config, EditAnywhere)
    bool bDisiablePlayerShield;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsFullPowerForPlayer;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsCaptureSuccessAlways;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsCaptureFailAlways_BounceBall;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsShowActionName;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsShowCharacterStatus;
    
    UPROPERTY(Config, EditAnywhere)
    bool bNotAlertNotValidActionType;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsShowSkillCoolTime;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsShowCharacterTickInfo;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsWazaCoolTimeFast;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsShowUseRootMotion;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bIsEnableClimbing;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bIsDisableFallDamage;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bIsShowPlayerFallHeight;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bIsShowGroundObjectName;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bIsShowForwardObjectName;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bDisableStatus_Darkness;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bIsEnableArachnophobiaMode;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bDisableSkyCreator;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsIgnoreBuildRestrictionBaseCamp;
    
    UPROPERTY(Config, EditAnywhere)
    EPalMovementSpeedType ConfirmTransportItemBaseSpeedType;
    
    UPROPERTY(Config, EditAnywhere)
    float ConfirmTransportItemSpeedMultipleRate;
    
    UPROPERTY(Config, EditAnywhere)
    bool bPrintLogMergeDropItemInBaseCamp;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bNotConsumeMaterialsInBuild;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bNoDropInDisposeBuild;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    float BuildRequiredWorkAmount;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bForceConstructConnector;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsDisableEnemyEyeSight;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bIsEnableNPCDrawRaycastDebug;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bIsHideScreenMessage;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsHungerDisable;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsAllRecipeUnlock;
    
    UPROPERTY(Config, EditAnywhere)
    bool bNotDecreaseWeaponItem;
    
    UPROPERTY(Config, EditAnywhere)
    bool bNotRequiredBulletWhenReload;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShowReticleLocation;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShowAutoAimInfo;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsEnableMouseAutoAim;
    
    UPROPERTY(Config, EditAnywhere)
    float MouseSensitivityRate;
    
    UPROPERTY(Config, EditAnywhere)
    int32 CaptureFPS;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsDisableDropItem;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShowDropItemHitEvent;
    
    UPROPERTY(Config, EditAnywhere)
    bool bPrintLogGroupsWhenGroupOperated;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bIsSoundRangeVisual;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bIsToggleHUDWhenEject;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bIsLookAtDisable;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bPalBoxInLevelBelongingToServerPlayer;
    
    UPROPERTY(Config, EditAnywhere)
    bool bCreateGameInstanceViewActor;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bIsFixedLightingControllerTime;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    float LightingControllerTimeIfFixed;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsShowFloorLocation;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsShowGroundTilt;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsShowOtomoWazaBulletMuzzleOverlapDebugSphere;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsDisableShiftKey;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool IsSpawnAlwaysFromSpawner;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool IsDisableSpawner;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bIsRandomizerType_Override;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    EPalRandomizerType RandomizerType_Override;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bIsRandomizerSeed_Override;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bIsRandomizerSeed_Override_Random;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FString RandomizerSeed_Override;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bIsRandomizerPalLevelRandom_Override;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    float OverrideSpawnRadius;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    float OverrideDespawnRadius;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsPlayerCompleteSTEALTH;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsShowEnemyHate;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsShowEnemyHateArrow;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsShowTargetLocalPlayerList;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsShowMovementMode;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsShowOrganization;
    
    UPROPERTY(Config, EditAnywhere)
    bool bCanAccessToOtherGuildMapObject;
    
    UPROPERTY(Config, EditAnywhere)
    int32 ExpireGuildEnterRequestLogInfoMinutes;
    
    UPROPERTY(Config, EditAnywhere)
    bool bActiveLog_UPalGroupManager_IsInGuild;
    
    UPROPERTY(Config, EditAnywhere)
    bool bFirstBuildPalBox;
    
    UPROPERTY(Config, EditAnywhere)
    float WorkExtraRate;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsDisableFootIK;
    
    UPROPERTY(Config, EditAnywhere)
    bool bBuildInstallCheckLookToCamera;
    
    UPROPERTY(Config, EditAnywhere)
    bool bBuildFXDebugLog;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bFootStepNotify_DebugDisplay;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bSkipBossCutscene;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bShowRangeDistributeExpAround;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bNotDropOtomoAtPlayerDeath;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bNotDropItemsAtPlayerDeath;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bEnableDebugMoveSpeed;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bForceToggleDash;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bDebugAutoRun;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bDrawPlayerInDoor;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    int32 PlayerPalStoragePage;
    
    UPROPERTY(EditAnywhere)
    bool ShowPlayerMoveSpeed;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bSwimming_DebugDisplay;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bSwimming_NoDecreaseSP;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bPartnerSkill_DebugDisplay;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bPartnerSkill_NoDecrease;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    float PartnerSkill_CooldownSpeedRate;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool PartnerSkill_IgnoreRestrictedByItems;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bPartnerSkill_RocketLauncherPVMode;
    
    UPROPERTY(Config, EditAnywhere)
    bool bNotConsumeMaterialsInCraft;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bResearchNotRequireMaterials;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bSelectableRecipeWhenNothingMaterials;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bIgnoreWorkableElementType;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bIgnoreWorkableGenusCategories;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bShowDebugWorkAssign;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bShowDebugWorkAssignTarget;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bForceRunInWork;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bContinueSpeedInTransportWork;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bNotInterruptTransportingWork;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bShowRepairWorkDebugLog;
    
    UPROPERTY(Config, EditAnywhere)
    bool bPrintLogWorkerEventDetail;
    
    UPROPERTY(Config, EditAnywhere)
    float BaseCampWorkerEventTriggerInterval;
    
    UPROPERTY(Config, EditAnywhere)
    bool IgnoreBaseCampTask;
    
    UPROPERTY(Config, EditAnywhere)
    bool bBaseCampSpawnLevelMax;
    
    UPROPERTY(Config, EditAnywhere)
    bool bBaseCampWorkerSanityDetail;
    
    UPROPERTY(Config, EditAnywhere)
    float BaseCampWorkerEatTime;
    
    UPROPERTY(Config, EditAnywhere)
    bool bBaseCampShowCannotTransportTarget;
    
    UPROPERTY(Config, EditAnywhere)
    FPalArrowSettings BaseCampCannotTransportTargetArrowSettings;
    
    UPROPERTY(Config, EditAnywhere)
    bool bBaseCampMoveModeTeleportForce;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShowBaseCampSquaredDistanceFromPlayer;
    
    UPROPERTY(Config, EditAnywhere)
    FPalStaticItemIdAndNum BaseCampItemMoveToInventoryInfoTest;
    
    UPROPERTY(Config, EditAnywhere)
    bool bBaseCampWorkerWaitOnlyRestAction;
    
    UPROPERTY(Config, EditAnywhere)
    bool bVisibleSpawnPointFromPalBox;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    int32 fallBackDefense;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bDebugLogWorldSecurity;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bDebugLogEnableCriminal;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bDebugLogEnableWanted;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bDebugLogEnableCriminalPlayer;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bShowDebugWantedSpawnerSphere;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bTransportGrantedMonsterToPalBox;
    
    UPROPERTY(Config, EditAnywhere)
    bool bInvaderDisable;
    
    UPROPERTY(Config, EditAnywhere)
    float DebugSpawnWildPal_DistanceFromPlayer;
    
    UPROPERTY(Config, EditAnywhere)
    EPalStatusID DebugAddStatus;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bIsDisplayDebug_PassiveSkill;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShowPassiveSkillStatus;
    
    UPROPERTY(Config, EditAnywhere)
    float ShowPassiveSkillStatusRange;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bIgnorePalPassiveSkill;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FPalDataTableRowName_PassiveSkillData> PalPassiveSkillOverride;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bGrantPassiveSkillAlways;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TMap<FPalDataTableRowName_PalMonsterData, FPalDebugAttachPassiveSkillInfo> PassiveSkill_AttachSkill;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bPassiveSkill_CollectItem_10Sec;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bPassiveSkill_LifeSteal_DisplayRecoverHp;
    
    UPROPERTY(Config, EditDefaultsOnly)
    bool bLogMapObjectFailedSpawn;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShowMapObjectDebugDistanceInfinity;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShowMapObjectStatus;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShowMapObjectFoliageStatus;
    
    UPROPERTY(Config, EditAnywhere)
    float ShowMapObjectStatusRange;
    
    UPROPERTY(Config, EditAnywhere)
    FName ShowMapObjectStatusByMapObjectId;
    
    UPROPERTY(Config, EditDefaultsOnly)
    bool bDisablePalFoliageComponentBeginPlay;
    
    UPROPERTY(Config, EditDefaultsOnly)
    bool bShowMapObjectSpawnerStatus;
    
    UPROPERTY(Config, EditDefaultsOnly)
    bool bDisableMapObjectEffect;
    
    UPROPERTY(Config, EditAnywhere)
    bool bDrawDetectMapObjectInDoor;
    
    UPROPERTY(Config, EditAnywhere)
    bool bCanDamageToMapObjectFromSameGroup;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MapObjectHpOverride;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShowUpdateInDoorLog;
    
    UPROPERTY(Config, EditDefaultsOnly)
    float FoliageRespawnIntervalOverrideSeconds;
    
    UPROPERTY(Config, EditAnywhere)
    bool bVisibleFoliageChunk;
    
    UPROPERTY(Config, EditAnywhere)
    bool bCanRegisterPalStaticMeshImposter;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxDrawDistancePalStaticMeshImposter;
    
    UPROPERTY(Config, EditAnywhere)
    float ChunkGridSizePalStaticMeshImposter;
    
    UPROPERTY(Config, EditAnywhere)
    float ActivateStaticMeshImposterDefaultRange;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bVisibleStaticMeshImposterChunk;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnablePalHLODVisibilityControll;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShowPalEggStatus;
    
    UPROPERTY(Config, EditAnywhere)
    float ShowPalEggStatusRange;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    bool bIsHideAllHUD;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsNowHUDHide;
    
    UPROPERTY(Config, EditAnywhere)
    bool bForceCreateDispatchParameterByHUDService;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bShowDebugMapIcon;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    bool bIsHideUIForPV;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    bool bIsCompletePaldex;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    bool bUseFixedPositionPlayerUI;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    bool bForceShowHPGauge;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    bool bForceWordFilter_ACE;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    EPalACEWordFilterAPIType ForceWordFilterAPIType_ACE;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    TArray<int32> ForceDisplayPaldexIndex;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    bool bUseDebugUI_GuildLab;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    bool bShowMsgID;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsFixedRandomSeed;
    
    UPROPERTY(Config, EditAnywhere)
    int32 actionRandomSeed;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAvailableBuildObjectInDevelop;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShowBuildObjectInstallCheck;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<EPalMapObjectOperationResult> IgnoreInstallErrors;
    
    UPROPERTY(Config, EditAnywhere)
    bool bDisableObstacleCheckFromCameraInBuild;
    
    UPROPERTY(Config, EditAnywhere)
    bool bDrawDebugInstallConnection;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bDrawDebugSnapMode;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bDisableBuildObjectChangeVisibility_Imposter;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bDisableBuildObjectChangeVisibility_Significance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bUseEagleForGlider;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bEquipDefaultGlider;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    float ExtraHpRegenRateInSleepingBed;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bUseDebugOffsetConfirmSleepOnSide;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FVector LocationOffsetForConfirmSleepOnSide;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FRotator RotatorOffsetForConfirmSleepOnSide;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bForceDisableLamp;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bForceDisableTimerLight;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bForceDisableTickOptimization;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bForceDisableDamageRandom;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bForceDisableDamagePopup;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bIsShowTickOptimizationType;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bForceDisableAsyncMovement;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bIgnoreFastTravelLock;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TMap<EPalAudioBus, float> AudioBusVolumes;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TMap<EPalAudioBus, bool> AudioBusMute;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bIsShowPostAkEvent;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSubclassOf<APalSoundDebugModel> SoundDebugModelClass;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bIsMuteForPlayerSoundOnly;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bDisplayPlaySoundId;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bPlayFootStepSound;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TArray<FName> IgnoreSoundIds;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bIsSpawnFootStepEffect;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bIsDisableCameraPitchLimit;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bIsIgnoreNetworkVersionCompatible;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bIsUseClientOtomoSetting;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TArray<FPalDebugOtomoPalInfo> DefaultOtomoPalForClient;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bIsForcedSynchronizedMapObject;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bEnableCharacterCountInServer;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bUseDedicatedServerOptimizeInListenServer;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bIsDisableInitRandomCharacterMake;
    
    UPROPERTY(Config, EditAnywhere)
    bool bForceSpawnTreasureBox;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bForceSpawnEnemyCamp;
    
    UPROPERTY(Config, EditAnywhere)
    bool bForceSpawnPalEgg;
    
    UPROPERTY(Config, EditAnywhere)
    bool bForceSpawnRarePal;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool IgnoreAudio;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bIsShowAudioSoundPlayer;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bForceSpawnRandomIncident;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bForceDisableSpawnRandomIncident;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FName ForceSpawnRandomIncidentName;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bForceSpawnRandomIncidentLotteryDataOnly;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bShowRandomIncidentSpawnArea;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bShowRandomIncidentEndArea;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bShowRandomIncidentExcludeArea;
    
    UPROPERTY(Config, EditAnywhere)
    bool bInvadeSetting_Override;
    
    UPROPERTY(Config, EditAnywhere)
    float InvadeProbability_Override;
    
    UPROPERTY(Config, EditAnywhere)
    int32 InvadeOccurablePlayerLevel_Override;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FString ForceOccurInvaderName;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    EPalBiomeType Biome_Override;
    
    UPROPERTY(Config, EditAnywhere)
    int32 InvadeJudgmentInterval_Minutes_Override;
    
    UPROPERTY(Config, EditAnywhere)
    int32 InvadeCollTime_Max_Minutes_Override;
    
    UPROPERTY(Config, EditAnywhere)
    int32 InvadeCollTime_Min_Minutes_Override;
    
    UPROPERTY(Config, EditAnywhere)
    int32 InvadeReturnTime_Minutes_Override;
    
    UPROPERTY(Config, EditAnywhere)
    int32 InvadeStartPoint_BaseCampRadius_Min_cm_Override;
    
    UPROPERTY(Config, EditAnywhere)
    int32 InvadeStartPoint_BaseCampRadius_Max_cm_Override;
    
    UPROPERTY(Config, EditAnywhere)
    float VisitorNPCProbability_Override;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FString ForceOccurVisitorNPCName;
    
    UPROPERTY(Config, EditAnywhere)
    int32 VisitorNPCReturnTime_Minutes_Override;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsDisableCrossKeyQuickSwitch;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsEnableAirRolling;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsEnablePalWarp;
    
    UPROPERTY(Config, EditAnywhere)
    bool bDungeonDevelopFlag;
    
    UPROPERTY(Config, EditAnywhere)
    bool bDungeonGimmickVisualize;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsDisableOptionWorldLoadConfig;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsShowNightSkipLog;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsApplyOptionWorldModePreset;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShowAnimRateScale;
    
    UPROPERTY(Config, EditAnywhere)
    float ShowAnimRateScaleRange;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsParallelForUpdateActiveTiles;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bIsDisablePlayerTeleportTimeout;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bUseMalePlayer;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bEnableLoadingScreen;
    
    UPROPERTY(BlueprintAssignable)
    FOnLoadingScreenVisibilityChangedDelegate OnLoadingScreenVisibilityChanged;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsSkipCharacterMake;
    
    UPROPERTY(Config, EditAnywhere)
    bool bDrawHitCollision;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bDisableGrapplingCoolDown;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bDrawGrapplingLine;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bDrawGrapplingHitPoint;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bIsFishingSuccess;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bDebugFishingSpotRespawnTime;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bDrawFishingLine;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bDrawFishSearchArea;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bDisableFishMove;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bShowFishingLog;
    
    UPROPERTY(Config, EditAnywhere)
    bool bDrawAmbientSoundLinePlayLocation;
    
    UPROPERTY(Config, EditAnywhere)
    bool bDrawAmbientSoundActivateTrigger;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bDrawDefenseAttackableRange;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bShowDefenseAttackTarget;
    
    UPROPERTY(Config, EditAnywhere)
    float ShowDefenseRange;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bNotDecreaseDefenseBullet;
    
    UPROPERTY(Config, EditAnywhere)
    bool bDisableInteractRecicleTarget;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bShowStageDeathPenaltyLocation;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bForceLocationTeleport;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShowInvaderDebugLog;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShowStreamingLevel;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bShowInteractPoints;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bEnableArenaTest;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool EnableBossBattleHard;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bLoadWorldOptionInTestLevel;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bOilrigGoalShow;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bDisableOilrigCannon;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bDisableOilrigNPCOtomoDistanceCombatEnd;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bEnableFixedCannonDebugPrint;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bIgnoreTreasureBoxKey;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bAllUnlockSkin;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bFakeUGCOnlineID;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bEnableUserAchievementDebug;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    int32 HardTowerBossDebugNo;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bDisableOilRigMessage;
    
    UPROPERTY(Config, EditAnywhere)
    bool bDisableOverrideCreateDynamicItemDataBase;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableBattleModeLog;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAutoCompletionGetItemId;
    
    UPROPERTY(Config, EditAnywhere)
    bool EnableOperatingTableDebug;
    
    UPROPERTY(Config, EditAnywhere)
    int32 OperatingTableChangePassiveSkillIndex;
    
    UPROPERTY(Config, EditAnywhere)
    FPalDataTableRowName_ItemData OperatingTablePassiveSkillItemID;
    
    UPROPERTY(Config, EditAnywhere)
    FPalDataTableRowName_PassiveSkillData OperatingTablePassiveSkill;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bAccountTypeFailurePlayOnline;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    bool bUnlockAllTeamMission;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    bool bKillOnPlayerRide;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    FName DataLayerRuntimeSettingsName;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bDisableInteractLockComponent;
    
    UPROPERTY(Config, EditDefaultsOnly)
    bool bShowOtomoReturnFarDistance;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bMuteAllUser;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bBlockAllUser;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bDenyCommunicationAllUser;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bDisablePrivilegeCrossPlay;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bDisablePrivilegeUserGeneratedContent;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bForceMuteBlockForMyself;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bForceDisplayTermsOfService;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bDummyPlayerList;
    
    UPROPERTY(Config, EditAnywhere)
    float FriendshipPointRate;
    
    UPROPERTY(Config, EditAnywhere)
    bool bNotDestroyPlayerOnDisconnect;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bAllReleaseArenaSoloRank;
    
    UPROPERTY(Config, EditDefaultsOnly)
    bool bEnableArenaRule;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FPalArenaRule ArenaRule;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FName ArenaSoloNPCOverride;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    bool bEnableABPLean;
    
    UPalDebugSetting();

private:
    UFUNCTION()
    TArray<FString> GetDataLayerRuntimeSettingsNames() const;
    
};

