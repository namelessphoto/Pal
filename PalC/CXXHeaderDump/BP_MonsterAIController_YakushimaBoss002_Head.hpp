#ifndef UE4SS_SDK_BP_MonsterAIController_YakushimaBoss002_Head_HPP
#define UE4SS_SDK_BP_MonsterAIController_YakushimaBoss002_Head_HPP

class ABP_MonsterAIController_YakushimaBoss002_Head_C : public ABP_MonsterAIController_RaidBoss_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_MonsterAIController_YakushimaBoss002_C* ParentController;

    void GetTargetCampID(FGuid& CampID);
    void IsReadyBosses(bool& IsStartBattle);
    void SetParentController(class ABP_MonsterAIController_YakushimaBoss002_C* ParentController);
    void ExecuteUbergraph_BP_MonsterAIController_YakushimaBoss002_Head(int32 EntryPoint);
};

#endif
