#ifndef UE4SS_SDK_BP_MonsterAIController_YakushimaBoss002_HPP
#define UE4SS_SDK_BP_MonsterAIController_YakushimaBoss002_HPP

class ABP_MonsterAIController_YakushimaBoss002_C : public ABP_MonsterAIController_RaidBoss_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_MonsterAIController_YakushimaBoss002_Hand_C* LeftHand_Controller;
    class ABP_MonsterAIController_YakushimaBoss002_Hand_C* RightHand_Controller;
    class ABP_MonsterAIController_YakushimaBoss002_Head_C* Head_Controller;

    void IsReadyBosses(bool& IsReady);
    void SetHandController(bool bIsLeft, class ABP_MonsterAIController_YakushimaBoss002_Hand_C* Controller);
    void SetHeadController(class ABP_MonsterAIController_YakushimaBoss002_Head_C* Head_Controller);
    void ExecuteUbergraph_BP_MonsterAIController_YakushimaBoss002(int32 EntryPoint);
};

#endif
