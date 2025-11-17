#ifndef UE4SS_SDK_BP_AINPC_CombatGunState_Fire_Oilrig_HPP
#define UE4SS_SDK_BP_AINPC_CombatGunState_Fire_Oilrig_HPP

class UBP_AINPC_CombatGunState_Fire_Oilrig_C : public UBP_AINPC_CombatGunState_Aim_Oilrig_C
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
    void StateExit();
    void ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig(int32 EntryPoint);
};

#endif
