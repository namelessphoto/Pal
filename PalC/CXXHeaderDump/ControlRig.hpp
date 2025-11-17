#ifndef UE4SS_SDK_ControlRig_HPP
#define UE4SS_SDK_ControlRig_HPP

#include "ControlRig_enums.hpp"

struct FAimTarget
{
    float Weight;
    FTransform Transform;
    FVector AlignVector;

};

struct FAnimNode_ControlRig : public FAnimNode_ControlRigBase
{
    TSubclassOf<class UControlRig> ControlRigClass;
    class UControlRig* ControlRig;
    float Alpha;
    EAnimAlphaInputType AlphaInputType;
    uint8 bAlphaBoolEnabled;
    uint8 bSetRefPoseFromSkeleton;
    FInputScaleBias AlphaScaleBias;
    FInputAlphaBoolBlend AlphaBoolBlend;
    FName AlphaCurveName;
    FInputScaleBiasClamp AlphaScaleBiasClamp;
    TMap<class FName, class FName> InputMapping;
    TMap<class FName, class FName> OutputMapping;
    int32 LODThreshold;

};

struct FAnimNode_ControlRigBase : public FAnimNode_CustomProperty
{
    FPoseLink Source;
    bool bResetInputPoseToInitial;
    bool bTransferInputPose;
    bool bTransferInputCurves;
    bool bTransferPoseInGlobalSpace;
    TArray<FBoneReference> InputBonesToTransfer;
    TWeakObjectPtr<class UNodeMappingContainer> NodeMappingContainer;
    FControlRigIOSettings InputSettings;
    FControlRigIOSettings OutputSettings;
    bool bExecute;
    TArray<FControlRigAnimNodeEventName> EventQueue;

};

struct FAnimNode_ControlRigInputPose : public FAnimNode_Base
{
    FPoseLink InputPose;

};

struct FAnimNode_ControlRig_ExternalSource : public FAnimNode_ControlRigBase
{
    TWeakObjectPtr<class UControlRig> ControlRig;

};

struct FAnimationHierarchy : public FNodeHierarchyWithUserData
{
    TArray<FConstraintNodeData> UserData;

};

struct FBlendTarget
{
    FTransform Transform;
    float Weight;

};

struct FCRFourPointBezier
{
    FVector A;
    FVector B;
    FVector C;
    FVector D;

};

struct FCRSimContainer
{
    float TimeStep;
    float AccumulatedTime;
    float TimeLeftForStep;

};

struct FCRSimLinearSpring
{
    int32 SubjectA;
    int32 SubjectB;
    float Coefficient;
    float Equilibrium;

};

struct FCRSimPoint
{
    float Mass;
    float Size;
    float LinearDamping;
    float InheritMotion;
    FVector Position;
    FVector LinearVelocity;

};

struct FCRSimPointConstraint
{
    ECRSimConstraintType Type;
    int32 SubjectA;
    int32 SubjectB;
    FVector DataA;
    FVector DataB;

};

struct FCRSimPointContainer : public FCRSimContainer
{
    TArray<FCRSimPoint> Points;
    TArray<FCRSimLinearSpring> Springs;
    TArray<FCRSimPointForce> Forces;
    TArray<FCRSimSoftCollision> CollisionVolumes;
    TArray<FCRSimPointConstraint> Constraints;
    TArray<FCRSimPoint> PreviousStep;

};

struct FCRSimPointForce
{
    ECRSimPointForceType ForceType;
    FVector Vector;
    float Coefficient;
    bool bNormalize;

};

struct FCRSimSoftCollision
{
    FTransform Transform;
    ECRSimSoftCollisionType ShapeType;
    float MinimumDistance;
    float MaximumDistance;
    EControlRigAnimEasingType FalloffType;
    float Coefficient;
    bool bInverted;

};

struct FCachedRigElement
{
    FRigElementKey Key;
    uint16 Index;
    int32 ContainerVersion;

};

struct FChannelMapInfo
{
    int32 ControlIndex;
    int32 TotalChannelIndex;
    int32 ChannelIndex;
    int32 ParentControlIndex;
    FName ChannelTypeName;
    bool bDoesHaveSpace;
    int32 SpaceChannelIndex;
    int32 MaskIndex;
    int32 CategoryIndex;
    TArray<uint32> ConstraintsIndex;

};

struct FConstraintNodeData
{
    FTransform RelativeParent;
    FConstraintOffset ConstraintOffset;
    FName LinkedNode;
    TArray<FTransformConstraint> Constraints;

};

struct FConstraintParent
{
    FRigElementKey Item;
    float Weight;

};

struct FConstraintTarget
{
    FTransform Transform;
    float Weight;
    bool bMaintainOffset;
    FTransformFilter Filter;

};

struct FControlRigAnimInstanceProxy : public FAnimInstanceProxy
{
};

struct FControlRigAnimNodeEventName
{
    FName EventName;

};

struct FControlRigComponentMappedBone
{
    FName Source;
    FName Target;

};

struct FControlRigComponentMappedComponent
{
    class USceneComponent* Component;
    FName ElementName;
    ERigElementType ElementType;
    EControlRigComponentMapDirection Direction;

};

struct FControlRigComponentMappedCurve
{
    FName Source;
    FName Target;

};

struct FControlRigComponentMappedElement
{
    FComponentReference ComponentReference;
    int32 TransformIndex;
    FName TransformName;
    ERigElementType ElementType;
    FName ElementName;
    EControlRigComponentMapDirection Direction;
    FTransform Offset;
    float Weight;
    EControlRigComponentSpace space;
    class USceneComponent* SceneComponent;
    int32 ElementIndex;
    int32 SubIndex;

};

struct FControlRigControlPose
{
    TArray<FRigControlCopy> CopyOfControls;

};

struct FControlRigDrawContainer
{
    TArray<FControlRigDrawInstruction> Instructions;

};

struct FControlRigDrawInstruction
{
    FName Name;
    TEnumAsByte<EControlRigDrawSettings> PrimitiveType;
    TArray<FVector> Positions;
    FLinearColor Color;
    float Thickness;
    FTransform Transform;

};

struct FControlRigDrawInterface : public FControlRigDrawContainer
{
};

struct FControlRigExecuteContext : public FRigVMExecuteContext
{
};

struct FControlRigIOSettings
{
    bool bUpdatePose;
    bool bUpdateCurves;

};

struct FControlRigLayerInstanceProxy : public FAnimInstanceProxy
{
};

struct FControlRigSequenceObjectReference
{
    TSubclassOf<class UControlRig> ControlRigClass;

};

struct FControlRigSequenceObjectReferenceMap
{
    TArray<FGuid> BindingIds;
    TArray<FControlRigSequenceObjectReferences> References;

};

struct FControlRigSequenceObjectReferences
{
    TArray<FControlRigSequenceObjectReference> Array;

};

struct FControlRigSettingsPerPinBool
{
    TMap<class FString, class bool> Values;

};

struct FControlRigShapeDefinition
{
    FName ShapeName;
    TSoftObjectPtr<UStaticMesh> StaticMesh;
    FTransform Transform;

};

struct FControlRigValidationContext
{
};

struct FControlShapeActorCreationParam
{
};

struct FEnumParameterNameAndCurve
{
    FName ParameterName;
    FMovieSceneByteChannel ParameterCurve;

};

struct FIntegerParameterNameAndCurve
{
    FName ParameterName;
    FMovieSceneIntegerChannel ParameterCurve;

};

struct FMathRBFInterpolateQuatColor_Target
{
    FQuat Target;
    FLinearColor Value;

};

struct FMathRBFInterpolateQuatFloat_Target
{
    FQuat Target;
    float Value;

};

struct FMathRBFInterpolateQuatQuat_Target
{
    FQuat Target;
    FQuat Value;

};

struct FMathRBFInterpolateQuatVector_Target
{
    FQuat Target;
    FVector Value;

};

struct FMathRBFInterpolateQuatXform_Target
{
    FQuat Target;
    FTransform Value;

};

struct FMathRBFInterpolateVectorColor_Target
{
    FVector Target;
    FLinearColor Value;

};

struct FMathRBFInterpolateVectorFloat_Target
{
    FVector Target;
    float Value;

};

struct FMathRBFInterpolateVectorQuat_Target
{
    FVector Target;
    FQuat Value;

};

struct FMathRBFInterpolateVectorVector_Target
{
    FVector Target;
    FVector Value;

};

struct FMathRBFInterpolateVectorXform_Target
{
    FVector Target;
    FTransform Value;

};

struct FMovieSceneControlRigInstanceData : public FMovieSceneSequenceInstanceData
{
    bool bAdditive;
    bool bApplyBoneFilter;
    FInputBlendPose BoneFilter;
    FMovieSceneFloatChannel Weight;
    FMovieSceneEvaluationOperand Operand;

};

struct FMovieSceneControlRigParameterTemplate : public FMovieSceneParameterSectionTemplate
{
    TArray<FEnumParameterNameAndCurve> Enums;
    TArray<FIntegerParameterNameAndCurve> Integers;
    TArray<FSpaceControlNameAndChannel> Spaces;
    TArray<FConstraintAndActiveChannel> Constraints;

};

struct FMovieSceneControlRigSpaceBaseKey
{
    EMovieSceneControlRigSpaceType SpaceType;
    FRigElementKey ControlRigElement;

};

struct FMovieSceneControlRigSpaceChannel : public FMovieSceneChannel
{
    TArray<FFrameNumber> KeyTimes;
    TArray<FMovieSceneControlRigSpaceBaseKey> KeyValues;

};

struct FRegionScaleFactors
{
    float PositiveWidth;
    float NegativeWidth;
    float PositiveHeight;
    float NegativeHeight;

};

struct FRigBaseElement
{
    FRigElementKey Key;
    FString NameString;
    int32 Index;
    int32 SubIndex;
    bool bSelected;
    int32 CreatedAtInstructionIndex;

};

struct FRigBaseMetadata
{
    FName Name;
    ERigMetadataType Type;

};

struct FRigBone : public FRigElement
{
    FName ParentName;
    int32 ParentIndex;
    FTransform InitialTransform;
    FTransform GlobalTransform;
    FTransform LocalTransform;
    TArray<int32> Dependents;
    ERigBoneType Type;

};

struct FRigBoneElement : public FRigSingleParentElement
{
    ERigBoneType boneType;

};

struct FRigBoneHierarchy
{
    TArray<FRigBone> Bones;

};

struct FRigBoolArrayMetadata : public FRigBaseMetadata
{
    TArray<bool> Value;

};

struct FRigBoolMetadata : public FRigBaseMetadata
{
    bool Value;

};

struct FRigComputedTransform
{
    FTransform Transform;

};

struct FRigControl : public FRigElement
{
    ERigControlType ControlType;
    FName DisplayName;
    FName ParentName;
    int32 ParentIndex;
    FName SpaceName;
    int32 SpaceIndex;
    FTransform OffsetTransform;
    FRigControlValue InitialValue;
    FRigControlValue Value;
    ERigControlAxis PrimaryAxis;
    bool bIsCurve;
    bool bAnimatable;
    bool bLimitTranslation;
    bool bLimitRotation;
    bool bLimitScale;
    bool bDrawLimits;
    FRigControlValue MinimumValue;
    FRigControlValue MaximumValue;
    bool bGizmoEnabled;
    bool bGizmoVisible;
    FName GizmoName;
    FTransform GizmoTransform;
    FLinearColor GizmoColor;
    TArray<int32> Dependents;
    bool bIsTransientControl;
    class UEnum* ControlEnum;

};

struct FRigControlCopy
{
    FName Name;
    ERigControlType ControlType;
    FRigControlValue Value;
    FRigElementKey ParentKey;
    FTransform OffsetTransform;
    FTransform ParentTransform;
    FTransform LocalTransform;
    FTransform GlobalTransform;

};

struct FRigControlElement : public FRigMultiParentElement
{
    FRigControlSettings Settings;
    FRigCurrentAndInitialTransform Offset;
    FRigCurrentAndInitialTransform Shape;
    FRigPreferredEulerAngles PreferredEulerAngles;

};

struct FRigControlElementCustomization
{
    TArray<FRigElementKey> AvailableSpaces;
    TArray<FRigElementKey> RemovedSpaces;

};

struct FRigControlHierarchy
{
    TArray<FRigControl> Controls;

};

struct FRigControlLimitEnabled
{
    bool bMinimum;
    bool bMaximum;

};

struct FRigControlModifiedContext
{
};

struct FRigControlSettings
{
    ERigControlAnimationType AnimationType;
    ERigControlType ControlType;
    FName DisplayName;
    ERigControlAxis PrimaryAxis;
    bool bIsCurve;
    TArray<FRigControlLimitEnabled> LimitEnabled;
    bool bDrawLimits;
    FRigControlValue MinimumValue;
    FRigControlValue MaximumValue;
    bool bShapeVisible;
    ERigControlVisibility ShapeVisibility;
    FName ShapeName;
    FLinearColor ShapeColor;
    bool bIsTransientControl;
    class UEnum* ControlEnum;
    FRigControlElementCustomization Customization;
    TArray<FRigElementKey> DrivenControls;
    bool bGroupWithParentControl;
    bool bAnimatable;
    bool bShapeEnabled;

};

struct FRigControlValue
{
    FRigControlValueStorage FloatStorage;
    FTransform Storage;

};

struct FRigControlValueStorage
{
    float Float00;
    float Float01;
    float Float02;
    float Float03;
    float Float10;
    float Float11;
    float Float12;
    float Float13;
    float Float20;
    float Float21;
    float Float22;
    float Float23;
    float Float30;
    float Float31;
    float Float32;
    float Float33;
    float Float00_2;
    float Float01_2;
    float Float02_2;
    float Float03_2;
    float Float10_2;
    float Float11_2;
    float Float12_2;
    float Float13_2;
    float Float20_2;
    float Float21_2;
    float Float22_2;
    float Float23_2;
    float Float30_2;
    float Float31_2;
    float Float32_2;
    float Float33_2;
    bool bValid;

};

struct FRigCurrentAndInitialTransform
{
    FRigLocalAndGlobalTransform Current;
    FRigLocalAndGlobalTransform Initial;

};

struct FRigCurve : public FRigElement
{
    float Value;

};

struct FRigCurveContainer
{
    TArray<FRigCurve> Curves;

};

struct FRigCurveElement : public FRigBaseElement
{
};

struct FRigDispatchFactory : public FRigVMDispatchFactory
{
};

struct FRigDispatch_AnimAttributeBase : public FRigDispatchFactory
{
};

struct FRigDispatch_CoreBase : public FRigDispatchFactory
{
};

struct FRigDispatch_CoreEquals : public FRigDispatch_CoreBase
{
};

struct FRigDispatch_CoreNotEquals : public FRigDispatch_CoreEquals
{
};

struct FRigDispatch_FromString : public FRigDispatchFactory
{
};

struct FRigDispatch_GetAnimAttribute : public FRigDispatch_AnimAttributeBase
{
};

struct FRigDispatch_GetMetadata : public FRigDispatch_MetadataBase
{
};

struct FRigDispatch_MetadataBase : public FRigDispatchFactory
{
};

struct FRigDispatch_Print : public FRigDispatchFactory
{
};

struct FRigDispatch_SetAnimAttribute : public FRigDispatch_AnimAttributeBase
{
};

struct FRigDispatch_SetMetadata : public FRigDispatch_MetadataBase
{
};

struct FRigDispatch_ToString : public FRigDispatchFactory
{
};

struct FRigElement
{
    FName Name;
    int32 Index;

};

struct FRigElementKey
{
    ERigElementType Type;
    FName Name;

};

struct FRigElementKeyArrayMetadata : public FRigBaseMetadata
{
    TArray<FRigElementKey> Value;

};

struct FRigElementKeyCollection
{
    TArray<FRigElementKey> Keys;

};

struct FRigElementKeyMetadata : public FRigBaseMetadata
{
    FRigElementKey Value;

};

struct FRigElementParentConstraint
{
};

struct FRigElementWeight
{
    float Location;
    float Rotation;
    float Scale;

};

struct FRigEventContext
{
};

struct FRigFloatArrayMetadata : public FRigBaseMetadata
{
    TArray<float> Value;

};

struct FRigFloatMetadata : public FRigBaseMetadata
{
    float Value;

};

struct FRigHierarchyContainer
{
    FRigBoneHierarchy BoneHierarchy;
    FRigSpaceHierarchy SpaceHierarchy;
    FRigControlHierarchy ControlHierarchy;
    FRigCurveContainer CurveContainer;

};

struct FRigHierarchyCopyPasteContent
{
    TArray<FRigHierarchyCopyPasteContentPerElement> Elements;
    TArray<ERigElementType> Types;
    TArray<FString> Contents;
    TArray<FTransform> LocalTransforms;
    TArray<FTransform> GlobalTransforms;

};

struct FRigHierarchyCopyPasteContentPerElement
{
    FRigElementKey Key;
    FString Content;
    TArray<FRigElementKey> Parents;
    TArray<FRigElementWeight> ParentWeights;
    FRigCurrentAndInitialTransform Pose;

};

struct FRigHierarchyRef
{
};

struct FRigHierarchySettings
{
    int32 ProceduralElementLimit;

};

struct FRigInfluenceEntry
{
    FRigElementKey Source;
    TArray<FRigElementKey> AffectedList;

};

struct FRigInfluenceEntryModifier
{
    TArray<FRigElementKey> AffectedList;

};

struct FRigInfluenceMap
{
    FName EventName;
    TArray<FRigInfluenceEntry> Entries;
    TMap<FRigElementKey, int32> KeyToIndex;

};

struct FRigInfluenceMapPerEvent
{
    TArray<FRigInfluenceMap> Maps;
    TMap<FName, int32> EventToIndex;

};

struct FRigInt32ArrayMetadata : public FRigBaseMetadata
{
    TArray<int32> Value;

};

struct FRigInt32Metadata : public FRigBaseMetadata
{
    int32 Value;

};

struct FRigLinearColorArrayMetadata : public FRigBaseMetadata
{
    TArray<FLinearColor> Value;

};

struct FRigLinearColorMetadata : public FRigBaseMetadata
{
    FLinearColor Value;

};

struct FRigLocalAndGlobalTransform
{
    FRigComputedTransform Local;
    FRigComputedTransform Global;

};

struct FRigMirrorSettings
{
    TEnumAsByte<EAxis> MirrorAxis;
    TEnumAsByte<EAxis> AxisToFlip;
    FString SearchString;
    FString ReplaceString;

};

struct FRigMultiParentElement : public FRigTransformElement
{
};

struct FRigNameArrayMetadata : public FRigBaseMetadata
{
    TArray<FName> Value;

};

struct FRigNameMetadata : public FRigBaseMetadata
{
    FName Value;

};

struct FRigNullElement : public FRigMultiParentElement
{
};

struct FRigPose
{
    TArray<FRigPoseElement> Elements;
    int32 HierarchyTopologyVersion;
    int32 PoseHash;

};

struct FRigPoseElement
{
    FCachedRigElement Index;
    FTransform GlobalTransform;
    FTransform LocalTransform;
    float CurveValue;

};

struct FRigPreferredEulerAngles
{
    EEulerRotationOrder RotationOrder;
    FVector Current;
    FVector Initial;

};

struct FRigQuatArrayMetadata : public FRigBaseMetadata
{
    TArray<FQuat> Value;

};

struct FRigQuatMetadata : public FRigBaseMetadata
{
    FQuat Value;

};

struct FRigReferenceElement : public FRigSingleParentElement
{
};

struct FRigRigidBodyElement : public FRigSingleParentElement
{
    FRigRigidBodySettings Settings;

};

struct FRigRigidBodySettings
{
    float Mass;

};

struct FRigRotatorArrayMetadata : public FRigBaseMetadata
{
    TArray<FRotator> Value;

};

struct FRigRotatorMetadata : public FRigBaseMetadata
{
    FRotator Value;

};

struct FRigSingleParentElement : public FRigTransformElement
{
};

struct FRigSpace : public FRigElement
{
    ERigSpaceType SpaceType;
    FName ParentName;
    int32 ParentIndex;
    FTransform InitialTransform;
    FTransform LocalTransform;

};

struct FRigSpaceHierarchy
{
    TArray<FRigSpace> Spaces;

};

struct FRigTransformArrayMetadata : public FRigBaseMetadata
{
    TArray<FTransform> Value;

};

struct FRigTransformElement : public FRigBaseElement
{
    FRigCurrentAndInitialTransform Pose;

};

struct FRigTransformMetadata : public FRigBaseMetadata
{
    FTransform Value;

};

struct FRigTransformStackEntry
{
    FRigElementKey Key;
    TEnumAsByte<ERigTransformStackEntryType> EntryType;
    TEnumAsByte<ERigTransformType> TransformType;
    FTransform OldTransform;
    FTransform NewTransform;
    bool bAffectChildren;
    TArray<FString> Callstack;

};

struct FRigUnit : public FRigVMStruct
{
};

struct FRigUnitMutable : public FRigUnit
{
    FControlRigExecuteContext ExecuteContext;

};

struct FRigUnit_AccumulateBase : public FRigUnit_SimBase
{
};

struct FRigUnit_AccumulateFloatAdd : public FRigUnit_AccumulateBase
{
    float Increment;
    float InitialValue;
    bool bIntegrateDeltaTime;
    float Result;
    float AccumulatedValue;

};

struct FRigUnit_AccumulateFloatLerp : public FRigUnit_AccumulateBase
{
    float TargetValue;
    float InitialValue;
    float Blend;
    bool bIntegrateDeltaTime;
    float Result;
    float AccumulatedValue;

};

struct FRigUnit_AccumulateFloatMul : public FRigUnit_AccumulateBase
{
    float Multiplier;
    float InitialValue;
    bool bIntegrateDeltaTime;
    float Result;
    float AccumulatedValue;

};

struct FRigUnit_AccumulateFloatRange : public FRigUnit_AccumulateBase
{
    float Value;
    float Minimum;
    float Maximum;
    float AccumulatedMinimum;
    float AccumulatedMaximum;

};

struct FRigUnit_AccumulateQuatLerp : public FRigUnit_AccumulateBase
{
    FQuat TargetValue;
    FQuat InitialValue;
    float Blend;
    bool bIntegrateDeltaTime;
    FQuat Result;
    FQuat AccumulatedValue;

};

struct FRigUnit_AccumulateQuatMul : public FRigUnit_AccumulateBase
{
    FQuat Multiplier;
    FQuat InitialValue;
    bool bFlipOrder;
    bool bIntegrateDeltaTime;
    FQuat Result;
    FQuat AccumulatedValue;

};

struct FRigUnit_AccumulateTransformLerp : public FRigUnit_AccumulateBase
{
    FTransform TargetValue;
    FTransform InitialValue;
    float Blend;
    bool bIntegrateDeltaTime;
    FTransform Result;
    FTransform AccumulatedValue;

};

struct FRigUnit_AccumulateTransformMul : public FRigUnit_AccumulateBase
{
    FTransform Multiplier;
    FTransform InitialValue;
    bool bFlipOrder;
    bool bIntegrateDeltaTime;
    FTransform Result;
    FTransform AccumulatedValue;

};

struct FRigUnit_AccumulateVectorAdd : public FRigUnit_AccumulateBase
{
    FVector Increment;
    FVector InitialValue;
    bool bIntegrateDeltaTime;
    FVector Result;
    FVector AccumulatedValue;

};

struct FRigUnit_AccumulateVectorLerp : public FRigUnit_AccumulateBase
{
    FVector TargetValue;
    FVector InitialValue;
    float Blend;
    bool bIntegrateDeltaTime;
    FVector Result;
    FVector AccumulatedValue;

};

