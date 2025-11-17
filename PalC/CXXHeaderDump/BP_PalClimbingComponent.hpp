#ifndef UE4SS_SDK_BP_PalClimbingComponent_HPP
#define UE4SS_SDK_BP_PalClimbingComponent_HPP

class UBP_PalClimbingComponent_C : public UPalClimbingComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool IsClimbing;
    FVector PrevClimbDirection;
    bool CanClimbing;
    TEnumAsByte<ETraceTypeQuery> Const_RayChannel;
    FName flagName;
    double DownRayCancelTimer;
    TEnumAsByte<EDrawDebugTrace> DebugType;
    bool TraceComplex;
    double Const_ForwardRayLength;
    double Const_UpRayLength;
    double Const_RightRayLength;
    double Const_OffsetBack;
    bool UpAtTopMode;
    class UCurveVector* UpToTopMoveCurve;
    double UpToTopTimer;
    FVector UpToTopFromPlayer;
    FVector UpToTopStartPos;
    bool IsEnding;

    void IsDisableClimbingArea(bool& Disable);
    void UpdateClimbBuff();
    void FindLadder(bool& IsHit, TArray<class AActor*>& OutActors);
    void CanClimbingStart(bool& Result);
    bool TryClimbAfterGrappling();
    void RayCollisionCheckEndExtrusion();
    void Cancel Ray Check();
    void ResetPlayerCollision();
    void StartClimbByNetwork();
    void IsStaminaEmpty(bool& Empty);
    void UpToTopUpdate(double DeltaTime);
    void CheckUpToTop(bool& Finish);
    void GetSelfLocationWithOffsetBack(FVector& selfPos);
    void LineTrace_ForClimbComponent(FVector StartPos, FVector EndPos, bool& IsHit, FHitResult& HitResult);
    void HandIK();
    void ObjectName_DebugShow();
    void DiagonalRayCast(bool IsUp, bool IsRight, bool& IsHit, FVector& HitPoint);
    void GroundCheck(bool& IsGround);
    void UpRayCast(bool IsUp, bool& IsHit, FVector& HitPos);
    void CenterRayCast(bool& IsHit, FVector& HitPos, FHitResult& OutHit);
    void SphereTrace_ForClimbComponent(FVector StartPos, FVector EndPos, bool& IsHit, FHitResult& HitResult);
    void SideRayCast(bool IsRight, bool& IsHit, FVector& HitPoint);
    void UpdateActorRotate(FVector CheckDirection);
    void RequestEndClimbing();
    void ClimbingMainUpdate(double DeltaTime);
    void OnEndClimbing();
    void StartClimbing(FHitResult HitResult);
    void CheckClimbingMode();
    void OnNotifyEnd_085F600F42305157C1A542B1D6539EF9(FName NotifyName);
    void OnNotifyBegin_085F600F42305157C1A542B1D6539EF9(FName NotifyName);
    void OnInterrupted_085F600F42305157C1A542B1D6539EF9(FName NotifyName);
    void OnBlendOut_085F600F42305157C1A542B1D6539EF9(FName NotifyName);
    void OnCompleted_085F600F42305157C1A542B1D6539EF9(FName NotifyName);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnMovementModeChangedDelegate_イベント_0(class UPalCharacterMovementComponent* Component, TEnumAsByte<EMovementMode> PrevMode, TEnumAsByte<EMovementMode> NewMode, EPalCharacterMovementCustomMode PrevCustomMode, EPalCharacterMovementCustomMode NewCustomMode);
    void DelayCanClimbing();
    void カスタムイベント_OnDead(FPalDeadInfo DeadInfo);
    void ForceCancelClimb();
    void ClimbUpAtTopEvent();
    void StartClimb(const FHitResult& Result);
    void ExecuteUbergraph_BP_PalClimbingComponent(int32 EntryPoint);
};

#endif
