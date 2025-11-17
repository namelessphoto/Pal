#ifndef UE4SS_SDK_MovieRenderPipelineCore_HPP
#define UE4SS_SDK_MovieRenderPipelineCore_HPP

#include "MovieRenderPipelineCore_enums.hpp"

struct FMoviePipelineCameraCutInfo
{
};

struct FMoviePipelineFilenameResolveParams
{
    int32 FrameNumber;
    int32 FrameNumberShot;
    int32 FrameNumberRel;
    int32 FrameNumberShotRel;
    FString CameraNameOverride;
    FString ShotNameOverride;
    int32 ZeroPadFrameNumberCount;
    bool bForceRelativeFrameNumbers;
    FString FileNameOverride;
    TMap<class FString, class FString> FileNameFormatOverrides;
    TMap<class FString, class FString> FileMetadata;
    FDateTime InitializationTime;
    int32 InitializationVersion;
    class UMoviePipelineExecutorJob* Job;
    class UMoviePipelineExecutorShot* ShotOverride;
    int32 AdditionalFrameNumberOffset;

};

struct FMoviePipelineFormatArgs
{
    TMap<class FString, class FString> FilenameArguments;
    TMap<class FString, class FString> FileMetadata;
    class UMoviePipelineExecutorJob* InJob;

};

struct FMoviePipelineOutputData
{
    class UMoviePipeline* Pipeline;
    class UMoviePipelineExecutorJob* Job;
    bool bSuccess;
    TArray<FMoviePipelineShotOutputData> ShotData;

};

struct FMoviePipelinePassIdentifier
{
    FString Name;
    FString CameraName;

};

struct FMoviePipelineRenderPassOutputData
{
    TArray<FString> FilePaths;

};

struct FMoviePipelineSegmentWorkMetrics
{
    FString SegmentName;
    int32 OutputFrameIndex;
    int32 TotalOutputFrameCount;
    int32 OutputSubSampleIndex;
    int32 TotalSubSampleCount;
    int32 EngineWarmUpFrameIndex;
    int32 TotalEngineWarmUpFrameCount;

};

struct FMoviePipelineShotOutputData
{
    TWeakObjectPtr<class UMoviePipelineExecutorShot> Shot;
    TMap<class FMoviePipelinePassIdentifier, class FMoviePipelineRenderPassOutputData> RenderPassData;

};

struct FMoviePipelineSidecarCamera
{
    FGuid BindingId;
    FString Name;

};

class AMoviePipelineGameMode : public AGameModeBase
{
};

class UMoviePipeline : public UObject
{
    FMoviePipelineOnMoviePipelineFinishedDelegate OnMoviePipelineFinishedDelegate;
    void MoviePipelineFinished(class UMoviePipeline* MoviePipeline, bool bFatalError);
    FMoviePipelineOnMoviePipelineWorkFinishedDelegate OnMoviePipelineWorkFinishedDelegate;
    void MoviePipelineWorkFinished(FMoviePipelineOutputData Results);
    FMoviePipelineOnMoviePipelineShotWorkFinishedDelegate OnMoviePipelineShotWorkFinishedDelegate;
    void MoviePipelineWorkFinished(FMoviePipelineOutputData Results);
    class UMoviePipelineCustomTimeStep* CustomTimeStep;
    class UEngineCustomTimeStep* CachedPrevCustomTimeStep;
    class ULevelSequence* TargetSequence;
    class ALevelSequenceActor* LevelSequenceActor;
    class UMovieRenderDebugWidget* DebugWidget;
    class UTexture* PreviewTexture;
    TSubclassOf<class UMovieRenderDebugWidget> DebugWidgetClass;
    class UMoviePipelineExecutorJob* CurrentJob;

    void Shutdown(bool bError);
    void SetInitializationTime(const FDateTime& InDateTime);
    void RequestShutdown(bool bIsError);
    void OnMoviePipelineFinishedImpl();
    bool IsShutdownRequested();
    void Initialize(class UMoviePipelineExecutorJob* InJob);
    class UTexture* GetPreviewTexture();
    class UMoviePipelineMasterConfig* GetPipelineMasterConfig();
    FDateTime GetInitializationTime();
    class UMoviePipelineExecutorJob* GetCurrentJob();
};

class UMoviePipelineAntiAliasingSetting : public UMoviePipelineSetting
{
    int32 SpatialSampleCount;
    int32 TemporalSampleCount;
    bool bOverrideAntiAliasing;
    TEnumAsByte<EAntiAliasingMethod> AntiAliasingMethod;
    int32 RenderWarmUpCount;
    bool bUseCameraCutForWarmUp;
    int32 EngineWarmUpCount;
    bool bRenderWarmUpFrames;

};

class UMoviePipelineBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void UpdateJobShotListFromSequence(class ULevelSequence* InSequence, class UMoviePipelineExecutorJob* InJob, bool& bShotsChanged);
    int32 ResolveVersionNumber(FMoviePipelineFilenameResolveParams InParams);
    void ResolveFilenameFormatArguments(FString InFormatString, const FMoviePipelineFilenameResolveParams& InParams, FString& OutFinalPath, FMoviePipelineFormatArgs& OutMergedFormatArgs);
    class UMoviePipelineQueue* LoadManifestFileFromString(FString InManifestFilePath);
    EMovieRenderPipelineState GetPipelineState(const class UMoviePipeline* InPipeline);
    void GetOverallSegmentCounts(const class UMoviePipeline* InMoviePipeline, int32& OutCurrentIndex, int32& OutTotalCount);
    void GetOverallOutputFrames(const class UMoviePipeline* InMoviePipeline, int32& OutCurrentIndex, int32& OutTotalCount);
    FText GetMoviePipelineEngineChangelistLabel(const class UMoviePipeline* InMoviePipeline);
    FTimecode GetMasterTimecode(const class UMoviePipeline* InMoviePipeline);
    FFrameNumber GetMasterFrameNumber(const class UMoviePipeline* InMoviePipeline);
    FString GetMapPackageName(class UMoviePipelineExecutorJob* InJob);
    FText GetJobName(class UMoviePipeline* InMoviePipeline);
    FDateTime GetJobInitializationTime(const class UMoviePipeline* InMoviePipeline);
    FText GetJobAuthor(class UMoviePipeline* InMoviePipeline);
    bool GetEstimatedTimeRemaining(const class UMoviePipeline* InPipeline, FTimespan& OutEstimate);
    FIntPoint GetEffectiveOutputResolution(class UMoviePipelineMasterConfig* InMasterConfig, class UMoviePipelineExecutorShot* InPipelineExecutorShot);
    FTimecode GetCurrentShotTimecode(const class UMoviePipeline* InMoviePipeline);
    FFrameNumber GetCurrentShotFrameNumber(const class UMoviePipeline* InMoviePipeline);
    class ULevelSequence* GetCurrentSequence(const class UMoviePipeline* InMoviePipeline);
    FMoviePipelineSegmentWorkMetrics GetCurrentSegmentWorkMetrics(const class UMoviePipeline* InMoviePipeline);
    EMovieRenderShotState GetCurrentSegmentState(class UMoviePipeline* InMoviePipeline);
    void GetCurrentSegmentName(class UMoviePipeline* InMoviePipeline, FText& OutOuterName, FText& OutInnerName);
    float GetCurrentFocusDistance(const class UMoviePipeline* InMoviePipeline);
    float GetCurrentFocalLength(const class UMoviePipeline* InMoviePipeline);
    class UMoviePipelineExecutorShot* GetCurrentExecutorShot(const class UMoviePipeline* InMoviePipeline);
    float GetCurrentAperture(const class UMoviePipeline* InMoviePipeline);
    float GetCompletionPercentage(const class UMoviePipeline* InPipeline);
    class UMoviePipelineSetting* FindOrGetDefaultSettingForShot(TSubclassOf<class UMoviePipelineSetting> InSettingType, const class UMoviePipelineMasterConfig* InMasterConfig, const class UMoviePipelineExecutorShot* InShot);
    class UMovieSceneSequence* DuplicateSequence(class UObject* Outer, class UMovieSceneSequence* InSequence);
};

class UMoviePipelineCameraSetting : public UMoviePipelineSetting
{
    EMoviePipelineShutterTiming ShutterTiming;
    float OverscanPercentage;
    bool bRenderAllCameras;

};

class UMoviePipelineColorSetting : public UMoviePipelineSetting
{
    FOpenColorIODisplayConfiguration OCIOConfiguration;
    bool bDisableToneCurve;

};

class UMoviePipelineCommandLineEncoder : public UMoviePipelineSetting
{
    FString FileNameFormatOverride;
    EMoviePipelineEncodeQuality Quality;
    FString AdditionalCommandLineArgs;
    bool bDeleteSourceFiles;
    bool bSkipEncodeOnRenderCanceled;
    bool bWriteEachFrameDuration;

};

