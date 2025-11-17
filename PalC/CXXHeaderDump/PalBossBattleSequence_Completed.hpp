#ifndef UE4SS_SDK_PalBossBattleSequence_Completed_HPP
#define UE4SS_SDK_PalBossBattleSequence_Completed_HPP

class UPalBossBattleSequence_Completed_C : public UPalBossBattleSequenceBase
{
    FPointerToUberGraphFrame UberGraphFrame;

    void WarpTowerTop();
    void OnBeginSequence();
    void ExecuteUbergraph_PalBossBattleSequence_Completed(int32 EntryPoint);
};

#endif
