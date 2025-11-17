#ifndef UE4SS_SDK_CinematicCamera_HPP
#define UE4SS_SDK_CinematicCamera_HPP

#include "CinematicCamera_enums.hpp"

struct FCameraFilmbackSettings
{
    float SensorWidth;
    float SensorHeight;
    float SensorAspectRatio;

};

struct FCameraFocusSettings
{
    ECameraFocusMethod FocusMethod;
    float ManualFocusDistance;
    FCameraTrackingFocusSettings TrackingFocusSettings;
    uint8 bSmoothFocusChanges;
    float FocusSmoothingInterpSpeed;
    float FocusOffset;

};

struct FCameraLensSettings
{
    float MinFocalLength;
    float MaxFocalLength;
    float MinFStop;
    float MaxFStop;
    float MinimumFocusDistance;
    float SqueezeFactor;
    int32 DiaphragmBladeCount;

};

struct FCameraLookatTrackingSettings
{
    uint8 bEnableLookAtTracking;
    uint8 bDrawDebugLookAtTrackingPosition;
    float LookAtTrackingInterpSpeed;
    TSoftObjectPtr<AActor> ActorToTrack;
    FVector RelativeOffset;
    uint8 bAllowRoll;

};

struct FCameraTrackingFocusSettings
{
    TSoftObjectPtr<AActor> ActorToTrack;
    FVector RelativeOffset;
    uint8 bDrawDebugTrackingFocusPoint;

};

struct FNamedFilmbackPreset
{
    FString Name;
    FCameraFilmbackSettings FilmbackSettings;

};

struct FNamedLensPreset
{
    FString Name;
    FCameraLensSettings LensSettings;

};

struct FNamedPlateCropPreset
{
    FString Name;
    FPlateCropSettings CropSettings;

};

struct FPlateCropSettings
{
    float AspectRatio;

};

class ACameraRig_Crane : public AActor
{
    float CranePitch;
    float CraneYaw;
    float CraneArmLength;
    bool bLockMountPitch;
    bool bLockMountYaw;
    class USceneComponent* TransformComponent;
    class USceneComponent* CraneYawControl;
    class USceneComponent* CranePitchControl;
    class USceneComponent* CraneCameraMount;

};

class ACameraRig_Rail : public AActor
{
    float CurrentPositionOnRail;
    bool bLockOrientationToRail;
    class USceneComponent* TransformComponent;
    class USplineComponent* RailSplineComponent;
    class USceneComponent* RailCameraMount;

    class USplineComponent* GetRailSplineComponent();
};

class ACineCameraActor : public ACameraActor
{
    FCameraLookatTrackingSettings LookatTrackingSettings;

    class UCineCameraComponent* GetCineCameraComponent();
};

class UCineCameraComponent : public UCameraComponent
{
    FCameraFilmbackSettings FilmbackSettings;
    FCameraFilmbackSettings Filmback;
    FCameraLensSettings LensSettings;
    FCameraFocusSettings FocusSettings;
    FPlateCropSettings CropSettings;
    float CurrentFocalLength;
    float CurrentAperture;
    float CurrentFocusDistance;
    uint8 bOverride_CustomNearClippingPlane;
    float CustomNearClippingPlane;
    TArray<FNamedFilmbackPreset> FilmbackPresets;
    TArray<FNamedLensPreset> LensPresets;
    FString DefaultFilmbackPresetName;
    FString DefaultFilmbackPreset;
    FString DefaultLensPresetName;
    float DefaultLensFocalLength;
    float DefaultLensFStop;

    void SetLensSettings(const FCameraLensSettings& NewLensSettings);
    void SetLensPresetByName(FString InPresetName);
    void SetFocusSettings(const FCameraFocusSettings& NewFocusSettings);
    void SetFilmbackPresetByName(FString InPresetName);
    void SetFilmback(const FCameraFilmbackSettings& NewFilmback);
    void SetCurrentFocalLength(float InFocalLength);
    void SetCurrentAperture(const float NewCurrentAperture);
    void SetCropSettings(const FPlateCropSettings& NewCropSettings);
    void SetCropPresetByName(FString InPresetName);
    float GetVerticalFieldOfView();
    TArray<FNamedLensPreset> GetLensPresetsCopy();
    FString GetLensPresetName();
    float GetHorizontalFieldOfView();
    TArray<FNamedFilmbackPreset> GetFilmbackPresetsCopy();
    FString GetFilmbackPresetName();
    FString GetDefaultFilmbackPresetName();
    FString GetCropPresetName();
};

class UCineCameraSettings : public UDeveloperSettings
{
    FString DefaultLensPresetName;
    float DefaultLensFocalLength;
    float DefaultLensFStop;
    TArray<FNamedLensPreset> LensPresets;
    FString DefaultFilmbackPreset;
    TArray<FNamedFilmbackPreset> FilmbackPresets;
    FString DefaultCropPresetName;
    TArray<FNamedPlateCropPreset> CropPresets;

    void SetLensPresets(const TArray<FNamedLensPreset>& InLensPresets);
    void SetFilmbackPresets(const TArray<FNamedFilmbackPreset>& InFilmbackPresets);
    void SetDefaultLensPresetName(const FString InDefaultLensPresetName);
    void SetDefaultLensFStop(const float InDefaultLensFStop);
    void SetDefaultLensFocalLength(const float InDefaultLensFocalLength);
    void SetDefaultFilmbackPreset(const FString InDefaultFilmbackPreset);
    void SetDefaultCropPresetName(const FString InDefaultCropPresetName);
    void SetCropPresets(const TArray<FNamedPlateCropPreset>& InCropPresets);
    TArray<FString> GetLensPresetNames();
    bool GetLensPresetByName(const FString PresetName, FCameraLensSettings& LensSettings);
    TArray<FString> GetFilmbackPresetNames();
    bool GetFilmbackPresetByName(const FString PresetName, FCameraFilmbackSettings& FilmbackSettings);
    TArray<FString> GetCropPresetNames();
    bool GetCropPresetByName(const FString PresetName, FPlateCropSettings& CropSettings);
    class UCineCameraSettings* GetCineCameraSettings();
};

#endif