class UMoviePipelineCommandLineEncoderSettings : public UDeveloperSettings
{
    FString ExecutablePath;
    FText CodecHelpText;
    FString VideoCodec;
    FString AudioCodec;
    FString OutputFileExtension;
    FString CommandLineFormat;
    FString VideoInputStringFormat;
    FString AudioInputStringFormat;
    FString EncodeSettings_Low;
    FString EncodeSettings_Med;
    FString EncodeSettings_High;
    FString EncodeSettings_Epic;

};

class UMoviePipelineConfigBase : public UObject
{
    FString DisplayName;
    TArray<class UMoviePipelineSetting*> Settings;

    void RemoveSetting(class UMoviePipelineSetting* InSetting);
    TArray<class UMoviePipelineSetting*> GetUserSettings();
    TArray<class UMoviePipelineSetting*> FindSettingsByClass(TSubclassOf<class UMoviePipelineSetting> InClass, const bool bIncludeDisabledSettings);
    class UMoviePipelineSetting* FindSettingByClass(TSubclassOf<class UMoviePipelineSetting> InClass, const bool bIncludeDisabledSettings);
    class UMoviePipelineSetting* FindOrAddSettingByClass(TSubclassOf<class UMoviePipelineSetting> InClass, const bool bIncludeDisabledSettings);
    void CopyFrom(class UMoviePipelineConfigBase* InConfig);
};

class UMoviePipelineCustomTimeStep : public UEngineCustomTimeStep
{
};

class UMoviePipelineDebugSettings : public UMoviePipelineSetting
{
    bool bWriteAllSamples;
    bool bCaptureFramesWithRenderDoc;
    int32 CaptureFrame;
    bool bCaptureUnrealInsightsTrace;

};

class UMoviePipelineExecutorBase : public UObject
{
    FMoviePipelineExecutorBaseOnExecutorFinishedDelegate OnExecutorFinishedDelegate;
    void OnMoviePipelineExecutorFinished(class UMoviePipelineExecutorBase* PipelineExecutor, bool bSuccess);
    FMoviePipelineExecutorBaseOnExecutorErroredDelegate OnExecutorErroredDelegate;
    void OnMoviePipelineExecutorErrored(class UMoviePipelineExecutorBase* PipelineExecutor, class UMoviePipeline* PipelineWithError, bool bIsFatal, FText ErrorText);
    FMoviePipelineExecutorBaseSocketMessageRecievedDelegate SocketMessageRecievedDelegate;
    void MoviePipelineSocketMessageRecieved(FString Message);
    FMoviePipelineExecutorBaseHTTPResponseRecievedDelegate HTTPResponseRecievedDelegate;
    void MoviePipelineHttpResponseRecieved(int32 RequestIndex, int32 ResponseCode, FString Message);
    TSubclassOf<class UMovieRenderDebugWidget> DebugWidgetClass;
    FString UserData;
    TSubclassOf<class UMoviePipeline> TargetPipelineClass;

    void SetStatusProgress(const float InProgress);
    void SetStatusMessage(FString InStatus);
    void SetMoviePipelineClass(UClass* InPipelineClass);
    bool SendSocketMessage(FString InMessage);
    int32 SendHTTPRequest(FString InURL, FString InVerb, FString InMessage, const TMap<class FString, class FString>& InHeaders);
    void OnExecutorFinishedImpl();
    void OnExecutorErroredImpl(class UMoviePipeline* ErroredPipeline, bool bFatal, FText ErrorReason);
    void OnBeginFrame();
    bool IsSocketConnected();
    bool IsRendering();
    float GetStatusProgress();
    FString GetStatusMessage();
    void Execute(class UMoviePipelineQueue* InPipelineQueue);
    void DisconnectSocket();
    bool ConnectSocket(FString InHostName, const int32 InPort);
    void CancelCurrentJob();
    void CancelAllJobs();
};

class UMoviePipelineExecutorJob : public UObject
{
    FString JobName;
    FSoftObjectPath Sequence;
    FSoftObjectPath Map;
    FString Author;
    FString Comment;
    TArray<class UMoviePipelineExecutorShot*> ShotInfo;
    FString UserData;
    FString StatusMessage;
    float StatusProgress;
    bool bIsConsumed;
    class UMoviePipelineMasterConfig* Configuration;
    TSoftObjectPtr<UMoviePipelineMasterConfig> PresetOrigin;
    bool bEnabled;

