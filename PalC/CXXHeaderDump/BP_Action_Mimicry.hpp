#ifndef UE4SS_SDK_BP_Action_Mimicry_HPP
#define UE4SS_SDK_BP_Action_Mimicry_HPP

class UBP_Action_Mimicry_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAnimMontage* MimicMontage;

    void FindMimicMontage(class UAnimMontage*& Montage);
    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_Mimicry(int32 EntryPoint);
};

#endif
