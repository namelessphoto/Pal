#ifndef UE4SS_SDK_BP_AIAction_CombatPal_YakushimaBoss002_HPP
#define UE4SS_SDK_BP_AIAction_CombatPal_YakushimaBoss002_HPP

class UBP_AIAction_CombatPal_YakushimaBoss002_C : public UBP_AIAction_CombatPal_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 WazaRoutineIndex;
    TArray<EPalWazaID> WazaRoutineList;
    bool UseDebugWaza;
    EPalWazaID DebugWaza;
    FGuid Camp ID;

    void PlayWazaAction();
    void GetCombatModuleRaid(class UPalAICombatModule_RaidBoss*& ModuleRaidBoss);
    void ChangeNextAction();
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionStart(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIAction_CombatPal_YakushimaBoss002(int32 EntryPoint);
};

#endif
