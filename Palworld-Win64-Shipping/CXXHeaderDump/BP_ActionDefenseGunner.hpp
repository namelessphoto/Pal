#ifndef UE4SS_SDK_BP_ActionDefenseGunner_HPP
#define UE4SS_SDK_BP_ActionDefenseGunner_HPP

class UBP_ActionDefenseGunner_C : public UBP_ActionSimpleMonoMontage_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void FindMontage(class UAnimMontage*& Montage, bool& Exist);
    void OnEndAction();
    void OnBeginAction();
    void ExecuteUbergraph_BP_ActionDefenseGunner(int32 EntryPoint);
};

#endif
