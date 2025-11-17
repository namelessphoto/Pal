#ifndef UE4SS_SDK_BP_ActionDeforest_HPP
#define UE4SS_SDK_BP_ActionDeforest_HPP

class UBP_ActionDeforest_C : public UBP_ActionSimpleMonoMontage_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FName flagName;
    class AActor* ToolActor;

    void SetHiddenAttachWeapon(bool isHidden);
    void TriggerWorkActionAttackIfNeed(const class UAnimMontage* Montage, FName SectionName);
    void GetDetectableNotifyNames(TArray<FName>& Array);
    void OnEndAction();
    void OnBeginAction();
    void OnBeginAnimNotify(class UAnimMontage* Montage, FName NotifyName);
    void ExecuteUbergraph_BP_ActionDeforest(int32 EntryPoint);
};

#endif
