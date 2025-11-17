#ifndef UE4SS_SDK_BP_DebugMissWaza_HPP
#define UE4SS_SDK_BP_DebugMissWaza_HPP

class UBP_DebugMissWaza_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    double Scale;
    double YawSpeed;
    double Sequence;
    double Yaw;
    double tempDeltaTime;
    FVector Pos;
    FVector ShootModeCenterPos;
    double ConstShootInterval;
    double ShootTimer;

    void Shoot();
    void SetTransform();
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_DebugMissWaza(int32 EntryPoint);
};

#endif
