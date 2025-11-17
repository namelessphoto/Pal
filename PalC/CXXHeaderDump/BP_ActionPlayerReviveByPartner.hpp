#ifndef UE4SS_SDK_BP_ActionPlayerReviveByPartner_HPP
#define UE4SS_SDK_BP_ActionPlayerReviveByPartner_HPP

class UBP_ActionPlayerReviveByPartner_C : public UBP_ActionSimpleMonoMontage_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool IsEnd;
    class UNiagaraSystem* ReviveFX;
    TSoftObjectPtr<UNiagaraSystem> ReviveFX_Asset;
    FName flagName;

    void Calc Effect Location(FVector& Location);
    void PlayReviveFX();
    bool IsEndAction();
    void SetDisableCollision(bool isDisable);
    void OnNotifyEnd_028FFD4D48C5FC855EC3F1B36F499E63(FName NotifyName);
    void OnNotifyBegin_028FFD4D48C5FC855EC3F1B36F499E63(FName NotifyName);
    void OnInterrupted_028FFD4D48C5FC855EC3F1B36F499E63(FName NotifyName);
    void OnBlendOut_028FFD4D48C5FC855EC3F1B36F499E63(FName NotifyName);
    void OnCompleted_028FFD4D48C5FC855EC3F1B36F499E63(FName NotifyName);
    void OnLoaded_B720B09A4409DF34615EB585D80C0B10(class UObject* Loaded);
    void OnBeginAction();
    void OnEndAction();
    void OnRevive(class APalPlayerCharacter* Player);
    void ExecuteUbergraph_BP_ActionPlayerReviveByPartner(int32 EntryPoint);
};

#endif
