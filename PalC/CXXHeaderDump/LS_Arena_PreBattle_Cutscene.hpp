#ifndef UE4SS_SDK_LS_Arena_PreBattle_Cutscene_HPP
#define UE4SS_SDK_LS_Arena_PreBattle_Cutscene_HPP

class ULS_Arena_PreBattle_Cutscene (Director BP)_C : public ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SequenceEvent__ENTRYPOINTLS_Arena_PreBattle_Cutscene (Director BP)_0(class APalArenaPreBattleCutsceneEvent* PreBattleEvent);
    void SequenceEvent__ENTRYPOINTLS_Arena_PreBattle_Cutscene (Director BP)(class APalArenaPreBattleCutsceneEvent* PreBattleEvent);
    void PreBattleEvent_Event(class APalArenaPreBattleCutsceneEvent* PreBattleEvent, EPalArenaPlayerIndex PlayerIndex);
    void PreBattleEvent_Event_0(class APalArenaPreBattleCutsceneEvent* PreBattleEvent, EPalArenaPlayerIndex PlayerIndex);
    void ExecuteUbergraph_LS_Arena_PreBattle_Cutscene (Director BP)(int32 EntryPoint);
};

#endif
