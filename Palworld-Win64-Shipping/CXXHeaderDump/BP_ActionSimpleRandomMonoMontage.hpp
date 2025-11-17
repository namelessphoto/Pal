#ifndef UE4SS_SDK_BP_ActionSimpleRandomMonoMontage_HPP
#define UE4SS_SDK_BP_ActionSimpleRandomMonoMontage_HPP

class UBP_ActionSimpleRandomMonoMontage_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    EPalActionType ActionType;
    FString ErrorString;
    double AnimPlayRate;
    TArray<class UAnimMontage*> montageList;
    class UAnimMontage* Motage;
    bool IsStop;
    TArray<class TSubclassOf<APalCharacter>> IgnoreBPList;
    bool IsIgnore;
    bool IsStopNPCTalkMothOnMontageComplete;

    void CheckIgnoreBP(bool& IsIgnore);
    void FindMontage(class UAnimMontage*& Montage, bool& Exist);
    void OnNotifyEnd_906C2FBA4BA290487DF11DB86632BE52(FName NotifyName);
    void OnNotifyBegin_906C2FBA4BA290487DF11DB86632BE52(FName NotifyName);
    void OnInterrupted_906C2FBA4BA290487DF11DB86632BE52(FName NotifyName);
    void OnBlendOut_906C2FBA4BA290487DF11DB86632BE52(FName NotifyName);
    void OnCompleted_906C2FBA4BA290487DF11DB86632BE52(FName NotifyName);
    void OnEndAction();
    void OnNotifyBegin(FName NotifyName);
    void OnNotifyEnd(FName NotifyName);
    void OnBeginAction();
    void ExecuteUbergraph_BP_ActionSimpleRandomMonoMontage(int32 EntryPoint);
};

#endif
