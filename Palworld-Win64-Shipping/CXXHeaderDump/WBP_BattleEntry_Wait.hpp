#ifndef UE4SS_SDK_WBP_BattleEntry_Wait_HPP
#define UE4SS_SDK_WBP_BattleEntry_Wait_HPP

class UWBP_BattleEntry_Wait_C : public UPalBossEntryWaitInfoHUD
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalTextBlock_C* BP_PalTextBlock_Info;
    class UBP_PalTextBlock_C* Text_BaseCampName;
    class UBP_PalTextBlock_C* Text_LevelValue;
    class UWBP_BossBattle_Timer_C* WBP_BossBattle_Timer;
    FTimerHandle CurrentTimer;
    FDataTableRowHandle WaitingMsgId;
    FDataTableRowHandle EnterMsgId;

    void OnRequestRemove();
    void UpdateCountDown();
    void Count Down();
    void OnSetup();
    void ExecuteUbergraph_WBP_BattleEntry_Wait(int32 EntryPoint);
};

#endif
