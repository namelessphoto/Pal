#ifndef UE4SS_SDK_BP_ActionTurnToDirection_NotEnd_HPP
#define UE4SS_SDK_BP_ActionTurnToDirection_NotEnd_HPP

class UBP_ActionTurnToDirection_NotEnd_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    double SpeedRate;
    double DeleteTimer;

    void TickAction(float DeltaTime);
    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_ActionTurnToDirection_NotEnd(int32 EntryPoint);
};

#endif
