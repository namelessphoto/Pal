#ifndef UE4SS_SDK_BP_Action_RunOnSpot_Hard_HPP
#define UE4SS_SDK_BP_Action_RunOnSpot_Hard_HPP

class UBP_Action_RunOnSpot_Hard_C : public UBP_Action_RunOnSpot_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_RunOnSpot_Hard(int32 EntryPoint);
};

#endif
