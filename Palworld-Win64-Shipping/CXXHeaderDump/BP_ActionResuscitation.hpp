#ifndef UE4SS_SDK_BP_ActionResuscitation_HPP
#define UE4SS_SDK_BP_ActionResuscitation_HPP

class UBP_ActionResuscitation_C : public UBP_ActionSimpleMonoMontage_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    double Timer;
    FName flagName;
    FTimerHandle CurrentTimer;
    class UWBP_GameOver_Rescue_C* RescueWidget;

    void EndResuscitation(bool IsReviveRequest);
    void FlagControll(bool isDisable);
    void TickAction(float DeltaTime);
    void OnBeginAction();
    void OnEndAction();
    void OnRescueUpdate();
    void ExecuteUbergraph_BP_ActionResuscitation(int32 EntryPoint);
};

#endif
