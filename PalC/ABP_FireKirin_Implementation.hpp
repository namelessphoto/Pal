#ifndef UE4SS_SDK_ABP_FireKirin_Implementation_HPP
#define UE4SS_SDK_ABP_FireKirin_Implementation_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_49;
    FName __NameProperty_50;
    FName __NameProperty_51;
    FName __NameProperty_52;
    FName __NameProperty_53;
    FAnimNodeFunctionRef __StructProperty_54;
    FName __NameProperty_55;
    FName __NameProperty_56;
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;
    FAnimSubsystem_Base AnimBlueprintExtension_Base;

};

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
};

class UABP_FireKirin_Implementation_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;
    FAnimSubsystemInstance AnimBlueprintExtension_Base;
    FAnimNode_Root AnimGraphNode_Root_4;
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_4;
    FAnimNode_Root AnimGraphNode_Root_3;
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_3;
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2;
    FAnimNode_Root AnimGraphNode_Root_2;
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_1;
    FAnimNode_Root AnimGraphNode_Root_1;
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;
    FAnimNode_LookAt AnimGraphNode_LookAt_3;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_LookAt AnimGraphNode_LookAt_2;
    FAnimNode_LookAt AnimGraphNode_LookAt_1;
    FAnimNode_LookAt AnimGraphNode_LookAt;
    FAnimNode_Root AnimGraphNode_Root;
    FVector LookAtWorldLocation;

    void UpperOverride(FPoseLink NativePose, FPoseLink ActionPose, FPoseLink& UpperOverride);
    void AimingOverride(FPoseLink DefaultPose, FRotator AimRotator, FPoseLink& AimingOverride);
    void LookAtOverride(FPoseLink InPose, FVector LookAtWorldLocation, FPoseLink& LookAtOverride);
    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_FireKirin_Implementation(int32 EntryPoint);
};

#endif
