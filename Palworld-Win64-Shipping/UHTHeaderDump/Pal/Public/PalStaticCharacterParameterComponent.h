#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "EPalAIActionType.h"
#include "EPalActionType.h"
#include "EPalAdditionalEffectType.h"
#include "EPalFacialEyeType.h"
#include "EPalFacialMouthType.h"
#include "EPalFishingPlayerMotionType.h"
#include "EPalGeneralAnimSequenceType.h"
#include "EPalGeneralBlendSpaceType.h"
#include "EPalGeneralMontageType.h"
#include "EPalMonsterMovementType.h"
#include "EPalPettingSizeType.h"
#include "EPalPhysicsBoneType.h"
#include "EPalRagdollPresetType.h"
#include "EPalSizeType.h"
#include "EPalSpawnedCharacterType.h"
#include "EPalWaterEffectType.h"
#include "EPalWazaID.h"
#include "FootStampInfo.h"
#include "PalDataTableRowName_MapObjectData.h"
#include "PalRandomRestInfo.h"
#include "PalStaticCharacterInfo_ElectricAction.h"
#include "PalStaticCharacterInfo_SleepOnSide.h"
#include "PalStaticCharacterInfo_SpawnItem.h"
#include "PalStaticCharacterInfo_WaterEffect.h"
#include "ShooterSpringCameraParameter.h"
#include "Templates/SubclassOf.h"
#include "PalStaticCharacterParameterComponent.generated.h"

class UAnimMontage;
class UAnimSequence;
class UBlendSpace;
class UPalAIActionBase;
class UPalActionBase;
class UPalFootStepEffectAssetBase;
class UPalRagdollPreset;
class UPalSoundSlot;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalStaticCharacterParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MeshCapsuleHalfHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MeshCapsuleRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector MeshRelativeLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EPalAIActionType, TSubclassOf<UPalAIActionBase>> AIActionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CallApproachWalkSpeedMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPalRandomRestInfo> RandomRestMontageInfos;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EPalGeneralAnimSequenceType, UAnimSequence*> GeneralAnimSequenceMap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EPalGeneralMontageType, UAnimMontage*> GeneralMontageMap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EPalGeneralBlendSpaceType, UBlendSpace*> GeneralBlendSpaceMap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EPalRagdollPresetType, TSubclassOf<UPalRagdollPreset>> RagdollPresetMap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EPalActionType, UAnimMontage*> ActionMontageMap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UAnimMontage*> EmoteList;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPalStaticCharacterInfo_ElectricAction ElectricActionInfo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FPalDataTableRowName_MapObjectData, FPalStaticCharacterInfo_SleepOnSide> SleepOnSideInfoMapForMapObject;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimMontage* SleepOnSideAnimMontage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bFadeSleepOnSide;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EPalWazaID, TSoftClassPtr<UPalActionBase>> WazaActionDeclarationMap;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TMap<EPalWazaID, TSubclassOf<UPalActionBase>> WazaActionInstancedMap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EPalWazaID, FFloatInterval> OverrideWazaRangeMap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsWazaAdjustPitchDisable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPalWazaID OverrideCommonWazaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CaptureSuccessRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsPal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SkillEffectScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector SkillEffectOffsetScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FollowSideDistanceRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<TEnumAsByte<EPhysicalSurface>, FFootStampInfo> FootStampMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StepVelocityXY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StepVelocityZ;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName HeadBoneName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName PhysicsBodyRootName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ToolAttachBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D HPGaugeUIOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ExclamationMarkOffsetZ;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPalMonsterMovementType MovementType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Weight_KG;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Mass_Scale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float IsGroundCrossRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EPalPhysicsBoneType, FName> PhysicsBoneNameMap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsUncapturable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsBackWalkForwardAnime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsRightLeft_WakeupFromRagdoll;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector GetupMotion_UtubuseOrRight_0FramePelvisLocation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector GetupMotion_AomukeOrLeft_0FramePelvisLocation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName Ragdoll_RightLeftGetup_ForwardTailName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName Ragdoll_RightLeftGetup_RightLegName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalPettingSizeType PettingSize;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PettingDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PettingStartAddDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PettingEndLeaveDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PettingCameraCenterDistance_Override;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PettingCameraHeight_Override;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PettingCameraArmLength_Override;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector FishingCutsceneCameraTargetOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FishingCutsceneCameraTargetDistanceOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalSizeType FishingSize;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalFishingPlayerMotionType FishingPlayerMotionType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool HasFishingRod;
    
    UPROPERTY(BlueprintReadOnly)
    EPalSizeType Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Ragdoll_GravityRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsLookatIKAble;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SmallDamageAnimationApplyRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SmallDamageAnimationPlayRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AISideStepCoolTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FShooterSpringCameraParameter CameraOffsetInLiftup;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsForcedTurnWhenDamageReaction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DisableNPCDamageRolling;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<UPalSoundSlot> PalSoundSlotClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName AkAttachPointName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<UPalFootStepEffectAssetBase> PalFootStepEffectAssetClass;
    
    UPROPERTY(EditDefaultsOnly)
    FPalStaticCharacterInfo_SpawnItem SpawnItem;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DefenseBuildObjectAssignDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DefenseBuildObjectAssignHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsHideDefenseLauncherFooting;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EPalWaterEffectType, FPalStaticCharacterInfo_WaterEffect> WaterEffectMap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalFacialEyeType InWaterFacialEyeType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalFacialMouthType InWaterFacialMouthType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<EPalAdditionalEffectType> IgnoreEffectType;
    
