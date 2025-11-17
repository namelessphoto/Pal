#ifndef UE4SS_SDK_LiveLinkInterface_HPP
#define UE4SS_SDK_LiveLinkInterface_HPP

#include "LiveLinkInterface_enums.hpp"

struct FCachedSubjectFrame
{
};

struct FLiveLinkAnimationFrameData : public FLiveLinkBaseFrameData
{
    TArray<FTransform> Transforms;

};

struct FLiveLinkBaseBlueprintData
{
};

struct FLiveLinkBaseFrameData
{
    FLiveLinkWorldTime WorldTime;
    FLiveLinkMetaData MetaData;
    TArray<float> PropertyValues;

};

struct FLiveLinkBaseStaticData
{
    TArray<FName> PropertyNames;

};

struct FLiveLinkBasicBlueprintData : public FLiveLinkBaseBlueprintData
{
    FLiveLinkBaseStaticData StaticData;
    FLiveLinkBaseFrameData FrameData;

};

struct FLiveLinkCameraBlueprintData : public FLiveLinkBaseBlueprintData
{
    FLiveLinkCameraStaticData StaticData;
    FLiveLinkCameraFrameData FrameData;

};

struct FLiveLinkCameraFrameData : public FLiveLinkTransformFrameData
{
    float FieldOfView;
    float AspectRatio;
    float FocalLength;
    float Aperture;
    float FocusDistance;
    ELiveLinkCameraProjectionMode ProjectionMode;

};

struct FLiveLinkCameraStaticData : public FLiveLinkTransformStaticData
{
    bool bIsFieldOfViewSupported;
    bool bIsAspectRatioSupported;
    bool bIsFocalLengthSupported;
    bool bIsProjectionModeSupported;
    float FilmBackWidth;
    float FilmBackHeight;
    bool bIsApertureSupported;
    bool bIsFocusDistanceSupported;
    bool bIsDepthOfFieldSupported;

};

struct FLiveLinkCurveConversionSettings
{
    TMap<class FString, class FSoftObjectPath> CurveConversionAssetMap;

};

struct FLiveLinkCurveElement
{
    FName CurveName;
    float CurveValue;

};

struct FLiveLinkFrameData
{
    TArray<FTransform> Transforms;
    TArray<FLiveLinkCurveElement> CurveElements;
    FLiveLinkWorldTime WorldTime;
    FLiveLinkMetaData MetaData;

};

struct FLiveLinkFrameRate : public FFrameRate
{
};

struct FLiveLinkInterpolationSettings
{
    bool bUseInterpolation;
    float InterpolationOffset;

};

struct FLiveLinkLightBlueprintData : public FLiveLinkBaseBlueprintData
{
    FLiveLinkLightStaticData StaticData;
    FLiveLinkLightFrameData FrameData;

};

struct FLiveLinkLightFrameData : public FLiveLinkTransformFrameData
{
    float Temperature;
    float Intensity;
    FColor LightColor;
    float InnerConeAngle;
    float OuterConeAngle;
    float AttenuationRadius;
    float SourceRadius;
    float SoftSourceRadius;
    float SourceLength;

};

struct FLiveLinkLightStaticData : public FLiveLinkTransformStaticData
{
    bool bIsTemperatureSupported;
    bool bIsIntensitySupported;
    bool bIsLightColorSupported;
    bool bIsInnerConeAngleSupported;
    bool bIsOuterConeAngleSupported;
    bool bIsAttenuationRadiusSupported;
    bool bIsSourceLenghtSupported;
    bool bIsSourceRadiusSupported;
    bool bIsSoftSourceRadiusSupported;

};

struct FLiveLinkMetaData
{
    TMap<class FName, class FString> StringMetaData;
    FQualifiedFrameTime SceneTime;

};

struct FLiveLinkRefSkeleton
{
    TArray<FName> BoneNames;
    TArray<int32> BoneParents;

};

struct FLiveLinkSkeletonStaticData : public FLiveLinkBaseStaticData
{
    TArray<FName> BoneNames;
    TArray<int32> BoneParents;

};

struct FLiveLinkSourceBufferManagementSettings
{
    bool bValidEngineTimeEnabled;
    float ValidEngineTime;
    float EngineTimeOffset;
    double EngineTimeClockOffset;
    double SmoothEngineTimeOffset;
    bool bGenerateSubFrame;
    FFrameRate DetectedFrameRate;
    bool bUseTimecodeSmoothLatest;
    FFrameRate SourceTimecodeFrameRate;
    bool bValidTimecodeFrameEnabled;
    int32 ValidTimecodeFrame;
    float TimecodeFrameOffset;
    double TimecodeClockOffset;
    int32 LatestOffset;
    int32 MaxNumberOfFrameToBuffered;
    bool bKeepAtLeastOneFrame;

};