struct FRigUnit_AccumulateVectorMul : public FRigUnit_AccumulateBase
{
    FVector Multiplier;
    FVector InitialValue;
    bool bIntegrateDeltaTime;
    FVector Result;
    FVector AccumulatedValue;

};

struct FRigUnit_AccumulateVectorRange : public FRigUnit_AccumulateBase
{
    FVector Value;
    FVector Minimum;
    FVector Maximum;
    FVector AccumulatedMinimum;
    FVector AccumulatedMaximum;

};

struct FRigUnit_AddBoneTransform : public FRigUnitMutable
{
    FName bone;
    FTransform Transform;
    float Weight;
    bool bPostMultiply;
    bool bPropagateToChildren;
    FCachedRigElement CachedBone;

};

struct FRigUnit_AddParent : public FRigUnit_DynamicHierarchyBaseMutable
{
    FRigElementKey Child;
    FRigElementKey Parent;

};

struct FRigUnit_Add_FloatFloat : public FRigUnit_BinaryFloatOp
{
};

struct FRigUnit_Add_VectorVector : public FRigUnit_BinaryVectorOp
{
};

struct FRigUnit_AimBone : public FRigUnit_HighlevelBaseMutable
{
    FName bone;
    FRigUnit_AimBone_Target Primary;
    FRigUnit_AimBone_Target Secondary;
    float Weight;
    bool bPropagateToChildren;
    FRigUnit_AimBone_DebugSettings DebugSettings;
    FCachedRigElement CachedBoneIndex;
    FCachedRigElement PrimaryCachedSpace;
    FCachedRigElement SecondaryCachedSpace;

};

struct FRigUnit_AimBoneMath : public FRigUnit_HighlevelBase
{
    FTransform InputTransform;
    FRigUnit_AimItem_Target Primary;
    FRigUnit_AimItem_Target Secondary;
    float Weight;
    FTransform Result;
    FRigUnit_AimBone_DebugSettings DebugSettings;
    FCachedRigElement PrimaryCachedSpace;
    FCachedRigElement SecondaryCachedSpace;

};

struct FRigUnit_AimBone_DebugSettings
{
    bool bEnabled;
    float Scale;
    FTransform WorldOffset;

};

struct FRigUnit_AimBone_Target
{
    float Weight;
    FVector Axis;
    FVector Target;
    EControlRigVectorKind Kind;
    FName space;

};

struct FRigUnit_AimConstraint : public FRigUnitMutable
{
    FName Joint;
    EAimMode AimMode;
    EAimMode UpMode;
    FVector AimVector;
    FVector UpVector;
    TArray<FAimTarget> AimTargets;
    TArray<FAimTarget> UpTargets;
    FRigUnit_AimConstraint_WorkData WorkData;

};

struct FRigUnit_AimConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKey Child;
    bool bMaintainOffset;
    FFilterOptionPerAxis Filter;
    FVector AimAxis;
    FVector UpAxis;
    FRigUnit_AimConstraint_WorldUp WorldUp;
    TArray<FConstraintParent> Parents;
    FRigUnit_AimConstraint_AdvancedSettings AdvancedSettings;
    float Weight;
    FCachedRigElement WorldUpSpaceCache;
    FCachedRigElement ChildCache;
    TArray<FCachedRigElement> ParentCaches;

};

struct FRigUnit_AimConstraint_AdvancedSettings
{
    FRigUnit_AimBone_DebugSettings DebugSettings;
    EEulerRotationOrder RotationOrderForFilter;

};

struct FRigUnit_AimConstraint_WorkData
{
    TArray<FConstraintData> ConstraintData;

};

struct FRigUnit_AimConstraint_WorldUp
{
    FVector Target;
    EControlRigVectorKind Kind;
    FRigElementKey space;

};

struct FRigUnit_AimItem : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKey Item;
    FRigUnit_AimItem_Target Primary;
    FRigUnit_AimItem_Target Secondary;
    float Weight;
    FRigUnit_AimBone_DebugSettings DebugSettings;
    FCachedRigElement CachedItem;
    FCachedRigElement PrimaryCachedSpace;
    FCachedRigElement SecondaryCachedSpace;

};

struct FRigUnit_AimItem_Target
{
    float Weight;
    FVector Axis;
    FVector Target;
    EControlRigVectorKind Kind;
    FRigElementKey space;

};

struct FRigUnit_AlphaInterp : public FRigUnit_SimBase
{
    float Value;
    float Scale;
    float Bias;
    bool bMapRange;
    FInputRange InRange;
    FInputRange OutRange;
    bool bClampResult;
    float ClampMin;
    float ClampMax;
    bool bInterpResult;
    float InterpSpeedIncreasing;
    float InterpSpeedDecreasing;
    float Result;
    FInputScaleBiasClamp ScaleBiasClamp;

};

struct FRigUnit_AlphaInterpQuat : public FRigUnit_SimBase
{
    FQuat Value;
    float Scale;
    float Bias;
    bool bMapRange;
    FInputRange InRange;
    FInputRange OutRange;
    bool bClampResult;
    float ClampMin;
    float ClampMax;
    bool bInterpResult;
    float InterpSpeedIncreasing;
    float InterpSpeedDecreasing;
    FQuat Result;
    FInputScaleBiasClamp ScaleBiasClamp;

};

struct FRigUnit_AlphaInterpVector : public FRigUnit_SimBase
{
    FVector Value;
    float Scale;
    float Bias;
    bool bMapRange;
    FInputRange InRange;
    FInputRange OutRange;
    bool bClampResult;
    float ClampMin;
    float ClampMax;
    bool bInterpResult;
    float InterpSpeedIncreasing;
    float InterpSpeedDecreasing;
    FVector Result;
    FInputScaleBiasClamp ScaleBiasClamp;

};

struct FRigUnit_AnimBase : public FRigUnit
{
};

struct FRigUnit_AnimEasing : public FRigUnit_AnimBase
{
    float Value;
    EControlRigAnimEasingType Type;
    float SourceMinimum;
    float SourceMaximum;
    float TargetMinimum;
    float TargetMaximum;
    float Result;

};

struct FRigUnit_AnimEasingType : public FRigUnit_AnimBase
{
    EControlRigAnimEasingType Type;

};

struct FRigUnit_AnimEvalRichCurve : public FRigUnit_AnimBase
{
    float Value;
    FRuntimeFloatCurve Curve;
    float SourceMinimum;
    float SourceMaximum;
    float TargetMinimum;
    float TargetMaximum;
    float Result;

};

struct FRigUnit_AnimRichCurve : public FRigUnit_AnimBase
{
    FRuntimeFloatCurve Curve;

};

struct FRigUnit_ApplyFK : public FRigUnitMutable
{
    FName Joint;
    FTransform Transform;
    FTransformFilter Filter;
    EApplyTransformMode ApplyTransformMode;
    ETransformSpaceMode ApplyTransformSpace;
    FTransform BaseTransform;
    FName BaseJoint;

};

struct FRigUnit_BeginExecution : public FRigUnit
{
    FControlRigExecuteContext ExecuteContext;

};

struct FRigUnit_BinaryFloatOp : public FRigUnit
{
    float Argument0;
    float Argument1;
    float Result;

};

struct FRigUnit_BinaryQuaternionOp : public FRigUnit
{
    FQuat Argument0;
    FQuat Argument1;
    FQuat Result;

};

struct FRigUnit_BinaryTransformOp : public FRigUnit
{
    FTransform Argument0;
    FTransform Argument1;
    FTransform Result;

};

struct FRigUnit_BinaryVectorOp : public FRigUnit
{
    FVector Argument0;
    FVector Argument1;
    FVector Result;

};

struct FRigUnit_BlendTransform : public FRigUnit
{
    FTransform Source;
    TArray<FBlendTarget> Targets;
    FTransform Result;

};

struct FRigUnit_BoneHarmonics : public FRigUnit_HighlevelBaseMutable
{
    TArray<FRigUnit_BoneHarmonics_BoneTarget> Bones;
    FVector WaveSpeed;
    FVector WaveFrequency;
    FVector WaveAmplitude;
    FVector WaveOffset;
    FVector WaveNoise;
    EControlRigAnimEasingType WaveEase;
    float WaveMinimum;
    float WaveMaximum;
    EEulerRotationOrder RotationOrder;
    bool bPropagateToChildren;
    FRigUnit_BoneHarmonics_WorkData WorkData;

};

struct FRigUnit_BoneHarmonics_BoneTarget
{
    FName bone;
    float Ratio;

};

struct FRigUnit_BoneHarmonics_WorkData
{
    TArray<FCachedRigElement> CachedItems;
    FVector WaveTime;

};

struct FRigUnit_BoneName : public FRigUnit
{
    FName bone;

};

struct FRigUnit_CCDIK : public FRigUnit_HighlevelBaseMutable
{
    FName StartBone;
    FName EffectorBone;
    FTransform EffectorTransform;
    float Precision;
    float Weight;
    int32 MaxIterations;
    bool bStartFromTail;
    float BaseRotationLimit;
    TArray<FRigUnit_CCDIK_RotationLimit> RotationLimits;
    bool bPropagateToChildren;
    FRigUnit_CCDIK_WorkData WorkData;

};

struct FRigUnit_CCDIKItemArray : public FRigUnit_HighlevelBaseMutable
{
    TArray<FRigElementKey> Items;
    FTransform EffectorTransform;
    float Precision;
    float Weight;
    int32 MaxIterations;
    bool bStartFromTail;
    float BaseRotationLimit;
    TArray<FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits;
    bool bPropagateToChildren;
    FRigUnit_CCDIK_WorkData WorkData;

};

struct FRigUnit_CCDIKPerItem : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKeyCollection Items;
    FTransform EffectorTransform;
    float Precision;
    float Weight;
    int32 MaxIterations;
    bool bStartFromTail;
    float BaseRotationLimit;
    TArray<FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits;
    bool bPropagateToChildren;
    FRigUnit_CCDIK_WorkData WorkData;

};

struct FRigUnit_CCDIK_RotationLimit
{
    FName bone;
    float Limit;

};

struct FRigUnit_CCDIK_RotationLimitPerItem
{
    FRigElementKey Item;
    float Limit;

};

struct FRigUnit_CCDIK_WorkData
{
    TArray<FCCDIKChainLink> Chain;
    TArray<FCachedRigElement> CachedItems;
    TArray<int32> RotationLimitIndex;
    TArray<float> RotationLimitsPerItem;
    FCachedRigElement CachedEffector;

};

struct FRigUnit_ChainHarmonics : public FRigUnit_HighlevelBaseMutable
{
    FName ChainRoot;
    FVector Speed;
    FRigUnit_ChainHarmonics_Reach Reach;
    FRigUnit_ChainHarmonics_Wave Wave;
    FRuntimeFloatCurve WaveCurve;
    FRigUnit_ChainHarmonics_Pendulum Pendulum;
    bool bDrawDebug;
    FTransform DrawWorldOffset;
    FRigUnit_ChainHarmonics_WorkData WorkData;

};

struct FRigUnit_ChainHarmonicsPerItem : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKey ChainRoot;
    FVector Speed;
    FRigUnit_ChainHarmonics_Reach Reach;
    FRigUnit_ChainHarmonics_Wave Wave;
    FRuntimeFloatCurve WaveCurve;
    FRigUnit_ChainHarmonics_Pendulum Pendulum;
    bool bDrawDebug;
    FTransform DrawWorldOffset;
    FRigUnit_ChainHarmonics_WorkData WorkData;

};

struct FRigUnit_ChainHarmonics_Pendulum
{
    bool bEnabled;
    float PendulumStiffness;
    FVector PendulumGravity;
    float PendulumBlend;
    float PendulumDrag;
    float PendulumMinimum;
    float PendulumMaximum;
    EControlRigAnimEasingType PendulumEase;
    FVector UnwindAxis;
    float UnwindMinimum;
    float UnwindMaximum;

};

struct FRigUnit_ChainHarmonics_Reach
{
    bool bEnabled;
    FVector ReachTarget;
    FVector ReachAxis;
    float ReachMinimum;
    float ReachMaximum;
    EControlRigAnimEasingType ReachEase;

};

struct FRigUnit_ChainHarmonics_Wave
{
    bool bEnabled;
    FVector WaveFrequency;
    FVector WaveAmplitude;
    FVector WaveOffset;
    FVector WaveNoise;
    float WaveMinimum;
    float WaveMaximum;
    EControlRigAnimEasingType WaveEase;

};

struct FRigUnit_ChainHarmonics_WorkData
{
    FVector Time;
    TArray<FCachedRigElement> Items;
    TArray<float> Ratio;
    TArray<FVector> LocalTip;
    TArray<FVector> PendulumTip;
    TArray<FVector> PendulumPosition;
    TArray<FVector> PendulumVelocity;
    TArray<FVector> HierarchyLine;
    TArray<FVector> VelocityLines;

};

struct FRigUnit_Clamp_Float : public FRigUnit
{
    float Value;
    float Min;
    float Max;
    float Result;

};

struct FRigUnit_CollectionAddItem : public FRigUnit_CollectionBase
{
    FRigElementKeyCollection Collection;
    FRigElementKey Item;
    FRigElementKeyCollection Result;

};

struct FRigUnit_CollectionBase : public FRigUnit
{
};

struct FRigUnit_CollectionBaseMutable : public FRigUnitMutable
{
};

struct FRigUnit_CollectionChain : public FRigUnit_CollectionBase
{
    FRigElementKey FirstItem;
    FRigElementKey LastItem;
    bool Reverse;
    FRigElementKeyCollection Collection;

};

struct FRigUnit_CollectionChainArray : public FRigUnit_CollectionBase
{
    FRigElementKey FirstItem;
    FRigElementKey LastItem;
    bool Reverse;
    TArray<FRigElementKey> Items;

};

struct FRigUnit_CollectionChildren : public FRigUnit_CollectionBase
{
    FRigElementKey Parent;
    bool bIncludeParent;
    bool bRecursive;
    ERigElementType TypeToSearch;
    FRigElementKeyCollection Collection;

};

struct FRigUnit_CollectionChildrenArray : public FRigUnit_CollectionBase
{
    FRigElementKey Parent;
    bool bIncludeParent;
    bool bRecursive;
    ERigElementType TypeToSearch;
    TArray<FRigElementKey> Items;

};

struct FRigUnit_CollectionCount : public FRigUnit_CollectionBase
{
    FRigElementKeyCollection Collection;
    int32 Count;

};

struct FRigUnit_CollectionDifference : public FRigUnit_CollectionBase
{
    FRigElementKeyCollection A;
    FRigElementKeyCollection B;
    FRigElementKeyCollection Collection;

};

struct FRigUnit_CollectionGetAll : public FRigUnit_CollectionBase
{
    ERigElementType TypeToSearch;
    TArray<FRigElementKey> Items;

};

struct FRigUnit_CollectionGetItems : public FRigUnit_CollectionBase
{
    FRigElementKeyCollection Collection;
    TArray<FRigElementKey> Items;

};

struct FRigUnit_CollectionGetParentIndices : public FRigUnit_CollectionBase
{
    FRigElementKeyCollection Collection;
    TArray<int32> ParentIndices;

};

struct FRigUnit_CollectionGetParentIndicesItemArray : public FRigUnit_CollectionBase
{
    TArray<FRigElementKey> Items;
    TArray<int32> ParentIndices;

};

struct FRigUnit_CollectionIntersection : public FRigUnit_CollectionBase
{
    FRigElementKeyCollection A;
    FRigElementKeyCollection B;
    FRigElementKeyCollection Collection;

};

struct FRigUnit_CollectionItemAtIndex : public FRigUnit_CollectionBase
{
    FRigElementKeyCollection Collection;
    int32 Index;
    FRigElementKey Item;

};

struct FRigUnit_CollectionItems : public FRigUnit_CollectionBase
{
    TArray<FRigElementKey> Items;
    bool bAllowDuplicates;
    FRigElementKeyCollection Collection;

};

struct FRigUnit_CollectionLoop : public FRigUnit_CollectionBaseMutable
{
    FRigElementKeyCollection Collection;
    FRigElementKey Item;
    int32 Index;
    int32 Count;
    float Ratio;
    bool Continue;
    FControlRigExecuteContext Completed;

};

struct FRigUnit_CollectionNameSearch : public FRigUnit_CollectionBase
{
    FName PartialName;
    ERigElementType TypeToSearch;
    FRigElementKeyCollection Collection;

};

struct FRigUnit_CollectionNameSearchArray : public FRigUnit_CollectionBase
{
    FName PartialName;
    ERigElementType TypeToSearch;
    TArray<FRigElementKey> Items;

};

struct FRigUnit_CollectionReplaceItems : public FRigUnit_CollectionBase
{
    FRigElementKeyCollection Items;
    FName Old;
    FName New;
    bool RemoveInvalidItems;
    bool bAllowDuplicates;
    FRigElementKeyCollection Collection;

};

struct FRigUnit_CollectionReplaceItemsArray : public FRigUnit_CollectionBase
{
    TArray<FRigElementKey> Items;
    FName Old;
    FName New;
    bool RemoveInvalidItems;
    bool bAllowDuplicates;
    TArray<FRigElementKey> Result;

};

struct FRigUnit_CollectionReverse : public FRigUnit_CollectionBase
{
    FRigElementKeyCollection Collection;
    FRigElementKeyCollection Reversed;

};

struct FRigUnit_CollectionUnion : public FRigUnit_CollectionBase
{
    FRigElementKeyCollection A;
    FRigElementKeyCollection B;
    bool bAllowDuplicates;
    FRigElementKeyCollection Collection;

};

struct FRigUnit_Contains : public FRigUnit_NameBase
{
    FName Name;
    FName Search;
    bool Result;

};

struct FRigUnit_Control : public FRigUnit
{
    FEulerTransform Transform;
    FTransform Base;
    FTransform InitTransform;
    FTransform Result;
    FTransformFilter Filter;

};

struct FRigUnit_ControlName : public FRigUnit
{
    FName Control;

};

struct FRigUnit_Control_StaticMesh : public FRigUnit_Control
{
    FTransform MeshTransform;

};

struct FRigUnit_ConvertEulerTransform : public FRigUnit
{
    FEulerTransform Input;
    FTransform Result;

};

struct FRigUnit_ConvertQuaternion : public FRigUnit
{
    FQuat Input;
    FRotator Result;

};

struct FRigUnit_ConvertQuaternionToVector : public FRigUnit
{
    FQuat Input;
    FVector Result;

};

struct FRigUnit_ConvertRotation : public FRigUnit
{
    FRotator Input;
    FQuat Result;

};

struct FRigUnit_ConvertRotationToVector : public FRigUnit
{
    FRotator Input;
    FVector Result;

};

struct FRigUnit_ConvertTransform : public FRigUnit
{
    FTransform Input;
    FEulerTransform Result;

};

struct FRigUnit_ConvertVectorRotation : public FRigUnit_ConvertRotation
{
};

struct FRigUnit_ConvertVectorToQuaternion : public FRigUnit
{
    FVector Input;
    FQuat Result;

};

struct FRigUnit_ConvertVectorToRotation : public FRigUnit
{
    FVector Input;
    FRotator Result;

};

struct FRigUnit_DebugArc : public FRigUnit_DebugBaseMutable
{
    FTransform Transform;
    FLinearColor Color;
    float Radius;
    float MinimumDegrees;
    float MaximumDegrees;
    float Thickness;
    int32 Detail;
    FName space;
    FTransform WorldOffset;
    bool bEnabled;

};

struct FRigUnit_DebugArcItemSpace : public FRigUnit_DebugBaseMutable
{
    FTransform Transform;
    FLinearColor Color;
    float Radius;
    float MinimumDegrees;
    float MaximumDegrees;
    float Thickness;
    int32 Detail;
    FRigElementKey space;
    FTransform WorldOffset;
    bool bEnabled;

};

struct FRigUnit_DebugBase : public FRigUnit
{
};

struct FRigUnit_DebugBaseMutable : public FRigUnitMutable
{
};

struct FRigUnit_DebugBezier : public FRigUnit_DebugBaseMutable
{
    FCRFourPointBezier Bezier;
    float MinimumU;
    float MaximumU;
    FLinearColor Color;
    float Thickness;
    int32 Detail;
    FName space;
    FTransform WorldOffset;
    bool bEnabled;

};

struct FRigUnit_DebugBezierItemSpace : public FRigUnit_DebugBaseMutable
{
    FCRFourPointBezier Bezier;
    float MinimumU;
    float MaximumU;
    FLinearColor Color;
    float Thickness;
    int32 Detail;
    FRigElementKey space;
    FTransform WorldOffset;
    bool bEnabled;

};

struct FRigUnit_DebugHierarchy : public FRigUnit_DebugBaseMutable
{
    float Scale;
    FLinearColor Color;
    float Thickness;
    FTransform WorldOffset;
    bool bEnabled;

};

struct FRigUnit_DebugLine : public FRigUnit_DebugBaseMutable
{
    FVector A;
    FVector B;
    FLinearColor Color;
    float Thickness;
    FName space;
    FTransform WorldOffset;
    bool bEnabled;

};

struct FRigUnit_DebugLineItemSpace : public FRigUnit_DebugBaseMutable
{
    FVector A;
    FVector B;
    FLinearColor Color;
    float Thickness;
    FRigElementKey space;
    FTransform WorldOffset;
    bool bEnabled;

};

struct FRigUnit_DebugLineStrip : public FRigUnit_DebugBaseMutable
{
    TArray<FVector> Points;
    FLinearColor Color;
    float Thickness;
    FName space;
    FTransform WorldOffset;
    bool bEnabled;

};

struct FRigUnit_DebugLineStripItemSpace : public FRigUnit_DebugBaseMutable
{
    TArray<FVector> Points;
    FLinearColor Color;
    float Thickness;
    FRigElementKey space;
    FTransform WorldOffset;
    bool bEnabled;

};

struct FRigUnit_DebugPoint : public FRigUnit_DebugBase
{
    FVector Vector;
    ERigUnitDebugPointMode Mode;
    FLinearColor Color;
    float Scale;
    float Thickness;
    FName space;
    FTransform WorldOffset;
    bool bEnabled;

};

struct FRigUnit_DebugPointMutable : public FRigUnit_DebugBaseMutable
{
    FVector Vector;
    ERigUnitDebugPointMode Mode;
    FLinearColor Color;
    float Scale;
    float Thickness;
    FName space;
    FTransform WorldOffset;
    bool bEnabled;

};

struct FRigUnit_DebugPose : public FRigUnit_DebugBaseMutable
{
    FRigPose Pose;
    float Scale;
    FLinearColor Color;
    float Thickness;
    FTransform WorldOffset;
    bool bEnabled;

};

struct FRigUnit_DebugRectangle : public FRigUnit_DebugBaseMutable
{
    FTransform Transform;
    FLinearColor Color;
    float Scale;
    float Thickness;
    FName space;
    FTransform WorldOffset;
    bool bEnabled;

};

struct FRigUnit_DebugRectangleItemSpace : public FRigUnit_DebugBaseMutable
{
    FTransform Transform;
    FLinearColor Color;
    float Scale;
    float Thickness;
    FRigElementKey space;
    FTransform WorldOffset;
    bool bEnabled;

};

struct FRigUnit_DebugTransform : public FRigUnit_DebugBase
{
    FTransform Transform;
    ERigUnitDebugTransformMode Mode;
    FLinearColor Color;
    float Thickness;
    float Scale;
    FName space;
    FTransform WorldOffset;
    bool bEnabled;

};

struct FRigUnit_DebugTransformArrayMutable : public FRigUnit_DebugBaseMutable
{
    TArray<FTransform> Transforms;
    ERigUnitDebugTransformMode Mode;
    FLinearColor Color;
    float Thickness;
    float Scale;
    FName space;
    FTransform WorldOffset;
    bool bEnabled;
    FRigUnit_DebugTransformArrayMutable_WorkData WorkData;

};

