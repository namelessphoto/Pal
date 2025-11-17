#ifndef UE4SS_SDK_BP_MonsterAIController_Boss_HPP
#define UE4SS_SDK_BP_MonsterAIController_Boss_HPP

class ABP_MonsterAIController_Boss_C : public ABP_MonsterAIControllerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalAISensorComponent* PalAISensor;
    bool IsNotFreeAIMode;

    void GetMyBB(class UBP_PalAIBlackboard_Common_C*& PalBrackboard);
    void GetLeaderBB(class UBP_PalAIBlackboard_Common_C*& LeaderPalBrackboard);
    void Force Battle Start To Target Boss(class APalPlayerCharacter* Player, TArray<class APalPlayerCharacter*>& AllPlayer);
    void ReceivePossess(class APawn* PossessedPawn);
    void カスタムイベント_1(class APalCharacter* InCharacter);
    void ExecuteUbergraph_BP_MonsterAIController_Boss(int32 EntryPoint);
};

#endif
