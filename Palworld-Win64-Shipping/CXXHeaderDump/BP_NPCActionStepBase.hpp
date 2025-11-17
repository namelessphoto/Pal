#ifndef UE4SS_SDK_BP_NPCActionStepBase_HPP
#define UE4SS_SDK_BP_NPCActionStepBase_HPP

class UBP_NPCActionStepBase_C : public UPalActionBase
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

    void GetStepEndLocation(FVector& Location);
    void StepMove();
    void CheckFrontHight(bool& CanThrough);
    void DisableMovement(bool Disable);
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void EndStep();
    void OnEndStepWhenCrouch();
    void ExecuteUbergraph_BP_NPCActionStepBase(int32 EntryPoint);
};

#endif
