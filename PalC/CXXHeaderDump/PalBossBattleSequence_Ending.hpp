#ifndef UE4SS_SDK_PalBossBattleSequence_Ending_HPP
#define UE4SS_SDK_PalBossBattleSequence_Ending_HPP

class UPalBossBattleSequence_Ending_C : public UPalBossBattleSequenceBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalBossBattleSequencer* Sequencer;

    void Gift();
    void OnBeginSequence();
    void ExecuteUbergraph_PalBossBattleSequence_Ending(int32 EntryPoint);
};

#endif
