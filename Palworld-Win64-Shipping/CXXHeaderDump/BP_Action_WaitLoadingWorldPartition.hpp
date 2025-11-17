#ifndef UE4SS_SDK_BP_Action_WaitLoadingWorldPartition_HPP
#define UE4SS_SDK_BP_Action_WaitLoadingWorldPartition_HPP

class UBP_Action_WaitLoadingWorldPartition_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FName flagName;
    double DelayTime;
    double DelayTimer;
    class APalPlayerCharacter* PlayerCharacter;
    double TimeoutTimer;
    bool IsLoaded;
    FVector WaitWPLocation;
    FTimerHandle TimerHandle;
    double forGroundTimer;
    double forWaterTimer;
    bool IsShortRayLength;
    bool bActionBreaked;
    FVector QueuedTimingLocation;

    void CheckDistanceAgainstQueueTimingLocation(bool& NeedCorrection);
    void Dev_GetStringOfActorLocationAndLoadingLocation(FString& String_ActorLocationAndLoadingLocation);
    void CheckEndAction(double DeltaTime, bool& IsEnd);
    void IsWaterActor(class AActor* TargetActor, bool& IsWater);
    void CheckGround(TEnumAsByte<EGroundHitResult>& Result);
    void CanTimeOut(bool& CanTimeOut);
    void RequestWaitWorldPartition();
    void CheckLoadLocationDistance(double Threshold, bool& IsFarEnough);
    void GetFadeOutParameter(class UPalHUDDispatchParameter_FadeWidget*& NewParam);
    void ResetCamera();
    void SetMoveDisable(bool Disable);
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void OnCompleteLoad();
    void OnBreakAction();
    void OnQueueAction();
    void ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition(int32 EntryPoint);
};

#endif
