#ifndef UE4SS_SDK_BP_ActionSpawnOtomoPal_HPP
#define UE4SS_SDK_BP_ActionSpawnOtomoPal_HPP

class UBP_ActionSpawnOtomoPal_C : public UPalActionBase
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
    void TickAction(float DeltaTime);
    void OnEndAction();
    void OnBeginAction();
    void ExecuteUbergraph_BP_ActionSpawnOtomoPal(int32 EntryPoint);
};

#endif
