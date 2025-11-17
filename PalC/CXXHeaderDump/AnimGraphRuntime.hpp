#ifndef UE4SS_SDK_AnimGraphRuntime_HPP
#define UE4SS_SDK_AnimGraphRuntime_HPP

#include "AnimGraphRuntime_enums.hpp"

struct FAngularRangeLimit
{
    FVector LimitMin;
    FVector LimitMax;
    FBoneReference bone;

};

struct FAnimLegIKData
{
};

struct FAnimLegIKDefinition
{
    FBoneReference IKFootBone;
    FBoneReference FKFootBone;
    int32 NumBonesInLimb;
    float MinRotationAngle;
    TEnumAsByte<EAxis> FootBoneForwardAxis;
    TEnumAsByte<EAxis> HingeRotationAxis;
    bool bEnableRotationLimit;
    bool bEnableKneeTwistCorrection;

};

struct FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer
{
    FPoseLink BasePose;
    int32 LODThreshold;
    FName SourceSocketName;
    FName PivotSocketName;
    FVector LookAtLocation;
    FVector SocketAxis;
    float Alpha;

};

struct FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase
{
    float LinearDampingOverride;
    float AngularDampingOverride;
    FBoneReference RelativeSpaceBone;
    FBoneReference BoundBone;
    FBoneReference ChainEnd;
    TArray<FAnimPhysBodyDefinition> PhysicsBodyDefinitions;
    float GravityScale;
    FVector GravityOverride;
    float LinearSpringConstant;
    float AngularSpringConstant;
    float WindScale;
    FVector ComponentLinearAccScale;
    FVector ComponentLinearVelScale;
    FVector ComponentAppliedLinearAccClamp;
    float AngularBiasOverride;
    int32 NumSolverIterationsPreUpdate;
    int32 NumSolverIterationsPostUpdate;
    TArray<FAnimPhysSphericalLimit> SphericalLimits;
    FVector ExternalForce;
    TArray<FAnimPhysPlanarLimit> PlanarLimits;
    AnimPhysSimSpaceType SimulationSpace;
    uint8 bUseSphericalLimits;
    uint8 bUsePlanarLimit;
    uint8 bDoUpdate;
    uint8 bDoEval;
    uint8 bOverrideLinearDamping;
    uint8 bOverrideAngularBias;
    uint8 bOverrideAngularDamping;
    uint8 bEnableWind;
    uint8 bUseGravityOverride;
    uint8 bGravityOverrideInSimSpace;
    uint8 bLinearSpring;
    uint8 bAngularSpring;
    uint8 bChain;
    FRotationRetargetingInfo RetargetingSettings;

};

struct FAnimNode_ApplyAdditive : public FAnimNode_Base
{
    FPoseLink Base;
    FPoseLink Additive;
    float Alpha;
    FInputScaleBias AlphaScaleBias;
    int32 LODThreshold;
    FInputAlphaBoolBlend AlphaBoolBlend;
    FName AlphaCurveName;
    FInputScaleBiasClamp AlphaScaleBiasClamp;
    EAnimAlphaInputType AlphaInputType;
    bool bAlphaBoolEnabled;

};

struct FAnimNode_ApplyLimits : public FAnimNode_SkeletalControlBase
{
    TArray<FAngularRangeLimit> AngularRangeLimits;
    TArray<FVector> AngularOffsets;

};

struct FAnimNode_BlendBoneByChannel : public FAnimNode_Base
{
    FPoseLink A;
    FPoseLink B;
    TArray<FBlendBoneByChannelEntry> BoneDefinitions;
    float Alpha;
    FInputScaleBias AlphaScaleBias;
    TEnumAsByte<EBoneControlSpace> TransformsSpace;

};

struct FAnimNode_BlendListBase : public FAnimNode_Base
{
    TArray<FPoseLink> BlendPose;

};

struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
{
};

struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
{
};

struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
{
};

struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
{
    float NormalizedTime;
    bool bTeleportToNormalizedTime;

};

struct FAnimNode_BlendSpaceGraph : public FAnimNode_BlendSpaceGraphBase
{
};

struct FAnimNode_BlendSpaceGraphBase : public FAnimNode_Base
{
    float X;
    float Y;
    FName GroupName;
    TEnumAsByte<EAnimGroupRole> GroupRole;
    class UBlendSpace* BlendSpace;
    TArray<FPoseLink> SamplePoseLinks;

};

struct FAnimNode_BlendSpacePlayer : public FAnimNode_BlendSpacePlayerBase
{
    class UBlendSpace* BlendSpace;

};

struct FAnimNode_BlendSpacePlayerBase : public FAnimNode_AssetPlayerBase
{
    class UBlendSpace* PreviousBlendSpace;

};

