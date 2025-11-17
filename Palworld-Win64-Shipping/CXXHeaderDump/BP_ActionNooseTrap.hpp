#ifndef UE4SS_SDK_BP_ActionNooseTrap_HPP
#define UE4SS_SDK_BP_ActionNooseTrap_HPP

class UBP_ActionNooseTrap_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector CurrentRopePos;
    FVector RopeFixPos;
    double Timer;
    FRotator CurrentRopeRotate;
    double RopeLength;
    double CurrentSwingAngle;
    double Const_MaxSwingAngle;
    bool IsUpMode;
    FVector CurrentSwingDirection;
    double CurrentAngleVelocity_Rad;
    double CurrentMechanicalEnergy;
    double Const_Mass;
    double Const_Gravity;
    double CurrentAngle_Rad;
    double Const_StartMechanicalEnergy;
    double temp_DeltaTime;
    double Const_InitSpeed;
    double CurrentAngleSpeed;
    double Const_Drag;
    FVector TargetSwingDirection;
    FVector PreRopePos;
    FTimerHandle FacialTimerHandle;
    bool IsDead;
    double Const_DefaultRopeLength;
    bool IsTeleportFlag;

    void OnDead(FPalDeadInfo DeadInfo);
    void ReturnDefaultFacial();
    void ChangeFacial(EPalFacialEyeType Facial);
    void GetWorldVelocity_ByDeadEnd(FVector& Velocity);
    void CalcDamageToSpeed(int32 Damage, double& Speed);
    void FindMontage(class UAnimMontage*& Montage);
    void OnFinishAcion();
    void OnStatusAdd(const class UPalStatusComponent* StatusComponent, EPalStatusID statusID, class UPalStatusBase* Status);
    void LerpSwingDirection();
    void CalcAngularAcceleration_Swing(double& AngleAccel);
    void UpdateAngle_Swing();
    void CalcAngleVelocity();
    void OnDamage(FPalDamageResult Info);
    void UpdateRopePos_Swing();
    void FixCharacterToRopePos();
    void UpdateRopePosToUp();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void OnBeginAction();
    void ExecuteUbergraph_BP_ActionNooseTrap(int32 EntryPoint);
};

#endif