struct FRigUnit_DebugTransformArrayMutableItemSpace : public FRigUnit_DebugBaseMutable
{
    TArray<FTransform> Transforms;
    TArray<int32> ParentIndices;
    ERigUnitDebugTransformMode Mode;
    FLinearColor Color;
    float Thickness;
    float Scale;
    FRigElementKey space;
    FTransform WorldOffset;
    bool bEnabled;

};

struct FRigUnit_DebugTransformArrayMutable_WorkData
{
    TArray<FTransform> DrawTransforms;

};

struct FRigUnit_DebugTransformMutable : public FRigUnit_DebugBaseMutable
{
    FTransform Transform;
    ERigUnitDebugTransformMode Mode;
    FLinearColor Color;
    float Thickness;
    float Scale;
    FName space;
    FTransform WorldOffset;
    bool bEnabled;

};

struct FRigUnit_DebugTransformMutableItemSpace : public FRigUnit_DebugBaseMutable
{
    FTransform Transform;
    ERigUnitDebugTransformMode Mode;
    FLinearColor Color;
    float Thickness;
    float Scale;
    FRigElementKey space;
    FTransform WorldOffset;
    bool bEnabled;

};

struct FRigUnit_DeltaFromPreviousFloat : public FRigUnit_SimBase
{
    float Value;
    float Delta;
    float PreviousValue;
    float Cache;

};

struct FRigUnit_DeltaFromPreviousQuat : public FRigUnit_SimBase
{
    FQuat Value;
    FQuat Delta;
    FQuat PreviousValue;
    FQuat Cache;

};

struct FRigUnit_DeltaFromPreviousTransform : public FRigUnit_SimBase
{
    FTransform Value;
    FTransform Delta;
    FTransform PreviousValue;
    FTransform Cache;

};

struct FRigUnit_DeltaFromPreviousVector : public FRigUnit_SimBase
{
    FVector Value;
    FVector Delta;
    FVector PreviousValue;
    FVector Cache;

};

struct FRigUnit_Distance_VectorVector : public FRigUnit
{
    FVector Argument0;
    FVector Argument1;
    float Result;

};

struct FRigUnit_DistributeRotation : public FRigUnit_HighlevelBaseMutable
{
    FName StartBone;
    FName EndBone;
    TArray<FRigUnit_DistributeRotation_Rotation> Rotations;
    EControlRigAnimEasingType RotationEaseType;
    float Weight;
    bool bPropagateToChildren;
    FRigUnit_DistributeRotation_WorkData WorkData;

};

struct FRigUnit_DistributeRotationForCollection : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKeyCollection Items;
    TArray<FRigUnit_DistributeRotation_Rotation> Rotations;
    EControlRigAnimEasingType RotationEaseType;
    float Weight;
    FRigUnit_DistributeRotation_WorkData WorkData;

};

struct FRigUnit_DistributeRotationForItemArray : public FRigUnit_HighlevelBaseMutable
{
    TArray<FRigElementKey> Items;
    TArray<FRigUnit_DistributeRotation_Rotation> Rotations;
    EControlRigAnimEasingType RotationEaseType;
    float Weight;
    FRigUnit_DistributeRotation_WorkData WorkData;

};

struct FRigUnit_DistributeRotation_Rotation
{
    FQuat Rotation;
    float Ratio;

};

struct FRigUnit_DistributeRotation_WorkData
{
    TArray<FCachedRigElement> CachedItems;
    TArray<int32> ItemRotationA;
    TArray<int32> ItemRotationB;
    TArray<float> ItemRotationT;
    TArray<FTransform> ItemLocalTransforms;

};

struct FRigUnit_Divide_FloatFloat : public FRigUnit_BinaryFloatOp
{
};

struct FRigUnit_Divide_VectorVector : public FRigUnit_BinaryVectorOp
{
};

struct FRigUnit_DrawContainerGetInstruction : public FRigUnit
{
    FName InstructionName;
    FLinearColor Color;
    FTransform Transform;

};

struct FRigUnit_DrawContainerSetColor : public FRigUnitMutable
{
    FName InstructionName;
    FLinearColor Color;

};

struct FRigUnit_DrawContainerSetThickness : public FRigUnitMutable
{
    FName InstructionName;
    float Thickness;

};

struct FRigUnit_DrawContainerSetTransform : public FRigUnitMutable
{
    FName InstructionName;
    FTransform Transform;

};

struct FRigUnit_DynamicHierarchyBase : public FRigUnit
{
};

struct FRigUnit_DynamicHierarchyBaseMutable : public FRigUnitMutable
{
};

struct FRigUnit_EndProfilingTimer : public FRigUnit_DebugBaseMutable
{
    int32 NumberOfMeasurements;
    FString Prefix;
    float AccumulatedTime;
    int32 MeasurementsLeft;

};

struct FRigUnit_EndsWith : public FRigUnit_NameBase
{
    FName Name;
    FName Ending;
    bool Result;

};

struct FRigUnit_FABRIK : public FRigUnit_HighlevelBaseMutable
{
    FName StartBone;
    FName EffectorBone;
    FTransform EffectorTransform;
    float Precision;
    float Weight;
    bool bPropagateToChildren;
    int32 MaxIterations;
    FRigUnit_FABRIK_WorkData WorkData;
    bool bSetEffectorTransform;

};

struct FRigUnit_FABRIKItemArray : public FRigUnit_HighlevelBaseMutable
{
    TArray<FRigElementKey> Items;
    FTransform EffectorTransform;
    float Precision;
    float Weight;
    bool bPropagateToChildren;
    int32 MaxIterations;
    FRigUnit_FABRIK_WorkData WorkData;
    bool bSetEffectorTransform;

};

struct FRigUnit_FABRIKPerItem : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKeyCollection Items;
    FTransform EffectorTransform;
    float Precision;
    float Weight;
    bool bPropagateToChildren;
    int32 MaxIterations;
    FRigUnit_FABRIK_WorkData WorkData;
    bool bSetEffectorTransform;

};

struct FRigUnit_FABRIK_WorkData
{
    TArray<FFABRIKChainLink> Chain;
    TArray<FCachedRigElement> CachedItems;
    FCachedRigElement CachedEffector;

};

struct FRigUnit_FilterItemsByMetadataTags : public FRigUnit
{
    TArray<FRigElementKey> Items;
    TArray<FName> Tags;
    bool Inclusive;
    TArray<FRigElementKey> Result;
    TArray<FCachedRigElement> CachedIndices;

};

struct FRigUnit_FindItemsWithMetadata : public FRigUnit
{
    FName Name;
    ERigMetadataType Type;
    TArray<FRigElementKey> Items;

};

struct FRigUnit_FindItemsWithMetadataTag : public FRigUnit
{
    FName Tag;
    TArray<FRigElementKey> Items;

};

struct FRigUnit_FindItemsWithMetadataTagArray : public FRigUnit
{
    TArray<FName> Tags;
    TArray<FRigElementKey> Items;

};

struct FRigUnit_FitChainToCurve : public FRigUnit_HighlevelBaseMutable
{
    FName StartBone;
    FName EndBone;
    FCRFourPointBezier Bezier;
    EControlRigCurveAlignment Alignment;
    float Minimum;
    float Maximum;
    int32 SamplingPrecision;
    FVector PrimaryAxis;
    FVector SecondaryAxis;
    FVector PoleVectorPosition;
    TArray<FRigUnit_FitChainToCurve_Rotation> Rotations;
    EControlRigAnimEasingType RotationEaseType;
    float Weight;
    bool bPropagateToChildren;
    FRigUnit_FitChainToCurve_DebugSettings DebugSettings;
    FRigUnit_FitChainToCurve_WorkData WorkData;

};

struct FRigUnit_FitChainToCurveItemArray : public FRigUnit_HighlevelBaseMutable
{
    TArray<FRigElementKey> Items;
    FCRFourPointBezier Bezier;
    EControlRigCurveAlignment Alignment;
    float Minimum;
    float Maximum;
    int32 SamplingPrecision;
    FVector PrimaryAxis;
    FVector SecondaryAxis;
    FVector PoleVectorPosition;
    TArray<FRigUnit_FitChainToCurve_Rotation> Rotations;
    EControlRigAnimEasingType RotationEaseType;
    float Weight;
    bool bPropagateToChildren;
    FRigUnit_FitChainToCurve_DebugSettings DebugSettings;
    FRigUnit_FitChainToCurve_WorkData WorkData;

};

struct FRigUnit_FitChainToCurvePerItem : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKeyCollection Items;
    FCRFourPointBezier Bezier;
    EControlRigCurveAlignment Alignment;
    float Minimum;
    float Maximum;
    int32 SamplingPrecision;
    FVector PrimaryAxis;
    FVector SecondaryAxis;
    FVector PoleVectorPosition;
    TArray<FRigUnit_FitChainToCurve_Rotation> Rotations;
    EControlRigAnimEasingType RotationEaseType;
    float Weight;
    bool bPropagateToChildren;
    FRigUnit_FitChainToCurve_DebugSettings DebugSettings;
    FRigUnit_FitChainToCurve_WorkData WorkData;

};

struct FRigUnit_FitChainToCurve_DebugSettings
{
    bool bEnabled;
    float Scale;
    FLinearColor CurveColor;
    FLinearColor SegmentsColor;
    FTransform WorldOffset;

};

struct FRigUnit_FitChainToCurve_Rotation
{
    FQuat Rotation;
    float Ratio;

};

struct FRigUnit_FitChainToCurve_WorkData
{
    float ChainLength;
    TArray<FVector> ItemPositions;
    TArray<float> ItemSegments;
    TArray<FVector> CurvePositions;
    TArray<float> CurveSegments;
    TArray<FCachedRigElement> CachedItems;
    TArray<int32> ItemRotationA;
    TArray<int32> ItemRotationB;
    TArray<float> ItemRotationT;
    TArray<FTransform> ItemLocalTransforms;

};

struct FRigUnit_ForLoopCount : public FRigUnitMutable
{
    int32 Count;
    int32 Index;
    float Ratio;
    bool Continue;
    FControlRigExecuteContext Completed;

};

struct FRigUnit_FramesToSeconds : public FRigUnit_AnimBase
{
    float Frames;
    float Seconds;

};

struct FRigUnit_GetAnimationChannelBase : public FRigUnit
{
    FName Control;
    FName Channel;
    bool bInitial;
    FRigElementKey CachedChannelKey;
    int32 CachedChannelHash;

};

struct FRigUnit_GetBoneTransform : public FRigUnit
{
    FName bone;
    EBoneGetterSetterMode space;
    FTransform Transform;
    FCachedRigElement CachedBone;

};

struct FRigUnit_GetBoolAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
    bool Value;

};

