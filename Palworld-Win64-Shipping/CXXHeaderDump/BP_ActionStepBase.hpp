#ifndef UE4SS_SDK_BP_ActionStepBase_HPP
#define UE4SS_SDK_BP_ActionStepBase_HPP

class UBP_ActionStepBase_C : public UPalActionBase
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
    EPalTraceTypeQuery Const_TraceChannel_Before;
    EPalTraceTypeQuery Const_TraceChannel;
    TEnumAsByte<EDrawDebugTrace> Const_DrawDebugType;
    double CapsuleHeightHalf_Max;
    double CapsuleHeightHalf_Min;
    double Timer_forCapsule;
    double ActionTimer;

    void CheckOtherCharacter(FVector NextPlayerPos, bool& IsStop);
    void UpdateCapsuleHeight(double DetaTime);
    void LayCheck_ForSweepMove(FVector DesiredPos, FVector& ResultActorPos, bool& IsHit);
    void StepMove_Location(double DeltaTime);
    void DisableShooter(bool Disable);
    void CheckFrontHight(double DeltaTime, bool& CanThrough);
    void CheckEndAction();
    bool CanNextActionCancel();
    void DisableMovement(bool Disable);
    bool CanGainSP();
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void EndStep();
    void OnEndStepWhenCrouch();
    void ExecuteUbergraph_BP_ActionStepBase(int32 EntryPoint);
};

#endif
