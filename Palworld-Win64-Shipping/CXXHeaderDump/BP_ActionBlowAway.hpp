#ifndef UE4SS_SDK_BP_ActionBlowAway_HPP
#define UE4SS_SDK_BP_ActionBlowAway_HPP

class UBP_ActionBlowAway_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    double CanStepTime;
    bool CanStep;
    bool CanTickCheck;

    bool CanStepCancel();
    void OnNotifyEnd_ABE5CCC540DFAD6A928F8AAB02EDEF07(FName NotifyName);
    void OnNotifyBegin_ABE5CCC540DFAD6A928F8AAB02EDEF07(FName NotifyName);
    void OnInterrupted_ABE5CCC540DFAD6A928F8AAB02EDEF07(FName NotifyName);
    void OnBlendOut_ABE5CCC540DFAD6A928F8AAB02EDEF07(FName NotifyName);
    void OnCompleted_ABE5CCC540DFAD6A928F8AAB02EDEF07(FName NotifyName);
    void OnLandedDelegate_イベント_0(class UPalCharacterMovementComponent* Component, const FHitResult& Hit);
    void OnBeginAction();
    void StepEvent();
    void TickCheckEvent();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_ActionBlowAway(int32 EntryPoint);
};

#endif