struct FRigUnit_GetControlBool : public FRigUnit
{
    FName Control;
    bool BoolValue;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_GetControlColor : public FRigUnit
{
    FName Control;
    FLinearColor Color;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_GetControlDrivenList : public FRigUnit
{
    FName Control;
    TArray<FRigElementKey> Driven;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_GetControlFloat : public FRigUnit
{
    FName Control;
    float FloatValue;
    float Minimum;
    float Maximum;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_GetControlInitialTransform : public FRigUnit
{
    FName Control;
    EBoneGetterSetterMode space;
    FTransform Transform;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_GetControlInteger : public FRigUnit
{
    FName Control;
    int32 IntegerValue;
    int32 Minimum;
    int32 Maximum;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_GetControlRotator : public FRigUnit
{
    FName Control;
    EBoneGetterSetterMode space;
    FRotator Rotator;
    FRotator Minimum;
    FRotator Maximum;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_GetControlTransform : public FRigUnit
{
    FName Control;
    EBoneGetterSetterMode space;
    FTransform Transform;
    FTransform Minimum;
    FTransform Maximum;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_GetControlVector : public FRigUnit
{
    FName Control;
    EBoneGetterSetterMode space;
    FVector Vector;
    FVector Minimum;
    FVector Maximum;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_GetControlVector2D : public FRigUnit
{
    FName Control;
    FVector2D Vector;
    FVector2D Minimum;
    FVector2D Maximum;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_GetControlVisibility : public FRigUnit
{
    FRigElementKey Item;
    bool bVisible;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_GetCurveValue : public FRigUnit
{
    FName Curve;
    bool Valid;
    float Value;
    FCachedRigElement CachedCurveIndex;

};

struct FRigUnit_GetDeltaTime : public FRigUnit_AnimBase
{
    float Result;

};

struct FRigUnit_GetFloatAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
    float Value;

};

struct FRigUnit_GetInitialBoneTransform : public FRigUnit
{
    FName bone;
    EBoneGetterSetterMode space;
    FTransform Transform;
    FCachedRigElement CachedBone;

};

struct FRigUnit_GetIntAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
    int32 Value;

};

struct FRigUnit_GetJointTransform : public FRigUnitMutable
{
    FName Joint;
    ETransformGetterType Type;
    ETransformSpaceMode TransformSpace;
    FTransform BaseTransform;
    FName BaseJoint;
    FTransform Output;

};

struct FRigUnit_GetMetadataTags : public FRigUnit
{
    FRigElementKey Item;
    TArray<FName> Tags;
    FCachedRigElement CachedIndex;

};

struct FRigUnit_GetRelativeBoneTransform : public FRigUnit
{
    FName bone;
    FName space;
    FTransform Transform;
    FCachedRigElement CachedBone;
    FCachedRigElement CachedSpace;

};

struct FRigUnit_GetRelativeTransform : public FRigUnit_BinaryTransformOp
{
};

struct FRigUnit_GetRelativeTransformForItem : public FRigUnit
{
    FRigElementKey Child;
    bool bChildInitial;
    FRigElementKey Parent;
    bool bParentInitial;
    FTransform RelativeTransform;
    FCachedRigElement CachedChild;
    FCachedRigElement CachedParent;

};

struct FRigUnit_GetRotatorAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
    FRotator Value;

};

struct FRigUnit_GetShapeTransform : public FRigUnit
{
    FName Control;
    FTransform Transform;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_GetSpaceTransform : public FRigUnit
{
    FName space;
    EBoneGetterSetterMode SpaceType;
    FTransform Transform;
    FCachedRigElement CachedSpaceIndex;

};

struct FRigUnit_GetTransform : public FRigUnit
{
    FRigElementKey Item;
    EBoneGetterSetterMode space;
    bool bInitial;
    FTransform Transform;
    FCachedRigElement CachedIndex;

};

struct FRigUnit_GetTransformAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
    FTransform Value;

};

struct FRigUnit_GetTransformArray : public FRigUnit
{
    FRigElementKeyCollection Items;
    EBoneGetterSetterMode space;
    bool bInitial;
    TArray<FTransform> Transforms;
    TArray<FCachedRigElement> CachedIndex;

};

struct FRigUnit_GetTransformItemArray : public FRigUnit
{
    TArray<FRigElementKey> Items;
    EBoneGetterSetterMode space;
    bool bInitial;
    TArray<FTransform> Transforms;
    TArray<FCachedRigElement> CachedIndex;

};

struct FRigUnit_GetVector2DAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
    FVector2D Value;

};

struct FRigUnit_GetVectorAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
    FVector Value;

};

struct FRigUnit_GetWorldTime : public FRigUnit_AnimBase
{
    float Year;
    float Month;
    float Day;
    float WeekDay;
    float Hours;
    float Minutes;
    float Seconds;
    float OverallSeconds;

};

struct FRigUnit_Harmonics_TargetItem
{
    FRigElementKey Item;
    float Ratio;

};

struct FRigUnit_HasMetadata : public FRigUnit
{
    FRigElementKey Item;
    FName Name;
    ERigMetadataType Type;
    bool Found;
    FCachedRigElement CachedIndex;

};

struct FRigUnit_HasMetadataTag : public FRigUnit
{
    FRigElementKey Item;
    FName Tag;
    bool Found;
    FCachedRigElement CachedIndex;

};

struct FRigUnit_HasMetadataTagArray : public FRigUnit
{
    FRigElementKey Item;
    TArray<FName> Tags;
    bool Found;
    FCachedRigElement CachedIndex;

};

struct FRigUnit_HierarchyAddAnimationChannelBool : public FRigUnit_HierarchyAddElement
{
    bool InitialValue;
    bool MinimumValue;
    bool MaximumValue;

};

struct FRigUnit_HierarchyAddAnimationChannelFloat : public FRigUnit_HierarchyAddElement
{
    float InitialValue;
    float MinimumValue;
    float MaximumValue;

};

struct FRigUnit_HierarchyAddAnimationChannelInteger : public FRigUnit_HierarchyAddElement
{
    int32 InitialValue;
    int32 MinimumValue;
    int32 MaximumValue;

};

struct FRigUnit_HierarchyAddAnimationChannelRotator : public FRigUnit_HierarchyAddElement
{
    FRotator InitialValue;
    FRotator MinimumValue;
    FRotator MaximumValue;

};

struct FRigUnit_HierarchyAddAnimationChannelVector : public FRigUnit_HierarchyAddElement
{
    FVector InitialValue;
    FVector MinimumValue;
    FVector MaximumValue;

};

struct FRigUnit_HierarchyAddAnimationChannelVector2D : public FRigUnit_HierarchyAddElement
{
    FVector2D InitialValue;
    FVector2D MinimumValue;
    FVector2D MaximumValue;

};

struct FRigUnit_HierarchyAddBone : public FRigUnit_HierarchyAddElement
{
    FTransform Transform;
    EBoneGetterSetterMode space;

};

struct FRigUnit_HierarchyAddControlFloat : public FRigUnit_HierarchyAddElement
{
    FTransform OffsetTransform;
    float InitialValue;
    FRigUnit_HierarchyAddControlFloat_Settings Settings;

};

struct FRigUnit_HierarchyAddControlFloat_LimitSettings
{
    FRigControlLimitEnabled Limit;
    float MinValue;
    float MaxValue;
    bool bDrawLimits;

};

struct FRigUnit_HierarchyAddControlFloat_Settings : public FRigUnit_HierarchyAddControl_Settings
{
    ERigControlAxis PrimaryAxis;
    FRigUnit_HierarchyAddControlFloat_LimitSettings Limits;
    FRigUnit_HierarchyAddControl_ShapeSettings Shape;
    FRigUnit_HierarchyAddControl_ProxySettings Proxy;

};

struct FRigUnit_HierarchyAddControlInteger : public FRigUnit_HierarchyAddElement
{
    FTransform OffsetTransform;
    int32 InitialValue;
    FRigUnit_HierarchyAddControlInteger_Settings Settings;

};

struct FRigUnit_HierarchyAddControlInteger_LimitSettings
{
    FRigControlLimitEnabled Limit;
    int32 MinValue;
    int32 MaxValue;
    bool bDrawLimits;

};

struct FRigUnit_HierarchyAddControlInteger_Settings : public FRigUnit_HierarchyAddControl_Settings
{
    ERigControlAxis PrimaryAxis;
    FRigUnit_HierarchyAddControlInteger_LimitSettings Limits;
    FRigUnit_HierarchyAddControl_ShapeSettings Shape;
    FRigUnit_HierarchyAddControl_ProxySettings Proxy;

};

struct FRigUnit_HierarchyAddControlRotator : public FRigUnit_HierarchyAddElement
{
    FTransform OffsetTransform;
    FRotator InitialValue;
    FRigUnit_HierarchyAddControlRotator_Settings Settings;

};

struct FRigUnit_HierarchyAddControlRotator_LimitSettings
{
    FRigControlLimitEnabled LimitPitch;
    FRigControlLimitEnabled LimitYaw;
    FRigControlLimitEnabled LimitRoll;
    FRotator MinValue;
    FRotator MaxValue;
    bool bDrawLimits;

};

struct FRigUnit_HierarchyAddControlRotator_Settings : public FRigUnit_HierarchyAddControl_Settings
{
    FRigUnit_HierarchyAddControlRotator_LimitSettings Limits;
    FRigUnit_HierarchyAddControl_ShapeSettings Shape;
    FRigUnit_HierarchyAddControl_ProxySettings Proxy;

};

struct FRigUnit_HierarchyAddControlTransform : public FRigUnit_HierarchyAddElement
{
    FTransform OffsetTransform;
    FTransform InitialValue;
    FRigUnit_HierarchyAddControlTransform_Settings Settings;

};

struct FRigUnit_HierarchyAddControlTransform_Settings : public FRigUnit_HierarchyAddControl_Settings
{
    FRigUnit_HierarchyAddControl_ShapeSettings Shape;
    FRigUnit_HierarchyAddControl_ProxySettings Proxy;

};

struct FRigUnit_HierarchyAddControlVector : public FRigUnit_HierarchyAddElement
{
    FTransform OffsetTransform;
    FVector InitialValue;
    FRigUnit_HierarchyAddControlVector_Settings Settings;

};

struct FRigUnit_HierarchyAddControlVector2D : public FRigUnit_HierarchyAddElement
{
    FTransform OffsetTransform;
    FVector2D InitialValue;
    FRigUnit_HierarchyAddControlVector2D_Settings Settings;

};

struct FRigUnit_HierarchyAddControlVector2D_LimitSettings
{
    FRigControlLimitEnabled LimitX;
    FRigControlLimitEnabled LimitY;
    FVector2D MinValue;
    FVector2D MaxValue;
    bool bDrawLimits;

};

struct FRigUnit_HierarchyAddControlVector2D_Settings : public FRigUnit_HierarchyAddControl_Settings
{
    ERigControlAxis PrimaryAxis;
    FRigUnit_HierarchyAddControlVector2D_LimitSettings Limits;
    FRigUnit_HierarchyAddControl_ShapeSettings Shape;
    FRigUnit_HierarchyAddControl_ProxySettings Proxy;

};

struct FRigUnit_HierarchyAddControlVector_LimitSettings
{
    FRigControlLimitEnabled LimitX;
    FRigControlLimitEnabled LimitY;
    FRigControlLimitEnabled LimitZ;
    FVector MinValue;
    FVector MaxValue;
    bool bDrawLimits;

};

struct FRigUnit_HierarchyAddControlVector_Settings : public FRigUnit_HierarchyAddControl_Settings
{
    bool bIsPosition;
    FRigUnit_HierarchyAddControlVector_LimitSettings Limits;
    FRigUnit_HierarchyAddControl_ShapeSettings Shape;
    FRigUnit_HierarchyAddControl_ProxySettings Proxy;

};

struct FRigUnit_HierarchyAddControl_ProxySettings
{
    bool bIsProxy;
    TArray<FRigElementKey> DrivenControls;
    ERigControlVisibility ShapeVisibility;

};

struct FRigUnit_HierarchyAddControl_Settings
{
    FName DisplayName;

};

struct FRigUnit_HierarchyAddControl_ShapeSettings
{
    bool bVisible;
    FName Name;
    FLinearColor Color;
    FTransform Transform;

};

struct FRigUnit_HierarchyAddElement : public FRigUnit_DynamicHierarchyBaseMutable
{
    FRigElementKey Parent;
    FName Name;
    FRigElementKey Item;

};

struct FRigUnit_HierarchyAddNull : public FRigUnit_HierarchyAddElement
{
    FTransform Transform;
    EBoneGetterSetterMode space;

};

struct FRigUnit_HierarchyBase : public FRigUnit
{
};

struct FRigUnit_HierarchyBaseMutable : public FRigUnitMutable
{
};

struct FRigUnit_HierarchyGetChildren : public FRigUnit_HierarchyBase
{
    FRigElementKey Parent;
    bool bIncludeParent;
    bool bRecursive;
    FRigElementKeyCollection Children;
    FCachedRigElement CachedParent;
    FRigElementKeyCollection CachedChildren;

};

struct FRigUnit_HierarchyGetParent : public FRigUnit_HierarchyBase
{
    FRigElementKey Child;
    FRigElementKey Parent;
    FCachedRigElement CachedChild;
    FCachedRigElement CachedParent;

};

struct FRigUnit_HierarchyGetParentWeights : public FRigUnit_DynamicHierarchyBase
{
    FRigElementKey Child;
    TArray<FRigElementWeight> Weights;
    FRigElementKeyCollection Parents;

};

struct FRigUnit_HierarchyGetParentWeightsArray : public FRigUnit_DynamicHierarchyBase
{
    FRigElementKey Child;
    TArray<FRigElementWeight> Weights;
    TArray<FRigElementKey> Parents;

};

struct FRigUnit_HierarchyGetParents : public FRigUnit_HierarchyBase
{
    FRigElementKey Child;
    bool bIncludeChild;
    bool bReverse;
    FRigElementKeyCollection Parents;
    FCachedRigElement CachedChild;
    FRigElementKeyCollection CachedParents;

};

struct FRigUnit_HierarchyGetParentsItemArray : public FRigUnit_HierarchyBase
{
    FRigElementKey Child;
    bool bIncludeChild;
    bool bReverse;
    TArray<FRigElementKey> Parents;
    FCachedRigElement CachedChild;
    FRigElementKeyCollection CachedParents;

};

struct FRigUnit_HierarchyGetPose : public FRigUnit_HierarchyBase
{
    bool Initial;
    ERigElementType ElementType;
    FRigElementKeyCollection ItemsToGet;
    FRigPose Pose;

};

struct FRigUnit_HierarchyGetPoseItemArray : public FRigUnit_HierarchyBase
{
    bool Initial;
    ERigElementType ElementType;
    TArray<FRigElementKey> ItemsToGet;
    FRigPose Pose;

};

struct FRigUnit_HierarchyGetSiblings : public FRigUnit_HierarchyBase
{
    FRigElementKey Item;
    bool bIncludeItem;
    FRigElementKeyCollection Siblings;
    FCachedRigElement CachedItem;
    FRigElementKeyCollection CachedSiblings;

};

struct FRigUnit_HierarchyGetSiblingsItemArray : public FRigUnit_HierarchyBase
{
    FRigElementKey Item;
    bool bIncludeItem;
    TArray<FRigElementKey> Siblings;
    FCachedRigElement CachedItem;
    FRigElementKeyCollection CachedSiblings;

};

struct FRigUnit_HierarchyImportFromSkeleton : public FRigUnit_DynamicHierarchyBaseMutable
{
    FName Namespace;
    bool bIncludeCurves;
    TArray<FRigElementKey> Items;

};

struct FRigUnit_HierarchyRemoveElement : public FRigUnit_DynamicHierarchyBaseMutable
{
    FRigElementKey Item;
    bool bSuccess;

};

struct FRigUnit_HierarchyReset : public FRigUnit_DynamicHierarchyBaseMutable
{
};

struct FRigUnit_HierarchySetParentWeights : public FRigUnit_DynamicHierarchyBaseMutable
{
    FRigElementKey Child;
    TArray<FRigElementWeight> Weights;

};

struct FRigUnit_HierarchySetPose : public FRigUnit_HierarchyBaseMutable
{
    FRigPose Pose;
    ERigElementType ElementType;
    EBoneGetterSetterMode space;
    FRigElementKeyCollection ItemsToSet;
    float Weight;

};

struct FRigUnit_HierarchySetPoseItemArray : public FRigUnit_HierarchyBaseMutable
{
    FRigPose Pose;
    ERigElementType ElementType;
    EBoneGetterSetterMode space;
    TArray<FRigElementKey> ItemsToSet;
    float Weight;

};

struct FRigUnit_HighlevelBase : public FRigUnit
{
};

struct FRigUnit_HighlevelBaseMutable : public FRigUnitMutable
{
};

struct FRigUnit_InteractionExecution : public FRigUnit
{
    FControlRigExecuteContext ExecuteContext;

};

struct FRigUnit_InverseExecution : public FRigUnit
{
    FControlRigExecuteContext ExecuteContext;

};

struct FRigUnit_InverseQuaterion : public FRigUnit_UnaryQuaternionOp
{
};

struct FRigUnit_IsInteracting : public FRigUnit
{
    bool bIsInteracting;
    bool bIsTranslating;
    bool bIsRotating;
    bool bIsScaling;
    TArray<FRigElementKey> Items;

};

struct FRigUnit_Item : public FRigUnit
{
    FRigElementKey Item;

};

struct FRigUnit_ItemBase : public FRigUnit
{
};

struct FRigUnit_ItemBaseMutable : public FRigUnitMutable
{
};

struct FRigUnit_ItemEquals : public FRigUnit_ItemBase
{
    FRigElementKey A;
    FRigElementKey B;
    bool Result;

};

struct FRigUnit_ItemExists : public FRigUnit_ItemBase
{
    FRigElementKey Item;
    bool Exists;
    FCachedRigElement CachedIndex;

};

struct FRigUnit_ItemHarmonics : public FRigUnit_HighlevelBaseMutable
{
    TArray<FRigUnit_Harmonics_TargetItem> Targets;
    FVector WaveSpeed;
    FVector WaveFrequency;
    FVector WaveAmplitude;
    FVector WaveOffset;
    FVector WaveNoise;
    EControlRigAnimEasingType WaveEase;
    float WaveMinimum;
    float WaveMaximum;
    EEulerRotationOrder RotationOrder;
    FRigUnit_BoneHarmonics_WorkData WorkData;

};

struct FRigUnit_ItemNotEquals : public FRigUnit_ItemBase
{
    FRigElementKey A;
    FRigElementKey B;
    bool Result;

};

struct FRigUnit_ItemReplace : public FRigUnit_ItemBase
{
    FRigElementKey Item;
    FName Old;
    FName New;
    FRigElementKey Result;

};

struct FRigUnit_ItemTypeEquals : public FRigUnit_ItemBase
{
    FRigElementKey A;
    FRigElementKey B;
    bool Result;

};

struct FRigUnit_ItemTypeNotEquals : public FRigUnit_ItemBase
{
    FRigElementKey A;
    FRigElementKey B;
    bool Result;

};

struct FRigUnit_KalmanFloat : public FRigUnit_SimBase
{
    float Value;
    int32 BufferSize;
    float Result;
    TArray<float> Buffer;
    int32 LastInsertIndex;

};

struct FRigUnit_KalmanTransform : public FRigUnit_SimBase
{
    FTransform Value;
    int32 BufferSize;
    FTransform Result;
    TArray<FTransform> Buffer;
    int32 LastInsertIndex;

};

struct FRigUnit_KalmanVector : public FRigUnit_SimBase
{
    FVector Value;
    int32 BufferSize;
    FVector Result;
    TArray<FVector> Buffer;
    int32 LastInsertIndex;

};

struct FRigUnit_MapRange_Float : public FRigUnit
{
    float Value;
    float MinIn;
    float MaxIn;
    float MinOut;
    float MaxOut;
    float Result;

};

struct FRigUnit_MathBase : public FRigUnit
{
};

struct FRigUnit_MathBoolAnd : public FRigUnit_MathBoolBinaryAggregateOp
{
};

struct FRigUnit_MathBoolBase : public FRigUnit_MathBase
{
};

struct FRigUnit_MathBoolBinaryAggregateOp : public FRigUnit_MathBoolBase
{
    bool A;
    bool B;
    bool Result;

};

struct FRigUnit_MathBoolBinaryOp : public FRigUnit_MathBoolBase
{
    bool A;
    bool B;
    bool Result;

};

struct FRigUnit_MathBoolConstFalse : public FRigUnit_MathBoolConstant
{
};

struct FRigUnit_MathBoolConstTrue : public FRigUnit_MathBoolConstant
{
};

struct FRigUnit_MathBoolConstant : public FRigUnit_MathBoolBase
{
    bool Value;

};

struct FRigUnit_MathBoolEquals : public FRigUnit_MathBoolBase
{
    bool A;
    bool B;
    bool Result;

};

struct FRigUnit_MathBoolFlipFlop : public FRigUnit_MathBoolBase
{
    bool StartValue;
    float Duration;
    bool Result;
    bool LastValue;
    float TimeLeft;

};

struct FRigUnit_MathBoolNand : public FRigUnit_MathBoolBinaryOp
{
};

struct FRigUnit_MathBoolNand2 : public FRigUnit_MathBoolBinaryOp
{
};

struct FRigUnit_MathBoolNot : public FRigUnit_MathBoolUnaryOp
{
};

struct FRigUnit_MathBoolNotEquals : public FRigUnit_MathBoolBase
{
    bool A;
    bool B;
    bool Result;

};

struct FRigUnit_MathBoolOnce : public FRigUnit_MathBoolBase
{
    float Duration;
    bool Result;
    bool LastValue;
    float TimeLeft;

};

struct FRigUnit_MathBoolOr : public FRigUnit_MathBoolBinaryAggregateOp
{
};

struct FRigUnit_MathBoolToFloat : public FRigUnit_MathBoolBase
{
    bool Value;
    float Result;

};

struct FRigUnit_MathBoolToInteger : public FRigUnit_MathBoolBase
{
    bool Value;
    int32 Result;

};

struct FRigUnit_MathBoolToggled : public FRigUnit_MathBoolBase
{
    bool Value;
    bool Toggled;
    bool Initialized;
    bool LastValue;

};

struct FRigUnit_MathBoolUnaryOp : public FRigUnit_MathBoolBase
{
    bool Value;
    bool Result;

};

struct FRigUnit_MathColorAdd : public FRigUnit_MathColorBinaryAggregateOp
{
};

struct FRigUnit_MathColorBase : public FRigUnit_MathBase
{
};

struct FRigUnit_MathColorBinaryAggregateOp : public FRigUnit_MathColorBase
{
    FLinearColor A;
    FLinearColor B;
    FLinearColor Result;

};

struct FRigUnit_MathColorBinaryOp : public FRigUnit_MathColorBase
{
    FLinearColor A;
    FLinearColor B;
    FLinearColor Result;

};

struct FRigUnit_MathColorFromFloat : public FRigUnit_MathColorBase
{
    float Value;
    FLinearColor Result;

};

struct FRigUnit_MathColorLerp : public FRigUnit_MathColorBase
{
    FLinearColor A;
    FLinearColor B;
    float T;
    FLinearColor Result;

};

struct FRigUnit_MathColorMul : public FRigUnit_MathColorBinaryAggregateOp
{
};

struct FRigUnit_MathColorSub : public FRigUnit_MathColorBinaryOp
{
};

struct FRigUnit_MathDistanceToPlane : public FRigUnit_MathVectorBase
{
    FVector Point;
    FVector PlanePoint;
    FVector PlaneNormal;
    FVector ClosestPointOnPlane;
    float SignedDistance;

};

struct FRigUnit_MathDoubleAbs : public FRigUnit_MathDoubleUnaryOp
{
};

struct FRigUnit_MathDoubleAcos : public FRigUnit_MathDoubleUnaryOp
{
};

struct FRigUnit_MathDoubleAdd : public FRigUnit_MathDoubleBinaryAggregateOp
{
};

struct FRigUnit_MathDoubleAsin : public FRigUnit_MathDoubleUnaryOp
{
};

struct FRigUnit_MathDoubleAtan : public FRigUnit_MathDoubleUnaryOp
{
};

struct FRigUnit_MathDoubleBase : public FRigUnit_MathBase
{
};

struct FRigUnit_MathDoubleBinaryAggregateOp : public FRigUnit_MathDoubleBase
{
    double A;
    double B;
    double Result;

};

struct FRigUnit_MathDoubleBinaryOp : public FRigUnit_MathDoubleBase
{
    double A;
    double B;
    double Result;

};

struct FRigUnit_MathDoubleCeil : public FRigUnit_MathDoubleBase
{
    double Value;
    double Result;
    int32 Int;

};

struct FRigUnit_MathDoubleClamp : public FRigUnit_MathDoubleBase
{
    double Value;
    double Minimum;
    double Maximum;
    double Result;

};

struct FRigUnit_MathDoubleConstE : public FRigUnit_MathDoubleConstant
{
};

struct FRigUnit_MathDoubleConstHalfPi : public FRigUnit_MathDoubleConstant
{
};

struct FRigUnit_MathDoubleConstPi : public FRigUnit_MathDoubleConstant
{
};

struct FRigUnit_MathDoubleConstTwoPi : public FRigUnit_MathDoubleConstant
{
};

struct FRigUnit_MathDoubleConstant : public FRigUnit_MathDoubleBase
{
    double Value;

};

struct FRigUnit_MathDoubleCos : public FRigUnit_MathDoubleUnaryOp
{
};

struct FRigUnit_MathDoubleDeg : public FRigUnit_MathDoubleUnaryOp
{
};

struct FRigUnit_MathDoubleDiv : public FRigUnit_MathDoubleBinaryOp
{
};

struct FRigUnit_MathDoubleEquals : public FRigUnit_MathDoubleBase
{
    double A;
    double B;
    bool Result;

};

struct FRigUnit_MathDoubleExponential : public FRigUnit_MathDoubleUnaryOp
{
};

struct FRigUnit_MathDoubleFloor : public FRigUnit_MathDoubleBase
{
    double Value;
    double Result;
    int32 Int;

};

struct FRigUnit_MathDoubleGreater : public FRigUnit_MathDoubleBase
{
    double A;
    double B;
    bool Result;

};

struct FRigUnit_MathDoubleGreaterEqual : public FRigUnit_MathDoubleBase
{
    double A;
    double B;
    bool Result;

};

struct FRigUnit_MathDoubleIsNearlyEqual : public FRigUnit_MathDoubleBase
{
    double A;
    double B;
    double Tolerance;
    bool Result;

};

struct FRigUnit_MathDoubleIsNearlyZero : public FRigUnit_MathDoubleBase
{
    double Value;
    double Tolerance;
    bool Result;

};

struct FRigUnit_MathDoubleLawOfCosine : public FRigUnit_MathDoubleBase
{
    double A;
    double B;
    double C;
    double AlphaAngle;
    double BetaAngle;
    double GammaAngle;
    bool bValid;

};

struct FRigUnit_MathDoubleLerp : public FRigUnit_MathDoubleBase
{
    double A;
    double B;
    double T;
    double Result;

};

struct FRigUnit_MathDoubleLess : public FRigUnit_MathDoubleBase
{
    double A;
    double B;
    bool Result;

};

struct FRigUnit_MathDoubleLessEqual : public FRigUnit_MathDoubleBase
{
    double A;
    double B;
    bool Result;

};

struct FRigUnit_MathDoubleMax : public FRigUnit_MathDoubleBinaryAggregateOp
{
};

struct FRigUnit_MathDoubleMin : public FRigUnit_MathDoubleBinaryAggregateOp
{
};

struct FRigUnit_MathDoubleMod : public FRigUnit_MathDoubleBinaryOp
{
};

struct FRigUnit_MathDoubleMul : public FRigUnit_MathDoubleBinaryAggregateOp
{
};

struct FRigUnit_MathDoubleNegate : public FRigUnit_MathDoubleUnaryOp
{
};

struct FRigUnit_MathDoubleNotEquals : public FRigUnit_MathDoubleBase
{
    double A;
    double B;
    bool Result;

};

struct FRigUnit_MathDoublePow : public FRigUnit_MathDoubleBinaryOp
{
};

struct FRigUnit_MathDoubleRad : public FRigUnit_MathDoubleUnaryOp
{
};

struct FRigUnit_MathDoubleRemap : public FRigUnit_MathDoubleBase
{
    double Value;
    double SourceMinimum;
    double SourceMaximum;
    double TargetMinimum;
    double TargetMaximum;
    bool bClamp;
    double Result;

};

struct FRigUnit_MathDoubleRound : public FRigUnit_MathDoubleBase
{
    double Value;
    double Result;
    int32 Int;

};

struct FRigUnit_MathDoubleSign : public FRigUnit_MathDoubleUnaryOp
{
};

struct FRigUnit_MathDoubleSin : public FRigUnit_MathDoubleUnaryOp
{
};

struct FRigUnit_MathDoubleSqrt : public FRigUnit_MathDoubleUnaryOp
{
};

struct FRigUnit_MathDoubleSub : public FRigUnit_MathDoubleBinaryOp
{
};

struct FRigUnit_MathDoubleTan : public FRigUnit_MathDoubleUnaryOp
{
};

struct FRigUnit_MathDoubleToInt : public FRigUnit_MathDoubleBase
{
    double Value;
    int32 Result;

};

struct FRigUnit_MathDoubleUnaryOp : public FRigUnit_MathDoubleBase
{
    double Value;
    double Result;

};

struct FRigUnit_MathFloatAbs : public FRigUnit_MathFloatUnaryOp
{
};

struct FRigUnit_MathFloatAcos : public FRigUnit_MathFloatUnaryOp
{
};

struct FRigUnit_MathFloatAdd : public FRigUnit_MathFloatBinaryAggregateOp
{
};

struct FRigUnit_MathFloatAsin : public FRigUnit_MathFloatUnaryOp
{
};

struct FRigUnit_MathFloatAtan : public FRigUnit_MathFloatUnaryOp
{
};

struct FRigUnit_MathFloatBase : public FRigUnit_MathBase
{
};

struct FRigUnit_MathFloatBinaryAggregateOp : public FRigUnit_MathFloatBase
{
    float A;
    float B;
    float Result;

};

struct FRigUnit_MathFloatBinaryOp : public FRigUnit_MathFloatBase
{
    float A;
    float B;
    float Result;

};

struct FRigUnit_MathFloatCeil : public FRigUnit_MathFloatBase
{
    float Value;
    float Result;
    int32 Int;

};

struct FRigUnit_MathFloatClamp : public FRigUnit_MathFloatBase
{
    float Value;
    float Minimum;
    float Maximum;
    float Result;

};

struct FRigUnit_MathFloatConstE : public FRigUnit_MathFloatConstant
{
};

struct FRigUnit_MathFloatConstHalfPi : public FRigUnit_MathFloatConstant
{
};

struct FRigUnit_MathFloatConstPi : public FRigUnit_MathFloatConstant
{
};

struct FRigUnit_MathFloatConstTwoPi : public FRigUnit_MathFloatConstant
{
};

struct FRigUnit_MathFloatConstant : public FRigUnit_MathFloatBase
{
    float Value;

};

struct FRigUnit_MathFloatCos : public FRigUnit_MathFloatUnaryOp
{
};

struct FRigUnit_MathFloatDeg : public FRigUnit_MathFloatUnaryOp
{
};

struct FRigUnit_MathFloatDiv : public FRigUnit_MathFloatBinaryOp
{
};

struct FRigUnit_MathFloatEquals : public FRigUnit_MathFloatBase
{
    float A;
    float B;
    bool Result;

};

struct FRigUnit_MathFloatExponential : public FRigUnit_MathFloatUnaryOp
{
};

struct FRigUnit_MathFloatFloor : public FRigUnit_MathFloatBase
{
    float Value;
    float Result;
    int32 Int;

};

struct FRigUnit_MathFloatGreater : public FRigUnit_MathFloatBase
{
    float A;
    float B;
    bool Result;

};

struct FRigUnit_MathFloatGreaterEqual : public FRigUnit_MathFloatBase
{
    float A;
    float B;
    bool Result;

};

struct FRigUnit_MathFloatIsNearlyEqual : public FRigUnit_MathFloatBase
{
    float A;
    float B;
    float Tolerance;
    bool Result;

};

struct FRigUnit_MathFloatIsNearlyZero : public FRigUnit_MathFloatBase
{
    float Value;
    float Tolerance;
    bool Result;

};

struct FRigUnit_MathFloatLawOfCosine : public FRigUnit_MathFloatBase
{
    float A;
    float B;
    float C;
    float AlphaAngle;
    float BetaAngle;
    float GammaAngle;
    bool bValid;

};

struct FRigUnit_MathFloatLerp : public FRigUnit_MathFloatBase
{
    float A;
    float B;
    float T;
    float Result;

};

struct FRigUnit_MathFloatLess : public FRigUnit_MathFloatBase
{
    float A;
    float B;
    bool Result;

};

struct FRigUnit_MathFloatLessEqual : public FRigUnit_MathFloatBase
{
    float A;
    float B;
    bool Result;

};

struct FRigUnit_MathFloatMax : public FRigUnit_MathFloatBinaryAggregateOp
{
};

struct FRigUnit_MathFloatMin : public FRigUnit_MathFloatBinaryAggregateOp
{
};

struct FRigUnit_MathFloatMod : public FRigUnit_MathFloatBinaryOp
{
};

struct FRigUnit_MathFloatMul : public FRigUnit_MathFloatBinaryAggregateOp
{
};

struct FRigUnit_MathFloatNegate : public FRigUnit_MathFloatUnaryOp
{
};

struct FRigUnit_MathFloatNotEquals : public FRigUnit_MathFloatBase
{
    float A;
    float B;
    bool Result;

};

struct FRigUnit_MathFloatPow : public FRigUnit_MathFloatBinaryOp
{
};

struct FRigUnit_MathFloatRad : public FRigUnit_MathFloatUnaryOp
{
};

struct FRigUnit_MathFloatRemap : public FRigUnit_MathFloatBase
{
    float Value;
    float SourceMinimum;
    float SourceMaximum;
    float TargetMinimum;
    float TargetMaximum;
    bool bClamp;
    float Result;

};

struct FRigUnit_MathFloatRound : public FRigUnit_MathFloatBase
{
    float Value;
    float Result;
    int32 Int;

};

struct FRigUnit_MathFloatSelectBool : public FRigUnit_MathFloatBase
{
    bool Condition;
    float IfTrue;
    float IfFalse;
    float Result;

};

struct FRigUnit_MathFloatSign : public FRigUnit_MathFloatUnaryOp
{
};

struct FRigUnit_MathFloatSin : public FRigUnit_MathFloatUnaryOp
{
};

struct FRigUnit_MathFloatSqrt : public FRigUnit_MathFloatUnaryOp
{
};

struct FRigUnit_MathFloatSub : public FRigUnit_MathFloatBinaryOp
{
};

struct FRigUnit_MathFloatTan : public FRigUnit_MathFloatUnaryOp
{
};

struct FRigUnit_MathFloatToInt : public FRigUnit_MathFloatBase
{
    float Value;
    int32 Result;

};

struct FRigUnit_MathFloatUnaryOp : public FRigUnit_MathFloatBase
{
    float Value;
    float Result;

};

struct FRigUnit_MathIntAbs : public FRigUnit_MathIntUnaryOp
{
};

struct FRigUnit_MathIntAdd : public FRigUnit_MathIntBinaryAggregateOp
{
};

struct FRigUnit_MathIntBase : public FRigUnit_MathBase
{
};

struct FRigUnit_MathIntBinaryAggregateOp : public FRigUnit_MathIntBase
{
    int32 A;
    int32 B;
    int32 Result;

};

struct FRigUnit_MathIntBinaryOp : public FRigUnit_MathIntBase
{
    int32 A;
    int32 B;
    int32 Result;

};

struct FRigUnit_MathIntClamp : public FRigUnit_MathIntBase
{
    int32 Value;
    int32 Minimum;
    int32 Maximum;
    int32 Result;

};

struct FRigUnit_MathIntDiv : public FRigUnit_MathIntBinaryOp
{
};

struct FRigUnit_MathIntEquals : public FRigUnit_MathIntBase
{
    int32 A;
    int32 B;
    bool Result;

};

struct FRigUnit_MathIntGreater : public FRigUnit_MathIntBase
{
    int32 A;
    int32 B;
    bool Result;

};

struct FRigUnit_MathIntGreaterEqual : public FRigUnit_MathIntBase
{
    int32 A;
    int32 B;
    bool Result;

};

struct FRigUnit_MathIntLess : public FRigUnit_MathIntBase
{
    int32 A;
    int32 B;
    bool Result;

};

struct FRigUnit_MathIntLessEqual : public FRigUnit_MathIntBase
{
    int32 A;
    int32 B;
    bool Result;

};

struct FRigUnit_MathIntMax : public FRigUnit_MathIntBinaryAggregateOp
{
};

struct FRigUnit_MathIntMin : public FRigUnit_MathIntBinaryAggregateOp
{
};

struct FRigUnit_MathIntMod : public FRigUnit_MathIntBinaryOp
{
};

struct FRigUnit_MathIntMul : public FRigUnit_MathIntBinaryAggregateOp
{
};

struct FRigUnit_MathIntNegate : public FRigUnit_MathIntUnaryOp
{
};

struct FRigUnit_MathIntNotEquals : public FRigUnit_MathIntBase
{
    int32 A;
    int32 B;
    bool Result;

};

struct FRigUnit_MathIntPow : public FRigUnit_MathIntBinaryOp
{
};

struct FRigUnit_MathIntSign : public FRigUnit_MathIntUnaryOp
{
};

struct FRigUnit_MathIntSub : public FRigUnit_MathIntBinaryOp
{
};

struct FRigUnit_MathIntToFloat : public FRigUnit_MathIntBase
{
    int32 Value;
    float Result;

};

struct FRigUnit_MathIntUnaryOp : public FRigUnit_MathIntBase
{
    int32 Value;
    int32 Result;

};

struct FRigUnit_MathIntersectPlane : public FRigUnit_MathVectorBase
{
    FVector Start;
    FVector Direction;
    FVector PlanePoint;
    FVector PlaneNormal;
    FVector Result;
    float Distance;

};

struct FRigUnit_MathMatrixBase : public FRigUnit_MathBase
{
};

struct FRigUnit_MathMatrixBinaryAggregateOp : public FRigUnit_MathMatrixBase
{
    FMatrix A;
    FMatrix B;
    FMatrix Result;

};

struct FRigUnit_MathMatrixBinaryOp : public FRigUnit_MathMatrixBase
{
    FMatrix A;
    FMatrix B;
    FMatrix Result;

};

struct FRigUnit_MathMatrixFromTransform : public FRigUnit_MathMatrixBase
{
    FTransform Transform;
    FMatrix Result;

};

struct FRigUnit_MathMatrixFromTransformV2 : public FRigUnit_MathMatrixBase
{
    FTransform Value;
    FMatrix Result;

};

struct FRigUnit_MathMatrixFromVectors : public FRigUnit_MathMatrixBase
{
    FVector Origin;
    FVector X;
    FVector Y;
    FVector Z;
    FMatrix Result;

};

struct FRigUnit_MathMatrixInverse : public FRigUnit_MathMatrixUnaryOp
{
};

struct FRigUnit_MathMatrixMul : public FRigUnit_MathMatrixBinaryAggregateOp
{
};

struct FRigUnit_MathMatrixToTransform : public FRigUnit_MathMatrixBase
{
    FMatrix Value;
    FTransform Result;

};

struct FRigUnit_MathMatrixToVectors : public FRigUnit_MathMatrixBase
{
    FMatrix Value;
    FVector Origin;
    FVector X;
    FVector Y;
    FVector Z;

};

struct FRigUnit_MathMatrixUnaryOp : public FRigUnit_MathMatrixBase
{
    FMatrix Value;
    FMatrix Result;

};

struct FRigUnit_MathMutableBase : public FRigUnitMutable
{
};

struct FRigUnit_MathQuaternionBase : public FRigUnit_MathBase
{
};

struct FRigUnit_MathQuaternionBinaryAggregateOp : public FRigUnit_MathQuaternionBase
{
    FQuat A;
    FQuat B;
    FQuat Result;

};

struct FRigUnit_MathQuaternionBinaryOp : public FRigUnit_MathQuaternionBase
{
    FQuat A;
    FQuat B;
    FQuat Result;

};

struct FRigUnit_MathQuaternionDot : public FRigUnit_MathQuaternionBase
{
    FQuat A;
    FQuat B;
    float Result;

};

struct FRigUnit_MathQuaternionEquals : public FRigUnit_MathQuaternionBase
{
    FQuat A;
    FQuat B;
    bool Result;

};

struct FRigUnit_MathQuaternionFromAxisAndAngle : public FRigUnit_MathQuaternionBase
{
    FVector Axis;
    float Angle;
    FQuat Result;

};

struct FRigUnit_MathQuaternionFromEuler : public FRigUnit_MathQuaternionBase
{
    FVector Euler;
    EEulerRotationOrder RotationOrder;
    FQuat Result;

};

struct FRigUnit_MathQuaternionFromRotator : public FRigUnit_MathQuaternionBase
{
    FRotator Rotator;
    FQuat Result;

};

struct FRigUnit_MathQuaternionFromRotatorV2 : public FRigUnit_MathQuaternionBase
{
    FRotator Value;
    FQuat Result;

};

struct FRigUnit_MathQuaternionFromTwoVectors : public FRigUnit_MathQuaternionBase
{
    FVector A;
    FVector B;
    FQuat Result;

};

struct FRigUnit_MathQuaternionGetAxis : public FRigUnit_MathQuaternionBase
{
    FQuat Quaternion;
    TEnumAsByte<EAxis> Axis;
    FVector Result;

};

struct FRigUnit_MathQuaternionInverse : public FRigUnit_MathQuaternionUnaryOp
{
};

struct FRigUnit_MathQuaternionMakeAbsolute : public FRigUnit_MathQuaternionBase
{
    FQuat Local;
    FQuat Parent;
    FQuat Global;

};

struct FRigUnit_MathQuaternionMakeRelative : public FRigUnit_MathQuaternionBase
{
    FQuat Global;
    FQuat Parent;
    FQuat Local;

};

struct FRigUnit_MathQuaternionMirrorTransform : public FRigUnit_MathQuaternionBase
{
    FQuat Value;
    TEnumAsByte<EAxis> MirrorAxis;
    TEnumAsByte<EAxis> AxisToFlip;
    FTransform CentralTransform;
    FQuat Result;

};

struct FRigUnit_MathQuaternionMul : public FRigUnit_MathQuaternionBinaryAggregateOp
{
};

struct FRigUnit_MathQuaternionNotEquals : public FRigUnit_MathQuaternionBase
{
    FQuat A;
    FQuat B;
    bool Result;

};

struct FRigUnit_MathQuaternionRotateVector : public FRigUnit_MathQuaternionBase
{
    FQuat Transform;
    FVector Vector;
    FVector Result;

};

struct FRigUnit_MathQuaternionRotationOrder : public FRigUnit_MathBase
{
    EEulerRotationOrder RotationOrder;

};

struct FRigUnit_MathQuaternionScale : public FRigUnit_MathQuaternionBase
{
    FQuat Value;
    float Scale;

};

struct FRigUnit_MathQuaternionScaleV2 : public FRigUnit_MathQuaternionBase
{
    FQuat Value;
    float Factor;
    FQuat Result;

};

struct FRigUnit_MathQuaternionSelectBool : public FRigUnit_MathQuaternionBase
{
    bool Condition;
    FQuat IfTrue;
    FQuat IfFalse;
    FQuat Result;

};

struct FRigUnit_MathQuaternionSlerp : public FRigUnit_MathQuaternionBase
{
    FQuat A;
    FQuat B;
    float T;
    FQuat Result;

};

struct FRigUnit_MathQuaternionSwingTwist : public FRigUnit_MathQuaternionBase
{
    FQuat Input;
    FVector TwistAxis;
    FQuat Swing;
    FQuat Twist;

};

struct FRigUnit_MathQuaternionToAxisAndAngle : public FRigUnit_MathQuaternionBase
{
    FQuat Value;
    FVector Axis;
    float Angle;

};

struct FRigUnit_MathQuaternionToEuler : public FRigUnit_MathQuaternionBase
{
    FQuat Value;
    EEulerRotationOrder RotationOrder;
    FVector Result;

};

struct FRigUnit_MathQuaternionToRotator : public FRigUnit_MathQuaternionBase
{
    FQuat Value;
    FRotator Result;

};

struct FRigUnit_MathQuaternionUnaryOp : public FRigUnit_MathQuaternionBase
{
    FQuat Value;
    FQuat Result;

};

struct FRigUnit_MathQuaternionUnit : public FRigUnit_MathQuaternionUnaryOp
{
};

struct FRigUnit_MathRBFInterpolateBase : public FRigUnit_MathBase
{
};

struct FRigUnit_MathRBFInterpolateQuatBase : public FRigUnit_MathRBFInterpolateBase
{
    FQuat Input;
    ERBFQuatDistanceType DistanceFunction;
    ERBFKernelType SmoothingFunction;
    float SmoothingAngle;
    bool bNormalizeOutput;
    FVector TwistAxis;
    FRigUnit_MathRBFInterpolateQuatWorkData WorkData;

};

struct FRigUnit_MathRBFInterpolateQuatColor : public FRigUnit_MathRBFInterpolateQuatBase
{
    TArray<FMathRBFInterpolateQuatColor_Target> Targets;
    FLinearColor Output;

};

struct FRigUnit_MathRBFInterpolateQuatFloat : public FRigUnit_MathRBFInterpolateQuatBase
{
    TArray<FMathRBFInterpolateQuatFloat_Target> Targets;
    float Output;

};

struct FRigUnit_MathRBFInterpolateQuatQuat : public FRigUnit_MathRBFInterpolateQuatBase
{
    TArray<FMathRBFInterpolateQuatQuat_Target> Targets;
    FQuat Output;

};

struct FRigUnit_MathRBFInterpolateQuatVector : public FRigUnit_MathRBFInterpolateQuatBase
{
    TArray<FMathRBFInterpolateQuatVector_Target> Targets;
    FVector Output;

};

struct FRigUnit_MathRBFInterpolateQuatWorkData
{
};

struct FRigUnit_MathRBFInterpolateQuatXform : public FRigUnit_MathRBFInterpolateQuatBase
{
    TArray<FMathRBFInterpolateQuatXform_Target> Targets;
    FTransform Output;

};

struct FRigUnit_MathRBFInterpolateVectorBase : public FRigUnit_MathRBFInterpolateBase
{
    FVector Input;
    ERBFVectorDistanceType DistanceFunction;
    ERBFKernelType SmoothingFunction;
    float SmoothingRadius;
    bool bNormalizeOutput;
    FRigUnit_MathRBFInterpolateVectorWorkData WorkData;

};

struct FRigUnit_MathRBFInterpolateVectorColor : public FRigUnit_MathRBFInterpolateVectorBase
{
    TArray<FMathRBFInterpolateVectorColor_Target> Targets;
    FLinearColor Output;

};

struct FRigUnit_MathRBFInterpolateVectorFloat : public FRigUnit_MathRBFInterpolateVectorBase
{
    TArray<FMathRBFInterpolateVectorFloat_Target> Targets;
    float Output;

};

struct FRigUnit_MathRBFInterpolateVectorQuat : public FRigUnit_MathRBFInterpolateVectorBase
{
    TArray<FMathRBFInterpolateVectorQuat_Target> Targets;
    FQuat Output;

};

struct FRigUnit_MathRBFInterpolateVectorVector : public FRigUnit_MathRBFInterpolateVectorBase
{
    TArray<FMathRBFInterpolateVectorVector_Target> Targets;
    FVector Output;

};

struct FRigUnit_MathRBFInterpolateVectorWorkData
{
};

struct FRigUnit_MathRBFInterpolateVectorXform : public FRigUnit_MathRBFInterpolateVectorBase
{
    TArray<FMathRBFInterpolateVectorXform_Target> Targets;
    FTransform Output;

};

struct FRigUnit_MathTransformAccumulateArray : public FRigUnit_MathTransformMutableBase
{
    TArray<FTransform> Transforms;
    EBoneGetterSetterMode TargetSpace;
    FTransform Root;
    TArray<int32> ParentIndices;

};

struct FRigUnit_MathTransformArrayToSRT : public FRigUnit_MathTransformBase
{
    TArray<FTransform> Transforms;
    TArray<FVector> Translations;
    TArray<FQuat> Rotations;
    TArray<FVector> Scales;

};

struct FRigUnit_MathTransformBase : public FRigUnit_MathBase
{
};

struct FRigUnit_MathTransformBinaryAggregateOp : public FRigUnit_MathTransformBase
{
    FTransform A;
    FTransform B;
    FTransform Result;

};

struct FRigUnit_MathTransformBinaryOp : public FRigUnit_MathTransformBase
{
    FTransform A;
    FTransform B;
    FTransform Result;

};

struct FRigUnit_MathTransformClampSpatially : public FRigUnit_MathTransformBase
{
    FTransform Value;
    TEnumAsByte<EAxis> Axis;
    TEnumAsByte<EControlRigClampSpatialMode> Type;
    float Minimum;
    float Maximum;
    FTransform space;
    bool bDrawDebug;
    FLinearColor DebugColor;
    float DebugThickness;
    FTransform Result;

};

struct FRigUnit_MathTransformFromEulerTransform : public FRigUnit_MathTransformBase
{
    FEulerTransform EulerTransform;
    FTransform Result;

};

struct FRigUnit_MathTransformFromEulerTransformV2 : public FRigUnit_MathTransformBase
{
    FEulerTransform Value;
    FTransform Result;

};

struct FRigUnit_MathTransformFromSRT : public FRigUnit_MathTransformBase
{
    FVector Location;
    FVector Rotation;
    EEulerRotationOrder RotationOrder;
    FVector Scale;
    FTransform Transform;
    FEulerTransform EulerTransform;

};

struct FRigUnit_MathTransformInverse : public FRigUnit_MathTransformUnaryOp
{
};

struct FRigUnit_MathTransformLerp : public FRigUnit_MathTransformBase
{
    FTransform A;
    FTransform B;
    float T;
    FTransform Result;

};

struct FRigUnit_MathTransformMakeAbsolute : public FRigUnit_MathTransformBase
{
    FTransform Local;
    FTransform Parent;
    FTransform Global;

};

struct FRigUnit_MathTransformMakeRelative : public FRigUnit_MathTransformBase
{
    FTransform Global;
    FTransform Parent;
    FTransform Local;

};

struct FRigUnit_MathTransformMirrorTransform : public FRigUnit_MathTransformBase
{
    FTransform Value;
    TEnumAsByte<EAxis> MirrorAxis;
    TEnumAsByte<EAxis> AxisToFlip;
    FTransform CentralTransform;
    FTransform Result;

};

struct FRigUnit_MathTransformMul : public FRigUnit_MathTransformBinaryAggregateOp
{
};

struct FRigUnit_MathTransformMutableBase : public FRigUnit_MathMutableBase
{
};

struct FRigUnit_MathTransformRotateVector : public FRigUnit_MathTransformBase
{
    FTransform Transform;
    FVector Vector;
    FVector Result;

};

struct FRigUnit_MathTransformSelectBool : public FRigUnit_MathTransformBase
{
    bool Condition;
    FTransform IfTrue;
    FTransform IfFalse;
    FTransform Result;

};

struct FRigUnit_MathTransformToEulerTransform : public FRigUnit_MathTransformBase
{
    FTransform Value;
    FEulerTransform Result;

};

struct FRigUnit_MathTransformTransformVector : public FRigUnit_MathTransformBase
{
    FTransform Transform;
    FVector Location;
    FVector Result;

};

struct FRigUnit_MathTransformUnaryOp : public FRigUnit_MathTransformBase
{
    FTransform Value;
    FTransform Result;

};

struct FRigUnit_MathVectorAbs : public FRigUnit_MathVectorUnaryOp
{
};

struct FRigUnit_MathVectorAdd : public FRigUnit_MathVectorBinaryAggregateOp
{
};

struct FRigUnit_MathVectorAngle : public FRigUnit_MathVectorBase
{
    FVector A;
    FVector B;
    float Result;

};

struct FRigUnit_MathVectorBase : public FRigUnit_MathBase
{
};

struct FRigUnit_MathVectorBezierFourPoint : public FRigUnit_MathVectorBase
{
    FCRFourPointBezier Bezier;
    float T;
    FVector Result;
    FVector Tangent;

};

struct FRigUnit_MathVectorBinaryAggregateOp : public FRigUnit_MathVectorBase
{
    FVector A;
    FVector B;
    FVector Result;

};

struct FRigUnit_MathVectorBinaryOp : public FRigUnit_MathVectorBase
{
    FVector A;
    FVector B;
    FVector Result;

};

struct FRigUnit_MathVectorCeil : public FRigUnit_MathVectorUnaryOp
{
};

struct FRigUnit_MathVectorClamp : public FRigUnit_MathVectorBase
{
    FVector Value;
    FVector Minimum;
    FVector Maximum;
    FVector Result;

};

struct FRigUnit_MathVectorClampLength : public FRigUnit_MathVectorBase
{
    FVector Value;
    float MinimumLength;
    float MaximumLength;
    FVector Result;

};

struct FRigUnit_MathVectorClampSpatially : public FRigUnit_MathVectorBase
{
    FVector Value;
    TEnumAsByte<EAxis> Axis;
    TEnumAsByte<EControlRigClampSpatialMode> Type;
    float Minimum;
    float Maximum;
    FTransform space;
    bool bDrawDebug;
    FLinearColor DebugColor;
    float DebugThickness;
    FVector Result;

};

struct FRigUnit_MathVectorCross : public FRigUnit_MathVectorBinaryOp
{
};

struct FRigUnit_MathVectorDeg : public FRigUnit_MathVectorUnaryOp
{
};

struct FRigUnit_MathVectorDistance : public FRigUnit_MathVectorBase
{
    FVector A;
    FVector B;
    float Result;

};

struct FRigUnit_MathVectorDiv : public FRigUnit_MathVectorBinaryOp
{
};

struct FRigUnit_MathVectorDot : public FRigUnit_MathVectorBase
{
    FVector A;
    FVector B;
    float Result;

};

struct FRigUnit_MathVectorEquals : public FRigUnit_MathVectorBase
{
    FVector A;
    FVector B;
    bool Result;

};

struct FRigUnit_MathVectorFloor : public FRigUnit_MathVectorUnaryOp
{
};

struct FRigUnit_MathVectorFromFloat : public FRigUnit_MathVectorBase
{
    float Value;
    FVector Result;

};

struct FRigUnit_MathVectorIsNearlyEqual : public FRigUnit_MathVectorBase
{
    FVector A;
    FVector B;
    float Tolerance;
    bool Result;

};

struct FRigUnit_MathVectorIsNearlyZero : public FRigUnit_MathVectorBase
{
    FVector Value;
    float Tolerance;
    bool Result;

};

struct FRigUnit_MathVectorLength : public FRigUnit_MathVectorBase
{
    FVector Value;
    float Result;

};

struct FRigUnit_MathVectorLengthSquared : public FRigUnit_MathVectorBase
{
    FVector Value;
    float Result;

};

struct FRigUnit_MathVectorLerp : public FRigUnit_MathVectorBase
{
    FVector A;
    FVector B;
    float T;
    FVector Result;

};

struct FRigUnit_MathVectorMakeAbsolute : public FRigUnit_MathVectorBase
{
    FVector Local;
    FVector Parent;
    FVector Global;

};

struct FRigUnit_MathVectorMakeBezierFourPoint : public FRigUnit_MathVectorBase
{
    FCRFourPointBezier Bezier;

};

struct FRigUnit_MathVectorMakeRelative : public FRigUnit_MathVectorBase
{
    FVector Global;
    FVector Parent;
    FVector Local;

};

struct FRigUnit_MathVectorMax : public FRigUnit_MathVectorBinaryAggregateOp
{
};

struct FRigUnit_MathVectorMin : public FRigUnit_MathVectorBinaryAggregateOp
{
};

struct FRigUnit_MathVectorMirror : public FRigUnit_MathVectorBase
{
    FVector Value;
    FVector Normal;
    FVector Result;

};

struct FRigUnit_MathVectorMirrorTransform : public FRigUnit_MathVectorBase
{
    FVector Value;
    TEnumAsByte<EAxis> MirrorAxis;
    TEnumAsByte<EAxis> AxisToFlip;
    FTransform CentralTransform;
    FVector Result;

};

struct FRigUnit_MathVectorMod : public FRigUnit_MathVectorBinaryOp
{
};

struct FRigUnit_MathVectorMul : public FRigUnit_MathVectorBinaryAggregateOp
{
};

struct FRigUnit_MathVectorNegate : public FRigUnit_MathVectorUnaryOp
{
};

struct FRigUnit_MathVectorNotEquals : public FRigUnit_MathVectorBase
{
    FVector A;
    FVector B;
    bool Result;

};

struct FRigUnit_MathVectorOrthogonal : public FRigUnit_MathVectorBase
{
    FVector A;
    FVector B;
    bool Result;

};

struct FRigUnit_MathVectorParallel : public FRigUnit_MathVectorBase
{
    FVector A;
    FVector B;
    bool Result;

};

struct FRigUnit_MathVectorRad : public FRigUnit_MathVectorUnaryOp
{
};

struct FRigUnit_MathVectorRemap : public FRigUnit_MathVectorBase
{
    FVector Value;
    FVector SourceMinimum;
    FVector SourceMaximum;
    FVector TargetMinimum;
    FVector TargetMaximum;
    bool bClamp;
    FVector Result;

};

struct FRigUnit_MathVectorRound : public FRigUnit_MathVectorUnaryOp
{
};

struct FRigUnit_MathVectorScale : public FRigUnit_MathVectorBase
{
    FVector Value;
    float Factor;
    FVector Result;

};

struct FRigUnit_MathVectorSelectBool : public FRigUnit_MathVectorBase
{
    bool Condition;
    FVector IfTrue;
    FVector IfFalse;
    FVector Result;

};

struct FRigUnit_MathVectorSetLength : public FRigUnit_MathVectorBase
{
    FVector Value;
    float Length;
    FVector Result;

};

struct FRigUnit_MathVectorSign : public FRigUnit_MathVectorUnaryOp
{
};

struct FRigUnit_MathVectorSub : public FRigUnit_MathVectorBinaryOp
{
};

struct FRigUnit_MathVectorUnaryOp : public FRigUnit_MathVectorBase
{
    FVector Value;
    FVector Result;

};

struct FRigUnit_MathVectorUnit : public FRigUnit_MathVectorUnaryOp
{
};

struct FRigUnit_ModifyBoneTransforms : public FRigUnit_HighlevelBaseMutable
{
    TArray<FRigUnit_ModifyBoneTransforms_PerBone> BoneToModify;
    float Weight;
    float WeightMinimum;
    float WeightMaximum;
    EControlRigModifyBoneMode Mode;
    FRigUnit_ModifyBoneTransforms_WorkData WorkData;

};

struct FRigUnit_ModifyBoneTransforms_PerBone
{
    FName bone;
    FTransform Transform;

};

struct FRigUnit_ModifyBoneTransforms_WorkData : public FRigUnit_ModifyTransforms_WorkData
{
};

struct FRigUnit_ModifyTransforms : public FRigUnit_HighlevelBaseMutable
{
    TArray<FRigUnit_ModifyTransforms_PerItem> ItemToModify;
    float Weight;
    float WeightMinimum;
    float WeightMaximum;
    EControlRigModifyBoneMode Mode;
    FRigUnit_ModifyTransforms_WorkData WorkData;

};

struct FRigUnit_ModifyTransforms_PerItem
{
    FRigElementKey Item;
    FTransform Transform;

};

struct FRigUnit_ModifyTransforms_WorkData
{
    TArray<FCachedRigElement> CachedItems;

};

struct FRigUnit_MultiFABRIK : public FRigUnit_HighlevelBaseMutable
{
    FName RootBone;
    TArray<FRigUnit_MultiFABRIK_EndEffector> Effectors;
    float Precision;
    bool bPropagateToChildren;
    int32 MaxIterations;
    FRigUnit_MultiFABRIK_WorkData WorkData;

};

struct FRigUnit_MultiFABRIK_EndEffector
{
    FName bone;
    FVector Location;

};

struct FRigUnit_MultiFABRIK_WorkData
{
};

struct FRigUnit_MultiplyQuaternion : public FRigUnit_BinaryQuaternionOp
{
};

struct FRigUnit_MultiplyTransform : public FRigUnit_BinaryTransformOp
{
};

struct FRigUnit_Multiply_FloatFloat : public FRigUnit_BinaryFloatOp
{
};

struct FRigUnit_Multiply_VectorVector : public FRigUnit_BinaryVectorOp
{
};

struct FRigUnit_NameBase : public FRigUnit
{
};

struct FRigUnit_NameConcat : public FRigUnit_NameBase
{
    FName A;
    FName B;
    FName Result;

};

struct FRigUnit_NameReplace : public FRigUnit_NameBase
{
    FName Name;
    FName Old;
    FName New;
    FName Result;

};

struct FRigUnit_NameTruncate : public FRigUnit_NameBase
{
    FName Name;
    int32 Count;
    bool FromEnd;
    FName Remainder;
    FName Chopped;

};

struct FRigUnit_NoiseDouble : public FRigUnit_MathBase
{
    double Value;
    double Speed;
    double Frequency;
    double Minimum;
    double Maximum;
    double Result;
    double Time;

};

struct FRigUnit_NoiseFloat : public FRigUnit_MathBase
{
    float Value;
    float Speed;
    float Frequency;
    float Minimum;
    float Maximum;
    float Result;
    float Time;

};

struct FRigUnit_NoiseVector : public FRigUnit_MathBase
{
    FVector Position;
    FVector Speed;
    FVector Frequency;
    float Minimum;
    float Maximum;
    FVector Result;
    FVector Time;

};

struct FRigUnit_NoiseVector2 : public FRigUnit_MathBase
{
    FVector Value;
    FVector Speed;
    FVector Frequency;
    double Minimum;
    double Maximum;
    FVector Result;
    FVector Time;

};

struct FRigUnit_OffsetTransformForItem : public FRigUnitMutable
{
    FRigElementKey Item;
    FTransform OffsetTransform;
    float Weight;
    bool bPropagateToChildren;
    FCachedRigElement CachedIndex;

};

struct FRigUnit_ParentConstraint : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKey Child;
    bool bMaintainOffset;
    FTransformFilter Filter;
    TArray<FConstraintParent> Parents;
    FRigUnit_ParentConstraint_AdvancedSettings AdvancedSettings;
    float Weight;
    FCachedRigElement ChildCache;
    TArray<FCachedRigElement> ParentCaches;

};

struct FRigUnit_ParentConstraint_AdvancedSettings
{
    EConstraintInterpType InterpolationType;
    EEulerRotationOrder RotationOrderForFilter;

};

struct FRigUnit_ParentSwitchConstraint : public FRigUnitMutable
{
    FRigElementKey Subject;
    int32 ParentIndex;
    FRigElementKeyCollection Parents;
    FTransform InitialGlobalTransform;
    float Weight;
    FTransform Transform;
    bool Switched;
    FCachedRigElement CachedSubject;
    FCachedRigElement CachedParent;
    FTransform RelativeOffset;

};

struct FRigUnit_ParentSwitchConstraintArray : public FRigUnitMutable
{
    FRigElementKey Subject;
    int32 ParentIndex;
    TArray<FRigElementKey> Parents;
    FTransform InitialGlobalTransform;
    float Weight;
    FTransform Transform;
    bool Switched;
    FCachedRigElement CachedSubject;
    FCachedRigElement CachedParent;
    FTransform RelativeOffset;

};

struct FRigUnit_PointSimulation : public FRigUnit_SimBaseMutable
{
    TArray<FCRSimPoint> Points;
    TArray<FCRSimLinearSpring> Links;
    TArray<FCRSimPointForce> Forces;
    TArray<FCRSimSoftCollision> CollisionVolumes;
    float SimulatedStepsPerSecond;
    ECRSimPointIntegrateType IntegratorType;
    float VerletBlend;
    TArray<FRigUnit_PointSimulation_BoneTarget> BoneTargets;
    bool bLimitLocalPosition;
    bool bPropagateToChildren;
    FVector PrimaryAimAxis;
    FVector SecondaryAimAxis;
    FRigUnit_PointSimulation_DebugSettings DebugSettings;
    FCRFourPointBezier Bezier;
    FRigUnit_PointSimulation_WorkData WorkData;

};

struct FRigUnit_PointSimulation_BoneTarget
{
    FName bone;
    int32 TranslationPoint;
    int32 PrimaryAimPoint;
    int32 SecondaryAimPoint;

};

struct FRigUnit_PointSimulation_DebugSettings
{
    bool bEnabled;
    float Scale;
    float CollisionScale;
    bool bDrawPointsAsSpheres;
    FLinearColor Color;
    FTransform WorldOffset;

};

struct FRigUnit_PointSimulation_WorkData
{
    FCRSimPointContainer Simulation;
    TArray<FCachedRigElement> BoneIndices;

};

struct FRigUnit_PoseGetCurve : public FRigUnit_HierarchyBase
{
    FRigPose Pose;
    FName Curve;
    bool Valid;
    float CurveValue;
    int32 CachedPoseElementIndex;
    int32 CachedPoseHash;

};

struct FRigUnit_PoseGetDelta : public FRigUnit_HierarchyBase
{
    FRigPose PoseA;
    FRigPose PoseB;
    float PositionThreshold;
    float RotationThreshold;
    float ScaleThreshold;
    float CurveThreshold;
    ERigElementType ElementType;
    EBoneGetterSetterMode space;
    FRigElementKeyCollection ItemsToCompare;
    bool PosesAreEqual;
    FRigElementKeyCollection ItemsWithDelta;

};

struct FRigUnit_PoseGetItems : public FRigUnit_HierarchyBase
{
    FRigPose Pose;
    ERigElementType ElementType;
    FRigElementKeyCollection Items;

};

struct FRigUnit_PoseGetItemsItemArray : public FRigUnit_HierarchyBase
{
    FRigPose Pose;
    ERigElementType ElementType;
    TArray<FRigElementKey> Items;

};

struct FRigUnit_PoseGetTransform : public FRigUnit_HierarchyBase
{
    FRigPose Pose;
    FRigElementKey Item;
    EBoneGetterSetterMode space;
    bool Valid;
    FTransform Transform;
    float CurveValue;
    int32 CachedPoseElementIndex;
    int32 CachedPoseHash;

};

struct FRigUnit_PoseGetTransformArray : public FRigUnit_HierarchyBase
{
    FRigPose Pose;
    EBoneGetterSetterMode space;
    bool Valid;
    TArray<FTransform> Transforms;

};

struct FRigUnit_PoseIsEmpty : public FRigUnit_HierarchyBase
{
    FRigPose Pose;
    bool IsEmpty;

};

struct FRigUnit_PoseLoop : public FRigUnit_HierarchyBaseMutable
{
    FRigPose Pose;
    FRigElementKey Item;
    FTransform GlobalTransform;
    FTransform LocalTransform;
    float CurveValue;
    int32 Index;
    int32 Count;
    float Ratio;
    bool Continue;
    FControlRigExecuteContext Completed;

};

struct FRigUnit_PositionConstraint : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKey Child;
    bool bMaintainOffset;
    FFilterOptionPerAxis Filter;
    TArray<FConstraintParent> Parents;
    float Weight;

};

struct FRigUnit_PositionConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKey Child;
    bool bMaintainOffset;
    FFilterOptionPerAxis Filter;
    TArray<FConstraintParent> Parents;
    float Weight;
    FCachedRigElement ChildCache;
    TArray<FCachedRigElement> ParentCaches;

};

struct FRigUnit_PrepareForExecution : public FRigUnit
{
    FControlRigExecuteContext ExecuteContext;

};

struct FRigUnit_ProjectTransformToNewParent : public FRigUnit
{
    FRigElementKey Child;
    bool bChildInitial;
    FRigElementKey OldParent;
    bool bOldParentInitial;
    FRigElementKey NewParent;
    bool bNewParentInitial;
    FTransform Transform;
    FCachedRigElement CachedChild;
    FCachedRigElement CachedOldParent;
    FCachedRigElement CachedNewParent;

};

struct FRigUnit_PropagateTransform : public FRigUnitMutable
{
    FRigElementKey Item;
    bool bRecomputeGlobal;
    bool bApplyToChildren;
    bool bRecursive;
    FCachedRigElement CachedIndex;

};

struct FRigUnit_QuaternionFromAxisAndAngle : public FRigUnit
{
    FVector Axis;
    float Angle;
    FQuat Result;

};

struct FRigUnit_QuaternionToAngle : public FRigUnit
{
    FVector Axis;
    FQuat Argument;
    float Angle;

};

struct FRigUnit_QuaternionToAxisAndAngle : public FRigUnit
{
    FQuat Argument;
    FVector Axis;
    float Angle;

};

struct FRigUnit_RandomFloat : public FRigUnit_MathBase
{
    int32 Seed;
    float Minimum;
    float Maximum;
    float Duration;
    float Result;
    float LastResult;
    int32 LastSeed;
    int32 BaseSeed;
    float TimeLeft;

};

struct FRigUnit_RandomVector : public FRigUnit_MathBase
{
    int32 Seed;
    float Minimum;
    float Maximum;
    float Duration;
    FVector Result;
    FVector LastResult;
    int32 LastSeed;
    int32 BaseSeed;
    float TimeLeft;

};

struct FRigUnit_RemoveAllMetadata : public FRigUnitMutable
{
    FRigElementKey Item;
    bool Removed;
    FCachedRigElement CachedIndex;

};

struct FRigUnit_RemoveMetadata : public FRigUnitMutable
{
    FRigElementKey Item;
    FName Name;
    bool Removed;
    FCachedRigElement CachedIndex;

};

struct FRigUnit_RemoveMetadataTag : public FRigUnitMutable
{
    FRigElementKey Item;
    FName Tag;
    bool Removed;
    FCachedRigElement CachedIndex;

};

struct FRigUnit_RotationConstraint : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKey Child;
    bool bMaintainOffset;
    FFilterOptionPerAxis Filter;
    TArray<FConstraintParent> Parents;
    FRigUnit_RotationConstraint_AdvancedSettings AdvancedSettings;
    float Weight;

};

struct FRigUnit_RotationConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKey Child;
    bool bMaintainOffset;
    FFilterOptionPerAxis Filter;
    TArray<FConstraintParent> Parents;
    FRigUnit_RotationConstraint_AdvancedSettings AdvancedSettings;
    float Weight;
    FCachedRigElement ChildCache;
    TArray<FCachedRigElement> ParentCaches;

};

struct FRigUnit_RotationConstraint_AdvancedSettings
{
    EConstraintInterpType InterpolationType;
    EEulerRotationOrder RotationOrderForFilter;

};

struct FRigUnit_ScaleConstraint : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKey Child;
    bool bMaintainOffset;
    FFilterOptionPerAxis Filter;
    TArray<FConstraintParent> Parents;
    float Weight;

};

