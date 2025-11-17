#ifndef UE4SS_SDK_BP_MonsterAIController_NPCOtomo_HPP
#define UE4SS_SDK_BP_MonsterAIController_NPCOtomo_HPP

class ABP_MonsterAIController_NPCOtomo_C : public ABP_MonsterAIControllerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalAISensorComponent* PalAISensor;
    bool IsOnpossessed;
    class APalCharacter* TrainerNPC;
    double SwimTimer;
    bool IsOilrigOtomo;

    void GetMyBB(class UBP_PalAIBlackboard_Common_C*& PalBrackboard);
    void GetLeaderBB(class UBP_PalAIBlackboard_Common_C*& LeaderPalBrackboard);
    void CheckSwimming(double DeltaTime);
    void ReceiveTick(float DeltaSeconds);
    void ReceivePossess(class APawn* PossessedPawn);
    void カスタムイベント_2(FPalDeadInfo DeadInfo);
    void ExecuteUbergraph_BP_MonsterAIController_NPCOtomo(int32 EntryPoint);
};

#endif
