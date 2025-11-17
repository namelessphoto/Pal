#ifndef UE4SS_SDK_BP_MonsterAIController_YakushimaBoss002_Hand_HPP
#define UE4SS_SDK_BP_MonsterAIController_YakushimaBoss002_Hand_HPP

class ABP_MonsterAIController_YakushimaBoss002_Hand_C : public ABP_MonsterAIController_RaidBoss_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0590 (size: 0x8)
    class ABP_MonsterAIController_YakushimaBoss002_C* ParentController;               // 0x0598 (size: 0x8)
    bool bIsLeftHand;                                                                 // 0x05A0 (size: 0x1)

    void GetTargetCampID(FGuid& CampID);
    void IsLeftHand(bool& IsLeftHand);
    void IsReadyBosses(bool& IsStartBattle);
    void SetParentController(class ABP_MonsterAIController_YakushimaBoss002_C* ParentController);
    void SetHandSide(bool IsLeftHand);
    void ExecuteUbergraph_BP_MonsterAIController_YakushimaBoss002_Hand(int32 EntryPoint);
}; // Size: 0x5A1

#endif
