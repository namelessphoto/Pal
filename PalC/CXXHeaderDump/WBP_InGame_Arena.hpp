#ifndef UE4SS_SDK_WBP_InGame_Arena_HPP
#define UE4SS_SDK_WBP_InGame_Arena_HPP

class UWBP_InGame_Arena_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_InGame_Match_Draw_C* WBP_InGame_Match_Draw;
    class UWBP_InGame_Match_HP_C* WBP_InGame_Match_HP;
    class UWBP_InGame_Match_SignalFinish_C* WBP_InGame_Match_SignalFinish;
    class UWBP_InGame_Match_SignalStart_C* WBP_InGame_Match_SignalStart;
    class UPalArenaSequencer* CurrentArenaSequence;
    class UWBP_InGame_Match_Win_C* CurrentWinUI;
    class UWBP_InGame_Match_ArenaResult_C* CurrentResultUI;
    bool UISet;

    void GetLocalBattleResult(FPalArenaRankPointChangeResult& Result, bool& Finded);
    void SetResult();
    void Finished_7F5F79824D29F484AC06A58453CB091A();
    void Finished_768F02F4466EDA7C23960580EBC813FD();
    void Finished_C631FD5D4353912F9F507C91C9B4CBB7();
    void Finished_F607615543D9F7F46B1668A5448DE853();
    void OnArenaSequenceStart(class UPalArenaSequencer* ArenaSequence);
    void ReadyUI();
    void DrawUI();
    void WinUI(FString WinnerName);
    void OnExitArena();
    void OnSequenceStageChanged(class UPalArenaSequencer* Sequencer, EPalArenaSequenceType PrevType, EPalArenaSequenceType AfterType);
    void SetUIOnce();
    void ExecuteUbergraph_WBP_InGame_Arena(int32 EntryPoint);
};

#endif