private:
    UPROPERTY(Transient)
    UPalSoundSlot* PalSoundSlotCache;
    
    UPROPERTY(Transient)
    UPalFootStepEffectAssetBase* PalFootStepEffectAssetCache;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UPalActionBase> MissWazaAction;
    
private:
    UPROPERTY(Transient)
    bool IsBoss_Database;
    
    UPROPERTY(Transient)
    bool IsTowerBoss_Database;
    
    UPROPERTY(Transient)
    bool IsRaidBoss_Database;
    
    UPROPERTY(Transient)
    bool IsPredatorBoss_Database;
    
    UPROPERTY(Transient)
    bool IsLegend_Database;
    
    UPROPERTY(Transient)
    EPalSpawnedCharacterType SpawnedCharacterType;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    bool IsRaidBoss_BP;
    
public:
    UPalStaticCharacterParameterComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSpawnedCharacterType(EPalSpawnedCharacterType SpawnedType);
    
    UFUNCTION()
    void LoadWazaActionClass(EPalWazaID WazaID);
    
    UFUNCTION(BlueprintPure)
    bool IsTowerBossPal() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSwimPal();
    
    UFUNCTION(BlueprintPure)
    bool IsRarePal() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRaidBossPal() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPredatorBossPal();
    
    UFUNCTION(BlueprintPure)
    bool IsLegendPal() const;
    
    UFUNCTION(BlueprintPure)
    bool IsIgnoreEffectType(EPalAdditionalEffectType Effect) const;
    
    UFUNCTION(BlueprintPure)
    bool IsFlyPal();
    
    UFUNCTION(BlueprintPure)
    bool IsBossPal_Database_ExceptRare();
    
    UFUNCTION(BlueprintPure)
    bool IsBossPal_Database();
    
    UFUNCTION(BlueprintPure)
    bool IgnoreLeanBack();
    
    UFUNCTION(BlueprintPure)
    bool IgnoreBlowAway();
    
    UFUNCTION(BlueprintPure)
    EPalSpawnedCharacterType GetSpawnedCharacterType() const;
    
    UFUNCTION(BlueprintPure)
    FPalRandomRestInfo GetRandomRestInfoWithOption(const TArray<UAnimMontage*>& ExceptMontages) const;
    
    UFUNCTION(BlueprintPure)
    FPalRandomRestInfo GetRandomRestInfo() const;
    
    UFUNCTION(BlueprintPure)
    float GetCaptureRate_ByCharacterID();
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* FindMontange(const EPalActionType ActionType, bool& bExist) const;
    
};

