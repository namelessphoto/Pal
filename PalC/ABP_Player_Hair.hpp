#ifndef UE4SS_SDK_ABP_Player_Hair_HPP
#define UE4SS_SDK_ABP_Player_Hair_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_20;
    FName __NameProperty_21;
    FName __NameProperty_22;
    class UBlendProfile* __BlendProfile_23;
    class UCurveFloat* __CurveFloat_24;
    bool __BoolProperty_25;
    EAlphaBlendOption __EnumProperty_26;
    EBlendListTransitionType __EnumProperty_27;
    TArray<float> __ArrayProperty_28;
    FAnimNodeFunctionRef __StructProperty_29;
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;
    FAnimSubsystem_Base AnimBlueprintExtension_Base;

};

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    bool __BoolProperty;

};

class UABP_Player_Hair_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;
    FAnimSubsystemInstance AnimBlueprintExtension_Base;
    FAnimNode_Root AnimGraphNode_Root_1;
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh_1;
    FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh;
    bool IsDedicatedServer;

    void HairLayer(FPoseLink InPose, FPoseLink& HairLayer);
    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintBeginPlay();
    void ExecuteUbergraph_ABP_Player_Hair(int32 EntryPoint);
};

#endif
