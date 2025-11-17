#ifndef UE4SS_SDK_BP_ActionPairStandbyBase_HPP
#define UE4SS_SDK_BP_ActionPairStandbyBase_HPP

class UBP_ActionPairStandbyBase_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalAIActionBase* PettingCallAction;
    TSubclassOf<class UBP_AIActionPairCallBase_C> CallAIActionClass;

    void IsValidTarget(bool& IsValid);
    void OnSetCallAIAction(class UPalAIActionBase* CallAction);
    void CheckCancel(bool& Cancel);
    void GetStandByAnime(class UAnimMontage*& Montage);
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void OnEndAction();
    void CancelEvent();
    void ExecuteUbergraph_BP_ActionPairStandbyBase(int32 EntryPoint);
};

#endif
