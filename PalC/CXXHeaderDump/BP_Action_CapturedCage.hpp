#ifndef UE4SS_SDK_BP_Action_CapturedCage_HPP
#define UE4SS_SDK_BP_Action_CapturedCage_HPP

class UBP_Action_CapturedCage_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnBeginAction();
    void ExecuteUbergraph_BP_Action_CapturedCage(int32 EntryPoint);
};

#endif
