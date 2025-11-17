#ifndef UE4SS_SDK_WBP_BattleEntry_Info_HPP
#define UE4SS_SDK_WBP_BattleEntry_Info_HPP

class UWBP_BattleEntry_Info_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeIn;
    class UBP_PalTextBlock_C* Text_Entry;
    class UBP_PalTextBlock_C* Text_EntryNum;

    void Finished_DCF333D941FA61FD2550718E81C65E72();
    void SetEntryInfo(FName BossType, EPalBossBattleDifficulty Difficulty, const TArray<class APalPlayerCharacter*>& EntryPlayers);
    void ExecuteUbergraph_WBP_BattleEntry_Info(int32 EntryPoint);
};

#endif