struct FRigUnit_ScaleConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKey Child;
    bool bMaintainOffset;
    FFilterOptionPerAxis Filter;
    TArray<FConstraintParent> Parents;
    float Weight;
    FCachedRigElement ChildCache;
    TArray<FCachedRigElement> ParentCaches;

};

struct FRigUnit_SecondsToFrames : public FRigUnit_AnimBase
{
    float Seconds;
    float Frames;

};

struct FRigUnit_SendEvent : public FRigUnitMutable
{
    ERigEvent Event;
    FRigElementKey Item;
    float OffsetInSeconds;
    bool bEnable;
    bool bOnlyDuringInteraction;

};

struct FRigUnit_SequenceAggregate : public FRigUnit
{
    FControlRigExecuteContext ExecuteContext;
    FControlRigExecuteContext A;
    FControlRigExecuteContext B;

};

struct FRigUnit_SequenceExecution : public FRigUnit
{
    FControlRigExecuteContext ExecuteContext;
    FControlRigExecuteContext A;
    FControlRigExecuteContext B;
    FControlRigExecuteContext C;
    FControlRigExecuteContext D;

};

struct FRigUnit_SetAnimationChannelBase : public FRigUnit_GetAnimationChannelBase
{
    FControlRigExecuteContext ExecuteContext;

};

