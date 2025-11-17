#ifndef UE4SS_SDK_BP_AIAction_Freeze_HPP
#define UE4SS_SDK_BP_AIAction_Freeze_HPP

class UBP_AIAction_Freeze_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ExecuteUbergraph_BP_AIAction_Freeze(int32 EntryPoint);
};

#endif