    void SetStatusProgress(const float InProgress);
    void SetStatusMessage(FString InStatus);
    void SetSequence(FSoftObjectPath InSequence);
    void SetPresetOrigin(class UMoviePipelineMasterConfig* InPreset);
    void SetIsEnabled(const bool bInEnabled);
    void SetConsumed(const bool bInConsumed);
    void SetConfiguration(class UMoviePipelineMasterConfig* InPreset);
    void OnDuplicated();
    bool IsEnabled();
    bool IsConsumed();
    float GetStatusProgress();
    FString GetStatusMessage();
    class UMoviePipelineMasterConfig* GetPresetOrigin();
    class UMoviePipelineMasterConfig* GetConfiguration();
};

class UMoviePipelineExecutorShot : public UObject
{
    bool bEnabled;
    FString OuterName;
    FString InnerName;
    TArray<FMoviePipelineSidecarCamera> SidecarCameras;
    float Progress;
    FString StatusMessage;
    class UMoviePipelineShotConfig* ShotOverrideConfig;
    TSoftObjectPtr<UMoviePipelineShotConfig> ShotOverridePresetOrigin;

    bool ShouldRender();
    void SetStatusProgress(const float InProgress);
    void SetStatusMessage(FString InStatus);
    void SetShotOverridePresetOrigin(class UMoviePipelineShotConfig* InPreset);
    void SetShotOverrideConfiguration(class UMoviePipelineShotConfig* InPreset);
    float GetStatusProgress();
    FString GetStatusMessage();
    class UMoviePipelineShotConfig* GetShotOverridePresetOrigin();
    class UMoviePipelineShotConfig* GetShotOverrideConfiguration();
    FString GetCameraName(int32 InCameraIndex);
    class UMoviePipelineShotConfig* AllocateNewShotOverrideConfig(TSubclassOf<class UMoviePipelineShotConfig> InConfigType);
};

class UMoviePipelineFCPXMLExporter : public UMoviePipelineOutputBase
{
    FString FileNameFormatOverride;
    FCPXMLExportDataSource DataSource;

};

class UMoviePipelineGameOverrideSetting : public UMoviePipelineSetting
{
    TSubclassOf<class AGameModeBase> GameModeOverride;
    bool bCinematicQualitySettings;
    EMoviePipelineTextureStreamingMethod TextureStreaming;
    bool bUseLODZero;
    bool bDisableHLODs;
    bool bUseHighQualityShadows;
    int32 ShadowDistanceScale;
    float ShadowRadiusThreshold;
    bool bOverrideViewDistanceScale;
    int32 ViewDistanceScale;
    bool bFlushGrassStreaming;
    bool bFlushStreamingManagers;
    bool bOverrideVirtualTextureFeedbackFactor;
    int32 VirtualTextureFeedbackFactor;

};

class UMoviePipelineHighResSetting : public UMoviePipelineSetting
{
    int32 TileCount;
    float TextureSharpnessBias;
    float OverlapRatio;
    bool bOverrideSubSurfaceScattering;
    int32 BurleySampleCount;
    bool bAllocateHistoryPerTile;

};

class UMoviePipelineInProcessExecutor : public UMoviePipelineLinearExecutorBase
{
    bool bUseCurrentLevel;

};

class UMoviePipelineInProcessExecutorSettings : public UDeveloperSettings
{
    bool bCloseEditor;
    FString AdditionalCommandLineArguments;
    FString InheritedCommandLineArguments;
    int32 InitialDelayFrameCount;

};

class UMoviePipelineLinearExecutorBase : public UMoviePipelineExecutorBase
{
    class UMoviePipelineQueue* Queue;
    class UMoviePipeline* ActiveMoviePipeline;

};

class UMoviePipelineMasterConfig : public UMoviePipelineConfigBase
{
    TMap<class FString, class UMoviePipelineShotConfig*> PerShotConfigMapping;
    class UMoviePipelineOutputSetting* OutputSetting;
    TArray<class UMoviePipelineSetting*> TransientSettings;

    void InitializeTransientSettings();
    TArray<class UMoviePipelineSetting*> GetTransientSettings();
    FFrameRate GetEffectiveFrameRate(const class ULevelSequence* InSequence);
    TArray<class UMoviePipelineSetting*> GetAllSettings(const bool bIncludeDisabledSettings, const bool bIncludeTransientSettings);
};

class UMoviePipelineOutputBase : public UMoviePipelineSetting
{
};