struct FRigUnit_SetBoneInitialTransform : public FRigUnitMutable
{
    FName bone;
    FTransform Transform;
    FTransform Result;
    EBoneGetterSetterMode space;
    bool bPropagateToChildren;
    FCachedRigElement CachedBone;

};

struct FRigUnit_SetBoneRotation : public FRigUnitMutable
{
    FName bone;
    FQuat Rotation;
    EBoneGetterSetterMode space;
    float Weight;
    bool bPropagateToChildren;
    FCachedRigElement CachedBone;

};

struct FRigUnit_SetBoneTransform : public FRigUnitMutable
{
    FName bone;
    FTransform Transform;
    FTransform Result;
    EBoneGetterSetterMode space;
    float Weight;
    bool bPropagateToChildren;
    FCachedRigElement CachedBone;

};

struct FRigUnit_SetBoneTranslation : public FRigUnitMutable
{
    FName bone;
    FVector Translation;
    EBoneGetterSetterMode space;
    float Weight;
    bool bPropagateToChildren;
    FCachedRigElement CachedBone;

};

struct FRigUnit_SetBoolAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
    bool Value;

};

struct FRigUnit_SetControlBool : public FRigUnitMutable
{
    FName Control;
    bool BoolValue;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_SetControlColor : public FRigUnitMutable
{
    FName Control;
    FLinearColor Color;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_SetControlDrivenList : public FRigUnitMutable
{
    FName Control;
    TArray<FRigElementKey> Driven;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_SetControlFloat : public FRigUnitMutable
{
    FName Control;
    float Weight;
    float FloatValue;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_SetControlInteger : public FRigUnitMutable
{
    FName Control;
    int32 Weight;
    int32 IntegerValue;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_SetControlOffset : public FRigUnitMutable
{
    FName Control;
    FTransform Offset;
    EBoneGetterSetterMode space;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_SetControlRotator : public FRigUnitMutable
{
    FName Control;
    float Weight;
    FRotator Rotator;
    EBoneGetterSetterMode space;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_SetControlTransform : public FRigUnitMutable
{
    FName Control;
    float Weight;
    FTransform Transform;
    EBoneGetterSetterMode space;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_SetControlVector : public FRigUnitMutable
{
    FName Control;
    float Weight;
    FVector Vector;
    EBoneGetterSetterMode space;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_SetControlVector2D : public FRigUnitMutable
{
    FName Control;
    float Weight;
    FVector2D Vector;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_SetControlVisibility : public FRigUnitMutable
{
    FRigElementKey Item;
    FString Pattern;
    bool bVisible;
    TArray<FCachedRigElement> CachedControlIndices;

};

struct FRigUnit_SetCurveValue : public FRigUnitMutable
{
    FName Curve;
    float Value;
    FCachedRigElement CachedCurveIndex;

};

struct FRigUnit_SetDefaultParent : public FRigUnit_DynamicHierarchyBaseMutable
{
    FRigElementKey Child;
    FRigElementKey Parent;

};

struct FRigUnit_SetFloatAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
    float Value;

};

struct FRigUnit_SetIntAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
    int32 Value;

};

struct FRigUnit_SetMetadataTag : public FRigUnitMutable
{
    FRigElementKey Item;
    FName Tag;
    FCachedRigElement CachedIndex;

};

struct FRigUnit_SetMetadataTagArray : public FRigUnitMutable
{
    FRigElementKey Item;
    TArray<FName> Tags;
    FCachedRigElement CachedIndex;

};

struct FRigUnit_SetMultiControlBool : public FRigUnitMutable
{
    TArray<FRigUnit_SetMultiControlBool_Entry> Entries;
    TArray<FCachedRigElement> CachedControlIndices;

};

struct FRigUnit_SetMultiControlBool_Entry
{
    FName Control;
    bool BoolValue;

};

struct FRigUnit_SetMultiControlFloat : public FRigUnitMutable
{
    TArray<FRigUnit_SetMultiControlFloat_Entry> Entries;
    float Weight;
    TArray<FCachedRigElement> CachedControlIndices;

};

struct FRigUnit_SetMultiControlFloat_Entry
{
    FName Control;
    float FloatValue;

};

struct FRigUnit_SetMultiControlInteger : public FRigUnitMutable
{
    TArray<FRigUnit_SetMultiControlInteger_Entry> Entries;
    float Weight;
    TArray<FCachedRigElement> CachedControlIndices;

};

struct FRigUnit_SetMultiControlInteger_Entry
{
    FName Control;
    int32 IntegerValue;

};

struct FRigUnit_SetMultiControlRotator : public FRigUnitMutable
{
    TArray<FRigUnit_SetMultiControlRotator_Entry> Entries;
    float Weight;
    TArray<FCachedRigElement> CachedControlIndices;

};

struct FRigUnit_SetMultiControlRotator_Entry
{
    FName Control;
    FRotator Rotator;
    EBoneGetterSetterMode space;

};

struct FRigUnit_SetMultiControlVector2D : public FRigUnitMutable
{
    TArray<FRigUnit_SetMultiControlVector2D_Entry> Entries;
    float Weight;
    TArray<FCachedRigElement> CachedControlIndices;

};

struct FRigUnit_SetMultiControlVector2D_Entry
{
    FName Control;
    FVector2D Vector;

};

struct FRigUnit_SetRelativeBoneTransform : public FRigUnitMutable
{
    FName bone;
    FName space;
    FTransform Transform;
    float Weight;
    bool bPropagateToChildren;
    FCachedRigElement CachedBone;
    FCachedRigElement CachedSpaceIndex;

};

struct FRigUnit_SetRelativeRotationForItem : public FRigUnitMutable
{
    FRigElementKey Child;
    FRigElementKey Parent;
    bool bParentInitial;
    FQuat Value;
    float Weight;
    bool bPropagateToChildren;
    FCachedRigElement CachedChild;
    FCachedRigElement CachedParent;

};

struct FRigUnit_SetRelativeTransformForItem : public FRigUnitMutable
{
    FRigElementKey Child;
    FRigElementKey Parent;
    bool bParentInitial;
    FTransform Value;
    float Weight;
    bool bPropagateToChildren;
    FCachedRigElement CachedChild;
    FCachedRigElement CachedParent;

};

struct FRigUnit_SetRelativeTranslationForItem : public FRigUnitMutable
{
    FRigElementKey Child;
    FRigElementKey Parent;
    bool bParentInitial;
    FVector Value;
    float Weight;
    bool bPropagateToChildren;
    FCachedRigElement CachedChild;
    FCachedRigElement CachedParent;

};

struct FRigUnit_SetRotation : public FRigUnitMutable
{
    FRigElementKey Item;
    EBoneGetterSetterMode space;
    bool bInitial;
    FQuat Value;
    float Weight;
    bool bPropagateToChildren;
    FCachedRigElement CachedIndex;

};

struct FRigUnit_SetRotatorAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
    FRotator Value;

};

struct FRigUnit_SetScale : public FRigUnitMutable
{
    FRigElementKey Item;
    EBoneGetterSetterMode space;
    bool bInitial;
    FVector Scale;
    float Weight;
    bool bPropagateToChildren;
    FCachedRigElement CachedIndex;

};

struct FRigUnit_SetShapeTransform : public FRigUnitMutable
{
    FName Control;
    FTransform Transform;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_SetSpaceInitialTransform : public FRigUnitMutable
{
    FName SpaceName;
    FTransform Transform;
    FTransform Result;
    EBoneGetterSetterMode space;
    FCachedRigElement CachedSpaceIndex;

};

struct FRigUnit_SetSpaceTransform : public FRigUnitMutable
{
    FName space;
    float Weight;
    FTransform Transform;
    EBoneGetterSetterMode SpaceType;
    FCachedRigElement CachedSpaceIndex;

};

struct FRigUnit_SetTransform : public FRigUnitMutable
{
    FRigElementKey Item;
    EBoneGetterSetterMode space;
    bool bInitial;
    FTransform Value;
    float Weight;
    bool bPropagateToChildren;
    FCachedRigElement CachedIndex;

};

struct FRigUnit_SetTransformAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
    FTransform Value;

};

struct FRigUnit_SetTransformArray : public FRigUnitMutable
{
    FRigElementKeyCollection Items;
    EBoneGetterSetterMode space;
    bool bInitial;
    TArray<FTransform> Transforms;
    float Weight;
    bool bPropagateToChildren;
    TArray<FCachedRigElement> CachedIndex;

};

struct FRigUnit_SetTransformItemArray : public FRigUnitMutable
{
    TArray<FRigElementKey> Items;
    EBoneGetterSetterMode space;
    bool bInitial;
    TArray<FTransform> Transforms;
    float Weight;
    bool bPropagateToChildren;
    TArray<FCachedRigElement> CachedIndex;

};

struct FRigUnit_SetTranslation : public FRigUnitMutable
{
    FRigElementKey Item;
    EBoneGetterSetterMode space;
    bool bInitial;
    FVector Value;
    float Weight;
    bool bPropagateToChildren;
    FCachedRigElement CachedIndex;

};

struct FRigUnit_SetVector2DAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
    FVector2D Value;

};

struct FRigUnit_SetVectorAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
    FVector Value;

};

struct FRigUnit_SimBase : public FRigUnit
{
};

struct FRigUnit_SimBaseMutable : public FRigUnitMutable
{
};

struct FRigUnit_SlideChain : public FRigUnit_HighlevelBaseMutable
{
    FName StartBone;
    FName EndBone;
    float SlideAmount;
    bool bPropagateToChildren;
    FRigUnit_SlideChain_WorkData WorkData;

};

struct FRigUnit_SlideChainItemArray : public FRigUnit_HighlevelBaseMutable
{
    TArray<FRigElementKey> Items;
    float SlideAmount;
    bool bPropagateToChildren;
    FRigUnit_SlideChain_WorkData WorkData;

};

struct FRigUnit_SlideChainPerItem : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKeyCollection Items;
    float SlideAmount;
    bool bPropagateToChildren;
    FRigUnit_SlideChain_WorkData WorkData;

};

struct FRigUnit_SlideChain_WorkData
{
    float ChainLength;
    TArray<float> ItemSegments;
    TArray<FCachedRigElement> CachedItems;
    TArray<FTransform> Transforms;
    TArray<FTransform> BlendedTransforms;

};

struct FRigUnit_SpaceName : public FRigUnit
{
    FName space;

};

struct FRigUnit_SphereTraceByObjectTypes : public FRigUnit
{
    FVector Start;
    FVector End;
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
    float Radius;
    bool bHit;
    FVector HitLocation;
    FVector HitNormal;

};

struct FRigUnit_SphereTraceByTraceChannel : public FRigUnit
{
    FVector Start;
    FVector End;
    TEnumAsByte<ETraceTypeQuery> TraceChannel;
    float Radius;
    bool bHit;
    FVector HitLocation;
    FVector HitNormal;

};

struct FRigUnit_SphereTraceWorld : public FRigUnit
{
    FVector Start;
    FVector End;
    TEnumAsByte<ECollisionChannel> Channel;
    float Radius;
    bool bHit;
    FVector HitLocation;
    FVector HitNormal;

};

struct FRigUnit_SphericalPoseReader : public FRigUnit_HighlevelBaseMutable
{
    float OutputParam;
    FRigElementKey DriverItem;
    FVector DriverAxis;
    FVector RotationOffset;
    float ActiveRegionSize;
    FRegionScaleFactors ActiveRegionScaleFactors;
    float FalloffSize;
    FRegionScaleFactors FalloffRegionScaleFactors;
    bool FlipWidthScaling;
    bool FlipHeightScaling;
    FRigElementKey OptionalParentItem;
    FSphericalPoseReaderDebugSettings Debug;
    FSphericalRegion InnerRegion;
    FSphericalRegion OuterRegion;
    FVector DriverNormal;
    FVector Driver2D;
    FCachedRigElement DriverCache;
    FCachedRigElement OptionalParentCache;
    FTransform LocalDriverTransformInit;
    FVector CachedRotationOffset;
    bool bCachedInitTransforms;

};

struct FRigUnit_SpringIK : public FRigUnit_HighlevelBaseMutable
{
    FName StartBone;
    FName EndBone;
    float HierarchyStrength;
    float EffectorStrength;
    float EffectorRatio;
    float RootStrength;
    float RootRatio;
    float Damping;
    FVector PoleVector;
    bool bFlipPolePlane;
    EControlRigVectorKind PoleVectorKind;
    FName PoleVectorSpace;
    FVector PrimaryAxis;
    FVector SecondaryAxis;
    bool bLiveSimulation;
    int32 Iterations;
    bool bLimitLocalPosition;
    bool bPropagateToChildren;
    FRigUnit_SpringIK_DebugSettings DebugSettings;
    FRigUnit_SpringIK_WorkData WorkData;

};

struct FRigUnit_SpringIK_DebugSettings
{
    bool bEnabled;
    float Scale;
    FLinearColor Color;
    FTransform WorldOffset;

};

struct FRigUnit_SpringIK_WorkData
{
    TArray<FCachedRigElement> CachedBones;
    FCachedRigElement CachedPoleVector;
    TArray<FTransform> Transforms;
    FCRSimPointContainer Simulation;

};

struct FRigUnit_SpringInterp : public FRigUnit_SimBase
{
    float Current;
    float Target;
    float Stiffness;
    float CriticalDamping;
    float Mass;
    float Result;
    FFloatSpringState SpringState;

};

struct FRigUnit_SpringInterpQuaternionV2 : public FRigUnit_SimBase
{
    FQuat Target;
    float Strength;
    float CriticalDamping;
    FVector Torque;
    bool bUseCurrentInput;
    FQuat Current;
    float TargetVelocityAmount;
    bool bInitializeFromTarget;
    FQuat Result;
    FVector AngularVelocity;
    FQuat SimulatedResult;
    FQuaternionSpringState SpringState;

};

struct FRigUnit_SpringInterpV2 : public FRigUnit_SimBase
{
    float Target;
    float Strength;
    float CriticalDamping;
    float Force;
    bool bUseCurrentInput;
    float Current;
    float TargetVelocityAmount;
    bool bInitializeFromTarget;
    float Result;
    float Velocity;
    float SimulatedResult;
    FFloatSpringState SpringState;

};

struct FRigUnit_SpringInterpVector : public FRigUnit_SimBase
{
    FVector Current;
    FVector Target;
    float Stiffness;
    float CriticalDamping;
    float Mass;
    FVector Result;
    FVectorSpringState SpringState;

};

struct FRigUnit_SpringInterpVectorV2 : public FRigUnit_SimBase
{
    FVector Target;
    float Strength;
    float CriticalDamping;
    FVector Force;
    bool bUseCurrentInput;
    FVector Current;
    float TargetVelocityAmount;
    bool bInitializeFromTarget;
    FVector Result;
    FVector Velocity;
    FVector SimulatedResult;
    FVectorSpringState SpringState;

};

struct FRigUnit_StartProfilingTimer : public FRigUnit_DebugBaseMutable
{
};

struct FRigUnit_StartsWith : public FRigUnit_NameBase
{
    FName Name;
    FName Start;
    bool Result;

};

struct FRigUnit_StringBase : public FRigUnit
{
};

struct FRigUnit_StringConcat : public FRigUnit_StringBase
{
    FString A;
    FString B;
    FString Result;

};

struct FRigUnit_StringContains : public FRigUnit_StringBase
{
    FString Name;
    FString Search;
    bool Result;

};

struct FRigUnit_StringEndsWith : public FRigUnit_StringBase
{
    FString Name;
    FString Ending;
    bool Result;

};

struct FRigUnit_StringFind : public FRigUnit_StringBase
{
    FString Value;
    FString Search;
    bool Found;
    int32 Index;

};

struct FRigUnit_StringJoin : public FRigUnit_StringBase
{
    TArray<FString> Values;
    FString Separator;
    FString Result;

};

struct FRigUnit_StringLeft : public FRigUnit_StringBase
{
    FString Value;
    int32 Count;
    FString Result;

};

struct FRigUnit_StringLength : public FRigUnit_StringBase
{
    FString Value;
    int32 Length;

};

struct FRigUnit_StringMiddle : public FRigUnit_StringBase
{
    FString Value;
    int32 Start;
    int32 Count;
    FString Result;

};

struct FRigUnit_StringPadInteger : public FRigUnit_StringBase
{
    int32 Value;
    int32 Digits;
    FString Result;

};

struct FRigUnit_StringReplace : public FRigUnit_StringBase
{
    FString Name;
    FString Old;
    FString New;
    FString Result;

};

struct FRigUnit_StringReverse : public FRigUnit_StringBase
{
    FString Value;
    FString Reverse;

};

struct FRigUnit_StringRight : public FRigUnit_StringBase
{
    FString Value;
    int32 Count;
    FString Result;

};

struct FRigUnit_StringSplit : public FRigUnit_StringBase
{
    FString Value;
    FString Separator;
    TArray<FString> Result;

};

struct FRigUnit_StringStartsWith : public FRigUnit_StringBase
{
    FString Name;
    FString Start;
    bool Result;

};

struct FRigUnit_StringToLowercase : public FRigUnit_StringBase
{
    FString Value;
    FString Result;

};

struct FRigUnit_StringToUppercase : public FRigUnit_StringBase
{
    FString Value;
    FString Result;

};

struct FRigUnit_StringTrimWhitespace : public FRigUnit_StringBase
{
    FString Value;
    FString Result;

};

struct FRigUnit_StringTruncate : public FRigUnit_StringBase
{
    FString Name;
    int32 Count;
    bool FromEnd;
    FString Remainder;
    FString Chopped;

};

struct FRigUnit_Subtract_FloatFloat : public FRigUnit_BinaryFloatOp
{
};

struct FRigUnit_Subtract_VectorVector : public FRigUnit_BinaryVectorOp
{
};

struct FRigUnit_SwitchParent : public FRigUnit_DynamicHierarchyBaseMutable
{
    ERigSwitchParentMode Mode;
    FRigElementKey Child;
    FRigElementKey Parent;
    bool bMaintainGlobal;

};

struct FRigUnit_TimeLoop : public FRigUnit_SimBase
{
    float Speed;
    float Duration;
    bool Normalize;
    float Absolute;
    float Relative;
    float FlipFlop;
    bool Even;
    float AccumulatedAbsolute;
    float AccumulatedRelative;
    int32 NumIterations;

};

struct FRigUnit_TimeOffsetFloat : public FRigUnit_SimBase
{
    float Value;
    float SecondsAgo;
    int32 BufferSize;
    float TimeRange;
    float Result;
    TArray<float> Buffer;
    TArray<float> DeltaTimes;
    int32 LastInsertIndex;
    int32 UpperBound;

};

struct FRigUnit_TimeOffsetTransform : public FRigUnit_SimBase
{
    FTransform Value;
    float SecondsAgo;
    int32 BufferSize;
    float TimeRange;
    FTransform Result;
    TArray<FTransform> Buffer;
    TArray<float> DeltaTimes;
    int32 LastInsertIndex;
    int32 UpperBound;

};

struct FRigUnit_TimeOffsetVector : public FRigUnit_SimBase
{
    FVector Value;
    float SecondsAgo;
    int32 BufferSize;
    float TimeRange;
    FVector Result;
    TArray<FVector> Buffer;
    TArray<float> DeltaTimes;
    int32 LastInsertIndex;
    int32 UpperBound;

};

struct FRigUnit_Timeline : public FRigUnit_SimBase
{
    float Speed;
    float Time;
    float AccumulatedValue;

};

struct FRigUnit_ToRigSpace_Location : public FRigUnit
{
    FVector Value;
    FVector Global;

};

struct FRigUnit_ToRigSpace_Rotation : public FRigUnit
{
    FQuat Value;
    FQuat Global;

};

struct FRigUnit_ToRigSpace_Transform : public FRigUnit
{
    FTransform Value;
    FTransform Global;

};

struct FRigUnit_ToSwingAndTwist : public FRigUnit
{
    FQuat Input;
    FVector TwistAxis;
    FQuat Swing;
    FQuat Twist;

};

struct FRigUnit_ToWorldSpace_Location : public FRigUnit
{
    FVector Value;
    FVector World;

};

struct FRigUnit_ToWorldSpace_Rotation : public FRigUnit
{
    FQuat Value;
    FQuat World;

};

struct FRigUnit_ToWorldSpace_Transform : public FRigUnit
{
    FTransform Value;
    FTransform World;

};

struct FRigUnit_TransformConstraint : public FRigUnit_HighlevelBaseMutable
{
    FName bone;
    ETransformSpaceMode BaseTransformSpace;
    FTransform BaseTransform;
    FName BaseBone;
    TArray<FConstraintTarget> Targets;
    bool bUseInitialTransforms;
    FRigUnit_TransformConstraint_WorkData WorkData;

};

struct FRigUnit_TransformConstraintPerItem : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKey Item;
    ETransformSpaceMode BaseTransformSpace;
    FTransform BaseTransform;
    FRigElementKey BaseItem;
    TArray<FConstraintTarget> Targets;
    bool bUseInitialTransforms;
    FRigUnit_TransformConstraint_WorkData WorkData;

};

struct FRigUnit_TransformConstraint_WorkData
{
    TArray<FConstraintData> ConstraintData;
    TMap<int32, int32> ConstraintDataToTargets;

};

struct FRigUnit_TwistBones : public FRigUnit_HighlevelBaseMutable
{
    FName StartBone;
    FName EndBone;
    FVector TwistAxis;
    FVector PoleAxis;
    EControlRigAnimEasingType TwistEaseType;
    float Weight;
    bool bPropagateToChildren;
    FRigUnit_TwistBones_WorkData WorkData;

};

struct FRigUnit_TwistBonesPerItem : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKeyCollection Items;
    FVector TwistAxis;
    FVector PoleAxis;
    EControlRigAnimEasingType TwistEaseType;
    float Weight;
    bool bPropagateToChildren;
    FRigUnit_TwistBones_WorkData WorkData;

};

struct FRigUnit_TwistBones_WorkData
{
    TArray<FCachedRigElement> CachedItems;
    TArray<float> ItemRatios;
    TArray<FTransform> ItemTransforms;

};

struct FRigUnit_TwoBoneIKFK : public FRigUnitMutable
{
    FName StartJoint;
    FName EndJoint;
    FVector PoleTarget;
    float Spin;
    FTransform EndEffector;
    float IKBlend;
    FTransform StartJointFKTransform;
    FTransform MidJointFKTransform;
    FTransform EndJointFKTransform;
    float PreviousFKIKBlend;
    FTransform StartJointIKTransform;
    FTransform MidJointIKTransform;
    FTransform EndJointIKTransform;
    int32 StartJointIndex;
    int32 MidJointIndex;
    int32 EndJointIndex;
    float UpperLimbLength;
    float LowerLimbLength;

};

struct FRigUnit_TwoBoneIKSimple : public FRigUnit_HighlevelBaseMutable
{
    FName BoneA;
    FName BoneB;
    FName EffectorBone;
    FTransform Effector;
    FVector PrimaryAxis;
    FVector SecondaryAxis;
    float SecondaryAxisWeight;
    FVector PoleVector;
    EControlRigVectorKind PoleVectorKind;
    FName PoleVectorSpace;
    bool bEnableStretch;
    float StretchStartRatio;
    float StretchMaximumRatio;
    float Weight;
    float BoneALength;
    float BoneBLength;
    bool bPropagateToChildren;
    FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings;
    FCachedRigElement CachedBoneAIndex;
    FCachedRigElement CachedBoneBIndex;
    FCachedRigElement CachedEffectorBoneIndex;
    FCachedRigElement CachedPoleVectorSpaceIndex;

};

struct FRigUnit_TwoBoneIKSimplePerItem : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKey ItemA;
    FRigElementKey ItemB;
    FRigElementKey EffectorItem;
    FTransform Effector;
    FVector PrimaryAxis;
    FVector SecondaryAxis;
    float SecondaryAxisWeight;
    FVector PoleVector;
    EControlRigVectorKind PoleVectorKind;
    FRigElementKey PoleVectorSpace;
    bool bEnableStretch;
    float StretchStartRatio;
    float StretchMaximumRatio;
    float Weight;
    float ItemALength;
    float ItemBLength;
    bool bPropagateToChildren;
    FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings;
    FCachedRigElement CachedItemAIndex;
    FCachedRigElement CachedItemBIndex;
    FCachedRigElement CachedEffectorItemIndex;
    FCachedRigElement CachedPoleVectorSpaceIndex;

};

struct FRigUnit_TwoBoneIKSimpleTransforms : public FRigUnit_HighlevelBase
{
    FTransform Root;
    FVector PoleVector;
    FTransform Effector;
    FVector PrimaryAxis;
    FVector SecondaryAxis;
    float SecondaryAxisWeight;
    bool bEnableStretch;
    float StretchStartRatio;
    float StretchMaximumRatio;
    float BoneALength;
    float BoneBLength;
    FTransform Elbow;

};

struct FRigUnit_TwoBoneIKSimpleVectors : public FRigUnit_HighlevelBase
{
    FVector Root;
    FVector PoleVector;
    FVector Effector;
    bool bEnableStretch;
    float StretchStartRatio;
    float StretchMaximumRatio;
    float BoneALength;
    float BoneBLength;
    FVector Elbow;

};

struct FRigUnit_TwoBoneIKSimple_DebugSettings
{
    bool bEnabled;
    float Scale;
    FTransform WorldOffset;

};

struct FRigUnit_UnaryQuaternionOp : public FRigUnit
{
    FQuat Argument;
    FQuat Result;

};

struct FRigUnit_UnsetCurveValue : public FRigUnitMutable
{
    FName Curve;
    FCachedRigElement CachedCurveIndex;

};

struct FRigUnit_UserDefinedEvent : public FRigUnit
{
    FControlRigExecuteContext ExecuteContext;
    FName EventName;

};

struct FRigUnit_VerletIntegrateVector : public FRigUnit_SimBase
{
    FVector Target;
    float Strength;
    float Damp;
    float Blend;
    FVector Force;
    FVector Position;
    FVector Velocity;
    FVector Acceleration;
    FCRSimPoint Point;
    bool bInitialized;

};

struct FRigUnit_VisualDebugQuat : public FRigUnit_DebugBase
{
    FQuat Value;
    bool bEnabled;
    float Thickness;
    float Scale;
    FName BoneSpace;

};

struct FRigUnit_VisualDebugQuatItemSpace : public FRigUnit_DebugBase
{
    FQuat Value;
    bool bEnabled;
    float Thickness;
    float Scale;
    FRigElementKey space;

};

struct FRigUnit_VisualDebugTransform : public FRigUnit_DebugBase
{
    FTransform Value;
    bool bEnabled;
    float Thickness;
    float Scale;
    FName BoneSpace;

};

struct FRigUnit_VisualDebugTransformItemSpace : public FRigUnit_DebugBase
{
    FTransform Value;
    bool bEnabled;
    float Thickness;
    float Scale;
    FRigElementKey space;

};

struct FRigUnit_VisualDebugVector : public FRigUnit_DebugBase
{
    FVector Value;
    bool bEnabled;
    ERigUnitVisualDebugPointMode Mode;
    FLinearColor Color;
    float Thickness;
    float Scale;
    FName BoneSpace;

};

struct FRigUnit_VisualDebugVectorItemSpace : public FRigUnit_DebugBase
{
    FVector Value;
    bool bEnabled;
    ERigUnitVisualDebugPointMode Mode;
    FLinearColor Color;
    float Thickness;
    float Scale;
    FRigElementKey space;

};

struct FRigVectorArrayMetadata : public FRigBaseMetadata
{
    TArray<FVector> Value;

};

struct FRigVectorMetadata : public FRigBaseMetadata
{
    FVector Value;

};

struct FSpaceControlNameAndChannel
{
    FName ControlName;
    FMovieSceneControlRigSpaceChannel SpaceCurve;

};

struct FSphericalPoseReaderDebugSettings
{
    bool bDrawDebug;
    bool bDraw2D;
    bool bDrawLocalAxes;
    float DebugScale;
    int32 DebugSegments;
    float DebugThickness;

};

struct FSphericalRegion
{
};

struct FStructReference
{
};

class AControlRigControlActor : public AActor
{
    class AActor* ActorToTrack;
    TSubclassOf<class UControlRig> ControlRigClass;
    bool bRefreshOnTick;
    bool bIsSelectable;
    class UMaterialInterface* MaterialOverride;
    FString ColorParameter;
    bool bCastShadows;
    class USceneComponent* ActorRootComponent;
    TSoftObjectPtr<UControlRig> ControlRig;
    TArray<FName> ControlNames;
    TArray<FTransform> ShapeTransforms;
    TArray<class UStaticMeshComponent*> Components;
    TArray<class UMaterialInstanceDynamic*> Materials;
    FName ColorParameterName;

