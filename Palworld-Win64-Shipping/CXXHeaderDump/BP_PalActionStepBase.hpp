#ifndef UE4SS_SDK_BP_PalActionStepBase_HPP
#define UE4SS_SDK_BP_PalActionStepBase_HPP

class UBP_PalActionStepBase_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FName flagName;
    double StepTime;
    double Timer;
    EPalGeneralMontageType StepType;
    bool CanEndStep;
    class UAnimMontage* Montage;
    bool CanCrouchCancel;
    double CrouchCancelTime;
    double StepDistance;
    class UNiagaraComponent* Effect;
    FVector StepEndLocation;
    bool IsPlayStepEffect;
    FVector StepStartLocation;

    void GetStepEndLocation(FVector& Location);
    void StepMove();
    void CheckFrontHight(bool& CanThrough);
    void DisableMovement(bool Disable);
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void EndStep();
    void OnEndStepWhenCrouch();
    void ExecuteUbergraph_BP_PalActionStepBase(int32 EntryPoint);
};

#endif
