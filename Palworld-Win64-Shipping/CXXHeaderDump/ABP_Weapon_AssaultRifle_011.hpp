#ifndef UE4SS_SDK_ABP_Weapon_AssaultRifle_011_HPP
#define UE4SS_SDK_ABP_Weapon_AssaultRifle_011_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_7;
    FName __NameProperty_8;
    FAnimNodeFunctionRef __StructProperty_9;
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;
    FAnimSubsystem_Base AnimBlueprintExtension_Base;

};

class UABP_Weapon_AssaultRifle_011_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;
    FAnimSubsystemInstance AnimBlueprintExtension_Base;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;
    FAnimNode_Slot AnimGraphNode_Slot;

    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Weapon_AssaultRifle_011(int32 EntryPoint);
};

#endif
