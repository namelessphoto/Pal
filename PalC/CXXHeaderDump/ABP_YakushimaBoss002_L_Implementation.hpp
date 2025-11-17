#ifndef UE4SS_SDK_ABP_YakushimaBoss002_L_Implementation_HPP
#define UE4SS_SDK_ABP_YakushimaBoss002_L_Implementation_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_43;
    FName __NameProperty_44;
    FName __NameProperty_45;
    FName __NameProperty_46;
    FName __NameProperty_47;
    FAnimNodeFunctionRef __StructProperty_48;
    FName __NameProperty_49;
    FName __NameProperty_50;
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;
    FAnimSubsystem_Base AnimBlueprintExtension_Base;

};

class UABP_YakushimaBoss002_L_Implementation_C : public UPalAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;
    FAnimSubsystemInstance AnimBlueprintExtension_Base;
    FAnimNode_Root AnimGraphNode_Root_4;
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_4;
    FAnimNode_Root AnimGraphNode_Root_3;
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_3;
    FAnimNode_Root AnimGraphNode_Root_2;
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2;
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_1;
    FAnimNode_Root AnimGraphNode_Root_1;
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;
    FAnimNode_Root AnimGraphNode_Root;
    FTransform IKTarget;
    bool IsIKEnabled;
    FRotator IKRot;

    void AimingOverride(FPoseLink DefaultPose, FRotator AimRotator, FPoseLink& AimingOverride);
    void LookAtOverride(FPoseLink InPose, FVector LookAtWorldLocation, FPoseLink& LookAtOverride);
    void UpperOverride(FPoseLink NativePose, FPoseLink ActionPose, FPoseLink& UpperOverride);
    void CustomOverride(FPoseLink PrePose, FPalCustomAnimOverrideData CustomData, FPoseLink& CustomOverride);
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_YakushimaBoss002_L_Implementation_AnimGraphNode_ModifyBone_748ED46F47F20C68A42722BF59F9830A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_YakushimaBoss002_L_Implementation_AnimGraphNode_ModifyBone_8601F0A74047BB419045A4939BA3D426();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_ABP_YakushimaBoss002_L_Implementation(int32 EntryPoint);
};

#endif
