#ifndef UE4SS_SDK_ABP_NPC_Male_Soldier03_Implimentation_HPP
#define UE4SS_SDK_ABP_NPC_Male_Soldier03_Implimentation_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_26;
    FAnimNodeFunctionRef __StructProperty_27;
    FName __NameProperty_28;
    FName __NameProperty_29;
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;
    FAnimSubsystem_Base AnimBlueprintExtension_Base;

};

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
};

class UABP_NPC_Male_Soldier03_Implimentation_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;
    FAnimSubsystemInstance AnimBlueprintExtension_Base;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3;
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2;
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;
    FAnimNode_Root AnimGraphNode_Root_1;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;
    FAnimNode_Root AnimGraphNode_Root;

    void NPC_HairClothLayer(FPoseLink InPose, FPoseLink& NPC_HairClothLayer);
    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_NPC_Male_Soldier03_Implimentation(int32 EntryPoint);
};

#endif
