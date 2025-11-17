#ifndef UE4SS_SDK_BP_ActionDeforest_Player_HPP
#define UE4SS_SDK_BP_ActionDeforest_Player_HPP

class UBP_ActionDeforest_Player_C : public UBP_ActionInteractBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FName flagName;

    void GetDetectableNotifyNames(TArray<FName>& Array);
    void TriggerWorkActionAttackIfNeed(const class UAnimMontage* Montage, FName SectionName);
    void OnBeginAction();
    void OnEndAction();
    void OnBeginAnimNotify(class UAnimMontage* Montage, FName NotifyName);
    void ExecuteUbergraph_BP_ActionDeforest_Player(int32 EntryPoint);
};

#endif
