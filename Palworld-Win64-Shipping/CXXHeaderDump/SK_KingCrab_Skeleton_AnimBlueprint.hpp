#ifndef UE4SS_SDK_SK_KingCrab_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_SK_KingCrab_Skeleton_AnimBlueprint_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_16;
    FName __NameProperty_17;
    FAnimNodeFunctionRef __StructProperty_18;
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;
    FAnimSubsystem_Base AnimBlueprintExtension_Base;

};

class USK_KingCrab_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;
    FAnimSubsystemInstance AnimBlueprintExtension_Base;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;
    FAnimNode_SpringBone AnimGraphNode_SpringBone_1;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_SpringBone AnimGraphNode_SpringBone;

    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void ExecuteUbergraph_SK_KingCrab_Skeleton_AnimBlueprint(int32 EntryPoint);
};

#endif
