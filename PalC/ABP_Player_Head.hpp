#ifndef UE4SS_SDK_ABP_Player_Head_HPP
#define UE4SS_SDK_ABP_Player_Head_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_32;
    FName __NameProperty_33;
    FName __NameProperty_34;
    class UBlendProfile* __BlendProfile_35;
    class UCurveFloat* __CurveFloat_36;
    bool __BoolProperty_37;
    EAlphaBlendOption __EnumProperty_38;
    EBlendListTransitionType __EnumProperty_39;
    TArray<float> __ArrayProperty_40;
    FAnimNodeFunctionRef __StructProperty_41;
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;
    FAnimSubsystem_Base AnimBlueprintExtension_Base;

};

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    bool __BoolProperty;

};

class UABP_Player_Head_C : public UPalPlayerHeadAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;
    FAnimSubsystemInstance AnimBlueprintExtension_Base;
    FAnimNode_Root AnimGraphNode_Root_1;
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh_1;
    FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh;
    FVector EyePos_L;
    FVector EyePos_R;
    bool InitEnd;
    bool IsDedicatedServer;

    void EyeLocationFix(FPoseLink InPose, FPoseLink& EyeLocationFix);
    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintBeginPlay();
    void ExecuteUbergraph_ABP_Player_Head(int32 EntryPoint);
};

#endif
