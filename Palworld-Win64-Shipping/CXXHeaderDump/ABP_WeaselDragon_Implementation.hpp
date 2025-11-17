#ifndef UE4SS_SDK_ABP_WeaselDragon_Implementation_HPP
#define UE4SS_SDK_ABP_WeaselDragon_Implementation_HPP

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

class UABP_WeaselDragon_Implementation_C : public UPalAnimInstance
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
    FAnimNode_LookAt AnimGraphNode_LookAt_1;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_LookAt AnimGraphNode_LookAt;
    FAnimNode_Root AnimGraphNode_Root_1;
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_1;
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;
    FAnimNode_Root AnimGraphNode_Root;
    FVector LookAtWorldLocation;

    void AimingOverride(FPoseLink DefaultPose, FRotator AimRotator, FPoseLink& AimingOverride);
    void LookAtOverride(FPoseLink InPose, FVector LookAtWorldLocation, FPoseLink& LookAtOverride);
    void UpperOverride(FPoseLink NativePose, FPoseLink ActionPose, FPoseLink& UpperOverride);
    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_WeaselDragon_Implementation(int32 EntryPoint);
};

#endif