struct FAnimNode_BlendSpacePlayer_Standalone : public FAnimNode_BlendSpacePlayerBase
{
    FName GroupName;
    TEnumAsByte<EAnimGroupRole> GroupRole;
    EAnimSyncMethod Method;
    bool bIgnoreForRelevancyTest;
    float X;
    float Y;
    float PlayRate;
    bool bLoop;
    bool bResetPlayTimeWhenBlendSpaceChanges;
    float StartPosition;
    class UBlendSpace* BlendSpace;

};

struct FAnimNode_BlendSpaceSampleResult : public FAnimNode_Root
{
};

struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{
    FBoneReference SourceBone;
    class UCurveFloat* DrivingCurve;
    float Multiplier;
    float RangeMin;
    float RangeMax;
    float RemappedMin;
    float RemappedMax;
    FName ParameterName;
    FBoneReference TargetBone;
    EDrivenDestinationMode DestinationMode;
    EDrivenBoneModificationMode ModificationMode;
    TEnumAsByte<EComponentType> SourceComponent;
    uint8 bUseRange;
    uint8 bAffectTargetTranslationX;
    uint8 bAffectTargetTranslationY;
    uint8 bAffectTargetTranslationZ;
    uint8 bAffectTargetRotationX;
    uint8 bAffectTargetRotationY;
    uint8 bAffectTargetRotationZ;
    uint8 bAffectTargetScaleX;
    uint8 bAffectTargetScaleY;
    uint8 bAffectTargetScaleZ;

};

struct FAnimNode_CCDIK : public FAnimNode_SkeletalControlBase
{
    FVector EffectorLocation;
    TEnumAsByte<EBoneControlSpace> EffectorLocationSpace;
    FBoneSocketTarget EffectorTarget;
    FBoneReference TipBone;
    FBoneReference RootBone;
    float Precision;
    int32 MaxIterations;
    bool bStartFromTail;
    bool bEnableRotationLimit;
    TArray<float> RotationLimitPerJoints;

};

struct FAnimNode_CallFunction : public FAnimNode_Base
{
    FPoseLink Source;
    EAnimFunctionCallSite CallSite;

};

struct FAnimNode_Constraint : public FAnimNode_SkeletalControlBase
{
    FBoneReference BoneToModify;
    TArray<FConstraint> ConstraintSetup;
    TArray<float> ConstraintWeights;

};

struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
{
    FBoneReference SourceBone;
    FBoneReference TargetBone;
    bool bCopyTranslation;
    bool bCopyRotation;
    bool bCopyScale;
    TEnumAsByte<EBoneControlSpace> ControlSpace;

};

struct FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase
{
    FBoneReference SourceBone;
    FBoneReference TargetBone;
    bool bCopyTranslation;
    bool bCopyRotation;
    bool bCopyScale;
    CopyBoneDeltaMode CopyMode;
    float TranslationMultiplier;
    float RotationMultiplier;
    float ScaleMultiplier;

};

struct FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
{
    TWeakObjectPtr<class USkeletalMeshComponent> SourceMeshComponent;
    uint8 bUseAttachedParent;
    uint8 bCopyCurves;
    bool bCopyCustomAttributes;
    uint8 bUseMeshPose;
    FName RootBoneToCopy;

};

struct FAnimNode_CurveSource : public FAnimNode_Base
{
    FPoseLink SourcePose;
    FName SourceBinding;
    float Alpha;
    TScriptInterface<class ICurveSourceInterface> CurveSource;

};

struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
{
    FTransform EffectorTransform;
    FBoneSocketTarget EffectorTarget;
    FBoneReference TipBone;
    FBoneReference RootBone;
    float Precision;
    int32 MaxIterations;
    TEnumAsByte<EBoneControlSpace> EffectorTransformSpace;
    TEnumAsByte<EBoneRotationSource> EffectorRotationSource;

};

struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
{
    FBoneReference RightHandFK;
    FBoneReference LeftHandFK;
    FBoneReference RightHandIK;
    FBoneReference LeftHandIK;
    TArray<FBoneReference> IKBonesToMove;
    float HandFKWeight;

};

struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base
{
    FPoseLink BasePose;
    TArray<FPoseLink> BlendPoses;
    ELayeredBoneBlendMode BlendMode;
    TArray<class UBlendProfile*> BlendMasks;
    TArray<FInputBlendPose> LayerSetup;
    TArray<float> BlendWeights;
    bool bMeshSpaceRotationBlend;
    bool bMeshSpaceScaleBlend;
    TEnumAsByte<ECurveBlendOption> CurveBlendOption;
    bool bBlendRootMotionBasedOnRootBone;
    int32 LODThreshold;
    TArray<FPerBoneBlendWeight> PerBoneBlendWeights;
    FGuid SkeletonGuid;
    FGuid VirtualBoneGuid;

};

struct FAnimNode_LegIK : public FAnimNode_SkeletalControlBase
{
    float ReachPrecision;
    int32 MaxIterations;
    TArray<FAnimLegIKDefinition> LegsDefinition;

};

struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{
    FBoneReference BoneToModify;
    FBoneSocketTarget LookAtTarget;
    FVector LookAtLocation;
    FAxis LookAt_Axis;
    bool bUseLookUpAxis;
    TEnumAsByte<EInterpolationBlend> InterpolationType;
    FAxis LookUp_Axis;
    float LookAtClamp;
    float InterpolationTime;
    float InterpolationTriggerThreashold;

};

struct FAnimNode_MakeDynamicAdditive : public FAnimNode_Base
{
    FPoseLink Base;
    FPoseLink Additive;
    bool bMeshSpaceAdditive;

};

struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
{
};

struct FAnimNode_Mirror : public FAnimNode_MirrorBase
{
};

struct FAnimNode_MirrorBase : public FAnimNode_Base
{
    FPoseLink Source;

};

struct FAnimNode_Mirror_Standalone : public FAnimNode_MirrorBase
{
    bool bMirror;
    class UMirrorDataTable* MirrorDataTable;
    float BlendTime;
    bool bResetChild;
    bool bBoneMirroring;
    bool bCurveMirroring;
    bool bAttributeMirroring;

};

struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
{
    FBoneReference BoneToModify;
    FVector Translation;
    FRotator Rotation;
    FVector Scale;
    TEnumAsByte<EBoneModificationMode> TranslationMode;
    TEnumAsByte<EBoneModificationMode> RotationMode;
    TEnumAsByte<EBoneModificationMode> ScaleMode;
    TEnumAsByte<EBoneControlSpace> TranslationSpace;
    TEnumAsByte<EBoneControlSpace> RotationSpace;
    TEnumAsByte<EBoneControlSpace> ScaleSpace;

};

struct FAnimNode_ModifyCurve : public FAnimNode_Base
{
    FPoseLink SourcePose;
    TMap<FName, float> CurveMap;
    TArray<float> CurveValues;
    TArray<FName> CurveNames;
    float Alpha;
    EModifyCurveApplyMode ApplyMode;

};

struct FAnimNode_MultiWayBlend : public FAnimNode_Base
{
    TArray<FPoseLink> Poses;
    TArray<float> DesiredAlphas;
    FInputScaleBias AlphaScaleBias;
    bool bAdditiveNode;
    bool bNormalizeAlpha;

};

struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
{
    FBoneReference BoneToObserve;
    TEnumAsByte<EBoneControlSpace> DisplaySpace;
    bool bRelativeToRefPose;
    FVector Translation;
    FRotator Rotation;
    FVector Scale;

};

struct FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler
{
    FPoseLink SourcePose;
    EAlphaBlendOption BlendOption;
    class UCurveFloat* CustomCurve;

};

struct FAnimNode_PoseByName : public FAnimNode_PoseHandler
{
    FName PoseName;
    float PoseWeight;

};

struct FAnimNode_PoseDriver : public FAnimNode_PoseHandler
{
    FPoseLink SourcePose;
    TArray<FBoneReference> SourceBones;
    TArray<FBoneReference> OnlyDriveBones;
    TArray<FPoseDriverTarget> PoseTargets;
    FBoneReference EvalSpaceBone;
    bool bEvalFromRefPose;
    FRBFParams RBFParams;
    EPoseDriverSource DriveSource;
    EPoseDriverOutput DriveOutput;
    uint8 bOnlyDriveSelectedBones;
    int32 LODThreshold;

};

struct FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase
{
    class UPoseAsset* PoseAsset;

};

struct FAnimNode_PoseSnapshot : public FAnimNode_Base
{
    FName SnapshotName;
    FPoseSnapshot Snapshot;
    ESnapshotSourceMode Mode;

};

struct FAnimNode_RandomPlayer : public FAnimNode_AssetPlayerRelevancyBase
{
    TArray<FRandomPlayerSequenceEntry> Entries;
    float BlendWeight;
    bool bShuffleMode;

};

struct FAnimNode_RefPose : public FAnimNode_Base
{
};

struct FAnimNode_ResetRoot : public FAnimNode_SkeletalControlBase
{
};

struct FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase
{
    class UPhysicsAsset* OverridePhysicsAsset;
    FVector OverrideWorldGravity;
    FVector ExternalForce;
    FVector ComponentLinearAccScale;
    FVector ComponentLinearVelScale;
    FVector ComponentAppliedLinearAccClamp;
    FSimSpaceSettings SimSpaceSettings;
    float CachedBoundsScale;
    FBoneReference BaseBoneRef;
    TEnumAsByte<ECollisionChannel> OverlapChannel;
    ESimulationSpace SimulationSpace;
    bool bForceDisableCollisionBetweenConstraintBodies;
    bool bUseExternalClothCollision;
    uint8 bEnableWorldGeometry;
    uint8 bOverrideWorldGravity;
    uint8 bTransferBoneVelocities;
    uint8 bFreezeIncomingPoseOnStart;
    uint8 bClampLinearTranslationLimitToRefPose;
    float WorldSpaceMinimumScale;
    float EvaluationResetTime;
    ESimulationTiming SimulationTiming;

};

