#ifndef UE4SS_SDK_BP_ActionCool_HPP
#define UE4SS_SDK_BP_ActionCool_HPP

class UBP_ActionCool_C : public UBP_ActionSimpleMonoMontage_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_Prop_Base_C* Prop;

    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_ActionCool(int32 EntryPoint);
};

#endif
