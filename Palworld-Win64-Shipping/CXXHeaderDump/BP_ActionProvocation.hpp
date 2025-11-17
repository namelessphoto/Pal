#ifndef UE4SS_SDK_BP_ActionProvocation_HPP
#define UE4SS_SDK_BP_ActionProvocation_HPP

class UBP_ActionProvocation_C : public UBP_ActionSimpleMonoMontage_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ExecuteUbergraph_BP_ActionProvocation(int32 EntryPoint);
};

#endif
