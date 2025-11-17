#ifndef UE4SS_SDK_BP_AIActionCombatHeli_StandbyMode_HPP
#define UE4SS_SDK_BP_AIActionCombatHeli_StandbyMode_HPP

class UBP_AIActionCombatHeli_StandbyMode_C : public UBP_AIActionCombatHeliBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void MoveToSpawnedPoint(double DeltaTime);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIActionCombatHeli_StandbyMode(int32 EntryPoint);
};

#endif
