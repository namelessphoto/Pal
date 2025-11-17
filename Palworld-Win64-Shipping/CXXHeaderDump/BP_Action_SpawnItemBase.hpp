#ifndef UE4SS_SDK_BP_Action_SpawnItemBase_HPP
#define UE4SS_SDK_BP_Action_SpawnItemBase_HPP

class UBP_Action_SpawnItemBase_C : public UPalActionSpawnItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAnimInstance* AnimInst;
    class APalCharacter* ActionCharacter;
    class UAnimMontage* ChargeMontage;
    bool IsFnishByAbortMontage;
    class UPalFacialComponent* Facial;
    EPalFacialEyeType ChargeFacialEye;
    FTimerHandle ChargeTimer;
    class UAnimMontage* FunMontage;
    EPalFacialEyeType FunFacialEye;

    void EndProc();
    void StopFunMontage();
    void StopChargeMontage();
    void OnNotifyEnd_2FFE26C44850576E346494ABF0A5DD9A(FName NotifyName);
    void OnNotifyBegin_2FFE26C44850576E346494ABF0A5DD9A(FName NotifyName);
    void OnInterrupted_2FFE26C44850576E346494ABF0A5DD9A(FName NotifyName);
    void OnBlendOut_2FFE26C44850576E346494ABF0A5DD9A(FName NotifyName);
    void OnCompleted_2FFE26C44850576E346494ABF0A5DD9A(FName NotifyName);
    void OnNotifyEnd_06AF58594525DF9FB23A808FEC71D691(FName NotifyName);
    void OnNotifyBegin_06AF58594525DF9FB23A808FEC71D691(FName NotifyName);
    void OnInterrupted_06AF58594525DF9FB23A808FEC71D691(FName NotifyName);
    void OnBlendOut_06AF58594525DF9FB23A808FEC71D691(FName NotifyName);
    void OnCompleted_06AF58594525DF9FB23A808FEC71D691(FName NotifyName);
    void StartFun();
    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_SpawnItemBase(int32 EntryPoint);
};

#endif
