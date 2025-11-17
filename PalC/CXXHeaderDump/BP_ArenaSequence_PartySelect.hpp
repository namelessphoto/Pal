#ifndef UE4SS_SDK_BP_ArenaSequence_PartySelect_HPP
#define UE4SS_SDK_BP_ArenaSequence_PartySelect_HPP

class UBP_ArenaSequence_PartySelect_C : public UPalArenaSequencePartySelect
{
    FPointerToUberGraphFrame UberGraphFrame;
    double PartySelectTime;
    double PartySelectTime_Solo;
    double Timer;
    FPalArenaPlayerParty SelectParty;
    FBP_ArenaSequence_PartySelect_COnTimerUpdated OnTimerUpdated;
    void OnTimerUpdated(double Time);
    FBP_ArenaSequence_PartySelect_COnPartySelectBreak OnPartySelectBreak;
    void OnPartySelectBreak();
    bool Breaked;

    void SetupTimer();
    void EndProcess();
    void PrintPartySelectLog();
    void SendParty();
    void UpdateTimer(double DeltaTime);
    void TickSequence(float DeltaTime);
    void OnBeginSequence();
    void OnTimeup();
    void SetParty(FPalArenaPlayerParty ArenaParty);
    void OnEndSequence();
    void OnBreakSequence();
    void OnConfirmBreak(bool bResult);
    void OnArenaBreak();
    void ExecuteUbergraph_BP_ArenaSequence_PartySelect(int32 EntryPoint);
    void OnPartySelectBreak__DelegateSignature();
    void OnTimerUpdated__DelegateSignature(double Time);
};

#endif
