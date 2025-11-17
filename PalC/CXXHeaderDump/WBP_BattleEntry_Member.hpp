#ifndef UE4SS_SDK_WBP_BattleEntry_Member_HPP
#define UE4SS_SDK_WBP_BattleEntry_Member_HPP

class UWBP_BattleEntry_Member_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Listup;
    class UBP_PalTextBlock_C* Text_BattleName;
    class UBP_PalTextBlock_C* Text_PalNum;
    class UVerticalBox* VerticalBox_All;
    TArray<class UWBP_BattleEntry_MemberList_C*> WBP_MemberLists;
    bool ArenaParing;
    bool BossTowerEntry;

    void OnArenaEntryPairing(FPalArenaEntryPair Pair);
    void RemoveTaskDetailText();
    void AddTaslDetailText(FText Text, int32 nowNum, int32 requireNum);
    void OnChangedBossBattlePlayerListEvent(FName BossType, EPalBossBattleDifficulty Difficulty, const TArray<class APalPlayerCharacter*>& PlayerList);
    void OnArenaEntryEnd();
    void ExecuteUbergraph_WBP_BattleEntry_Member(int32 EntryPoint);
};

#endif
