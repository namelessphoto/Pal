#ifndef UE4SS_SDK_BP_MonsterAIController_ArenaNPCOtomo_HPP
#define UE4SS_SDK_BP_MonsterAIController_ArenaNPCOtomo_HPP

class ABP_MonsterAIController_ArenaNPCOtomo_C : public ABP_MonsterAIControllerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TSubclassOf<class UPalAIActionBase> CombatAIActionClass;

    void ReceivePossess(class APawn* PossessedPawn);
    void OnStartInBattle();
    void ExecuteUbergraph_BP_MonsterAIController_ArenaNPCOtomo(int32 EntryPoint);
};

#endif
