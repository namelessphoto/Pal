#ifndef UE4SS_SDK_BP_AIActionFunnelSkill_CollectItem_HPP
#define UE4SS_SDK_BP_AIActionFunnelSkill_CollectItem_HPP

class UBP_AIActionFunnelSkill_CollectItem_C : public UPalAIActionFunnelSkillBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool bPickupped;
    class UPalFunnelSkillModuleCollectItem* ModuleCollectItem;
    class UAnimMontage* PickupAnimation;

    void Get Actor Root Location(FVector& Location);
    void OnFail_8BFB17EA4AA5F3D3D1A5E8867E5C4F6E(TEnumAsByte<EPathFollowingResult> MovementResult);
    void OnSuccess_8BFB17EA4AA5F3D3D1A5E8867E5C4F6E(TEnumAsByte<EPathFollowingResult> MovementResult);
    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIActionFunnelSkill_CollectItem(int32 EntryPoint);
};

#endif
