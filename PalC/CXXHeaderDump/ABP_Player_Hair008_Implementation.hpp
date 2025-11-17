#ifndef UE4SS_SDK_ABP_Player_Hair008_Implementation_HPP
#define UE4SS_SDK_ABP_Player_Hair008_Implementation_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_35;
    FAnimNodeFunctionRef __StructProperty_36;
    FName __NameProperty_37;
    FName __NameProperty_38;
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;
    FAnimSubsystem_Base AnimBlueprintExtension_Base;

};

class UABP_Player_Hair008_Implementation_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;
    FAnimSubsystemInstance AnimBlueprintExtension_Base;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_6;
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_5;
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4;
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3;
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2;
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;
    FAnimNode_Root AnimGraphNode_Root_1;
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;
    FAnimNode_Root AnimGraphNode_Root;
    FKawaiiPhysicsSettings PhysicsSettings;
    double Alpha;

    void HairLayer(FPoseLink InPose, FPoseLink& HairLayer);
    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Player_Hair008_Implementation(int32 EntryPoint);
};

#endif