struct FAnimNode_RotateRootBone : public FAnimNode_Base
{
    FPoseLink BasePose;
    float Pitch;
    float Yaw;
    FInputScaleBiasClamp PitchScaleBiasClamp;
    FInputScaleBiasClamp YawScaleBiasClamp;
    FRotator MeshToComponent;

};

struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
{
    FBoneReference TargetBone;
    FBoneReference SourceBone;
    float Multiplier;
    TEnumAsByte<EBoneAxis> RotationAxisToRefer;
    bool bIsAdditive;

};

struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
{
    FPoseLink BasePose;
    int32 LODThreshold;
    float Alpha;
    FInputScaleBias AlphaScaleBias;
    FInputAlphaBoolBlend AlphaBoolBlend;
    FName AlphaCurveName;
    FInputScaleBiasClamp AlphaScaleBiasClamp;
    EAnimAlphaInputType AlphaInputType;
    bool bAlphaBoolEnabled;

};

struct FAnimNode_RotationOffsetBlendSpaceGraph : public FAnimNode_BlendSpaceGraphBase
{
    FPoseLink BasePose;
    int32 LODThreshold;
    float Alpha;
    FInputScaleBias AlphaScaleBias;
    FInputAlphaBoolBlend AlphaBoolBlend;
    FName AlphaCurveName;
    FInputScaleBiasClamp AlphaScaleBiasClamp;
    EAnimAlphaInputType AlphaInputType;
    bool bAlphaBoolEnabled;

};

struct FAnimNode_ScaleChainLength : public FAnimNode_Base
{
    FPoseLink InputPose;
    float DefaultChainLength;
    FBoneReference ChainStartBone;
    FBoneReference ChainEndBone;
    FVector TargetLocation;
    float Alpha;
    FInputScaleBias AlphaScaleBias;
    EScaleChainInitialLength ChainInitialLength;

};

struct FAnimNode_SequenceEvaluator : public FAnimNode_SequenceEvaluatorBase
{
};

struct FAnimNode_SequenceEvaluatorBase : public FAnimNode_AssetPlayerBase
{
};

struct FAnimNode_SequenceEvaluator_Standalone : public FAnimNode_SequenceEvaluatorBase
{
    FName GroupName;
    TEnumAsByte<EAnimGroupRole> GroupRole;
    EAnimSyncMethod Method;
    bool bIgnoreForRelevancyTest;
    class UAnimSequenceBase* Sequence;
    float ExplicitTime;
    bool bShouldLoop;
    bool bTeleportToExplicitTime;
    TEnumAsByte<ESequenceEvalReinit> ReinitializationBehavior;
    float StartPosition;

};

struct FAnimNode_SkeletalControlBase : public FAnimNode_Base
{
    FComponentSpacePoseLink ComponentPose;
    int32 LODThreshold;
    float ActualAlpha;
    EAnimAlphaInputType AlphaInputType;
    bool bAlphaBoolEnabled;
    float Alpha;
    FInputScaleBias AlphaScaleBias;
    FInputAlphaBoolBlend AlphaBoolBlend;
    FName AlphaCurveName;
    FInputScaleBiasClamp AlphaScaleBiasClamp;

};

struct FAnimNode_Slot : public FAnimNode_Base
{
    FPoseLink Source;
    FName SlotName;
    bool bAlwaysUpdateSourcePose;

};

struct FAnimNode_SplineIK : public FAnimNode_SkeletalControlBase
{
    FBoneReference StartBone;
    FBoneReference EndBone;
    ESplineBoneAxis BoneAxis;
    bool bAutoCalculateSpline;
    int32 PointCount;
    TArray<FTransform> ControlPoints;
    float Roll;
    float TwistStart;
    float TwistEnd;
    FAlphaBlend TwistBlend;
    float Stretch;
    float Offset;

};

struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
{
    FBoneReference SpringBone;
    float MaxDisplacement;
    float SpringStiffness;
    float SpringDamping;
    float ErrorResetThresh;
    uint8 bLimitDisplacement;
    uint8 bTranslateX;
    uint8 bTranslateY;
    uint8 bTranslateZ;
    uint8 bRotateX;
    uint8 bRotateY;
    uint8 bRotateZ;

};

struct FAnimNode_StateResult : public FAnimNode_Root
{
};

struct FAnimNode_Sync : public FAnimNode_Base
{
    FPoseLink Source;
    FName GroupName;
    TEnumAsByte<EAnimGroupRole> GroupRole;

};

struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase
{
    FBoneReference TrailBone;
    int32 ChainLength;
    TEnumAsByte<EAxis> ChainBoneAxis;
    uint8 bInvertChainBoneAxis;
    uint8 bLimitStretch;
    uint8 bLimitRotation;
    uint8 bUsePlanarLimit;
    uint8 bActorSpaceFakeVel;
    uint8 bReorientParentToChild;
    float MaxDeltaTime;
    float RelaxationSpeedScale;
    FRuntimeFloatCurve TrailRelaxationSpeed;
    FInputScaleBiasClamp RelaxationSpeedScaleInputProcessor;
    TArray<FRotationLimit> RotationLimits;
    TArray<FVector> RotationOffsets;
    TArray<FAnimPhysPlanarLimit> PlanarLimits;
    float StretchLimit;
    FVector FakeVelocity;
    FBoneReference BaseJoint;
    float LastBoneRotationAnimAlphaBlend;

};

struct FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase
{
    FReferenceBoneFrame BaseFrame;
    FReferenceBoneFrame TwistFrame;
    FAxis TwistPlaneNormalAxis;
    float RangeMax;
    float RemappedMin;
    float RemappedMax;
    FAnimCurveParam Curve;

};

struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
{
    FBoneReference IKBone;
    float StartStretchRatio;
    float MaxStretchScale;
    FVector EffectorLocation;
    FBoneSocketTarget EffectorTarget;
    FVector JointTargetLocation;
    FBoneSocketTarget JointTarget;
    FAxis TwistAxis;
    TEnumAsByte<EBoneControlSpace> EffectorLocationSpace;
    TEnumAsByte<EBoneControlSpace> JointTargetLocationSpace;
    uint8 bAllowStretching;
    uint8 bTakeRotationFromEffectorSpace;
    uint8 bMaintainEffectorRelRot;
    uint8 bAllowTwist;

};

struct FAnimNode_TwoWayBlend : public FAnimNode_Base
{
    FPoseLink A;
    FPoseLink B;
    EAnimAlphaInputType AlphaInputType;
    uint8 bAlphaBoolEnabled;
    uint8 bResetChildOnActivation;
    float Alpha;
    FInputScaleBias AlphaScaleBias;
    FInputAlphaBoolBlend AlphaBoolBlend;
    FName AlphaCurveName;
    FInputScaleBiasClamp AlphaScaleBiasClamp;

};

struct FAnimPhysBodyDefinition
{
    FBoneReference BoundBone;
    FVector BoxExtents;
    FVector LocalJointOffset;
    FAnimPhysConstraintSetup ConstraintSetup;
    AnimPhysCollisionType CollisionType;
    float SphereCollisionRadius;

};

struct FAnimPhysConstraintSetup
{
    AnimPhysLinearConstraintType LinearXLimitType;
    AnimPhysLinearConstraintType LinearYLimitType;
    AnimPhysLinearConstraintType LinearZLimitType;
    FVector LinearAxesMin;
    FVector LinearAxesMax;
    AnimPhysAngularConstraintType AngularConstraintType;
    AnimPhysTwistAxis TwistAxis;
    AnimPhysTwistAxis AngularTargetAxis;
    float ConeAngle;
    FVector AngularLimitsMin;
    FVector AngularLimitsMax;
    FVector AngularTarget;

};

struct FAnimPhysPlanarLimit
{
    FBoneReference DrivingBone;
    FTransform PlaneTransform;

};

struct FAnimPhysSphericalLimit
{
    FBoneReference DrivingBone;
    FVector SphereLocalOffset;
    float LimitRadius;
    ESphericalLimitType LimitType;

};

struct FAnimSequencerInstanceProxy : public FAnimInstanceProxy
{
};

struct FAnimationStateMachineReference : public FAnimNodeReference
{
};

struct FAnimationStateResultReference : public FAnimNodeReference
{
};

struct FBlendBoneByChannelEntry
{
    FBoneReference SourceBone;
    FBoneReference TargetBone;
    bool bBlendTranslation;
    bool bBlendRotation;
    bool bBlendScale;

};

struct FBlendSpacePlayerReference : public FAnimNodeReference
{
};

struct FConstraint
{
    FBoneReference TargetBone;
    EConstraintOffsetOption OffsetOption;
    ETransformConstraintType TransformType;
    FFilterOptionPerAxis PerAxis;

};

struct FIKChain
{
};

struct FIKChainLink
{
};

struct FIKFootPelvisPullDownSolver
{
    FVectorRK4SpringInterpolator PelvisAdjustmentInterp;
    float PelvisAdjustmentInterpAlpha;
    float PelvisAdjustmentMaxDistance;
    float PelvisAdjustmentErrorTolerance;
    int32 PelvisAdjustmentMaxIter;

};

struct FLayeredBoneBlendReference : public FAnimNodeReference
{
};

struct FLinkedAnimGraphReference : public FAnimNodeReference
{
};

struct FPoseDriverTarget
{
    TArray<FPoseDriverTransform> BoneTransforms;
    FRotator TargetRotation;
    float TargetScale;
    ERBFDistanceMethod DistanceMethod;
    ERBFFunctionType FunctionType;
    bool bApplyCustomCurve;
    FRichCurve CustomCurve;
    FName DrivenName;
    bool bIsHidden;

};

