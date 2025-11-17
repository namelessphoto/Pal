#ifndef UE4SS_SDK_ABP_Kitsunebi_PartnerSkill_HPP
#define UE4SS_SDK_ABP_Kitsunebi_PartnerSkill_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_10;
    bool __BoolProperty_11;
    float __FloatProperty_12;
    FInputScaleBiasClampConstants __StructProperty_13;
    float __FloatProperty_14;
    bool __BoolProperty_15;
    EAnimSyncMethod __EnumProperty_16;
    TEnumAsByte<EAnimGroupRole> __ByteProperty_17;
    FName __NameProperty_18;
    FAnimNodeFunctionRef __StructProperty_19;
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;
    FAnimSubsystem_Base AnimBlueprintExtension_Base;

};

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
};

class UABP_Kitsunebi_PartnerSkill_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;
    FAnimSubsystemInstance AnimBlueprintExtension_Base;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_Slot AnimGraphNode_Slot;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Kitsunebi_PartnerSkill(int32 EntryPoint);
};

#endif
