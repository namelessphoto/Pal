#ifndef UE4SS_SDK_BP_AINPC_CombatGunState_MeleeAttack_HPP
#define UE4SS_SDK_BP_AINPC_CombatGunState_MeleeAttack_HPP

class UBP_AINPC_CombatGunState_MeleeAttack_C : public UBP_AINPC_CombatState_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalActionBase* action;

    void StateEnter();
    void StateTick(float DeltaTime);
    void StateExit();
    void ExecuteUbergraph_BP_AINPC_CombatGunState_MeleeAttack(int32 EntryPoint);
};

#endif