class UMoviePipelineOutputSetting : public UMoviePipelineSetting
{
    FDirectoryPath OutputDirectory;
    FString FilenameFormat;
    FIntPoint OutputResolution;
    bool bUseCustomFrameRate;
    FFrameRate OutputFrameRate;
    bool bOverrideExistingOutput;
    int32 HandleFrameCount;
    int32 OutputFrameStep;
    bool bUseCustomPlaybackRange;
    int32 CustomStartFrame;
    int32 CustomEndFrame;
    int32 VersionNumber;
    bool bAutoVersion;
    int32 ZeroPadFrameNumbers;
    int32 FrameNumberOffset;
    bool bFlushDiskWritesPerShot;

};

class UMoviePipelinePythonHostExecutor : public UMoviePipelineExecutorBase
{
    TSubclassOf<class UMoviePipelinePythonHostExecutor> ExecutorClass;
    class UMoviePipelineQueue* PipelineQueue;
    class UWorld* LastLoadedWorld;

    void OnMapLoad(class UWorld* InWorld);
    class UWorld* GetLastLoadedWorld();
    void ExecuteDelayed(class UMoviePipelineQueue* InPipelineQueue);
};

class UMoviePipelineQueue : public UObject
{
    TArray<class UMoviePipelineExecutorJob*> Jobs;

    void SetJobIndex(class UMoviePipelineExecutorJob* InJob, int32 Index);
    TArray<class UMoviePipelineExecutorJob*> GetJobs();
    class UMoviePipelineExecutorJob* DuplicateJob(class UMoviePipelineExecutorJob* InJob);
    void DeleteJob(class UMoviePipelineExecutorJob* InJob);
    void DeleteAllJobs();
    void CopyFrom(class UMoviePipelineQueue* InQueue);
    class UMoviePipelineExecutorJob* AllocateNewJob(TSubclassOf<class UMoviePipelineExecutorJob> InJobType);
};

class UMoviePipelineQueueEngineSubsystem : public UEngineSubsystem
{
    FMoviePipelineQueueEngineSubsystemOnRenderFinished OnRenderFinished;
    void MoviePipelineWorkFinished(FMoviePipelineOutputData Results);
    class UMoviePipelineExecutorBase* ActiveExecutor;
    class UMoviePipelineQueue* CurrentQueue;

    void SetConfiguration(TSubclassOf<class UMovieRenderDebugWidget> InProgressWidgetClass, const bool bRenderPlayerViewport);
    void RenderQueueWithExecutorInstance(class UMoviePipelineExecutorBase* InExecutor);
    class UMoviePipelineExecutorBase* RenderQueueWithExecutor(TSubclassOf<class UMoviePipelineExecutorBase> InExecutorType);
    void RenderJob(class UMoviePipelineExecutorJob* InJob);
    bool IsRendering();
    class UMoviePipelineQueue* GetQueue();
    class UMoviePipelineExecutorBase* GetActiveExecutor();
    class UMoviePipelineExecutorJob* AllocateJob(class ULevelSequence* InSequence);
};

class UMoviePipelineRenderPass : public UMoviePipelineSetting
{
};

class UMoviePipelineSetting : public UObject
{
    TWeakObjectPtr<class UMoviePipeline> CachedPipeline;
    bool bEnabled;

    void SetIsEnabled(bool bInEnabled);
    bool IsEnabled();
    void BuildNewProcessCommandLineArgs(TArray<FString>& InOutUnrealURLParams, TArray<FString>& InOutCommandLineArgs, TArray<FString>& InOutDeviceProfileCvars, TArray<FString>& InOutExecCmds);
    void BuildNewProcessCommandLine(FString& InOutUnrealURLParams, FString& InOutCommandLineArgs);
};

class UMoviePipelineSetting_BlueprintBase : public UMoviePipelineSetting
{
    FText CategoryText;
    bool bIsValidOnMaster;
    bool bIsValidOnShots;
    bool bCanBeDisabled;

    void ReceiveTeardownForPipelineImpl(class UMoviePipeline* InPipeline);
    void ReceiveSetupForPipelineImpl(class UMoviePipeline* InPipeline);
    FMoviePipelineFormatArgs ReceiveGetFormatArguments(FMoviePipelineFormatArgs& InOutFormatArgs);
    void OnEngineTickBeginFrame();
};

class UMoviePipelineShotConfig : public UMoviePipelineConfigBase
{
};

class UMoviePipelineVideoOutputBase : public UMoviePipelineOutputBase
{
};

class UMoviePipelineViewFamilySetting : public UMoviePipelineSetting
{
};

class UMovieRenderDebugWidget : public UUserWidget
{

    void OnInitializedForPipeline(class UMoviePipeline* ForPipeline);
};

#endif
