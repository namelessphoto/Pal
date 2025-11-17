#ifndef UE4SS_SDK_ABP_M_Kigurumi001_Implimentation_HPP
#define UE4SS_SDK_ABP_M_Kigurumi001_Implimentation_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_20;
    FAnimNodeFunctionRef __StructProperty_21;
    FName __NameProperty_22;
    FName __NameProperty_23;
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;
    FAnimSubsystem_Base AnimBlueprintExtension_Base;

};

class UABP_M_Kigurumi001_Implimentation_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;
    FAnimSubsystemInstance AnimBlueprintExtension_Base;
    FAnimNode_Root AnimGraphNode_Root_1;
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;
    FAnimNode_Root AnimGraphNode_Root;

    void ClothLayer(FPoseLink InPose, FPoseLink& ClothLayer);
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_M_Kigurumi001_Implimentation_AnimGraphNode_KawaiiPhysics_9FBE595B4A6569B717AC62AC169C9B76();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_M_Kigurumi001_Implimentation_AnimGraphNode_KawaiiPhysics_CEDAB433411DC4F91CC71F8A95A53E5E();
    void ExecuteUbergraph_ABP_M_Kigurumi001_Implimentation(int32 EntryPoint);
};

#endif
