#ifndef UE4SS_SDK_ABP_RidingBoss_HPP
#define UE4SS_SDK_ABP_RidingBoss_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_237;
    FName __NameProperty_238;
    FName __NameProperty_239;
    int32 __IntProperty_240;
    FName __NameProperty_241;
    int32 __IntProperty_242;
    FName __NameProperty_243;
    int32 __IntProperty_244;
    FName __NameProperty_245;
    int32 __IntProperty_246;
    FName __NameProperty_247;
    int32 __IntProperty_248;
    FName __NameProperty_249;
    int32 __IntProperty_250;
    FName __NameProperty_251;
    int32 __IntProperty_252;
    FName __NameProperty_253;
    int32 __IntProperty_254;
    FName __NameProperty_255;
    int32 __IntProperty_256;
    bool __BoolProperty_257;
    float __FloatProperty_258;
    FInputScaleBiasClampConstants __StructProperty_259;
    float __FloatProperty_260;
    bool __BoolProperty_261;
    EAnimSyncMethod __EnumProperty_262;
    TEnumAsByte<EAnimGroupRole> __ByteProperty_263;
    FName __NameProperty_264;
    FName __NameProperty_265;
    int32 __IntProperty_266;
    FAnimNodeFunctionRef __StructProperty_267;
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;
    FAnimSubsystem_Base AnimBlueprintExtension_Base;

};

class UABP_RidingBoss_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;
    FAnimSubsystemInstance AnimBlueprintExtension_Base;
    FAnimNode_Root AnimGraphNode_Root_1;
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_LookAt AnimGraphNode_LookAt;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9;
    FAnimNode_StateResult AnimGraphNode_StateResult_9;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8;
    FAnimNode_StateResult AnimGraphNode_StateResult_8;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;
    FAnimNode_StateResult AnimGraphNode_StateResult_7;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;
    FAnimNode_StateResult AnimGraphNode_StateResult_6;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;
    FAnimNode_StateResult AnimGraphNode_StateResult_5;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;
    FAnimNode_StateResult AnimGraphNode_StateResult_4;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_StateResult AnimGraphNode_StateResult_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_Inertialization AnimGraphNode_Inertialization;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer;
    FVector OwnerTargetDirection;
    TEnumAsByte<E_RideActionType> RideActionType;
    bool DoUniqueWazaSeparetedAnim?;
    bool DoCommonWazaSeparetedAnim?;
    FST_BossAnimations AnimList;
    bool DoLookat?;
    class UPalActionComponent* ActionComponent;
    class UPhysicsAsset* ShakePhysics;
    bool DisableLookat;

    void NPC_HairClothLayer(FPoseLink InPose, FPoseLink& NPC_HairClothLayer);
    void AnimGraph(FPoseLink& AnimGraph);
    void Find if Input Is Unique Waza(class UPalActionBase* Input, class UPalStaticCharacterParameterComponent* StaticCharacterComponent, bool& IsUniqueWaza?);
    void ChangeRideActionTypeByAction(class UPalActionBase* Object);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RidingBoss_AnimGraphNode_LookAt_798FB0D24EEC3FBB06D3DA841EFE4A30();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RidingBoss_AnimGraphNode_TransitionResult_556152964AD30A70B1F926AD317E7441();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RidingBoss_AnimGraphNode_TransitionResult_306B502444B12DC45E0E19A24F8AB33F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RidingBoss_AnimGraphNode_TransitionResult_6266333F4ACB96C3A82AB08C7201AED8();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RidingBoss_AnimGraphNode_TransitionResult_660DF48D40D305A6CC81638EFF33E556();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RidingBoss_AnimGraphNode_TransitionResult_41FC7A384219171EC0C0658341049D32();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RidingBoss_AnimGraphNode_TransitionResult_43A34FE84928851FE2FFF3AC987329E3();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RidingBoss_AnimGraphNode_TransitionResult_B975B7A341E1772362811F997C382EFF();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RidingBoss_AnimGraphNode_TransitionResult_07D8A20D411F356B0FF8D5AF7EDC6D53();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void OnActionBeginDelegate_Event_0(const class UPalActionBase* action);
    void BlueprintBeginPlay();
    void OnAllActionFinishDelegate_Event_0(const class UPalActionComponent* ActionComponent);
    void OnProcess();
    void ExecuteUbergraph_ABP_RidingBoss(int32 EntryPoint);
};

#endif
