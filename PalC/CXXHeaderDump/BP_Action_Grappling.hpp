#ifndef UE4SS_SDK_BP_Action_Grappling_HPP
#define UE4SS_SDK_BP_Action_Grappling_HPP

class UBP_Action_Grappling_C : public UBP_Action_GrapplingBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FName flagName;

    void TryClime();
    void EndProcess();
    void GetOffRide();
    void DisableShooter(bool Disable);
    void OnBeginAction();
    void ExecuteUbergraph_BP_Action_Grappling(int32 EntryPoint);
};

#endif
