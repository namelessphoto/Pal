#ifndef UE4SS_SDK_BP_ActionSimpleMonoMontage_HPP
#define UE4SS_SDK_BP_ActionSimpleMonoMontage_HPP

class UBP_ActionSimpleMonoMontage_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    EPalActionType ActionType;
    FString ErrorString;
    double AnimPlayRate;
    bool bNotPlayMontageInClimbing;

    void CanPlayMontage(bool& Return Value);
    void FindMontage(class UAnimMontage*& Montage, bool& Exist);
    void OnNotifyEnd_1447BCF549F3A6CB485DC2BA183FE6B8(FName NotifyName);
    void OnNotifyBegin_1447BCF549F3A6CB485DC2BA183FE6B8(FName NotifyName);
    void OnInterrupted_1447BCF549F3A6CB485DC2BA183FE6B8(FName NotifyName);
    void OnBlendOut_1447BCF549F3A6CB485DC2BA183FE6B8(FName NotifyName);
    void OnCompleted_1447BCF549F3A6CB485DC2BA183FE6B8(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void OnNotifyBegin(FName NotifyName);
    void OnNotifyEnd(FName NotifyName);
    void ExecuteUbergraph_BP_ActionSimpleMonoMontage(int32 EntryPoint);
};

#endif
