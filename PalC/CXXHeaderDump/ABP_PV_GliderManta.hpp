#ifndef UE4SS_SDK_ABP_PV_GliderManta_HPP
#define UE4SS_SDK_ABP_PV_GliderManta_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_14;
    bool __BoolProperty_15;
    float __FloatProperty_16;
    FInputScaleBiasClampConstants __StructProperty_17;
    float __FloatProperty_18;
    bool __BoolProperty_19;
    EAnimSyncMethod __EnumProperty_20;
    TEnumAsByte<EAnimGroupRole> __ByteProperty_21;
    FName __NameProperty_22;
    FName __NameProperty_23;
    int32 __IntProperty_24;
    FAnimNodeFunctionRef __StructProperty_25;
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;
    FAnimSubsystem_Base AnimBlueprintExtension_Base;

};

class UABP_PV_GliderManta_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;
    FAnimSubsystemInstance AnimBlueprintExtension_Base;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_ABP_PV_GliderManta(int32 EntryPoint);
};

#endif
