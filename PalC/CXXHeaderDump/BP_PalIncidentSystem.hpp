#ifndef UE4SS_SDK_BP_PalIncidentSystem_HPP
#define UE4SS_SDK_BP_PalIncidentSystem_HPP

class UBP_PalIncidentSystem_C : public UPalIncidentSystem
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Lottery Index by Weights(TArray<double>& Weights, int32& Index);
    void LotteryItemAndNum(const class UDataTable* PresentLotteryDataTable, FName& OutItemName, int32& OutNum);
    void TalkCustomFunction_AttackToPlayer(class APalPlayerCharacter* TalkPlayer, class APalCharacter* TargetNPC, const class UDataTable* CunstomFuncParam);
    void TalkCustomFunction_VisitorPresentAndReturn(class APalPlayerCharacter* TalkPlayer, class APalCharacter* TargetNPC, const class UDataTable* CunstomFuncParam);
    void TalkCustomFunction_Duel(class APalPlayerCharacter* TalkPlayer, class APalCharacter* TargetNPC, const class UDataTable* CunstomFuncParam);
    void ExecuteUbergraph_BP_PalIncidentSystem(int32 EntryPoint);
};

#endif
