#ifndef UE4SS_SDK_BP_UIIndividualParameterInitializeWaiter_HPP
#define UE4SS_SDK_BP_UIIndividualParameterInitializeWaiter_HPP

class UBP_UIIndividualParameterInitializeWaiter_C : public UObject
{
    class APalCharacter* RegisteredCharacter;
    FBP_UIIndividualParameterInitializeWaiter_COnComplete OnComplete;
    void OnComplete(class APalCharacter* TargetCharacter, class UBP_UIIndividualParameterInitializeWaiter_C* selfObject);
    FTimerHandle CheckIndividualParameterTimerHandle;

    void CheckIndividual();
    void OnCompleteInitiaize(class APalCharacter* Character);
    void Register(class APalCharacter* TargetCharacter);
    void OnComplete__DelegateSignature(class APalCharacter* TargetCharacter, class UBP_UIIndividualParameterInitializeWaiter_C* selfObject);
};

#endif
