#ifndef UE4SS_SDK_BP_ActionSleep_HPP
#define UE4SS_SDK_BP_ActionSleep_HPP

class UBP_ActionSleep_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAnimMontage* tempMontage;
    bool IsFlyPal;
    FTimerHandle TimeHandle;
    bool EyeCloseAble;
    class UNiagaraComponent* Effect;
    bool UseMontageFacial;
    class UPalFacialComponent* FacialComp;
    bool StartMontageNotifyExist;
    bool LoopMontageNotifyExist;
    TSoftObjectPtr<UAkAudioEvent> SmallSleepSound;
    TSoftObjectPtr<UAkAudioEvent> MiddleSleepSound;
    TSoftObjectPtr<UAkAudioEvent> BigSleepSound;
    bool bFadingBySleepLoop;

    void UnregisterSleepLoopEffect(class APalCharacter* Character);
    void ShouldChangeSleepLoopMontage(bool& Return Value);
    void GetSleepLoopMontage(class UAnimMontage*& AnimMontage);
    bool IsPlayingSleepLoop();
    void CheckSleepOnSideAndReplaceMontage();
    void StartSleepSound(class UAnimMontage* Montage);
    void SetSleepSightFlag(bool Disable);
    void OnLoaded_49BB828F4B31C2356072F4BF56562BE4(class UObject* Loaded);
    void OnNotifyEnd_6BF59DE942FABEC009135FAF74D0892D(FName NotifyName);
    void OnNotifyBegin_6BF59DE942FABEC009135FAF74D0892D(FName NotifyName);
    void OnInterrupted_6BF59DE942FABEC009135FAF74D0892D(FName NotifyName);
    void OnBlendOut_6BF59DE942FABEC009135FAF74D0892D(FName NotifyName);
    void OnCompleted_6BF59DE942FABEC009135FAF74D0892D(FName NotifyName);
    void OnLoaded_5EEF21F14544E3FF5966AEA11A939260(class UObject* Loaded);
    void OnLoaded_25736171428620E543B76A903CB7DDF9(class UObject* Loaded);
    void PlaySleepSound();
    void CustomEvent(class UAnimMontage* Montage);
    void StopSleepSound();
    void OnBeginAction();
    void OnEndAction();
    void EffectPlayEvent();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_ActionSleep(int32 EntryPoint);
};

#endif
