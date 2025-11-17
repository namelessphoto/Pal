#ifndef UE4SS_SDK_ABP_NPC_Male_DarkTrader01_HPP
#define UE4SS_SDK_ABP_NPC_Male_DarkTrader01_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_32;
    FAnimNodeFunctionRef __StructProperty_33;
    FName __NameProperty_34;
    FName __NameProperty_35;
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;
    FAnimSubsystem_Base AnimBlueprintExtension_Base;

};

class UABP_NPC_Male_DarkTrader01_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;
    FAnimSubsystemInstance AnimBlueprintExtension_Base;
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_5;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4;
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3;
    FAnimNode_Root AnimGraphNode_Root_1;
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2;
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;
    FAnimNode_Root AnimGraphNode_Root;

    void NPC_HairClothLayer(FPoseLink InPose, FPoseLink& NPC_HairClothLayer);
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_DarkTrader01_AnimGraphNode_KawaiiPhysics_52FFB24B4059C339758806AE339DFE3F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_DarkTrader01_AnimGraphNode_KawaiiPhysics_CD7A9C7D441051BD1556F9A57B75F107();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_DarkTrader01_AnimGraphNode_KawaiiPhysics_42C7E61E4EFC836AC9A585930B1A359D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_DarkTrader01_AnimGraphNode_KawaiiPhysics_DDE5223947D5C977B259E28D828FC4F3();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_DarkTrader01_AnimGraphNode_KawaiiPhysics_3B20406947425116B6D0B7BB221FB1B8();
    void ExecuteUbergraph_ABP_NPC_Male_DarkTrader01(int32 EntryPoint);
};

#endif
