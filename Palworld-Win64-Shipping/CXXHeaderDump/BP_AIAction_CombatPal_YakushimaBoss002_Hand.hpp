#ifndef UE4SS_SDK_BP_AIAction_CombatPal_YakushimaBoss002_Hand_HPP
#define UE4SS_SDK_BP_AIAction_CombatPal_YakushimaBoss002_Hand_HPP

class UBP_AIAction_CombatPal_YakushimaBoss002_Hand_C : public UBP_AIAction_CombatPal_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 WazaRoutineIndex;
    TArray<EPalWazaID> WazaRoutineList_Left;
    TArray<EPalWazaID> WazaRoutineList_Right;
    bool UseDebugWaza;
    EPalWazaID DebugWaza;
    FGuid Camp ID;

    void PlayWazaAction();
    void GetCombatModuleRaid(class UPalAICombatModule_RaidBoss*& ModuleRaidBoss);
    void ChangeNextAction();
    void ActionStart(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIAction_CombatPal_YakushimaBoss002_Hand(int32 EntryPoint);
};

#endif