struct FLiveLinkSourceDebugInfo
{
    FLiveLinkSubjectName SubjectName;
    int32 SnapshotIndex;
    int32 NumberOfBufferAtSnapshot;

};

struct FLiveLinkSourceHandle
{
};

struct FLiveLinkSourcePreset
{
    FGuid Guid;
    class ULiveLinkSourceSettings* Settings;
    FText SourceType;

};

struct FLiveLinkSubjectKey
{
    FGuid Source;
    FLiveLinkSubjectName SubjectName;

};

struct FLiveLinkSubjectName
{
    FName Name;

};

struct FLiveLinkSubjectPreset
{
    FLiveLinkSubjectKey Key;
    TSubclassOf<class ULiveLinkRole> Role;
    class ULiveLinkSubjectSettings* Settings;
    class ULiveLinkVirtualSubject* VirtualSubject;
    bool bEnabled;

};

struct FLiveLinkSubjectRepresentation
{
    FLiveLinkSubjectName Subject;
    TSubclassOf<class ULiveLinkRole> Role;

};

struct FLiveLinkTime
{
    double WorldTime;
    FQualifiedFrameTime SceneTime;

};

struct FLiveLinkTimeCode : public FLiveLinkTimeCode_Base_DEPRECATED
{
};

struct FLiveLinkTimeCode_Base_DEPRECATED
{
    int32 Seconds;
    int32 Frames;
    FLiveLinkFrameRate FrameRate;

};

struct FLiveLinkTimeSynchronizationSettings
{
    FFrameRate FrameRate;
    FFrameNumber FrameOffset;

};

struct FLiveLinkTransform
{
};

struct FLiveLinkTransformBlueprintData : public FLiveLinkBaseBlueprintData
{
    FLiveLinkTransformStaticData StaticData;
    FLiveLinkTransformFrameData FrameData;

};

struct FLiveLinkTransformFrameData : public FLiveLinkBaseFrameData
{
    FTransform Transform;

};

struct FLiveLinkTransformStaticData : public FLiveLinkBaseStaticData
{
    bool bIsLocationSupported;
    bool bIsRotationSupported;
    bool bIsScaleSupported;

};

struct FLiveLinkWorldTime
{
    double Time;
    double Offset;

};

struct FSubjectFrameHandle : public FLiveLinkBaseBlueprintData
{
};

struct FSubjectMetadata
{
    TMap<class FName, class FString> StringMetaData;
    FTimecode SceneTimecode;
    FFrameRate SceneFramerate;

};

class ULiveLinkAnimationRole : public ULiveLinkBasicRole
{
};

class ULiveLinkBasicRole : public ULiveLinkRole
{
};

class ULiveLinkCameraRole : public ULiveLinkTransformRole
{
};

class ULiveLinkController : public UObject
{
};

class ULiveLinkCurveRemapSettings : public ULiveLinkSourceSettings
{
    FLiveLinkCurveConversionSettings CurveConversionSettings;

};

class ULiveLinkFrameInterpolationProcessor : public UObject
{
};

class ULiveLinkFramePreProcessor : public UObject
{
};

class ULiveLinkFrameTranslator : public UObject
{
};

class ULiveLinkLightRole : public ULiveLinkTransformRole
{
};

class ULiveLinkRole : public UObject
{
};

class ULiveLinkSourceFactory : public UObject
{
};

class ULiveLinkSourceSettings : public UObject
{
    ELiveLinkSourceMode Mode;
    FLiveLinkSourceBufferManagementSettings BufferSettings;
    FString ConnectionString;
    TSubclassOf<class ULiveLinkSourceFactory> Factory;

};

class ULiveLinkSubjectSettings : public UObject
{
    TArray<class ULiveLinkFramePreProcessor*> PreProcessors;
    class ULiveLinkFrameInterpolationProcessor* InterpolationProcessor;
    TArray<class ULiveLinkFrameTranslator*> Translators;
    TSubclassOf<class ULiveLinkRole> Role;
    FFrameRate FrameRate;
    bool bRebroadcastSubject;

};

class ULiveLinkTransformRole : public ULiveLinkBasicRole
{
};

class ULiveLinkVirtualSubject : public UObject
{
    TSubclassOf<class ULiveLinkRole> Role;
    TArray<FLiveLinkSubjectName> Subjects;
    TArray<class ULiveLinkFrameTranslator*> FrameTranslators;
    bool bRebroadcastSubject;

};

#endif