    void ResetControlActor();
    void Refresh();
    void Clear();
};

class AControlRigShapeActor : public AActor
{
    class USceneComponent* ActorRootComponent;
    class UStaticMeshComponent* StaticMeshComponent;
    uint32 ControlRigIndex;
    TWeakObjectPtr<class UControlRig> ControlRig;
    FName ControlName;
    FName ShapeName;
    FName ColorParameterName;
    uint8 bSelected;
    uint8 bHovered;

    void SetSelected(bool bInSelected);
    void SetSelectable(bool bInSelectable);
    void SetHovered(bool bInHovered);
    void SetGlobalTransform(const FTransform& InTransform);
    void SetEnabled(bool bInEnabled);
    void OnTransformChanged(const FTransform& NewTransform);
    void OnSelectionChanged(bool bIsSelected);
    void OnManipulatingChanged(bool bIsManipulating);
    void OnHoveredChanged(bool bIsSelected);
    void OnEnabledChanged(bool bIsEnabled);
    bool IsSelectedInEditor();
    bool IsHovered();
    bool IsEnabled();
    FTransform GetGlobalTransform();
};

class UAdditiveControlRig : public UControlRig
{
};

class UControlRig : public UObject
{
    ERigExecutionType ExecutionType;
    FRigHierarchySettings HierarchySettings;
    FRigVMRuntimeSettings VMRuntimeSettings;
    TMap<class FRigElementKey, class FRigControlElementCustomization> ControlCustomizations;
    class URigVM* VM;
    TMap<uint32, URigVM*> InitializedVMSnapshots;
    class URigHierarchy* DynamicHierarchy;
    TSoftObjectPtr<UControlRigShapeLibrary> GizmoLibrary;
    TArray<TSoftObjectPtr<UControlRigShapeLibrary>> ShapeLibraries;
    TMap<class FName, class FCachedPropertyPath> InputProperties;
    TMap<class FName, class FCachedPropertyPath> OutputProperties;
    FControlRigDrawContainer DrawContainer;
    class UAnimationDataSourceRegistry* DataSourceRegistry;
    TArray<FName> EventQueue;
    FRigInfluenceMapPerEvent Influences;
    class UControlRig* InteractionRig;
    TSubclassOf<class UControlRig> InteractionRigClass;
    TArray<class UAssetUserData*> AssetUserData;
    FControlRigOnControlSelected_BP OnControlSelected_BP;
    void OnControlSelectedBP(class UControlRig* Rig, const FRigControlElement& Control, bool bSelected);

    bool SupportsEvent(const FName& InEventName);
    bool SetVariableFromString(const FName& InVariableName, FString InValue);
    void SetInteractionRigClass(TSubclassOf<class UControlRig> InInteractionRigClass);
    void SetInteractionRig(class UControlRig* InInteractionRig);
    void SetFramesPerSecond(float InFramesPerSecond);
    void SetDeltaTime(float InDeltaTime);
    void SetAbsoluteTime(float InAbsoluteTime, bool InSetDeltaTimeZero);
    void SetAbsoluteAndDeltaTime(float InAbsoluteTime, float InDeltaTime);
    void SelectControl(const FName& InControlName, bool bSelect);
    void RequestInit();
    void RequestConstruction();
    void OnControlSelectedBP__DelegateSignature(class UControlRig* Rig, const FRigControlElement& Control, bool bSelected);
    bool IsControlSelected(const FName& InControlName);
    class URigVM* GetVM();
    FName GetVariableType(const FName& InVariableName);
    FString GetVariableAsString(const FName& InVariableName);
    TArray<FName> GetSupportedEvents();
    TArray<FName> GetScriptAccessibleVariables();
    TSubclassOf<class UControlRig> GetInteractionRigClass();
    class UControlRig* GetInteractionRig();
    class AActor* GetHostingActor();
    class URigHierarchy* GetHierarchy();
    TArray<FName> GetEvents();
    float GetCurrentFramesPerSecond();
    float GetAbsoluteTime();
    TArray<class UControlRig*> FindControlRigs(class UObject* Outer, TSubclassOf<class UControlRig> OptionalClass);
    bool ExecuteEvent(const FName& InEventName);
    bool Execute(const EControlRigState State, const FName& InEventName);
    TArray<FName> CurrentControlSelection();
    class UTransformableControlHandle* CreateTransformableControlHandle(class UObject* Outer, const FName& ControlName);
    bool ContainsEvent(const FName& InEventName);
    bool ClearControlSelection();
    bool CanExecute();
};

class UControlRigAnimInstance : public UAnimInstance
{
};

class UControlRigBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
};

class UControlRigComponent : public UPrimitiveComponent
{
    TSubclassOf<class UControlRig> ControlRigClass;
    FControlRigComponentOnPreInitializeDelegate OnPreInitializeDelegate;
    void ControlRigComponentDelegate(class UControlRigComponent* Component);
    FControlRigComponentOnPostInitializeDelegate OnPostInitializeDelegate;
    void ControlRigComponentDelegate(class UControlRigComponent* Component);
    FControlRigComponentOnPreConstructionDelegate OnPreConstructionDelegate;
    void ControlRigComponentDelegate(class UControlRigComponent* Component);
    FControlRigComponentOnPostConstructionDelegate OnPostConstructionDelegate;
    void ControlRigComponentDelegate(class UControlRigComponent* Component);
    FControlRigComponentOnPreForwardsSolveDelegate OnPreForwardsSolveDelegate;
    void ControlRigComponentDelegate(class UControlRigComponent* Component);
    FControlRigComponentOnPostForwardsSolveDelegate OnPostForwardsSolveDelegate;
    void ControlRigComponentDelegate(class UControlRigComponent* Component);
    TArray<FControlRigComponentMappedElement> UserDefinedElements;
    TArray<FControlRigComponentMappedElement> MappedElements;
    bool bEnableLazyEvaluation;
    float LazyEvaluationPositionThreshold;
    float LazyEvaluationRotationThreshold;
    float LazyEvaluationScaleThreshold;
    bool bResetTransformBeforeTick;
    bool bResetInitialsBeforeConstruction;
    bool bUpdateRigOnTick;
    bool bUpdateInEditor;
    bool bDrawBones;
    bool bShowDebugDrawing;
    class UControlRig* ControlRig;

