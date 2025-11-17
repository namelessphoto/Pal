#ifndef UE4SS_SDK_BP_AIController_CombatHeli_HPP
#define UE4SS_SDK_BP_AIController_CombatHeli_HPP

class ABP_AIController_CombatHeli_C : public APalAIController
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector SpawnedLocation;

    void On Dead(FPalDeadInfo DeadInfo);
    void ReceivePossess(class APawn* PossessedPawn);
    void ExecuteUbergraph_BP_AIController_CombatHeli(int32 EntryPoint);
};

#endif
