#ifndef UE4SS_SDK_BP_AINPC_CombatGunState_FireMove_FlameThrower_HPP
#define UE4SS_SDK_BP_AINPC_CombatGunState_FireMove_FlameThrower_HPP

class UBP_AINPC_CombatGunState_FireMove_FlameThrower_C : public UBP_AINPC_CombatGunState_AimMove_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    double Timer;

    void StateEnter();
    void StateExit();
    void ExecuteUbergraph_BP_AINPC_CombatGunState_FireMove_FlameThrower(int32 EntryPoint);
};

#endif
