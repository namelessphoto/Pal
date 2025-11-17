#ifndef UE4SS_SDK_BP_PalCaptureBodyBase_HPP
#define UE4SS_SDK_BP_PalCaptureBodyBase_HPP

class ABP_PalCaptureBodyBase_C : public APalSphereBodyBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalSoundPlayerComponent_C* SoundPlayer;
    class USceneComponent* DefaultSceneRoot;
    FBP_PalCaptureBodyBase_COnSuccessedCapture OnSuccessedCapture;
    void OnSuccessedCapture(class UPalIndividualCharacterHandle* targetHandle);
    FBP_PalCaptureBodyBase_COnFailedCapture OnFailedCapture;
    void OnFailedCapture(class UPalIndividualCharacterHandle* targetHandle, TEnumAsByte<EPalSphereCaptureFailedReason> failedReason);
    class UPalIndividualCharacterHandle* targetHandle;
    int32 CaptureLevel;
    FBP_PalCaptureBodyBase_COnPassingCapturePhase OnPassingCapturePhase;
    void OnPassingCapturePhase(int32 PhaseCount, class UPalIndividualCharacterHandle* targetHandle);
    FBP_PalCaptureBodyBase_COnShakeBody OnShakeBody;
    void OnShakeBody(class ABP_PalCaptureBodyBase_C* shakedBody);
    bool isSneakBonus;
    bool isIntoBall;
    FBP_PalCaptureBodyBase_COnBouncedBody OnBouncedBody;
    void OnBouncedBody(TEnumAsByte<E_PalCaptureSphereBouncedReason> reasonType, class UPalIndividualCharacterHandle* targetHandle);
    bool IsRobberyBall;
    double NonTargetTimer;
    bool IsCriticalCapture;

    void GetCriticalCaptureLevel(int32& NewParam);
    void SetCriticalFlag(bool bCritical);
    void GetOwnerCharacterOrRiderCharacter(class AActor*& Character);
    void SetSneakBonusFlagToALL(bool isSneak);
    void SetTargetHandle(class UPalIndividualCharacterHandle* targetHandle);
    void SetupInServer(class APalCharacter* TargetCharacter);
    void SetupToALL(class APalCharacter* Target);
    void SetCaptureLevelToALL(int32 Level);
    void Get Is Into Ball(bool& IntoBall);
    void SetIsIntoBall(bool IntoBall);
    class USceneComponent* GetAkOwnerComponent();
    void PlaySound(FPalDataTableRowName_SoundID ID);
    void IsSneakBonusEnabled(bool& Enabled);
    void SetSneakBonusFlag(bool flag);
    void Setup(class APalCharacter* TargetCharacter);
    void GetTargetActor(class APalCharacter*& TargetActor);
    void GetCaptureLevel(int32& Level);
    void SetCaptureLevel(int32 NewParam);
    void GetTargetHandle(class UPalIndividualCharacterHandle*& targetHandle);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void SetTargetIDToALL(FPalInstanceID TargetId);
    void SetCaptureLevelInternal(int32 Level);
    void SetSneakBonusFlagInternal(bool isSneak);
    void SetupInternal(class APalCharacter* TargetCharacter);
    void SetCriticalCaptureFlagInternal(bool bIsCritical);
    void ExecuteUbergraph_BP_PalCaptureBodyBase(int32 EntryPoint);
    void OnBouncedBody__DelegateSignature(TEnumAsByte<E_PalCaptureSphereBouncedReason> reasonType, class UPalIndividualCharacterHandle* targetHandle);
    void OnShakeBody__DelegateSignature(class ABP_PalCaptureBodyBase_C* shakedBody);
    void OnPassingCapturePhase__DelegateSignature(int32 PhaseCount, class UPalIndividualCharacterHandle* targetHandle);
    void OnFailedCapture__DelegateSignature(class UPalIndividualCharacterHandle* targetHandle, TEnumAsByte<EPalSphereCaptureFailedReason> failedReason);
    void OnSuccessedCapture__DelegateSignature(class UPalIndividualCharacterHandle* targetHandle);
};

#endif
