#ifndef UE4SS_SDK_KawaiiPhysics_HPP
#define UE4SS_SDK_KawaiiPhysics_HPP

#include "KawaiiPhysics_enums.hpp"

struct FAnimNode_KawaiiPhysics : public FAnimNode_SkeletalControlBase
{
    FBoneReference RootBone;
    TArray<FBoneReference> ExcludeBones;
    TArray<FKawaiiPhysicsRootBoneSetting> AdditionalRootBones;
    float DummyBoneLength;
    EBoneForwardAxis BoneForwardAxis;
    FKawaiiPhysicsSettings PhysicsSettings;
    int32 TargetFrameRate;
    bool OverrideTargetFramerate;
    int32 WarmUpFrames;
    bool bUseWarmUpWhenResetDynamics;
    bool bNeedWarmUp;
    float TeleportDistanceThreshold;
    float TeleportRotationThreshold;
    EPlanarConstraint PlanarConstraint;
    bool bUpdatePhysicsSettingsInGame;
    bool ResetBoneTransformWhenBoneNotFound;
    class UCurveFloat* DampingCurve;
    class UCurveFloat* WorldDampingLocationCurve;
    class UCurveFloat* WorldDampingRotationCurve;
    class UCurveFloat* StiffnessCurve;
    class UCurveFloat* RadiusCurve;
    class UCurveFloat* LimitAngleCurve;
    FRuntimeFloatCurve DampingCurveData;
    FRuntimeFloatCurve StiffnessCurveData;
    FRuntimeFloatCurve WorldDampingLocationCurveData;
    FRuntimeFloatCurve WorldDampingRotationCurveData;
    FRuntimeFloatCurve RadiusCurveData;
    FRuntimeFloatCurve LimitAngleCurveData;
    TArray<FSphericalLimit> SphericalLimits;
    TArray<FCapsuleLimit> CapsuleLimits;
    TArray<FBoxLimit> BoxLimits;
    TArray<FPlanarLimit> PlanarLimits;
    class UKawaiiPhysicsLimitsDataAsset* LimitsDataAsset;
    class UPhysicsAsset* PhysicsAssetForLimits;
    TArray<FSphericalLimit> SphericalLimitsData;
    TArray<FCapsuleLimit> CapsuleLimitsData;
    TArray<FBoxLimit> BoxLimitsData;
    TArray<FPlanarLimit> PlanarLimitsData;
    EXPBDComplianceType BoneConstraintGlobalComplianceType;
    int32 BoneConstraintIterationCountBeforeCollision;
    int32 BoneConstraintIterationCountAfterCollision;
    bool bAutoAddChildDummyBoneConstraint;
    TArray<FModifyBoneConstraint> BoneConstraints;
    class UKawaiiPhysicsBoneConstraintsDataAsset* BoneConstraintsDataAsset;
    TArray<FModifyBoneConstraint> BoneConstraintsData;
    TArray<FModifyBoneConstraint> MergedBoneConstraints;
    FVector Gravity;
    bool bEnableWind;
    float WindScale;
    TArray<FInstancedStruct> ExternalForces;
    TArray<class UKawaiiPhysics_CustomExternalForce*> CustomExternalForces;
    bool bAllowWorldCollision;
    bool bOverrideCollisionParams;
    FBodyInstance CollisionChannelSettings;
    bool bIgnoreSelfComponent;
    TArray<FBoneReference> IgnoreBones;
    TArray<FName> IgnoreBoneNamePrefix;
    FGameplayTag KawaiiPhysicsTag;
    TArray<FKawaiiPhysicsModifyBone> ModifyBones;
    float DeltaTime;
    FTransform PreSkelCompTransform;
    bool bInitPhysicsSettings;

};

struct FBoxLimit : public FCollisionLimitBase
{
    FVector Extent;

};

struct FBoxLimitData : public FCollisionLimitDataBase
{
    FVector Extent;

};

