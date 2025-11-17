#ifndef UE4SS_SDK_BP_AINPC_CombatGunState_FireMove_HPP
#define UE4SS_SDK_BP_AINPC_CombatGunState_FireMove_HPP

class UBP_AINPC_CombatGunState_FireMove_C : public UBP_AINPC_CombatGunState_AimMove_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    double Timer;
    int32 ShootCount;
    double Interval;
    double ShootAbleTimer;
    double temp_DeltaTime;

    void AddShootTimer();
    void StateEnter();
    void StateTick(float DeltaTime);
    void ExecuteUbergraph_BP_AINPC_CombatGunState_FireMove(int32 EntryPoint);
};

#endif
