#ifndef UE4SS_SDK_BP_ActionDefenseWait_HPP
#define UE4SS_SDK_BP_ActionDefenseWait_HPP

class UBP_ActionDefenseWait_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAnimMontage* tempMontage;
    EPalActionType ActionType;
    EPalGeneralMontageType MontageType;

    void SetupMontage();
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_ActionDefenseWait(int32 EntryPoint);
};

#endif