struct FCapsuleLimit : public FCollisionLimitBase
{
    float Radius;
    float Length;

};

struct FCapsuleLimitData : public FCollisionLimitDataBase
{
    float Radius;
    float Length;

};

struct FCollisionLimitBase
{
    FBoneReference DrivingBone;
    FVector OffsetLocation;
    FRotator OffsetRotation;
    FVector Location;
    FQuat Rotation;
    bool bEnable;
    ECollisionSourceType SourceType;

};

struct FCollisionLimitDataBase
{
    FBoneReference DrivingBoneReference;
    FName DrivingBoneName;
    FVector OffsetLocation;
    FRotator OffsetRotation;
    FVector Location;
    FQuat Rotation;
    FGuid Guid;

};

struct FKawaiiPhysicsModifyBone
{
    FBoneReference BoneRef;
    int32 Index;
    int32 ParentIndex;
    TArray<int32> ChildIndices;
    FKawaiiPhysicsSettings PhysicsSettings;
    FVector Location;
    FVector PrevLocation;
    FQuat PrevRotation;
    FVector PoseLocation;
    FQuat PoseRotation;
    FVector PoseScale;
    float LengthFromRoot;
    float LengthRateFromRoot;
    bool bDummy;
    bool bSkipSimulate;

};

struct FKawaiiPhysicsReference : public FAnimNodeReference
{
};

struct FKawaiiPhysicsRootBoneSetting
{
    FBoneReference RootBone;
    TArray<FBoneReference> OverrideExcludeBones;
    bool bUseOverrideExcludeBones;

};

struct FKawaiiPhysicsSettings
{
    float Damping;
    float Stiffness;
    float WorldDampingLocation;
    float WorldDampingRotation;
    float Radius;
    float LimitAngle;

};

struct FKawaiiPhysics_ExternalForce
{
    bool bIsEnabled;
    bool bDrawDebug;
    TArray<FBoneReference> ApplyBoneFilter;
    TArray<FBoneReference> IgnoreBoneFilter;
    EExternalForceSpace ExternalForceSpace;
    FFloatInterval RandomForceScaleRange;
    class UObject* ExternalOwner;
    bool bIsOneShot;
    float RandomizedForceScale;
    FVector Force;
    FTransform ComponentTransform;
    bool bCanSelectForceSpace;

};

struct FKawaiiPhysics_ExternalForce_Basic : public FKawaiiPhysics_ExternalForce
{
    FVector ForceDir;
    FRuntimeFloatCurve ForceRateByBoneLengthRate;
    float Interval;
    float Time;
    float PrevTime;

};

struct FKawaiiPhysics_ExternalForce_Curve : public FKawaiiPhysics_ExternalForce
{
    FRuntimeVectorCurve ForceCurve;
    EExternalForceCurveEvaluateType CurveEvaluateType;
    int32 SubstepCount;
    float TimeScale;
    FRuntimeFloatCurve ForceRateByBoneLengthRate;
    float Time;
    float PrevTime;
    float MaxCurveTime;

};

struct FKawaiiPhysics_ExternalForce_Gravity : public FKawaiiPhysics_ExternalForce
{
    FRuntimeFloatCurve ForceRateByBoneLengthRate;
    bool bUseCharacterGravityDirection;
    bool bUseCharacterGravityScale;
    FVector OverrideGravityDirection;
    bool bUseOverrideGravityDirection;

};

struct FKawaiiPhysics_ExternalForce_Wind : public FKawaiiPhysics_ExternalForce
{
    FRuntimeFloatCurve ForceRateByBoneLengthRate;
    class UWorld* World;

};

struct FModifyBoneConstraint
{
    FBoneReference Bone1;
    FBoneReference Bone2;
    bool bOverrideCompliance;
    EXPBDComplianceType ComplianceType;
    int32 ModifyBoneIndex1;
    int32 ModifyBoneIndex2;
    float Length;
    bool bIsDummy;
    float Lambda;

};

