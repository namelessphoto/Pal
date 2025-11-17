#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=AnimNode_SkeletalControlBase -FallbackName=AnimNode_SkeletalControlBase
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BodyInstance -FallbackName=BodyInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=StructUtils -ObjectName=InstancedStruct -FallbackName=InstancedStruct
#include "BoxLimit.h"
#include "CapsuleLimit.h"
#include "EBoneForwardAxis.h"
#include "EPlanarConstraint.h"
#include "EXPBDComplianceType.h"
#include "KawaiiPhysicsModifyBone.h"
#include "KawaiiPhysicsRootBoneSetting.h"
#include "KawaiiPhysicsSettings.h"
#include "ModifyBoneConstraint.h"
#include "PlanarLimit.h"
#include "SphericalLimit.h"
#include "AnimNode_KawaiiPhysics.generated.h"

class UCurveFloat;
class UKawaiiPhysicsBoneConstraintsDataAsset;
class UKawaiiPhysicsLimitsDataAsset;
class UKawaiiPhysics_CustomExternalForce;
class UPhysicsAsset;

USTRUCT(BlueprintType)
struct KAWAIIPHYSICS_API FAnimNode_KawaiiPhysics : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference RootBone;
    
    UPROPERTY(EditAnywhere)
    TArray<FBoneReference> ExcludeBones;
    
    UPROPERTY(EditAnywhere)
    TArray<FKawaiiPhysicsRootBoneSetting> AdditionalRootBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DummyBoneLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBoneForwardAxis BoneForwardAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FKawaiiPhysicsSettings PhysicsSettings;
    
    UPROPERTY(EditAnywhere)
    int32 TargetFrameRate;
    
    UPROPERTY(EditAnywhere)
    bool OverrideTargetFramerate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 WarmUpFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseWarmUpWhenResetDynamics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bNeedWarmUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TeleportDistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TeleportRotationThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPlanarConstraint PlanarConstraint;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bUpdatePhysicsSettingsInGame;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool ResetBoneTransformWhenBoneNotFound;
    
    UPROPERTY()
    UCurveFloat* DampingCurve;
    
    UPROPERTY()
    UCurveFloat* WorldDampingLocationCurve;
    
    UPROPERTY()
    UCurveFloat* WorldDampingRotationCurve;
    
    UPROPERTY()
    UCurveFloat* StiffnessCurve;
    
    UPROPERTY()
    UCurveFloat* RadiusCurve;
    
    UPROPERTY()
    UCurveFloat* LimitAngleCurve;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve DampingCurveData;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve StiffnessCurveData;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve WorldDampingLocationCurveData;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve WorldDampingRotationCurveData;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve RadiusCurveData;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve LimitAngleCurveData;
    
    UPROPERTY(EditAnywhere)
    TArray<FSphericalLimit> SphericalLimits;
    
    UPROPERTY(EditAnywhere)
    TArray<FCapsuleLimit> CapsuleLimits;
    
    UPROPERTY(EditAnywhere)
    TArray<FBoxLimit> BoxLimits;
    
    UPROPERTY(EditAnywhere)
    TArray<FPlanarLimit> PlanarLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UKawaiiPhysicsLimitsDataAsset* LimitsDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPhysicsAsset* PhysicsAssetForLimits;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    TArray<FSphericalLimit> SphericalLimitsData;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    TArray<FCapsuleLimit> CapsuleLimitsData;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    TArray<FBoxLimit> BoxLimitsData;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    TArray<FPlanarLimit> PlanarLimitsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EXPBDComplianceType BoneConstraintGlobalComplianceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BoneConstraintIterationCountBeforeCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BoneConstraintIterationCountAfterCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAutoAddChildDummyBoneConstraint;
    
    UPROPERTY(EditAnywhere)
    TArray<FModifyBoneConstraint> BoneConstraints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UKawaiiPhysicsBoneConstraintsDataAsset* BoneConstraintsDataAsset;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    TArray<FModifyBoneConstraint> BoneConstraintsData;
    
    UPROPERTY()
    TArray<FModifyBoneConstraint> MergedBoneConstraints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Gravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableWind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WindScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FInstancedStruct> ExternalForces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    TArray<UKawaiiPhysics_CustomExternalForce*> CustomExternalForces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowWorldCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideCollisionParams;
    
    UPROPERTY(EditAnywhere)
    FBodyInstance CollisionChannelSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIgnoreSelfComponent;
    
    UPROPERTY(EditAnywhere)
    TArray<FBoneReference> IgnoreBones;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> IgnoreBoneNamePrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag KawaiiPhysicsTag;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FKawaiiPhysicsModifyBone> ModifyBones;
    
    UPROPERTY(BlueprintReadOnly)
    float DeltaTime;
    
protected:
    UPROPERTY()
    FTransform PreSkelCompTransform;
    
    UPROPERTY()
    bool bInitPhysicsSettings;
    
public:
    FAnimNode_KawaiiPhysics();
};

