#ifndef UE4SS_SDK_IKRig_HPP
#define UE4SS_SDK_IKRig_HPP

#include "IKRig_enums.hpp"

struct FAnimNode_IKRig : public FAnimNode_CustomProperty
{
    FPoseLink Source;
    class UIKRigDefinition* RigDefinitionAsset;
    TArray<FIKRigGoal> Goals;
    bool bStartFromRefPose;
    EAnimAlphaInputType AlphaInputType;
    bool bAlphaBoolEnabled;
    float Alpha;
    FInputScaleBias AlphaScaleBias;
    FInputAlphaBoolBlend AlphaBoolBlend;
    FName AlphaCurveName;
    FInputScaleBiasClamp AlphaScaleBiasClamp;
    class UIKRigProcessor* IKRigProcessor;
    float ActualAlpha;

};

struct FAnimNode_RetargetPoseFromMesh : public FAnimNode_Base
{
    TWeakObjectPtr<class USkeletalMeshComponent> SourceMeshComponent;
    bool bUseAttachedParent;
    class UIKRetargeter* IKRetargeterAsset;
    FRetargetProfile CustomRetargetProfile;
    bool bSuppressWarnings;
    bool bCopyCurves;
    class UIKRetargetProcessor* Processor;

};

struct FBoneChain
{
    FName ChainName;
    FBoneReference StartBone;
    FBoneReference EndBone;
    FName IKGoalName;

};

struct FGoalBone
{
};

struct FIKRetargetPose
{
    FVector RootTranslationOffset;
    TMap<class FName, class FQuat> BoneRotationOffsets;

};

struct FIKRigGoal
{
    FName Name;
    EIKRigGoalTransformSource TransformSource;
    FBoneReference SourceBone;
    FVector Position;
    FRotator Rotation;
    float PositionAlpha;
    float RotationAlpha;
    EIKRigGoalSpace PositionSpace;
    EIKRigGoalSpace RotationSpace;
    FVector FinalBlendedPosition;
    FQuat FinalBlendedRotation;

};

struct FIKRigGoalContainer
{
};

struct FIKRigInputSkeleton
{
};

struct FIKRigSkeleton
{
    TArray<FName> BoneNames;
    TArray<int32> ParentIndices;
    TArray<FName> ExcludedBones;
    TArray<FTransform> CurrentPoseGlobal;
    TArray<FTransform> CurrentPoseLocal;
    TArray<FTransform> RefPoseGlobal;

};

struct FLimbLink
{
};

struct FLimbSolver
{
};

struct FLimbSolverSettings
{
    float ReachPrecision;
    TEnumAsByte<EAxis> HingeRotationAxis;
    int32 MaxIterations;
    bool bEnableLimit;
    float MinRotationAngle;
    bool bAveragePull;
    float PullDistribution;
    float ReachStepAlpha;
    bool bEnableTwistCorrection;
    TEnumAsByte<EAxis> EndBoneForwardAxis;

};

struct FRetargetChainMap
{
    FName SourceChain;
    FName TargetChain;

};

struct FRetargetDefinition
{
    FName RootBone;
    TArray<FBoneChain> BoneChains;

};

struct FRetargetGlobalSettings
{
    bool bEnableRoot;
    bool bEnableFK;
    bool bEnableIK;
    bool bWarping;
    EWarpingDirectionSource DirectionSource;
    EBasicAxis ForwardDirection;
    FName DirectionChain;
    float WarpForwards;
    float SidewaysOffset;
    float WarpSplay;

};

struct FRetargetProfile
{
    bool bApplyTargetRetargetPose;
    FName TargetRetargetPoseName;
    bool bApplySourceRetargetPose;
    FName SourceRetargetPoseName;
    bool bApplyChainSettings;
    TMap<class FName, class FTargetChainSettings> ChainSettings;
    bool bApplyRootSettings;
    FTargetRootSettings RootSettings;
    bool bApplyGlobalSettings;
    FRetargetGlobalSettings GlobalSettings;

};

struct FTargetChainFKSettings
{
    bool EnableFK;
    ERetargetRotationMode RotationMode;
    float RotationAlpha;
    ERetargetTranslationMode TranslationMode;
    float TranslationAlpha;
    float PoleVectorMatching;
    float PoleVectorOffset;

};

struct FTargetChainIKSettings
{
    bool EnableIK;
    float BlendToSource;
    FVector BlendToSourceWeights;
    FVector StaticOffset;
    FVector StaticLocalOffset;
    FRotator StaticRotationOffset;
    float Extension;
    bool bAffectedByIKWarping;

};