struct FPoseDriverTransform
{
    FVector TargetTranslation;
    FRotator TargetRotation;

};

struct FPositionHistory
{
    TArray<FVector> Positions;
    float Range;

};

struct FRBFEntry
{
    TArray<float> Values;

};

struct FRBFParams
{
    int32 TargetDimensions;
    ERBFSolverType SolverType;
    float Radius;
    bool bAutomaticRadius;
    ERBFFunctionType Function;
    ERBFDistanceMethod DistanceMethod;
    TEnumAsByte<EBoneAxis> TwistAxis;
    float WeightThreshold;
    ERBFNormalizeMethod NormalizeMethod;
    FVector MedianReference;
    float MedianMin;
    float MedianMax;

};

struct FRBFTarget : public FRBFEntry
{
    float ScaleFactor;
    bool bApplyCustomCurve;
    FRichCurve CustomCurve;
    ERBFDistanceMethod DistanceMethod;
    ERBFFunctionType FunctionType;

};

struct FRandomPlayerSequenceEntry
{
    class UAnimSequence* Sequence;
    float ChanceToPlay;
    int32 MinLoopCount;
    int32 maxLoopCount;
    float MinPlayRate;
    float MaxPlayRate;
    FAlphaBlend BlendIn;

};

struct FReferenceBoneFrame
{
    FBoneReference bone;
    FAxis Axis;

};

struct FRotationLimit
{
    FVector LimitMin;
    FVector LimitMax;

};

struct FRotationRetargetingInfo
{
    bool bEnabled;
    FTransform Source;
    FTransform Target;
    ERotationComponent RotationComponent;
    FVector TwistAxis;
    bool bUseAbsoluteAngle;
    float SourceMinimum;
    float SourceMaximum;
    float TargetMinimum;
    float TargetMaximum;
    EEasingFuncType EasingType;
    FRuntimeFloatCurve CustomCurve;
    bool bFlipEasing;
    float EasingWeight;
    bool bClamp;

};

struct FSequenceEvaluatorReference : public FAnimNodeReference
{
};

struct FSequencePlayerReference : public FAnimNodeReference
{
};

struct FSimSpaceSettings
{
    float WorldAlpha;
    float VelocityScaleZ;
    float MaxLinearVelocity;
    float MaxAngularVelocity;
    float MaxLinearAcceleration;
    float MaxAngularAcceleration;
    float ExternalLinearDrag;
    FVector ExternalLinearDragV;
    FVector ExternalLinearVelocity;
    FVector ExternalAngularVelocity;

};

struct FSkeletalControlReference : public FAnimNodeReference
{
};

struct FSplineIKCachedBoneData
{
    FBoneReference bone;
    int32 RefSkeletonIndex;

};

struct FWarpingVectorValue
{
    EWarpingVectorMode Mode;
    FVector Value;

};

class ISequencerAnimationSupport : public IInterface
{
};

class UAnimExecutionContextLibrary : public UBlueprintFunctionLibrary
{

    float GetDeltaTime(const FAnimUpdateContext& Context);
    float GetCurrentWeight(const FAnimUpdateContext& Context);
    FAnimNodeReference GetAnimNodeReference(class UAnimInstance* Instance, int32 Index);
    class UAnimInstance* GetAnimInstance(const FAnimExecutionContext& Context);
    FAnimUpdateContext ConvertToUpdateContext(const FAnimExecutionContext& Context, EAnimExecutionContextConversionResult& Result);
    FAnimPoseContext ConvertToPoseContext(const FAnimExecutionContext& Context, EAnimExecutionContextConversionResult& Result);
    FAnimInitializationContext ConvertToInitializationContext(const FAnimExecutionContext& Context, EAnimExecutionContextConversionResult& Result);
    FAnimComponentSpacePoseContext ConvertToComponentSpacePoseContext(const FAnimExecutionContext& Context, EAnimExecutionContextConversionResult& Result);
};

class UAnimNotify_PlayMontageNotify : public UAnimNotify
{
    FName NotifyName;

};

class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{
    FName NotifyName;

};

class UAnimSequencerInstance : public UAnimInstance
{
};

class UAnimationStateMachineLibrary : public UBlueprintFunctionLibrary
{

