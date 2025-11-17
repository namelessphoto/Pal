#ifndef UE4SS_SDK_BP_AIActionReturnToBaseCamp_HPP
#define UE4SS_SDK_BP_AIActionReturnToBaseCamp_HPP

class UBP_AIActionReturnToBaseCamp_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0130 (size: 0x8)
    class APalCharacter* OwnerCharacter;                                              // 0x0138 (size: 0x8)
    class APalCharacter* PlayerCharacter;                                             // 0x0140 (size: 0x8)
    class UPalPartnerSkillParameterComponent* PartnerSkillParam;                      // 0x0148 (size: 0x8)
    class UPalActionComponent* ActionComponent;                                       // 0x0150 (size: 0x8)
    FDataTableRowHandle CannotUseReturnTorBaseCampItemMsgID;                          // 0x0158 (size: 0x10)
    FDataTableRowHandle CannotUseReturnTorBaseCampItemByActionMsgID;                  // 0x0168 (size: 0x10)

    void CanUseSkill(class APawn* ControlledPawn, bool& CanUse, FDataTableRowHandle& FailedLogMsgID);
    void AddSkillLog(FDataTableRowHandle MsgID);
    void SetupOwner(class APawn* ControlledPawn);
    void SetMoveDisableFlag(bool isDisable);
    void EndPartnerSkill();
    void StartPartnerSkill();
    void Setup(class APawn* ControlledPawn);
    void ActionStart(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void OnActionNotify(const class UPalActionBase* action, FName NotifyName);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIActionReturnToBaseCamp(int32 EntryPoint);
}; // Size: 0x178

#endif
