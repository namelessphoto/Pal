#ifndef UE4SS_SDK_BP_ActionMining_HPP
#define UE4SS_SDK_BP_ActionMining_HPP

class UBP_ActionMining_C : public UBP_ActionInteractBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AActor* ToolActor;
    FName flagName;

    void SetHiddenAttachWeapon(bool isHidden);
    void TriggerWorkActionAttackIfNeed(const class UAnimMontage* Montage, FName SectionName);
    void RequestDamageTargetObject();
    void GetDetectableNotifyNames(TArray<FName>& Array);
    void OnEndAction();
    void OnBeginAction();
    void OnBeginAnimNotify(class UAnimMontage* Montage, FName NotifyName);
    void ExecuteUbergraph_BP_ActionMining(int32 EntryPoint);
};

#endif
