#ifndef UE4SS_SDK_BP_ActionAirDashBase_HPP
#define UE4SS_SDK_BP_ActionAirDashBase_HPP

class UBP_ActionAirDashBase_C : public UPalActionMovementModeBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FName flagName;
    double StepTime;
    class UCurveFloat* StepCurve;
    double Timer;
    EPalGeneralMontageType StepType;
    bool CanEndStep;
    class UAnimMontage* Montage;
    bool CanCrouchCancel;
    double CrouchCancelTime;
    class UCurveFloat* StepCurve_Location;
    FVector StartLocation;
    FVector MoveDirection;
    double Const_MoveDistance;
    double CurrentFallingSpeed;
    double Const_FallingAcceleration;
    TArray<class AActor*> IgnoreActors;
    double Const_MaxFallingSpeed;
    double Const_MaxAirborneTime;
    double CurrentAirboneTime;
    TEnumAsByte<ETraceTypeQuery> Const_TraceChannel;
    TEnumAsByte<EDrawDebugTrace> Const_DrawDebugType;
    double CapsuleHeightHalf_Max;
    double CapsuleHeightHalf_Min;
    double Timer_forCapsule;
    double ActionTimer;
    FVector LastVelocity;
    bool bCancelled;

    bool IsApplyFinishVelocityOnEndAction();
    FVector K2_Async_GetFinishVelocity(FVector BaseVelocity);
    FVector K2_Async_GetVelocity(FVector BaseVelocity);
    void CheckOtherCharacter(FVector NextPlayerPos, bool& IsStop);
    void LayCheck_ForSweepMove(FVector DesiredPos, FVector& ResultActorPos, bool& IsHit);
    void StepMove_Location(double DeltaTime);
    void DisableShooter(bool Disable);
    void CheckFrontHight(double DeltaTime, bool& CanThrough);
    void CheckEndAction();
    bool CanNextActionCancel();
    void DisableMovement(bool Disable);
    bool CanGainSP();
    void OnEndAction();
    void EndStep();
    void K2_Async_BeginMovementMode();
    void K2_Async_EndMovementMode();
    void K2_Async_UpdateVelocity(float InDeltaTime);
    void OnBeginAction();
    void ExecuteUbergraph_BP_ActionAirDashBase(int32 EntryPoint);
};

#endif
