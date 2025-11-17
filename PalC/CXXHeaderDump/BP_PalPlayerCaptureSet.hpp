#ifndef UE4SS_SDK_BP_PalPlayerCaptureSet_HPP
#define UE4SS_SDK_BP_PalPlayerCaptureSet_HPP

class ABP_PalPlayerCaptureSet_C : public APalUIInframeRenderer
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URectLightComponent* RectLight;
    class UPointLightComponent* PointLight_Rim_Up;
    class UPointLightComponent* PointLight_Rim_BackL;
    class UPointLightComponent* PointLight_Rim_BackR;
    class UPointLightComponent* PointLight_Main;
    class UChildActorComponent* ChildActor;
    class USceneCaptureComponent2D* SceneCaptureComponent2D;
    class USceneComponent* DefaultSceneRoot;
    FBP_PalPlayerCaptureSet_COnCompletedSetup OnCompletedSetup;
    void OnCompletedSetup();
    FTimerHandle delayHandle;
    FRotator DefaultRotation;
    FRotator TargetRotation;
    FVector DefaultCameraPosition;
    double RotateInterpolationRate;

    void ResetCameraLocation();
    void UpdateShowOnlyActors();
    void Add Camera Relative Location(FVector AddLocation);
    void ResetRotation();
    void AddRotation(FRotator AddRotator);
    void GetDisplayCharacterActor(class ABP_Player_ForUI_C*& UIDisplayPlayer);
    void RequestMyPlayer();
    void RequestByCharacterMakeInfo(FPalPlayerDataCharacterMakeInfo MakeInfo);
    void CancelDelayHandle();
    void DelayCompleteSetup();
    void SetupDelayHandle();
    void AdjustCamera(double TargetActorBoundSize);
    void Reset();
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_PalPlayerCaptureSet(int32 EntryPoint);
    void OnCompletedSetup__DelegateSignature();
};

#endif
