#ifndef UE4SS_SDK_BP_Action_BeLiftup_HPP
#define UE4SS_SDK_BP_Action_BeLiftup_HPP

class UBP_Action_BeLiftup_C : public UPalAction_BeLiftup
{
    FPointerToUberGraphFrame UberGraphFrame;
    double interpTime;
    double InterpTimer;
    FRotator StartRotation;
    bool StartedInterpRotation;
    FVector StartLocation;
    FVector TargetLocation;

    void GetCarryingMontage(EPalGeneralMontageType MontageType, class UAnimMontage*& Montage);
    void OnEndAction();
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void OnStartInterpTransform();
    void OnEndInterpTransform();
    void ExecuteUbergraph_BP_Action_BeLiftup(int32 EntryPoint);
};

#endif
