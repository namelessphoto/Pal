#ifndef UE4SS_SDK_BP_LampBase_HPP
#define UE4SS_SDK_BP_LampBase_HPP

class ABP_LampBase_C : public APalPlayerLampBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    TSoftObjectPtr<APPSkyCreator> SkyCreatorCache;
    FTimerHandle TimerHandle;
    FName IgnoreTimerLightCurveFlagKey;

    void OnTimer_CheckLightEnable();
    void CheckLightEnable(bool bForceCallEvent);
    void ReceiveBeginPlay();
    void OnChangeCrouchDelegate_イベント_0(class UPalCharacterMovementComponent* Component, bool IsInCrouch);
    void ExecuteUbergraph_BP_LampBase(int32 EntryPoint);
};

#endif
