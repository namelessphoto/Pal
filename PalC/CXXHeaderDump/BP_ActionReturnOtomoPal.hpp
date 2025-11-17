#ifndef UE4SS_SDK_BP_ActionReturnOtomoPal_HPP
#define UE4SS_SDK_BP_ActionReturnOtomoPal_HPP

class UBP_ActionReturnOtomoPal_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    double Const_PalDeactiveTime;
    double Const_PlayerMotionTime;
    FVector ToOtomoDirection;
    double Const_WalkSpeedRate;
    class UBP_ReturnOtomoSphereComponent_C* BallComponent;
    class UPalIndividualCharacterHandle* PreHandle;

    void CompleteDeactivateOtomo();
    void DeleteBallModel();
    void AttachBallModel();
    void SetFlags(bool Disable, double Speed);
    void SetupToOtomoDirection();
    void DeactivateOtomo();
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_ActionReturnOtomoPal(int32 EntryPoint);
};

#endif
