#ifndef UE4SS_SDK_BP_AIActionRideCall_HPP
#define UE4SS_SDK_BP_AIActionRideCall_HPP

class UBP_AIActionRideCall_C : public UBP_AIAction_CallBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    double NotifyTimer;
    double Const_NotifyInterval;

    void CheckWallRaycast(bool& HitWall);
    void CanRide(bool& CanRide);
    void DoRide(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIActionRideCall(int32 EntryPoint);
};

#endif
