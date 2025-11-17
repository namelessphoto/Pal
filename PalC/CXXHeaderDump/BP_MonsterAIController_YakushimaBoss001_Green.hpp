#ifndef UE4SS_SDK_BP_MonsterAIController_YakushimaBoss001_Green_HPP
#define UE4SS_SDK_BP_MonsterAIController_YakushimaBoss001_Green_HPP

class ABP_MonsterAIController_YakushimaBoss001_Green_C : public ABP_MonsterAIController_RaidBoss_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_MonsterAIController_YakushimaBoss002_C* ParentController;
    bool bIsLeftHand;
    bool ParentDestroyed;

    void GetTargetCampID(FGuid& CampID);
    void IsLeftHand(bool& IsLeftHand);
    void IsReadyBosses(bool& IsStartBattle);
    void SetParentController(class ABP_MonsterAIController_YakushimaBoss002_C* ParentController);
    void SetParentDestroyed();
    void ExecuteUbergraph_BP_MonsterAIController_YakushimaBoss001_Green(int32 EntryPoint);
};

#endif
