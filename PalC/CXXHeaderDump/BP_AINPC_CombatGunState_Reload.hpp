#ifndef UE4SS_SDK_BP_AINPC_CombatGunState_Reload_HPP
#define UE4SS_SDK_BP_AINPC_CombatGunState_Reload_HPP

class UBP_AINPC_CombatGunState_Reload_C : public UBP_AINPC_CombatState_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void StateEnter();
    void StateExit();
    void ExecuteUbergraph_BP_AINPC_CombatGunState_Reload(int32 EntryPoint);
};

#endif