struct FTargetChainSettings
{
    FTargetChainFKSettings FK;
    FTargetChainIKSettings IK;
    FTargetChainSpeedPlantSettings SpeedPlanting;

};

struct FTargetChainSpeedPlantSettings
{
    bool EnableSpeedPlanting;
    FName SpeedCurveName;
    float SpeedThreshold;
    float UnplantStiffness;
    float UnplantCriticalDamping;

};

struct FTargetRootSettings
{
    float RotationAlpha;
    float TranslationAlpha;
    float BlendToSource;
    FVector BlendToSourceWeights;
    float ScaleHorizontal;
    float ScaleVertical;
    FVector TranslationOffset;
    FRotator RotationOffset;
    float AffectIKHorizontal;
    float AffectIKVertical;

};

class IIKGoalCreatorInterface : public IInterface
{

    void AddIKGoals(TMap<class FName, class FIKRigGoal>& OutGoals);
};

class UIKRetargetGlobalSettings : public UObject
{
    FRetargetGlobalSettings Settings;

};

class UIKRetargetProcessor : public UObject
{
    class UIKRigProcessor* IKRigProcessor;

};

class UIKRetargeter : public UObject
{
    TSoftObjectPtr<UIKRigDefinition> SourceIKRigAsset;
    TSoftObjectPtr<UIKRigDefinition> TargetIKRigAsset;
    TArray<FRetargetChainMap> ChainMapping;
    TArray<class URetargetChainSettings*> ChainSettings;
    class URetargetRootSettings* RootSettings;
    class UIKRetargetGlobalSettings* GlobalSettings;
    TMap<class FName, class FRetargetProfile> Profiles;
    FName CurrentProfile;
    TMap<class FName, class FIKRetargetPose> SourceRetargetPoses;
    TMap<class FName, class FIKRetargetPose> TargetRetargetPoses;
    FName CurrentSourceRetargetPose;
    FName CurrentTargetRetargetPose;
    TMap<class FName, class FIKRetargetPose> RetargetPoses;
    FName CurrentRetargetPose;

    void SetRootSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, const FTargetRootSettings& RootSettings);
    void SetGlobalSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, const FRetargetGlobalSettings& GlobalSettings);
    void SetChainSpeedPlantSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, const FTargetChainSpeedPlantSettings& SpeedPlantSettings, const FName TargetChainName);
    void SetChainSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, const FTargetChainSettings& ChainSettings, const FName TargetChainName);
    void SetChainIKSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, const FTargetChainIKSettings& IKSettings, const FName TargetChainName);
    void SetChainFKSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, const FTargetChainFKSettings& FKSettings, const FName TargetChainName);
    FTargetRootSettings GetRootSettingsFromRetargetProfile(FRetargetProfile& RetargetProfile);
    void GetRootSettingsFromRetargetAsset(const class UIKRetargeter* RetargetAsset, const FName OptionalProfileName, FTargetRootSettings& OutSettings);
    FRetargetGlobalSettings GetGlobalSettingsFromRetargetProfile(FRetargetProfile& RetargetProfile);
    void GetGlobalSettingsFromRetargetAsset(const class UIKRetargeter* RetargetAsset, const FName OptionalProfileName, FRetargetGlobalSettings& OutSettings);
    FTargetChainSettings GetChainUsingGoalFromRetargetAsset(const class UIKRetargeter* RetargetAsset, const FName IKGoalName);
    FTargetChainSettings GetChainSettingsFromRetargetProfile(FRetargetProfile& RetargetProfile, const FName TargetChainName);
    FTargetChainSettings GetChainSettingsFromRetargetAsset(const class UIKRetargeter* RetargetAsset, const FName TargetChainName, const FName OptionalProfileName);
};

class UIKRigComponent : public UActorComponent
{

    void SetIKRigGoalTransform(const FName GoalName, const FTransform Transform, const float PositionAlpha, const float RotationAlpha);
    void SetIKRigGoalPositionAndRotation(const FName GoalName, const FVector Position, const FQuat Rotation, const float PositionAlpha, const float RotationAlpha);
    void SetIKRigGoal(const FIKRigGoal& Goal);
    void ClearAllGoals();
};

class UIKRigDefinition : public UObject
{
    TSoftObjectPtr<USkeletalMesh> PreviewSkeletalMesh;
    FIKRigSkeleton Skeleton;
    TArray<class UIKRigEffectorGoal*> Goals;
    TArray<class UIKRigSolver*> Solvers;
    FRetargetDefinition RetargetDefinition;

};

