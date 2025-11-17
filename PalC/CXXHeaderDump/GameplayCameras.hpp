#ifndef UE4SS_SDK_GameplayCameras_HPP
#define UE4SS_SDK_GameplayCameras_HPP

#include "GameplayCameras_enums.hpp"

struct FActiveCameraAnimationInfo
{
    class UCameraAnimationSequence* Sequence;
    FCameraAnimationParams Params;
    FCameraAnimationHandle Handle;
    class UCameraAnimationSequencePlayer* Player;
    class UCameraAnimationSequenceCameraStandIn* CameraStandIn;
    float EaseInCurrentTime;
    float EaseOutCurrentTime;
    bool bIsEasingIn;
    bool bIsEasingOut;

};

struct FCameraAnimationHandle
{
};

struct FCameraAnimationParams
{
    float PlayRate;
    float Scale;
    ECameraAnimationEasingType EaseInType;
    float EaseInDuration;
    ECameraAnimationEasingType EaseOutType;
    float EaseOutDuration;
    bool bLoop;
    bool bRandomStartTime;
    float DurationOverride;
    ECameraAnimationPlaySpace PlaySpace;
    FRotator UserPlaySpaceRot;

};

struct FFOscillator
{
    float Amplitude;
    float Frequency;
    TEnumAsByte<EInitialOscillatorOffset> InitialOffset;
    EOscillatorWaveform Waveform;

};

struct FPerlinNoiseShaker
{
    float Amplitude;
    float Frequency;

};

struct FROscillator
{
    FFOscillator Pitch;
    FFOscillator Yaw;
    FFOscillator Roll;

};

struct FVOscillator
{
    FFOscillator X;
    FFOscillator Y;
    FFOscillator Z;

};

struct FWaveOscillator
{
    float Amplitude;
    float Frequency;
    EInitialWaveOscillatorOffsetType InitialOffsetType;

};

class UCameraAnimationCameraModifier : public UCameraModifier
{
    TArray<FActiveCameraAnimationInfo> ActiveAnimations;
    uint16 NextInstanceSerialNumber;

    void StopCameraAnimation(const FCameraAnimationHandle& Handle, bool bImmediate);
    void StopAllCameraAnimationsOf(class UCameraAnimationSequence* Sequence, bool bImmediate);
    void StopAllCameraAnimations(bool bImmediate);
    FCameraAnimationHandle PlayCameraAnimation(class UCameraAnimationSequence* Sequence, FCameraAnimationParams Params);
    bool IsCameraAnimationActive(const FCameraAnimationHandle& Handle);
    class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromPlayerController(const class APlayerController* PlayerController);
    class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromID(const class UObject* WorldContextObject, int32 ControllerId);
    class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifier(const class UObject* WorldContextObject, int32 PlayerIndex);
};

class UCompositeCameraShakePattern : public UCameraShakePattern
{
    TArray<class UCameraShakePattern*> ChildPatterns;

};

class UConstantCameraShakePattern : public USimpleCameraShakePattern
{
    FVector LocationOffset;
    FRotator RotationOffset;

};

class UDefaultCameraShakeBase : public UCameraShakeBase
{
};

class UGameplayCamerasFunctionLibrary : public UBlueprintFunctionLibrary
{

    ECameraShakePlaySpace Conv_CameraShakePlaySpace(ECameraAnimationPlaySpace CameraAnimationPlaySpace);
    ECameraAnimationPlaySpace Conv_CameraAnimationPlaySpace(ECameraShakePlaySpace CameraShakePlaySpace);
    class UCameraAnimationCameraModifier* Conv_CameraAnimationCameraModifier(class APlayerCameraManager* PlayerCameraManager);
};

class UGameplayCamerasSubsystem : public UWorldSubsystem
{

    void StopCameraAnimation(class APlayerController* PlayerController, const FCameraAnimationHandle& Handle, bool bImmediate);
    void StopAllCameraAnimationsOf(class APlayerController* PlayerController, class UCameraAnimationSequence* Sequence, bool bImmediate);
    void StopAllCameraAnimations(class APlayerController* PlayerController, bool bImmediate);
    FCameraAnimationHandle PlayCameraAnimation(class APlayerController* PlayerController, class UCameraAnimationSequence* Sequence, FCameraAnimationParams Params);
    bool IsCameraAnimationActive(class APlayerController* PlayerController, const FCameraAnimationHandle& Handle);
};

class ULegacyCameraShake : public UCameraShakeBase
{
    float OscillationDuration;
    float OscillationBlendInTime;
    float OscillationBlendOutTime;
    FROscillator RotOscillation;
    FVOscillator LocOscillation;
    FFOscillator FOVOscillation;
    float AnimPlayRate;
    float AnimScale;
    float AnimBlendInTime;
    float AnimBlendOutTime;
    float RandomAnimSegmentDuration;
    class UCameraAnimationSequence* AnimSequence;
    uint8 bRandomAnimSegment;
    float OscillatorTimeRemaining;
    class USequenceCameraShakePattern* SequenceShakePattern;

    class ULegacyCameraShake* StartLegacyCameraShakeFromSource(class APlayerCameraManager* PlayerCameraManager, TSubclassOf<class ULegacyCameraShake> ShakeClass, class UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);
    class ULegacyCameraShake* StartLegacyCameraShake(class APlayerCameraManager* PlayerCameraManager, TSubclassOf<class ULegacyCameraShake> ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);
    void ReceiveStopShake(bool bImmediately);
    void ReceivePlayShake(float Scale);
    bool ReceiveIsFinished();
    void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, const FMinimalViewInfo& POV, FMinimalViewInfo& ModifiedPOV);
};

class ULegacyCameraShakeFunctionLibrary : public UBlueprintFunctionLibrary
{

    class ULegacyCameraShake* Conv_LegacyCameraShake(class UCameraShakeBase* CameraShake);
};

class ULegacyCameraShakePattern : public UCameraShakePattern
{
};

class UPerlinNoiseCameraShakePattern : public USimpleCameraShakePattern
{
    float LocationAmplitudeMultiplier;
    float LocationFrequencyMultiplier;
    FPerlinNoiseShaker X;
    FPerlinNoiseShaker Y;
    FPerlinNoiseShaker Z;
    float RotationAmplitudeMultiplier;
    float RotationFrequencyMultiplier;
    FPerlinNoiseShaker Pitch;
    FPerlinNoiseShaker Yaw;
    FPerlinNoiseShaker Roll;
    FPerlinNoiseShaker FOV;

};

class USimpleCameraShakePattern : public UCameraShakePattern
{
    float Duration;
    float BlendInTime;
    float BlendOutTime;

};

class UTestCameraShake : public UCameraShakeBase
{
};

class UWaveOscillatorCameraShakePattern : public USimpleCameraShakePattern
{
    float LocationAmplitudeMultiplier;
    float LocationFrequencyMultiplier;
    FWaveOscillator X;
    FWaveOscillator Y;
    FWaveOscillator Z;
    float RotationAmplitudeMultiplier;
    float RotationFrequencyMultiplier;
    FWaveOscillator Pitch;
    FWaveOscillator Yaw;
    FWaveOscillator Roll;
    FWaveOscillator FOV;

};

#endif
