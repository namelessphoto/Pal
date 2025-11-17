#ifndef UE4SS_SDK_BP_Action_RaidBossSummonChant_HPP
#define UE4SS_SDK_BP_Action_RaidBossSummonChant_HPP

class UBP_Action_RaidBossSummonChant_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Const_LoopTime;
    class UNiagaraComponent* Effect;

    void FindMontage(const EPalGeneralMontageType MontageKey, class UAnimMontage*& StartAnime);
    void OnNotifyEnd_BE7A92584840B0EC84580786B9907E36(FName NotifyName);
    void OnNotifyBegin_BE7A92584840B0EC84580786B9907E36(FName NotifyName);
    void OnInterrupted_BE7A92584840B0EC84580786B9907E36(FName NotifyName);
    void OnBlendOut_BE7A92584840B0EC84580786B9907E36(FName NotifyName);
    void OnCompleted_BE7A92584840B0EC84580786B9907E36(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_RaidBossSummonChant(int32 EntryPoint);
};

#endif