struct FModifyBoneConstraintData
{
    FName BoneName1;
    FName BoneName2;
    FBoneReference BoneReference1;
    FBoneReference BoneReference2;
    bool bOverrideCompliance;
    EXPBDComplianceType ComplianceType;

};

struct FPlanarLimit : public FCollisionLimitBase
{
    FPlane Plane;

};

struct FPlanarLimitData : public FCollisionLimitDataBase
{
    FPlane Plane;

};

struct FRegexPatternBoneSet
{
    FString RegexPatternBone1;
    FString RegexPatternBone2;

};

struct FSphericalLimit : public FCollisionLimitBase
{
    float Radius;
    ESphericalLimitType LimitType;

};

struct FSphericalLimitData : public FCollisionLimitDataBase
{
    float Radius;
    ESphericalLimitType LimitType;

};

class UAnimNotifyState_KawaiiPhysicsAddExternalForce : public UAnimNotifyState
{
    TArray<FInstancedStruct> AdditionalExternalForces;
    FGameplayTagContainer FilterTags;
    bool bFilterExactMatch;

};

class UAnimNotify_KawaiiPhysicsAddExternalForce : public UAnimNotify
{
    TArray<FInstancedStruct> AdditionalExternalForces;
    FGameplayTagContainer FilterTags;
    bool bFilterExactMatch;

};

class UKawaiiPhysicsBoneConstraintsDataAsset : public UDataAsset
{
    TArray<FModifyBoneConstraintData> BoneConstraintsData;

};

class UKawaiiPhysicsLibrary : public UBlueprintFunctionLibrary
{

