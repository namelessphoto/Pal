#ifndef UE4SS_SDK_BP_ActionSleepPlayerBed_HPP
#define UE4SS_SDK_BP_ActionSleepPlayerBed_HPP

class UBP_ActionSleepPlayerBed_C : public UPalAction_SleepPlayerBed
{
    FPointerToUberGraphFrame UberGraphFrame;
    FTransform PlayerInitTF;
    bool AutoCancelAble;
    TArray<class UPalIndividualCharacterHandle*> SleepOtomoList;
    class UAkAudioEvent* FadeOutSound;
    class UAkAudioEvent* FadeInSound;
    double FadeInterval;
    bool IsNightSkipStarted;
    double FadeInTime;
    double FadeOutTime;
    float SleepEndDelay;
    bool IsSleeping;
    FName flagName;
    bool GetupDelay;
    float GetupPlayerCameraAngleX;
    float GetupPlayerCameraAngleZ;
    class ABP_PlayerBedCamera_C* BedCamera;
    class AActor* PrevViewTarget;
    bool IsFade;

    void OnEndSpectate();
    void OnSleepLoopStart();
    void UnbindInteractEvent(class APalPlayerController* LocalPlayerController);
    void BindInteractEvent(class APalPlayerController* LocalPlayerController);
    void GetMontageSleepLoop(class UAnimMontage*& Montage);
    void FullRecoveryHPAll();
    void Detach Bed Camera();
    void AttachBedCamera();
    void DisableInteract(bool Disable);
    void DisableLocalPlayerInput(bool Disable);
    void DisableShooter(bool Disable);
    void Disable Movement(bool Disable);
    bool IsSleepLooping();
    void SleepEndOtomo();
    void SleepStartOtomo();
    void GetMontage(EPalGeneralMontageType GeneralMontage, class UAnimMontage*& Montage);
    void IsPartyFullRecoverd(bool& Completed);
    void Movement Set Active(bool Active);
    void OnNotifyEnd_EE77CE3D437B303B4A7DF5B8A225C124(FName NotifyName);
    void OnNotifyBegin_EE77CE3D437B303B4A7DF5B8A225C124(FName NotifyName);
    void OnInterrupted_EE77CE3D437B303B4A7DF5B8A225C124(FName NotifyName);
    void OnBlendOut_EE77CE3D437B303B4A7DF5B8A225C124(FName NotifyName);
    void OnCompleted_EE77CE3D437B303B4A7DF5B8A225C124(FName NotifyName);
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void OnEndAction();
    void OnSleepEndProcess();
    void OnPreNightSkip();
    void OnSleepLoop();
    void OnGetupPlayerBedFromModel();
    void TriggerGetup();
    void OnDeath_FadeOut();
    void ExecuteUbergraph_BP_ActionSleepPlayerBed(int32 EntryPoint);
};

#endif
