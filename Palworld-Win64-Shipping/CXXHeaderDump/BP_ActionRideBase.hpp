#ifndef UE4SS_SDK_BP_ActionRideBase_HPP
#define UE4SS_SDK_BP_ActionRideBase_HPP

class UBP_ActionRideBase_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool IsSuccess;
    double ToFinalTime;
    double InterpTimer;
    class UPalRiderComponent* RiderComponent;
    class UPalRideMarkerComponent* RideMarker;
    FTransform StartTransform;
    FTransform JunctionPoint;
    double ToJunctionTime;
    TEnumAsByte<ERideActionState> State;
    FRotator StartMonsterRotator;
    FRotator EndMonsterRotator;
    double MonsterRotatorInterpTime;
    double MonsterRotatorInterpTimer;
    bool IsCancelMonsterRotation;
    FVector StartMeshLocation;
    FVector EndMeshLocation;
    FTransform RightJunctionPoint;
    FTransform LeftJunctionPoint;
    class UAnimMontage* FrontRideAnimation;
    class UAnimMontage* RearRideAnimation;
    class UAnimMontage* LeftRideAnimation;
    class UAnimMontage* RightRideAnimation;
    class UAnimMontage* RideAnimation;
    FTransform FrontJunctionPoint;
    FTransform RearJunctionPoint;
    class UAkAudioEvent* RideStartSoundAKEvent;
    class UAkAudioEvent* RideCompleteSoundAKEvent;
    class UPalShooterComponent* ShooterComponent;
    FName flagName;

    void CheckRidingCompleted();
    void PlayRideCompleteSound();
    void PlayRideStartSound();
    void Update Ground Ray Cast(class APalCharacter* Rider);
    void CheckDirection(class AActor* RideTarget, TEnumAsByte<ERideActionDirection>& Direction);
    void DebugDrawLocationLocation(FVector Location);
    void GetLocalLocationOnFloor(FVector NativeLocation, FVector& Location);
    void InterpMonsterRotation(double DeltaTime);
    void SetupRider(class APalCharacter* Rider, bool& IsSuccess);
    void InterpRiderLocation(double DeltaTime);
    void OnNotifyEnd_CD532E1C42E1BEC6059709A5FB6CCC91(FName NotifyName);
    void OnNotifyBegin_CD532E1C42E1BEC6059709A5FB6CCC91(FName NotifyName);
    void OnInterrupted_CD532E1C42E1BEC6059709A5FB6CCC91(FName NotifyName);
    void OnBlendOut_CD532E1C42E1BEC6059709A5FB6CCC91(FName NotifyName);
    void OnCompleted_CD532E1C42E1BEC6059709A5FB6CCC91(FName NotifyName);
    void OnBeginAction();
    void OnBreakAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_ActionRideBase(int32 EntryPoint);
};

#endif