    FKawaiiPhysicsReference SetWindScale(const FKawaiiPhysicsReference& KawaiiPhysics, float WindScale);
    FKawaiiPhysicsReference SetTeleportRotationThreshold(const FKawaiiPhysicsReference& KawaiiPhysics, float TeleportRotationThreshold);
    FKawaiiPhysicsReference SetTeleportDistanceThreshold(const FKawaiiPhysicsReference& KawaiiPhysics, float TeleportDistanceThreshold);
    FKawaiiPhysicsReference SetRootBoneName(const FKawaiiPhysicsReference& KawaiiPhysics, FName& RootBoneName);
    FKawaiiPhysicsReference SetPhysicsSettings(const FKawaiiPhysicsReference& KawaiiPhysics, FKawaiiPhysicsSettings& PhysicsSettings);
    FKawaiiPhysicsReference SetNeedWarmUp(const FKawaiiPhysicsReference& KawaiiPhysics, bool bNeedWarmUp);
    FKawaiiPhysicsReference SetLimitsDataAsset(const FKawaiiPhysicsReference& KawaiiPhysics, class UKawaiiPhysicsLimitsDataAsset* LimitsDataAsset);
    FKawaiiPhysicsReference SetGravity(const FKawaiiPhysicsReference& KawaiiPhysics, FVector Gravity);
    void SetExternalForceWildcardProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName, const int32& Value);
    FKawaiiPhysicsReference SetExternalForceVectorProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName, FVector Value);
    FKawaiiPhysicsReference SetExternalForceTransformProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName, FTransform Value);
    FKawaiiPhysicsReference SetExternalForceRotatorProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName, FRotator Value);
    FKawaiiPhysicsReference SetExternalForceIntProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName, int32 Value);
    FKawaiiPhysicsReference SetExternalForceFloatProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName, float Value);
    FKawaiiPhysicsReference SetExternalForceBoolProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName, bool Value);
    FKawaiiPhysicsReference SetExcludeBoneNames(const FKawaiiPhysicsReference& KawaiiPhysics, TArray<FName>& ExcludeBoneNames);
    FKawaiiPhysicsReference SetEnableWind(const FKawaiiPhysicsReference& KawaiiPhysics, bool bEnableWind);
    FKawaiiPhysicsReference SetDummyBoneLength(const FKawaiiPhysicsReference& KawaiiPhysics, float DummyBoneLength);
    FKawaiiPhysicsReference SetAllowWorldCollision(const FKawaiiPhysicsReference& KawaiiPhysics, bool bAllowWorldCollision);
    FKawaiiPhysicsReference ResetDynamics(const FKawaiiPhysicsReference& KawaiiPhysics);
    bool RemoveExternalForcesFromComponent(class USkeletalMeshComponent* MeshComp, class UObject* Owner, FGameplayTagContainer& FilterTags, bool bFilterExactMatch);
    float GetWindScale(const FKawaiiPhysicsReference& KawaiiPhysics);
    float GetTeleportRotationThreshold(const FKawaiiPhysicsReference& KawaiiPhysics);
    float GetTeleportDistanceThreshold(const FKawaiiPhysicsReference& KawaiiPhysics);
    FName GetRootBoneName(const FKawaiiPhysicsReference& KawaiiPhysics);
    FKawaiiPhysicsSettings GetPhysicsSettings(const FKawaiiPhysicsReference& KawaiiPhysics);
    bool GetNeedWarmUp(const FKawaiiPhysicsReference& KawaiiPhysics);
    class UKawaiiPhysicsLimitsDataAsset* GetLimitsDataAsset(const FKawaiiPhysicsReference& KawaiiPhysics);
    FVector GetGravity(const FKawaiiPhysicsReference& KawaiiPhysics);
    void GetExternalForceWildcardProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName, int32& Value);
    FVector GetExternalForceVectorProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName);
    FTransform GetExternalForceTransformProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName);
    FRotator GetExternalForceRotatorProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName);
    int32 GetExternalForceIntProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName);
    float GetExternalForceFloatProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName);
    bool GetExternalForceBoolProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName);
    TArray<FName> GetExcludeBoneNames(const FKawaiiPhysicsReference& KawaiiPhysics);
    bool GetEnableWind(const FKawaiiPhysicsReference& KawaiiPhysics);
    float GetDummyBoneLength(const FKawaiiPhysicsReference& KawaiiPhysics);
    bool GetAllowWorldCollision(const FKawaiiPhysicsReference& KawaiiPhysics);
    void ConvertToKawaiiPhysicsPure(const FAnimNodeReference& Node, FKawaiiPhysicsReference& KawaiiPhysics, bool& Result);
    FKawaiiPhysicsReference ConvertToKawaiiPhysics(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
    FKawaiiPhysicsReference AddExternalForceWithExecResult(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, FInstancedStruct& ExternalForce, class UObject* Owner);
    bool AddExternalForcesToComponent(class USkeletalMeshComponent* MeshComp, TArray<FInstancedStruct>& ExternalForces, class UObject* Owner, FGameplayTagContainer& FilterTags, bool bFilterExactMatch, bool bIsOneShot);
    bool AddExternalForce(const FKawaiiPhysicsReference& KawaiiPhysics, FInstancedStruct& ExternalForce, class UObject* Owner, bool bIsOneShot);
};

class UKawaiiPhysicsLimitsDataAsset : public UDataAsset
{
    TArray<FSphericalLimit> SphericalLimits;
    TArray<FCapsuleLimit> CapsuleLimits;
    TArray<FBoxLimit> BoxLimits;
    TArray<FPlanarLimit> PlanarLimits;

};

class UKawaiiPhysics_CustomExternalForce : public UObject
{
    bool bIsEnabled;
    bool bDrawDebug;

    void PreApply(FAnimNode_KawaiiPhysics& Node, const class USkeletalMeshComponent* SkelComp);
    bool IsDebugEnabled();
    void Apply(FAnimNode_KawaiiPhysics& Node, int32 ModifyBoneIndex, const class USkeletalMeshComponent* SkelComp, const FTransform& BoneTransform);
};

#endif
