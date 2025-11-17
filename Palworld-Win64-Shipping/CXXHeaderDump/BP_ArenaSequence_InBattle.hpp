#ifndef UE4SS_SDK_BP_ArenaSequence_InBattle_HPP
#define UE4SS_SDK_BP_ArenaSequence_InBattle_HPP

class UBP_ArenaSequence_InBattle_C : public UPalArenaSequenceInBattle
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool Timeup;
    FTimerHandle BattleTimerHandle;
    FName flagName;
    FBP_ArenaSequence_InBattle_COnTimerTick OnTimerTick;
    void OnTimerTick(int32 Time);

    void SetOtomoCollision(bool IsOtomo);
    void SetDisableOtomoDeadReturn(bool Disable);
    void SetInBattleControllerSetting(bool InBattle);
    void CheckBattleEnd();
    void EnableMovement();
    void OnBeginSequence();
    void TickSequence(float DeltaTime);
    void OnDeadCharacter(FPalDeadInfo DeadInfo);
    void OnEndSequence();
    void OnTimeup();
    void OnBreakSequence();
    void ExecuteUbergraph_BP_ArenaSequence_InBattle(int32 EntryPoint);
    void OnTimerTick__DelegateSignature(int32 Time);
};

#endif
