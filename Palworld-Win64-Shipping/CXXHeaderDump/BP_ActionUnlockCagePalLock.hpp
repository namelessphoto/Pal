#ifndef UE4SS_SDK_BP_ActionUnlockCagePalLock_HPP
#define UE4SS_SDK_BP_ActionUnlockCagePalLock_HPP

class UBP_ActionUnlockCagePalLock_C : public UBP_ActionSimpleMonoMontage_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FName flagName;
    class UAkAudioEvent* AkEventUnlockCage;

    void RotateToLockModel();
    void OnEndAction();
    void OnBeginAction();
    void ExecuteUbergraph_BP_ActionUnlockCagePalLock(int32 EntryPoint);
};

#endif
