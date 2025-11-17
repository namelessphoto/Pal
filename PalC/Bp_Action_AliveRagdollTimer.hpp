#ifndef UE4SS_SDK_Bp_Action_AliveRagdollTimer_HPP
#define UE4SS_SDK_Bp_Action_AliveRagdollTimer_HPP

class UBp_Action_AliveRagdollTimer_C : public UBP_Action_AliveRagdoll_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnBeginAction();
    void ExecuteUbergraph_Bp_Action_AliveRagdollTimer(int32 EntryPoint);
};

#endif
