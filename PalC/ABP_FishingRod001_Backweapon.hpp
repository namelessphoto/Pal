#ifndef UE4SS_SDK_ABP_FishingRod001_Backweapon_HPP
#define UE4SS_SDK_ABP_FishingRod001_Backweapon_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_20;
    FAnimNodeFunctionRef __StructProperty_21;
    float __FloatProperty_22;
    FInputScaleBiasClampConstants __StructProperty_23;
    float __FloatProperty_24;
    bool __BoolProperty_25;
    EAnimSyncMethod __EnumProperty_26;
    TEnumAsByte<EAnimGroupRole> __ByteProperty_27;
    FName __NameProperty_28;
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;
    FAnimSubsystem_Base AnimBlueprintExtension_Base;

};

class UABP_FishingRod001_Backweapon_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;
    FAnimSubsystemInstance AnimBlueprintExtension_Base;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_RigidBody AnimGraphNode_RigidBody;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;

    void AnimGraph(FPoseLink& AnimGraph);
    void SetRodBendAmount(double BendAmount);
    void ExecuteUbergraph_ABP_FishingRod001_Backweapon(int32 EntryPoint);
};

#endif
