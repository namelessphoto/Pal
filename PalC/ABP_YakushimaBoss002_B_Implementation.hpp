#ifndef UE4SS_SDK_ABP_YakushimaBoss002_B_Implementation_HPP
#define UE4SS_SDK_ABP_YakushimaBoss002_B_Implementation_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_31;
    FName __NameProperty_32;
    FName __NameProperty_33;
    FName __NameProperty_34;
    FName __NameProperty_35;
    FAnimNodeFunctionRef __StructProperty_36;
    FName __NameProperty_37;
    FName __NameProperty_38;
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;
    FAnimSubsystem_Base AnimBlueprintExtension_Base;

};

class UABP_YakushimaBoss002_B_Implementation_C : public UPalAnimInstance
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
    FAnimNode_Root AnimGraphNode_Root;

    void AimingOverride(FPoseLink DefaultPose, FRotator AimRotator, FPoseLink& AimingOverride);
    void LookAtOverride(FPoseLink InPose, FVector LookAtWorldLocation, FPoseLink& LookAtOverride);
    void UpperOverride(FPoseLink NativePose, FPoseLink ActionPose, FPoseLink& UpperOverride);
    void CustomOverride(FPoseLink PrePose, FPalCustomAnimOverrideData CustomData, FPoseLink& CustomOverride);
    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_ABP_YakushimaBoss002_B_Implementation(int32 EntryPoint);
};

#endif
