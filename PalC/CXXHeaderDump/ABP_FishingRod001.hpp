#ifndef UE4SS_SDK_ABP_FishingRod001_HPP
#define UE4SS_SDK_ABP_FishingRod001_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_32;
    FName __NameProperty_33;
    TEnumAsByte<ERefPoseType> __ByteProperty_34;
    FAnimNodeFunctionRef __StructProperty_35;
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;
    FAnimSubsystem_Base AnimBlueprintExtension_Base;

};

class UABP_FishingRod001_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;
    FAnimSubsystemInstance AnimBlueprintExtension_Base;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;
    FAnimNode_Slot AnimGraphNode_Slot_1;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_RefPose AnimGraphNode_LocalRefPose_1;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;
    FAnimNode_RigidBody AnimGraphNode_RigidBody;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_RefPose AnimGraphNode_LocalRefPose;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;
    double RigidBodyBlendWeight;

    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void SetDisableRigidBodyBlend(bool isDisable);
    void ExecuteUbergraph_ABP_FishingRod001(int32 EntryPoint);
};

#endif