    void SetState(const FAnimUpdateContext& UpdateContext, const FAnimationStateMachineReference& Node, FName TargetState, float Duration, TEnumAsByte<ETransitionLogicType> BlendType, class UBlendProfile* BlendProfile, EAlphaBlendOption AlphaBlendOption, class UCurveFloat* CustomBlendCurve);
    bool IsStateBlendingOut(const FAnimUpdateContext& UpdateContext, const FAnimationStateResultReference& Node);
    bool IsStateBlendingIn(const FAnimUpdateContext& UpdateContext, const FAnimationStateResultReference& Node);
    FName GetState(const FAnimUpdateContext& UpdateContext, const FAnimationStateMachineReference& Node);
    float GetRelevantAnimTimeRemainingFraction(const FAnimUpdateContext& UpdateContext, const FAnimationStateResultReference& Node);
    float GetRelevantAnimTimeRemaining(const FAnimUpdateContext& UpdateContext, const FAnimationStateResultReference& Node);
    void ConvertToAnimationStateResultPure(const FAnimNodeReference& Node, FAnimationStateResultReference& AnimationState, bool& Result);
    void ConvertToAnimationStateResult(const FAnimNodeReference& Node, FAnimationStateResultReference& AnimationState, EAnimNodeReferenceConversionResult& Result);
    void ConvertToAnimationStateMachinePure(const FAnimNodeReference& Node, FAnimationStateMachineReference& AnimationState, bool& Result);
    void ConvertToAnimationStateMachine(const FAnimNodeReference& Node, FAnimationStateMachineReference& AnimationState, EAnimNodeReferenceConversionResult& Result);
};

class UBlendSpacePlayerLibrary : public UBlueprintFunctionLibrary
{

    bool ShouldResetPlayTimeWhenBlendSpaceChanges(const FBlendSpacePlayerReference& BlendSpacePlayer);
    FBlendSpacePlayerReference SetResetPlayTimeWhenBlendSpaceChanges(const FBlendSpacePlayerReference& BlendSpacePlayer, bool bReset);
    FBlendSpacePlayerReference SetPlayRate(const FBlendSpacePlayerReference& BlendSpacePlayer, float PlayRate);
    FBlendSpacePlayerReference SetLoop(const FBlendSpacePlayerReference& BlendSpacePlayer, bool bLoop);
    FBlendSpacePlayerReference SetBlendSpaceWithInertialBlending(const FAnimUpdateContext& UpdateContext, const FBlendSpacePlayerReference& BlendSpacePlayer, class UBlendSpace* BlendSpace, float BlendTime);
    FBlendSpacePlayerReference SetBlendSpace(const FBlendSpacePlayerReference& BlendSpacePlayer, class UBlendSpace* BlendSpace);
    float GetStartPosition(const FBlendSpacePlayerReference& BlendSpacePlayer);
    FVector GetPosition(const FBlendSpacePlayerReference& BlendSpacePlayer);
    float GetPlayRate(const FBlendSpacePlayerReference& BlendSpacePlayer);
    bool GetLoop(const FBlendSpacePlayerReference& BlendSpacePlayer);
    class UBlendSpace* GetBlendSpace(const FBlendSpacePlayerReference& BlendSpacePlayer);
    void ConvertToBlendSpacePlayerPure(const FAnimNodeReference& Node, FBlendSpacePlayerReference& BlendSpacePlayer, bool& Result);
    FBlendSpacePlayerReference ConvertToBlendSpacePlayer(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
};

class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
{

    void K2_TwoBoneIK(const FVector& RootPos, const FVector& JointPos, const FVector& EndPos, const FVector& JointTarget, const FVector& Effector, FVector& OutJointPos, FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale);
    void K2_StartProfilingTimer();
    FVector K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ);
    float K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax);
    FTransform K2_LookAt(const FTransform& CurrentTransform, const FVector& targetPosition, FVector LookAtVector, bool bUseUpVector, FVector UpVector, float ClampConeInDegree);
    float K2_EndProfilingTimer(bool bLog, FString LogPrefix);
    float K2_DistanceBetweenTwoSocketsAndMapRange(const class USkeletalMeshComponent* Component, const FName SocketOrBoneNameA, TEnumAsByte<ERelativeTransformSpace> SocketSpaceA, const FName SocketOrBoneNameB, TEnumAsByte<ERelativeTransformSpace> SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax);
    FVector K2_DirectionBetweenSockets(const class USkeletalMeshComponent* Component, const FName SocketOrBoneNameFrom, const FName SocketOrBoneNameTo);
    float K2_CalculateVelocityFromSockets(float DeltaSeconds, class USkeletalMeshComponent* Component, const FName SocketOrBoneName, const FName ReferenceSocketOrBone, TEnumAsByte<ERelativeTransformSpace> SocketSpace, FVector OffsetInBoneSpace, FPositionHistory& History, int32 NumberOfSamples, float VelocityMin, float VelocityMax, EEasingFuncType EasingType, const FRuntimeFloatCurve& CustomCurve);
    float K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, FVector Position, FPositionHistory& History, int32 NumberOfSamples, float VelocityMin, float VelocityMax);
    float CalculateDirection(const FVector& Velocity, const FRotator& BaseRotation);
};

class ULayeredBoneBlendLibrary : public UBlueprintFunctionLibrary
{

