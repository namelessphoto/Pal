#ifndef UE4SS_SDK_BP_Action_Coop_SpawnItem_HPP
#define UE4SS_SDK_BP_Action_Coop_SpawnItem_HPP

class UBP_Action_Coop_SpawnItem_C : public UPalActionBase
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
    void OnNotifyEnd_3059B08B4A825BCA681E639E08A41646(FName NotifyName);
    void OnNotifyBegin_3059B08B4A825BCA681E639E08A41646(FName NotifyName);
    void OnInterrupted_3059B08B4A825BCA681E639E08A41646(FName NotifyName);
    void OnBlendOut_3059B08B4A825BCA681E639E08A41646(FName NotifyName);
    void OnCompleted_3059B08B4A825BCA681E639E08A41646(FName NotifyName);
    void OnNotifyEnd_41D0FB9F4D2B94E1D6E7B084AF2DCD56(FName NotifyName);
    void OnNotifyBegin_41D0FB9F4D2B94E1D6E7B084AF2DCD56(FName NotifyName);
    void OnInterrupted_41D0FB9F4D2B94E1D6E7B084AF2DCD56(FName NotifyName);
    void OnBlendOut_41D0FB9F4D2B94E1D6E7B084AF2DCD56(FName NotifyName);
    void OnCompleted_41D0FB9F4D2B94E1D6E7B084AF2DCD56(FName NotifyName);
    void StartFun();
    void OnEndFun();
    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_Coop_SpawnItem(int32 EntryPoint);
};

#endif
