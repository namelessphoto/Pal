#ifndef UE4SS_SDK_ABP_ElecPanda_Implementation_HPP
#define UE4SS_SDK_ABP_ElecPanda_Implementation_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_55;
    FName __NameProperty_56;
    bool __BoolProperty_57;
    float __FloatProperty_58;
    float __FloatProperty_59;
    bool __BoolProperty_60;
    EAnimSyncMethod __EnumProperty_61;
    TEnumAsByte<EAnimGroupRole> __ByteProperty_62;
    FName __NameProperty_63;
    FName __NameProperty_64;
    FName __NameProperty_65;
    FAnimNodeFunctionRef __StructProperty_66;
    FName __NameProperty_67;
    FName __NameProperty_68;
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;
    FAnimSubsystem_Base AnimBlueprintExtension_Base;

};

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;

};

class UABP_ElecPanda_Implementation_C : public UPalAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;
    FAnimSubsystemInstance AnimBlueprintExtension_Base;
    FAnimNode_Root AnimGraphNode_Root_4;
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_4;
    FAnimNode_Root AnimGraphNode_Root_3;
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_3;
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace;
    FAnimNode_Root AnimGraphNode_Root_2;
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_LookAt AnimGraphNode_LookAt_2;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_LookAt AnimGraphNode_LookAt_1;
    FAnimNode_LookAt AnimGraphNode_LookAt;
    FAnimNode_Root AnimGraphNode_Root_1;
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_1;
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;
    FAnimNode_Root AnimGraphNode_Root;
    FRotator AimRotator;
    FVector LookAtWorldLocation;

    void CustomOverride(FPoseLink PrePose, FPalCustomAnimOverrideData CustomData, FPoseLink& CustomOverride);
    void AimingOverride(FPoseLink DefaultPose, FRotator AimRotator, FPoseLink& AimingOverride);
    void LookAtOverride(FPoseLink InPose, FVector LookAtWorldLocation, FPoseLink& LookAtOverride);
    void UpperOverride(FPoseLink NativePose, FPoseLink ActionPose, FPoseLink& UpperOverride);
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ElecPanda_Implementation_AnimGraphNode_RotationOffsetBlendSpace_03753B96488972CD431A1AA078104133();
    void ExecuteUbergraph_ABP_ElecPanda_Implementation(int32 EntryPoint);
};

#endif
