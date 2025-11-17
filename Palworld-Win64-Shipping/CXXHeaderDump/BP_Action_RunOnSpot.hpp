#ifndef UE4SS_SDK_BP_Action_RunOnSpot_HPP
#define UE4SS_SDK_BP_Action_RunOnSpot_HPP

class UBP_Action_RunOnSpot_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SetActionCharacterGravity(bool bOn);
    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_RunOnSpot(int32 EntryPoint);
};

#endif
