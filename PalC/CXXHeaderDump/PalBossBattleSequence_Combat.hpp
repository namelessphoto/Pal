#ifndef UE4SS_SDK_PalBossBattleSequence_Combat_HPP
#define UE4SS_SDK_PalBossBattleSequence_Combat_HPP

class UPalBossBattleSequence_Combat_C : public UPalBossBattleSequenceBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool IsBossDead;
    bool IsResultCompleted;

    void CheckCombatFinish();
    void SetTimerEnable(bool IsEnable);
    void OnBeginSequence();
    void OnDeadBoss(FPalDeadInfo DeadInfo);
    void TickSequence(float DeltaTime);
    void ExecuteUbergraph_PalBossBattleSequence_Combat(int32 EntryPoint);
};

#endif