class UIKRigEffectorGoal : public UObject
{
    FName GoalName;
    FName BoneName;
    float PositionAlpha;
    float RotationAlpha;
    FTransform CurrentTransform;
    FTransform InitialTransform;

};

class UIKRigPBIKSolver : public UIKRigSolver
{
    FName RootBone;
    int32 Iterations;
    float MassMultiplier;
    float MinMassMultiplier;
    bool bAllowStretch;
    EPBIKRootBehavior RootBehavior;
    bool bStartSolveFromInputPose;
    TArray<class UIKRig_FBIKEffector*> Effectors;
    TArray<class UIKRig_PBIKBoneSettings*> BoneSettings;

};

class UIKRigProcessor : public UObject
{
    TArray<class UIKRigSolver*> Solvers;

};

class UIKRigSolver : public UObject
{
    bool bIsEnabled;

};

class UIKRig_BodyMover : public UIKRigSolver
{
    FName RootBone;
    float PositionAlpha;
    float PositionPositiveX;
    float PositionNegativeX;
    float PositionPositiveY;
    float PositionNegativeY;
    float PositionPositiveZ;
    float PositionNegativeZ;
    float RotationAlpha;
    float RotateXAlpha;
    float RotateYAlpha;
    float RotateZAlpha;
    TArray<class UIKRig_BodyMoverEffector*> Effectors;

};

class UIKRig_BodyMoverEffector : public UObject
{
    FName GoalName;
    FName BoneName;
    float InfluenceMultiplier;

};

class UIKRig_FBIKEffector : public UObject
{
    FName GoalName;
    FName BoneName;
    float StrengthAlpha;
    float PullChainAlpha;
    float PinRotation;
    int32 IndexInSolver;

};

class UIKRig_LimbEffector : public UObject
{
    FName GoalName;
    FName BoneName;

};

class UIKRig_LimbSolver : public UIKRigSolver
{
    FName RootName;
    float ReachPrecision;
    TEnumAsByte<EAxis> HingeRotationAxis;
    int32 MaxIterations;
    bool bEnableLimit;
    float MinRotationAngle;
    bool bAveragePull;
    float PullDistribution;
    float ReachStepAlpha;
    bool bEnableTwistCorrection;
    TEnumAsByte<EAxis> EndBoneForwardAxis;
    class UIKRig_LimbEffector* Effector;

};

class UIKRig_PBIKBoneSettings : public UObject
{
    FName bone;
    float RotationStiffness;
    float PositionStiffness;
    EPBIKLimitType X;
    float MinX;
    float MaxX;
    EPBIKLimitType Y;
    float MinY;
    float MaxY;
    EPBIKLimitType Z;
    float MinZ;
    float MaxZ;
    bool bUsePreferredAngles;
    FVector PreferredAngles;

};

class UIKRig_PoleSolver : public UIKRigSolver
{
    FName RootName;
    FName EndName;
    class UIKRig_PoleSolverEffector* Effector;

};

class UIKRig_PoleSolverEffector : public UObject
{
    FName GoalName;
    FName BoneName;
    float Alpha;

};

class UIKRig_SetTransform : public UIKRigSolver
{
    FName Goal;
    FName RootBone;
    class UIKRig_SetTransformEffector* Effector;

};

class UIKRig_SetTransformEffector : public UObject
{
    bool bEnablePosition;
    bool bEnableRotation;
    float Alpha;

};

class URetargetChainSettings : public UObject
{
    FName SourceChain;
    FName TargetChain;
    FTargetChainSettings Settings;
    bool CopyPoseUsingFK;
    ERetargetRotationMode RotationMode;
    float RotationAlpha;
    ERetargetTranslationMode TranslationMode;
    float TranslationAlpha;
    bool DriveIKGoal;
    float BlendToSource;
    FVector BlendToSourceWeights;
    FVector StaticOffset;
    FVector StaticLocalOffset;
    FRotator StaticRotationOffset;
    float Extension;
    bool UseSpeedCurveToPlantIK;
    FName SpeedCurveName;
    float VelocityThreshold;
    float UnplantStiffness;
    float UnplantCriticalDamping;

};

class URetargetRootSettings : public UObject
{
    FTargetRootSettings Settings;
    bool RetargetRootTranslation;
    float GlobalScaleHorizontal;
    float GlobalScaleVertical;
    FVector BlendToSource;
    FVector StaticOffset;
    FRotator StaticRotationOffset;

};

#endif