    FLayeredBoneBlendReference SetBlendMask(const FAnimUpdateContext& UpdateContext, const FLayeredBoneBlendReference& LayeredBoneBlend, int32 PoseIndex, FName BlendMaskName);
    int32 GetNumPoses(const FLayeredBoneBlendReference& LayeredBoneBlend);
    FLayeredBoneBlendReference ConvertToLayeredBoneBlend(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
    void ConvertToLayeredBlendPerBonePure(const FAnimNodeReference& Node, FLayeredBoneBlendReference& LayeredBoneBlend, bool& Result);
};

class ULinkedAnimGraphLibrary : public UBlueprintFunctionLibrary
{

    bool HasLinkedAnimInstance(const FLinkedAnimGraphReference& Node);
    class UAnimInstance* GetLinkedAnimInstance(const FLinkedAnimGraphReference& Node);
    void ConvertToLinkedAnimGraphPure(const FAnimNodeReference& Node, FLinkedAnimGraphReference& LinkedAnimGraph, bool& Result);
    FLinkedAnimGraphReference ConvertToLinkedAnimGraph(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
};

class UPlayMontageCallbackProxy : public UObject
{
    FPlayMontageCallbackProxyOnCompleted OnCompleted;
    void OnMontagePlayDelegate(FName NotifyName);
    FPlayMontageCallbackProxyOnBlendOut OnBlendOut;
    void OnMontagePlayDelegate(FName NotifyName);
    FPlayMontageCallbackProxyOnInterrupted OnInterrupted;
    void OnMontagePlayDelegate(FName NotifyName);
    FPlayMontageCallbackProxyOnNotifyBegin OnNotifyBegin;
    void OnMontagePlayDelegate(FName NotifyName);
    FPlayMontageCallbackProxyOnNotifyEnd OnNotifyEnd;
    void OnMontagePlayDelegate(FName NotifyName);

    void OnNotifyEndReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
    void OnNotifyBeginReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
    void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
    void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
    class UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, FName StartingSection);
};

class USequenceEvaluatorLibrary : public UBlueprintFunctionLibrary
{

    FSequenceEvaluatorReference SetSequenceWithInertialBlending(const FAnimUpdateContext& UpdateContext, const FSequenceEvaluatorReference& SequenceEvaluator, class UAnimSequenceBase* Sequence, float BlendTime);
    FSequenceEvaluatorReference SetSequence(const FSequenceEvaluatorReference& SequenceEvaluator, class UAnimSequenceBase* Sequence);
    FSequenceEvaluatorReference SetExplicitTime(const FSequenceEvaluatorReference& SequenceEvaluator, float Time);
    class UAnimSequenceBase* GetSequence(const FSequenceEvaluatorReference& SequenceEvaluator);
    float GetAccumulatedTime(const FSequenceEvaluatorReference& SequenceEvaluator);
    void ConvertToSequenceEvaluatorPure(const FAnimNodeReference& Node, FSequenceEvaluatorReference& SequenceEvaluator, bool& Result);
    FSequenceEvaluatorReference ConvertToSequenceEvaluator(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
    FSequenceEvaluatorReference AdvanceTime(const FAnimUpdateContext& UpdateContext, const FSequenceEvaluatorReference& SequenceEvaluator, float PlayRate);
};

class USequencePlayerLibrary : public UBlueprintFunctionLibrary
{

    FSequencePlayerReference SetStartPosition(const FSequencePlayerReference& SequencePlayer, float StartPosition);
    FSequencePlayerReference SetSequenceWithInertialBlending(const FAnimUpdateContext& UpdateContext, const FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase* Sequence, float BlendTime);
    FSequencePlayerReference SetSequence(const FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase* Sequence);
    FSequencePlayerReference SetPlayRate(const FSequencePlayerReference& SequencePlayer, float PlayRate);
    FSequencePlayerReference SetAccumulatedTime(const FSequencePlayerReference& SequencePlayer, float Time);
    float GetStartPosition(const FSequencePlayerReference& SequencePlayer);
    class UAnimSequenceBase* GetSequencePure(const FSequencePlayerReference& SequencePlayer);
    FSequencePlayerReference GetSequence(const FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase*& SequenceBase);
    float GetPlayRate(const FSequencePlayerReference& SequencePlayer);
    bool GetLoopAnimation(const FSequencePlayerReference& SequencePlayer);
    float GetAccumulatedTime(const FSequencePlayerReference& SequencePlayer);
    void ConvertToSequencePlayerPure(const FAnimNodeReference& Node, FSequencePlayerReference& SequencePlayer, bool& Result);
    FSequencePlayerReference ConvertToSequencePlayer(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
    float ComputePlayRateFromDuration(const FSequencePlayerReference& SequencePlayer, float Duration);
};

class USkeletalControlLibrary : public UBlueprintFunctionLibrary
{

    FSkeletalControlReference SetAlpha(const FSkeletalControlReference& SkeletalControl, float Alpha);
    float GetAlpha(const FSkeletalControlReference& SkeletalControl);
    void ConvertToSkeletalControlPure(const FAnimNodeReference& Node, FSkeletalControlReference& SkeletalControl, bool& Result);
    FSkeletalControlReference ConvertToSkeletalControl(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
};

#endif