    void Update(float DeltaTime);
    void SetObjectBinding(class UObject* InObjectToBind);
    void SetMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements);
    void SetInitialSpaceTransform(FName SpaceName, FTransform InitialTransform, EControlRigComponentSpace space);
    void SetInitialBoneTransform(FName BoneName, FTransform InitialTransform, EControlRigComponentSpace space, bool bPropagateToChildren);
    void SetControlVector2D(FName ControlName, FVector2D Value);
    void SetControlTransform(FName ControlName, FTransform Value, EControlRigComponentSpace space);
    void SetControlScale(FName ControlName, FVector Value, EControlRigComponentSpace space);
    void SetControlRotator(FName ControlName, FRotator Value, EControlRigComponentSpace space);
    void SetControlRigClass(TSubclassOf<class UControlRig> InControlRigClass);
    void SetControlPosition(FName ControlName, FVector Value, EControlRigComponentSpace space);
    void SetControlOffset(FName ControlName, FTransform OffsetTransform, EControlRigComponentSpace space);
    void SetControlInt(FName ControlName, int32 Value);
    void SetControlFloat(FName ControlName, float Value);
    void SetControlBool(FName ControlName, bool Value);
    void SetBoneTransform(FName BoneName, FTransform Transform, EControlRigComponentSpace space, float Weight, bool bPropagateToChildren);
    void SetBoneInitialTransformsFromSkeletalMesh(class USkeletalMesh* InSkeletalMesh);
    void OnPreInitialize(class UControlRigComponent* Component);
    void OnPreForwardsSolve(class UControlRigComponent* Component);
    void OnPreConstruction(class UControlRigComponent* Component);
    void OnPostInitialize(class UControlRigComponent* Component);
    void OnPostForwardsSolve(class UControlRigComponent* Component);
    void OnPostConstruction(class UControlRigComponent* Component);
    void Initialize();
    FTransform GetSpaceTransform(FName SpaceName, EControlRigComponentSpace space);
    FTransform GetInitialSpaceTransform(FName SpaceName, EControlRigComponentSpace space);
    FTransform GetInitialBoneTransform(FName BoneName, EControlRigComponentSpace space);
    TArray<FName> GetElementNames(ERigElementType ElementType);
    FVector2D GetControlVector2D(FName ControlName);
    FTransform GetControlTransform(FName ControlName, EControlRigComponentSpace space);
    FVector GetControlScale(FName ControlName, EControlRigComponentSpace space);
    FRotator GetControlRotator(FName ControlName, EControlRigComponentSpace space);
    class UControlRig* GetControlRig();
    FVector GetControlPosition(FName ControlName, EControlRigComponentSpace space);
    FTransform GetControlOffset(FName ControlName, EControlRigComponentSpace space);
    int32 GetControlInt(FName ControlName);
    float GetControlFloat(FName ControlName);
    bool GetControlBool(FName ControlName);
    FTransform GetBoneTransform(FName BoneName, EControlRigComponentSpace space);
    float GetAbsoluteTime();
    bool DoesElementExist(FName Name, ERigElementType ElementType);
    void ClearMappedElements();
    bool CanExecute();
    void AddMappedSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FControlRigComponentMappedBone> Bones, TArray<FControlRigComponentMappedCurve> Curves);
    void AddMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements);
    void AddMappedComponents(TArray<FControlRigComponentMappedComponent> Components);
    void AddMappedCompleteSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent);
};

class UControlRigEditorSettings : public UDeveloperSettings
{
};

class UControlRigLayerInstance : public UAnimInstance
{
};

class UControlRigNumericalValidationPass : public UControlRigValidationPass
{
    bool bCheckControls;
    bool bCheckBones;
    bool bCheckCurves;
    float TranslationPrecision;
    float RotationPrecision;
    float ScalePrecision;
    float CurvePrecision;
    FName EventNameA;
    FName EventNameB;
    FRigPose Pose;

};

class UControlRigObjectHolder : public UObject
{
    TArray<class UObject*> Objects;

};

class UControlRigPoseAsset : public UObject
{
    FControlRigControlPose Pose;

    void SelectControls(class UControlRig* InControlRig, bool bDoMirror);
    void SavePose(class UControlRig* InControlRig, bool bUseAll);
    void ReplaceControlName(const FName& CurrentName, const FName& NewName);
    void PastePose(class UControlRig* InControlRig, bool bDoKey, bool bDoMirror);
    void GetCurrentPose(class UControlRig* InControlRig, FControlRigControlPose& OutPose);
    TArray<FName> GetControlNames();
    bool DoesMirrorMatch(class UControlRig* ControlRig, const FName& ControlName);
};

class UControlRigPoseMirrorSettings : public UObject
{
    FString RightSide;
    FString LeftSide;
    TEnumAsByte<EAxis> MirrorAxis;
    TEnumAsByte<EAxis> AxisToFlip;

};

class UControlRigPoseProjectSettings : public UObject
{
    TArray<FDirectoryPath> RootSaveDirs;

};

class UControlRigSequence : public ULevelSequence
{
    TSoftObjectPtr<UAnimSequence> LastExportedToAnimationSequence;
    TSoftObjectPtr<USkeletalMesh> LastExportedUsingSkeletalMesh;
    float LastExportedFrameRate;

};

class UControlRigSettings : public UDeveloperSettings
{
};

class UControlRigShapeLibrary : public UObject
{
    FControlRigShapeDefinition DefaultShape;
    TSoftObjectPtr<UMaterial> DefaultMaterial;
    TSoftObjectPtr<UMaterial> XRayMaterial;
    FName MaterialColorParameter;
    TArray<FControlRigShapeDefinition> Shapes;

};

class UControlRigSnapSettings : public UObject
{
    bool bKeepOffset;
    bool bSnapPosition;
    bool bSnapRotation;
    bool bSnapScale;

};

class UControlRigTransformWorkflowOptions : public UControlRigWorkflowOptions
{
    TEnumAsByte<ERigTransformType> TransformType;

    TArray<FRigVMUserWorkflow> ProvideWorkflows(const class UObject* InSubject);
};

class UControlRigValidationPass : public UObject
{
};

class UControlRigValidator : public UObject
{
    TArray<class UControlRigValidationPass*> Passes;

};

class UControlRigWorkflowOptions : public URigVMUserWorkflowOptions
{
    class URigHierarchy* Hierarchy;
    TArray<FRigElementKey> Selection;

    bool EnsureAtLeastOneRigElementSelected();
};

class UDefault__ControlRigBlueprintGeneratedClass
{
};

class UFKControlRig : public UControlRig
{
    TArray<bool> IsControlActive;
    EControlRigFKRigExecuteMode ApplyMode;

};

class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
{
    class UControlRig* ControlRig;
    TSubclassOf<class UControlRig> ControlRigClass;
    TArray<bool> ControlsMask;
    FMovieSceneTransformMask TransformMask;
    FMovieSceneFloatChannel Weight;
    TMap<class FName, class FChannelMapInfo> ControlChannelMap;
    TArray<FEnumParameterNameAndCurve> EnumParameterNamesAndCurves;
    TArray<FIntegerParameterNameAndCurve> IntegerParameterNamesAndCurves;
    TArray<FSpaceControlNameAndChannel> SpaceChannels;
    TArray<FConstraintAndActiveChannel> ConstraintsChannels;

};

class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack
{
    class UControlRig* ControlRig;
    class UMovieSceneSection* SectionToKey;
    TArray<class UMovieSceneSection*> Sections;
    FName TrackName;

};

class URigHierarchy : public UObject
{
    uint16 TopologyVersion;
    uint16 MetadataVersion;
    uint16 MetadataTagVersion;
    bool bEnableDirtyPropagation;
    int32 TransformStackIndex;
    class URigHierarchyController* HierarchyController;
    TMap<class FRigElementKey, class FRigElementKey> PreviousNameMap;
    class URigHierarchy* HierarchyForCacheValidation;

    void UnsetCurveValueByIndex(int32 InElementIndex, bool bSetupUndo);
    void UnsetCurveValue(FRigElementKey InKey, bool bSetupUndo);
    bool SwitchToWorldSpace(FRigElementKey InChild, bool bInitial, bool bAffectChildren);
    bool SwitchToParent(FRigElementKey InChild, FRigElementKey InParent, bool bInitial, bool bAffectChildren);
    bool SwitchToDefaultParent(FRigElementKey InChild, bool bInitial, bool bAffectChildren);
    TArray<FRigElementKey> SortKeys(const TArray<FRigElementKey>& InKeys);
    bool SetVectorMetadata(FRigElementKey InItem, FName InMetadataName, FVector InValue);
    bool SetVectorArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FVector> InValue);
    bool SetTransformMetadata(FRigElementKey InItem, FName InMetadataName, FTransform InValue);
    bool SetTransformArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FTransform> InValue);
    bool SetTag(FRigElementKey InItem, FName InTag);
    bool SetRotatorMetadata(FRigElementKey InItem, FName InMetadataName, FRotator InValue);
    bool SetRotatorArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FRotator> InValue);
    bool SetRigElementKeyMetadata(FRigElementKey InItem, FName InMetadataName, FRigElementKey InValue);
    bool SetRigElementKeyArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FRigElementKey> InValue);
    bool SetQuatMetadata(FRigElementKey InItem, FName InMetadataName, FQuat InValue);
    bool SetQuatArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FQuat> InValue);
    void SetPose_ForBlueprint(FRigPose InPose);
    bool SetParentWeightArray(FRigElementKey InChild, TArray<FRigElementWeight> InWeights, bool bInitial, bool bAffectChildren);
    bool SetParentWeight(FRigElementKey InChild, FRigElementKey InParent, FRigElementWeight InWeight, bool bInitial, bool bAffectChildren);
    bool SetNameMetadata(FRigElementKey InItem, FName InMetadataName, FName InValue);
    bool SetNameArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FName> InValue);
    void SetLocalTransformByIndex(int32 InElementIndex, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
    void SetLocalTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
    bool SetLinearColorMetadata(FRigElementKey InItem, FName InMetadataName, FLinearColor InValue);
    bool SetLinearColorArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FLinearColor> InValue);
    bool SetInt32Metadata(FRigElementKey InItem, FName InMetadataName, int32 InValue);
    bool SetInt32ArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<int32> InValue);
    void SetGlobalTransformByIndex(int32 InElementIndex, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand);
    void SetGlobalTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand);
    bool SetFloatMetadata(FRigElementKey InItem, FName InMetadataName, float InValue);
    bool SetFloatArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<float> InValue);
    void SetCurveValueByIndex(int32 InElementIndex, float InValue, bool bSetupUndo);
    void SetCurveValue(FRigElementKey InKey, float InValue, bool bSetupUndo);
    void SetControlVisibilityByIndex(int32 InElementIndex, bool bVisibility);
    void SetControlVisibility(FRigElementKey InKey, bool bVisibility);
    void SetControlValueByIndex(int32 InElementIndex, FRigControlValue InValue, ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands);
    void SetControlValue(FRigElementKey InKey, FRigControlValue InValue, ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands);
    void SetControlShapeTransformByIndex(int32 InElementIndex, FTransform InTransform, bool bInitial, bool bSetupUndo);
    void SetControlShapeTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bSetupUndo);
    void SetControlSettingsByIndex(int32 InElementIndex, FRigControlSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands);
    void SetControlSettings(FRigElementKey InKey, FRigControlSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands);
    void SetControlPreferredRotatorByIndex(int32 InElementIndex, const FRotator& InValue, bool bInitial, bool bFixEulerFlips);
    void SetControlPreferredRotator(FRigElementKey InKey, const FRotator& InValue, bool bInitial, bool bFixEulerFlips);
    void SetControlOffsetTransformByIndex(int32 InElementIndex, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
    void SetControlOffsetTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
    bool SetBoolMetadata(FRigElementKey InItem, FName InMetadataName, bool InValue);
    bool SetBoolArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<bool> InValue);
    void SendAutoKeyEvent(FRigElementKey InElement, float InOffsetInSeconds, bool bAsynchronous);
    void ResetToDefault();
    void ResetPoseToInitial(ERigElementType InTypeFilter);
    void ResetCurveValues();
    void Reset();
    bool RemoveMetadata(FRigElementKey InItem, FName InMetadataName);
    bool RemoveAllMetadata(FRigElementKey InItem);
    int32 Num();
    FRigControlValue MakeControlValueFromVector2D(FVector2D InValue);
    FRigControlValue MakeControlValueFromVector(FVector InValue);
    FRigControlValue MakeControlValueFromTransformNoScale(FTransformNoScale InValue);
    FRigControlValue MakeControlValueFromTransform(FTransform InValue);
    FRigControlValue MakeControlValueFromRotator(FRotator InValue);
    FRigControlValue MakeControlValueFromInt(int32 InValue);
    FRigControlValue MakeControlValueFromFloat(float InValue);
    FRigControlValue MakeControlValueFromEulerTransform(FEulerTransform InValue);
    FRigControlValue MakeControlValueFromBool(bool InValue);
    bool IsValidIndex(int32 InElementIndex);
    bool IsSelectedByIndex(int32 InIndex);
    bool IsSelected(FRigElementKey InKey);
    bool IsProcedural(const FRigElementKey& InKey);
    bool IsParentedTo(FRigElementKey InChild, FRigElementKey InParent);
    bool IsCurveValueSetByIndex(int32 InElementIndex);
    bool IsCurveValueSet(FRigElementKey InKey);
    bool IsControllerAvailable();
    bool HasTag(FRigElementKey InItem, FName InTag);
    FVector GetVectorMetadata(FRigElementKey InItem, FName InMetadataName, FVector DefaultValue);
    FVector GetVectorFromControlValue(FRigControlValue InValue);
    TArray<FVector> GetVectorArrayMetadata(FRigElementKey InItem, FName InMetadataName);
    FVector2D GetVector2DFromControlValue(FRigControlValue InValue);
    FTransformNoScale GetTransformNoScaleFromControlValue(FRigControlValue InValue);
    FTransform GetTransformMetadata(FRigElementKey InItem, FName InMetadataName, FTransform DefaultValue);
    FTransform GetTransformFromControlValue(FRigControlValue InValue);
    TArray<FTransform> GetTransformArrayMetadata(FRigElementKey InItem, FName InMetadataName);
    TArray<FName> GetTags(FRigElementKey InItem);
    TArray<FRigElementKey> GetSelectedKeys(ERigElementType InTypeFilter);
    FRotator GetRotatorMetadata(FRigElementKey InItem, FName InMetadataName, FRotator DefaultValue);
    FRotator GetRotatorFromControlValue(FRigControlValue InValue);
    TArray<FRotator> GetRotatorArrayMetadata(FRigElementKey InItem, FName InMetadataName);
    TArray<FRigElementKey> GetRigidBodyKeys(bool bTraverse);
    FRigElementKey GetRigElementKeyMetadata(FRigElementKey InItem, FName InMetadataName, FRigElementKey DefaultValue);
    TArray<FRigElementKey> GetRigElementKeyArrayMetadata(FRigElementKey InItem, FName InMetadataName);
    TArray<FRigElementKey> GetReferenceKeys(bool bTraverse);
    FQuat GetQuatMetadata(FRigElementKey InItem, FName InMetadataName, FQuat DefaultValue);
    TArray<FQuat> GetQuatArrayMetadata(FRigElementKey InItem, FName InMetadataName);
    FRigElementKey GetPreviousParent(const FRigElementKey& InKey);
    FName GetPreviousName(const FRigElementKey& InKey);
    FRigPose GetPose(bool bInitial);
    TArray<FRigElementWeight> GetParentWeightArray(FRigElementKey InChild, bool bInitial);
    FRigElementWeight GetParentWeight(FRigElementKey InChild, FRigElementKey InParent, bool bInitial);
    FTransform GetParentTransformByIndex(int32 InElementIndex, bool bInitial);
    FTransform GetParentTransform(FRigElementKey InKey, bool bInitial);
    TArray<FRigElementKey> GetParents(FRigElementKey InKey, bool bRecursive);
    int32 GetNumberOfParents(FRigElementKey InKey);
    TArray<FRigElementKey> GetNullKeys(bool bTraverse);
    FName GetNameMetadata(FRigElementKey InItem, FName InMetadataName, FName DefaultValue);
    TArray<FName> GetNameArrayMetadata(FRigElementKey InItem, FName InMetadataName);
    ERigMetadataType GetMetadataType(FRigElementKey InItem, FName InMetadataName);
    TArray<FName> GetMetadataNames(FRigElementKey InItem);
    FTransform GetLocalTransformByIndex(int32 InElementIndex, bool bInitial);
    FTransform GetLocalTransform(FRigElementKey InKey, bool bInitial);
    FTransform GetLocalControlShapeTransformByIndex(int32 InElementIndex, bool bInitial);
    FTransform GetLocalControlShapeTransform(FRigElementKey InKey, bool bInitial);
    FLinearColor GetLinearColorMetadata(FRigElementKey InItem, FName InMetadataName, FLinearColor DefaultValue);
    TArray<FLinearColor> GetLinearColorArrayMetadata(FRigElementKey InItem, FName InMetadataName);
    TArray<FRigElementKey> GetKeys(const TArray<int32> InElementIndices);
    FRigElementKey GetKey(int32 InElementIndex);
    int32 GetIntFromControlValue(FRigControlValue InValue);
    int32 GetInt32Metadata(FRigElementKey InItem, FName InMetadataName, int32 DefaultValue);
    TArray<int32> GetInt32ArrayMetadata(FRigElementKey InItem, FName InMetadataName);
    int32 GetIndex_ForBlueprint(FRigElementKey InKey);
    FTransform GetGlobalTransformByIndex(int32 InElementIndex, bool bInitial);
    FTransform GetGlobalTransform(FRigElementKey InKey, bool bInitial);
    FTransform GetGlobalControlShapeTransformByIndex(int32 InElementIndex, bool bInitial);
    FTransform GetGlobalControlShapeTransform(FRigElementKey InKey, bool bInitial);
    FTransform GetGlobalControlOffsetTransformByIndex(int32 InElementIndex, bool bInitial);
    FTransform GetGlobalControlOffsetTransform(FRigElementKey InKey, bool bInitial);
    float GetFloatMetadata(FRigElementKey InItem, FName InMetadataName, float DefaultValue);
    float GetFloatFromControlValue(FRigControlValue InValue);
    TArray<float> GetFloatArrayMetadata(FRigElementKey InItem, FName InMetadataName);
    FRigElementKey GetFirstParent(FRigElementKey InKey);
    FEulerTransform GetEulerTransformFromControlValue(FRigControlValue InValue);
    FRigElementKey GetDefaultParent(FRigElementKey InKey);
    float GetCurveValueByIndex(int32 InElementIndex);
    float GetCurveValue(FRigElementKey InKey);
    TArray<FRigElementKey> GetCurveKeys();
    FRigControlValue GetControlValueByIndex(int32 InElementIndex, ERigControlValueType InValueType);
    FRigControlValue GetControlValue(FRigElementKey InKey, ERigControlValueType InValueType);
    FRotator GetControlPreferredRotatorByIndex(int32 InElementIndex, bool bInitial);
    FRotator GetControlPreferredRotator(FRigElementKey InKey, bool bInitial);
    class URigHierarchyController* GetController(bool bCreateIfNeeded);
    TArray<FRigElementKey> GetControlKeys(bool bTraverse);
    TArray<FRigElementKey> GetChildren(FRigElementKey InKey, bool bRecursive);
    bool GetBoolMetadata(FRigElementKey InItem, FName InMetadataName, bool DefaultValue);
    TArray<bool> GetBoolArrayMetadata(FRigElementKey InItem, FName InMetadataName);
    TArray<FRigElementKey> GetBoneKeys(bool bTraverse);
    TArray<FRigElementKey> GetAllKeys_ForBlueprint(bool bTraverse);
    FRigNullElement FindNull_ForBlueprintOnly(const FRigElementKey& InKey);
    FRigControlElement FindControl_ForBlueprintOnly(const FRigElementKey& InKey);
    FRigBoneElement FindBone_ForBlueprintOnly(const FRigElementKey& InKey);
    void CopyPose(class URigHierarchy* InHierarchy, bool bCurrent, bool bInitial, bool bWeights, bool bMatchPoseInGlobalIfNeeded);
    void CopyHierarchy(class URigHierarchy* InHierarchy);
    bool Contains_ForBlueprint(FRigElementKey InKey);
};

class URigHierarchyController : public UObject
{
    bool bReportWarningsAndErrors;
    TWeakObjectPtr<class URigHierarchy> Hierarchy;

    bool SetSelection(const TArray<FRigElementKey>& InKeys, bool bPrintPythonCommand);
    bool SetParent(FRigElementKey InChild, FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand);
    void SetHierarchy(class URigHierarchy* InHierarchy);
    FName SetDisplayName(FRigElementKey InControl, FName InDisplayName, bool bRenameElement, bool bSetupUndo, bool bPrintPythonCommand);
    bool SetControlSettings(FRigElementKey InKey, FRigControlSettings InSettings, bool bSetupUndo);
    bool SelectElement(FRigElementKey InKey, bool bSelect, bool bClearSelection);
    FRigElementKey RenameElement(FRigElementKey InElement, FName InName, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection);
    bool RemoveParent(FRigElementKey InChild, FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand);
    bool RemoveElement(FRigElementKey InElement, bool bSetupUndo, bool bPrintPythonCommand);
    bool RemoveAllParents(FRigElementKey InChild, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand);
    TArray<FRigElementKey> MirrorElements(TArray<FRigElementKey> InKeys, FRigMirrorSettings InSettings, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands);
    TArray<FRigElementKey> ImportFromText(FString InContent, bool bReplaceExistingElements, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands);
    TArray<FRigElementKey> ImportCurves(class USkeleton* InSkeleton, FName InNameSpace, bool bSelectCurves, bool bSetupUndo, bool bPrintPythonCommand);
    TArray<FRigElementKey> ImportBones(class USkeleton* InSkeleton, FName InNameSpace, bool bReplaceExistingBones, bool bRemoveObsoleteBones, bool bSelectBones, bool bSetupUndo, bool bPrintPythonCommand);
    class URigHierarchy* GetHierarchy();
    FRigControlSettings GetControlSettings(FRigElementKey InKey);
    FString ExportToText(TArray<FRigElementKey> InKeys);
    FString ExportSelectionToText();
    TArray<FRigElementKey> DuplicateElements(TArray<FRigElementKey> InKeys, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands);
    bool DeselectElement(FRigElementKey InKey);
    bool ClearSelection();
    FRigElementKey AddRigidBody(FName InName, FRigElementKey InParent, FRigRigidBodySettings InSettings, FTransform InLocalTransform, bool bSetupUndo, bool bPrintPythonCommand);
    bool AddParent(FRigElementKey InChild, FRigElementKey InParent, float InWeight, bool bMaintainGlobalTransform, bool bSetupUndo);
    FRigElementKey AddNull(FName InName, FRigElementKey InParent, FTransform InTransform, bool bTransformInGlobal, bool bSetupUndo, bool bPrintPythonCommand);
    FRigElementKey AddCurve(FName InName, float InValue, bool bSetupUndo, bool bPrintPythonCommand);
    FRigElementKey AddControl_ForBlueprint(FName InName, FRigElementKey InParent, FRigControlSettings InSettings, FRigControlValue InValue, bool bSetupUndo, bool bPrintPythonCommand);
    FRigElementKey AddBone(FName InName, FRigElementKey InParent, FTransform InTransform, bool bTransformInGlobal, ERigBoneType InBoneType, bool bSetupUndo, bool bPrintPythonCommand);
    FRigElementKey AddAnimationChannel_ForBlueprint(FName InName, FRigElementKey InParentControl, FRigControlSettings InSettings, bool bSetupUndo, bool bPrintPythonCommand);
};

class UTransformableControlHandle : public UTransformableHandle
{
    TSoftObjectPtr<UControlRig> ControlRig;
    FName ControlName;

};

#endif
