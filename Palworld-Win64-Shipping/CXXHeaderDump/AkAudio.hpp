#ifndef UE4SS_SDK_AkAudio_HPP
#define UE4SS_SDK_AkAudio_HPP

#include "AkAudio_enums.hpp"

struct FAKWaapiJsonObject
{
};

struct FAkAcousticSurface
{
    uint32 Texture;
    float Occlusion;
    FString Name;

};

struct FAkAcousticTextureParams
{
    FVector4 AbsorptionValues;

};

struct FAkAdvancedInitializationSettings
{
    uint32 IO_MemorySize;
    uint32 IO_Granularity;
    float TargetAutoStreamBufferLength;
    bool UseStreamCache;
    uint32 MaximumPinnedBytesInCache;
    bool EnableGameSyncPreparation;
    uint32 ContinuousPlaybackLookAhead;
    uint32 MonitorQueuePoolSize;
    uint32 MaximumHardwareTimeoutMs;
    bool DebugOutOfRangeCheckEnabled;
    float DebugOutOfRangeLimit;

};

struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : public FAkAdvancedInitializationSettings
{
    bool EnableMultiCoreRendering;
    uint32 MaxNumJobWorkers;
    uint32 JobWorkerMaxExecutionTimeUSec;

};

struct FAkAndroidAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
    uint32 AudioAPI;
    bool RoundFrameSizeToHardwareSize;
    bool UseLowLatencyMode;

};

struct FAkAudioSession
{
    EAkAudioSessionCategory AudioSessionCategory;
    uint32 AudioSessionCategoryOptions;
    EAkAudioSessionMode AudioSessionMode;

};

struct FAkBoolPropertyToControl
{
    FString ItemProperty;

};

struct FAkChannelMask
{
    int32 ChannelMask;

};

struct FAkCommonInitializationSettings
{
    uint32 MaximumNumberOfMemoryPools;
    uint32 MaximumNumberOfPositioningPaths;
    uint32 CommandQueueSize;
    uint32 SamplesPerFrame;
    FAkMainOutputSettings MainOutputSettings;
    float StreamingLookAheadRatio;
    uint16 NumberOfRefillsInVoice;
    FAkSpatialAudioSettings SpatialAudioSettings;

};

struct FAkCommonInitializationSettingsWithSampleRate : public FAkCommonInitializationSettings
{
    uint32 SampleRate;

};

struct FAkCommunicationSettings
{
    uint32 PoolSize;
    uint16 DiscoveryBroadcastPort;
    uint16 CommandPort;
    FString NetworkName;

};

struct FAkCommunicationSettingsWithCommSelection : public FAkCommunicationSettings
{
    EAkCommSystem CommunicationSystem;

};

struct FAkCommunicationSettingsWithSystemInitialization : public FAkCommunicationSettings
{
    bool InitializeSystemComms;

};

struct FAkExternalSourceInfo
{
    FString ExternalSrcName;
    AkCodecId CodecID;
    FString Filename;
    class UAkExternalMediaAsset* ExternalSourceAsset;
    bool IsStreamed;

};

struct FAkGeometryData
{
    TArray<FVector> Vertices;
    TArray<FAkAcousticSurface> Surfaces;
    TArray<FAkTriangle> Triangles;
    TArray<class UPhysicalMaterial*> ToOverrideAcousticTexture;
    TArray<class UPhysicalMaterial*> ToOverrideOcclusion;

};

struct FAkGeometrySurfaceOverride
{
    class UAkAcousticTexture* AcousticTexture;
    bool bEnableOcclusionOverride;
    float OcclusionValue;
    float SurfaceArea;

};

struct FAkGeometrySurfacePropertiesToMap
{
    TSoftObjectPtr<UAkAcousticTexture> AcousticTexture;
    float OcclusionValue;

};

struct FAkIOSAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
    uint32 uNumSpatialAudioPointSources;
    bool bVerboseSystemOutput;

};

struct FAkMacAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
    uint32 uNumSpatialAudioPointSources;
    bool bVerboseSystemOutput;

};

struct FAkMainOutputSettings
{
    FString AudioDeviceShareSet;
    uint32 DeviceID;
    EAkPanningRule PanningRule;
    EAkChannelConfigType ChannelConfigType;
    uint32 ChannelMask;
    uint32 NumberOfChannels;

};

struct FAkMidiCc : public FAkMidiEventBase
{
    EAkMidiCcValues Cc;
    uint8 Value;

};

struct FAkMidiChannelAftertouch : public FAkMidiEventBase
{
    uint8 Value;

};

struct FAkMidiEventBase
{
    EAkMidiEventType Type;
    uint8 Chan;

};

struct FAkMidiGeneric : public FAkMidiEventBase
{
    uint8 Param1;
    uint8 Param2;

};

struct FAkMidiNoteAftertouch : public FAkMidiEventBase
{
    uint8 Note;
    uint8 Value;

};

struct FAkMidiNoteOnOff : public FAkMidiEventBase
{
    uint8 Note;
    uint8 Velocity;

};

struct FAkMidiPitchBend : public FAkMidiEventBase
{
    uint8 ValueLsb;
    uint8 ValueMsb;
    int32 FullValue;

};

struct FAkMidiProgramChange : public FAkMidiEventBase
{
    uint8 ProgramNum;

};

struct FAkOutputSettings
{
    FString AudioDeviceShareSetName;
    int32 IdDevice;
    PanningRule PanRule;
    AkChannelConfiguration ChannelConfig;

};

struct FAkPS5AdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
    bool UseHardwareCodecLowLatencyMode;
    bool bVorbisHwAcceleration;
    bool bEnable3DAudioSync;
    uint32 uNumOperationsForHwMixing;
    bool bPlotQueueLevel;
    uint32 NumAudioOut2Ports;
    uint32 NumAudioOut2ObjectPorts;

};

struct FAkPropertyToControl
{
    FString ItemProperty;

};

struct FAkReverbDescriptor
{
    class UPrimitiveComponent* Primitive;

};

struct FAkSegmentInfo
{
    int32 CurrentPosition;
    int32 PreEntryDuration;
    int32 ActiveDuration;
    int32 PostExitDuration;
    int32 RemainingLookAheadTime;
    float BeatDuration;
    float BarDuration;
    float GridDuration;
    float GridOffset;

};

struct FAkSpatialAudioSettings
{
    uint32 MaxSoundPropagationDepth;
    float MovementThreshold;
    uint32 NumberOfPrimaryRays;
    uint32 ReflectionOrder;
    uint32 DiffractionOrder;
    uint32 MaxEmitterRoomAuxSends;
    uint32 DiffractionOnReflectionsOrder;
    float MaximumPathLength;
    float CPULimitPercentage;
    uint32 LoadBalancingSpread;
    bool EnableGeometricDiffractionAndTransmission;
    bool CalcEmitterVirtualPosition;

};

struct FAkSurfaceEdgeInfo
{
};

struct FAkSurfaceEdgeVerts
{
};

struct FAkSurfacePoly
{
    class UAkAcousticTexture* Texture;
    float Occlusion;
    bool EnableSurface;
    float SurfaceArea;

};

struct FAkTVOSAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
    uint32 uNumSpatialAudioPointSources;
    bool bVerboseSystemOutput;

};

struct FAkTriangle
{
    uint16 Point0;
    uint16 point1;
    uint16 point2;
    uint16 Surface;

};

struct FAkWaapiFieldNames
{
    FString FieldName;

};

struct FAkWaapiSubscriptionId
{
};

struct FAkWaapiUri
{
    FString Uri;

};

struct FAkWinGDKAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
    bool UseHeadMountedDisplayAudioDevice;
    uint32 uMaxSystemAudioObjects;

};

struct FAkWindowsAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
    bool UseHeadMountedDisplayAudioDevice;
    uint32 MaxSystemAudioObjects;

};

struct FAkWwiseItemToControl
{
    FAkWwiseObjectDetails ItemPicked;
    FString ItemPath;

};

struct FAkWwiseObjectDetails
{
    FString ItemName;
    FString ItemPath;
    FString ItemId;

};

struct FAkXSXAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
    uint16 MaximumNumberOfXMAVoices;
    bool UseHardwareCodecLowLatencyMode;
    uint16 MaximumNumberOfOpusVoices;
    uint32 uMaxSystemAudioObjects;
    uint32 MaxXdspStreams;
    uint32 MaxXdspAggregateStreamLength;
    bool EnableXdspOnLockhart;

};

struct FAkXSXApuHeapInitializationSettings
{
    uint32 CachedSize;
    uint32 NonCachedSize;

};

struct FAkXboxOneGDKAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
    uint16 MaximumNumberOfXMAVoices;
    bool UseHardwareCodecLowLatencyMode;

};

struct FAkXboxOneGDKApuHeapInitializationSettings
{
    uint32 CachedSize;
    uint32 NonCachedSize;

};

struct FMovieSceneAkAudioEventTemplate : public FMovieSceneEvalTemplate
{
    class UMovieSceneAkAudioEventSection* Section;

};

struct FMovieSceneAkAudioRTPCTemplate : public FMovieSceneEvalTemplate
{
    class UMovieSceneAkAudioRTPCSection* Section;

};

struct FMovieSceneFloatChannelSerializationHelper
{
    TEnumAsByte<ERichCurveExtrapolation> PreInfinityExtrap;
    TEnumAsByte<ERichCurveExtrapolation> PostInfinityExtrap;
    TArray<int32> Times;
    TArray<FMovieSceneFloatValueSerializationHelper> Values;
    float DefaultValue;
    bool bHasDefaultValue;

};

struct FMovieSceneFloatValueSerializationHelper
{
    float Value;
    TEnumAsByte<ERichCurveInterpMode> InterpMode;
    TEnumAsByte<ERichCurveTangentMode> TangentMode;
    FMovieSceneTangentDataSerializationHelper Tangent;

};

struct FMovieSceneTangentDataSerializationHelper
{
    float ArriveTangent;
    float LeaveTangent;
    TEnumAsByte<ERichCurveTangentWeightMode> TangentWeightMode;
    float ArriveTangentWeight;
    float LeaveTangentWeight;

};

struct FWwiseDecayAuxBusRow : public FTableRowBase
{
    float Decay;
    TSoftObjectPtr<UAkAuxBus> AuxBus;

};

struct FWwiseGeometrySurfacePropertiesRow : public FTableRowBase
{
    TSoftObjectPtr<UAkAcousticTexture> AcousticTexture;
    float TransmissionLoss;

};

class AAkAcousticPortal : public AVolume
{
    class UAkPortalComponent* Portal;
    AkAcousticPortalState InitialState;
    bool bRequiresStateMigration;

    AkAcousticPortalState GetCurrentState();
    void EnablePortal();
    void DisablePortal();
};

class AAkAmbientSound : public AActor
{
    class UAkAudioEvent* AkAudioEvent;
    class UAkComponent* AkComponent;
    bool StopWhenOwnerIsDestroyed;
    bool AutoPost;

    void StopAmbientSound();
    void StartAmbientSound();
};

class AAkReverbVolume : public AVolume
{
    bool bEnabled;
    class UAkAuxBus* AuxBus;
    FString AuxBusName;
    float SendLevel;
    float FadeRate;
    float Priority;
    class UAkLateReverbComponent* LateReverbComponent;

};

class AAkReverbZone : public AAkSpatialAudioVolume
{
};

class AAkSpatialAudioVolume : public AVolume
{
    class UAkSurfaceReflectorSetComponent* SurfaceReflectorSet;
    class UAkLateReverbComponent* LateReverb;
    class UAkRoomComponent* Room;

};

class AAkSpotReflector : public AActor
{
    class UAkAuxBus* EarlyReflectionAuxBus;
    FString EarlyReflectionAuxBusName;
    class UAkAcousticTexture* AcousticTexture;
    float DistanceScalingFactor;
    float Level;
    bool SameRoomOnly;
    bool EnableRoomOverride;
    class AActor* RoomOverride;

};

class IAkPlatformInitialisationSettingsBase : public IInterface
{
};

class UAkAcousticTexture : public UAkAudioType
{
    FWwiseAcousticTextureCookedData AcousticTextureCookedData;

};

class UAkAcousticTextureSetComponent : public USceneComponent
{
};

class UAkAndroidInitializationSettings : public UObject
{
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkAndroidAdvancedInitializationSettings AdvancedSettings;

    void MigrateMultiCoreRendering(bool NewValue);
};

class UAkAndroidPlatformInfo : public UAkPlatformInfo
{
};

class UAkAssetData : public UObject
{
};

class UAkAssetPlatformData : public UObject
{
    class UAkAssetData* CurrentAssetData;

};

class UAkAudioBank : public UAkAudioType
{
    bool AutoLoad;

};

class UAkAudioEvent : public UAkAudioType
{
    float MaxAttenuationRadius;
    bool IsInfinite;
    float MinimumDuration;
    float MaximumDuration;
    FWwiseLocalizedEventCookedData EventCookedData;
    class UAkAudioBank* RequiredBank;

    int32 PostOnGameObjectAndWait(class UAkGameObject* GameObject, const FLatentActionInfo LatentActionInfo);
    int32 PostOnGameObject(class UAkGameObject* GameObject, const FPostOnGameObjectDelegate& Delegate, const int32 CallbackMask);
    int32 PostOnComponentAndWait(class UAkComponent* Component, const bool bStopWhenAttachedObjectDestroyed, const FLatentActionInfo LatentActionInfo);
    int32 PostOnComponent(class UAkComponent* Component, const FPostOnComponentDelegate& Delegate, const int32 CallbackMask, const bool bStopWhenAttachedObjectDestroyed);
    int32 PostOnActorAndWait(const class AActor* Actor, const bool bStopWhenAttachedObjectDestroyed, const FLatentActionInfo LatentActionInfo);
    int32 PostOnActor(const class AActor* Actor, const FPostOnActorDelegate& Delegate, const int32 CallbackMask, const bool bStopWhenAttachedObjectDestroyed);
    int32 PostAtLocation(const FVector Location, const FRotator Orientation, const FPostAtLocationCallback& Callback, const int32 CallbackMask, const class UObject* WorldContextObject);
    int32 ExecuteAction(const AkActionOnEventType ActionType, const class AActor* Actor, const int32 PlayingID, const int32 TransitionDuration, const EAkCurveInterpolation FadeCurve);
};

class UAkAudioInputComponent : public UAkComponent
{

    int32 PostAssociatedAudioInputEvent();
};

class UAkAudioType : public UObject
{
    bool bAutoLoad;
    TArray<class UObject*> UserData;

    void UnloadData(bool bAsync);
    void LoadData();
    int32 GetWwiseShortID();
};

class UAkAuxBus : public UAkAudioType
{
    float MaxAttenuationRadius;
    FWwiseLocalizedAuxBusCookedData AuxBusCookedData;
    class UAkAudioBank* RequiredBank;

};

class UAkCallbackInfo : public UObject
{
    class UAkComponent* AkComponent;

};

class UAkCheckBox : public UContentWidget
{
    ECheckBoxState CheckedState;
    FAkCheckBoxCheckedStateDelegate CheckedStateDelegate;
    ECheckBoxState GetCheckBoxState();
    FCheckBoxStyle WidgetStyle;
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    bool IsFocusable;
    FAkBoolPropertyToControl ThePropertyToControl;
    FAkWwiseItemToControl ItemToControl;
    FAkCheckBoxAkOnCheckStateChanged AkOnCheckStateChanged;
    void AkOnCheckBoxComponentStateChanged(bool bIsChecked);
    FAkCheckBoxOnItemDropped OnItemDropped;
    void OnWwiseItemDropDetected(FGuid ItemDroppedID);
    FAkCheckBoxOnPropertyDropped OnPropertyDropped;
    void OnBoolPropertyDropDetected(FString PropertyDropped);

    void SetIsChecked(bool InIsChecked);
    void SetCheckedState(ECheckBoxState InCheckedState);
    void SetAkItemId(const FGuid& ItemId);
    void SetAkBoolProperty(FString ItemProperty);
    bool IsPressed();
    bool IsChecked();
    ECheckBoxState GetCheckedState();
    FString GetAkProperty();
    FGuid GetAkItemId();
};

class UAkComponent : public UAkGameObject
{
    bool bUseSpatialAudio;
    TEnumAsByte<EAkCollisionChannel> OcclusionCollisionChannel;
    float OcclusionRefreshInterval;
    bool EnableSpotReflectors;
    float OuterRadius;
    float InnerRadius;
    class UAkAuxBus* EarlyReflectionAuxBus;
    FString EarlyReflectionAuxBusName;
    float EarlyReflectionBusSendGain;
    bool DrawFirstOrderReflections;
    bool DrawSecondOrderReflections;
    bool DrawHigherOrderReflections;
    bool DrawDiffraction;
    bool StopWhenOwnerDestroyed;
    float AttenuationScalingFactor;
    bool bUseReverbVolumes;

    void SetSwitch(class UAkSwitchValue* SwitchValue, FString SwitchGroup, FString SwitchState);
    void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);
    void SetOutputBusVolume(float BusVolume);
    void SetListeners(const TArray<class UAkComponent*>& Listeners);
    void SetGameObjectRadius(float in_outerRadius, float in_innerRadius);
    void SetEnableSpotReflectors(bool in_enable);
    void SetEarlyReflectionsVolume(float SendVolume);
    void SetEarlyReflectionsAuxBus(FString AuxBusName);
    void SetAttenuationScalingFactor(float Value);
    void PostTrigger(class UAkTrigger* TriggerValue, FString Trigger);
    int32 PostAssociatedAkEventAndWaitForEnd(FLatentActionInfo LatentInfo);
    int32 PostAkEventAndWaitForEnd(class UAkAudioEvent* AkEvent, FLatentActionInfo LatentInfo);
    TEnumAsByte<ECollisionChannel> GetOcclusionCollisionChannel();
    float GetAttenuationRadius();
};

class UAkDPXInitializationSettings : public UAkPS5InitializationSettings
{
};

class UAkDurationCallbackInfo : public UAkEventCallbackInfo
{
    float Duration;
    float EstimatedDuration;
    int32 AudioNodeID;
    int32 MediaId;
    bool bStreaming;

};

class UAkEffectShareSet : public UAkAudioType
{
    FWwiseLocalizedShareSetCookedData ShareSetCookedData;

};

class UAkEventCallbackInfo : public UAkCallbackInfo
{
    int32 PlayingID;
    int32 EventId;

};

class UAkExternalMediaAsset : public UAkMediaAsset
{
};

class UAkFolder : public UAkAudioType
{
};

class UAkGameObject : public USceneComponent
{
    class UAkAudioEvent* AkAudioEvent;

    void Stop();
    void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs, FString RTPC);
    void PostAssociatedAkEventAsync(const class UObject* WorldContextObject, int32 CallbackMask, const FPostAssociatedAkEventAsyncPostEventCallback& PostEventCallback, FLatentActionInfo LatentInfo, int32& PlayingID);
    int32 PostAssociatedAkEvent(int32 CallbackMask, const FPostAssociatedAkEventPostEventCallback& PostEventCallback);
    void PostAkEventAsync(const class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, int32& PlayingID, int32 CallbackMask, const FPostAkEventAsyncPostEventCallback& PostEventCallback, FLatentActionInfo LatentInfo);
    int32 PostAkEvent(class UAkAudioEvent* AkEvent, int32 CallbackMask, const FPostAkEventPostEventCallback& PostEventCallback);
    void GetRTPCValue(class UAkRtpc* RTPCValue, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, FString RTPC, int32 PlayingID);
};

class UAkGameplayStatics : public UBlueprintFunctionLibrary
{

    void UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor);
    void UnloadInitBank();
    void StopProfilerCapture();
    void StopOutputCapture();
    void StopAllAmbientSounds(class UObject* WorldContextObject);
    void StopAll();
    void StopActor(class AActor* Actor);
    void StartProfilerCapture(FString Filename);
    void StartOutputCapture(FString Filename);
    void StartAllAmbientSounds(class UObject* WorldContextObject);
    class UAkComponent* SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, bool AutoPost, FString EventName, bool AutoDestroy);
    void SetSwitch(class UAkSwitchValue* SwitchValue, class AActor* Actor, FName SwitchGroup, FName SwitchState);
    void SetState(class UAkStateValue* StateValue, FName StateGroup, FName State);
    void SetSpeakerAngles(const TArray<float>& SpeakerAngles, float HeightAngle, FString DeviceShareSet);
    void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs, class AActor* Actor, FName RTPC);
    void SetReflectionsOrder(int32 Order, bool RefreshPaths);
    void SetPortalToPortalObstruction(class UAkPortalComponent* PortalComponent0, class UAkPortalComponent* PortalComponent1, float ObstructionValue);
    void SetPortalObstructionAndOcclusion(class UAkPortalComponent* PortalComponent, float ObstructionValue, float OcclusionValue);
    void SetPanningRule(PanningRule PanRule);
    bool SetOutputDeviceEffect(const FAkOutputDeviceID InDeviceID, const int32 InEffectIndex, const class UAkEffectShareSet* InEffectShareSet);
    void SetOutputBusVolume(float BusVolume, class AActor* Actor);
    void SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor);
    void SetNumberOfPrimaryRays(int32 InNbPrimaryRays);
    void SetMultiplePositions(class UAkComponent* GameObjectAkComponent, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType);
    void SetMultipleChannelMaskEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<FAkChannelMask> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType);
    void SetMultipleChannelEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<AkChannelConfiguration> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType);
    void SetMaxEmitterRoomAuxSends(int32 InMaxEmitterRoomAuxSends);
    void SetLoadBalancingSpread(int32 InNbFrames);
    void SetGameObjectToPortalObstruction(class UAkComponent* GameObjectAkComponent, class UAkPortalComponent* PortalComponent, float ObstructionValue);
    void SetDistanceProbe(class AActor* Listener, class AActor* DistanceProbe);
    void SetDiffractionOrder(int32 InDiffractionOrder, bool bInUpdatePaths);
    void SetCurrentAudioCultureAsync(FString AudioCulture, const FSetCurrentAudioCultureAsyncCompleted& Completed);
    void SetCurrentAudioCulture(FString AudioCulture, FLatentActionInfo LatentInfo, class UObject* WorldContextObject);
    bool SetBusEffectByName(const FString InBusName, const int32 InEffectIndex, const class UAkEffectShareSet* InEffectShareSet);
    bool SetBusEffectByID(const FAkUniqueID InBusID, const int32 InEffectIndex, const class UAkEffectShareSet* InEffectShareSet);
    void SetBusConfig(FString BusName, AkChannelConfiguration ChannelConfiguration);
    bool SetAuxBusEffect(const class UAkAuxBus* InAuxBus, const int32 InEffectIndex, const class UAkEffectShareSet* InEffectShareSet);
    bool SetActorMixerEffect(const FAkUniqueID InAudioNodeID, const int32 InEffectIndex, const class UAkEffectShareSet* InEffectShareSet);
    void ResetRTPCValue(class UAkRtpc* RTPCValue, int32 InterpolationTimeMs, class AActor* Actor, FName RTPC);
    void ReplaceMainOutput(const FAkOutputSettings& MainOutputSettings);
    void RemoveOutput(FAkOutputDeviceID in_OutputDeviceId);
    void PostTrigger(class UAkTrigger* TriggerValue, class AActor* Actor, FName Trigger);
    int32 PostEventAtLocation(class UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, class UObject* WorldContextObject);
    int32 PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, int32 CallbackMask, const FPostEventPostEventCallback& PostEventCallback, bool bStopWhenAttachedToDestroyed);
    int32 PostAndWaitForEndOfEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, FLatentActionInfo LatentInfo);
    void LoadInitBank();
    bool IsGame(class UObject* WorldContextObject);
    bool IsEditor();
    void GetSpeakerAngles(TArray<float>& SpeakerAngles, float& HeightAngle, FString DeviceShareSet);
    void GetRTPCValue(class UAkRtpc* RTPCValue, int32 PlayingID, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, class AActor* Actor, FName RTPC);
    FString GetCurrentAudioCulture();
    TArray<FString> GetAvailableAudioCultures();
    class UAkComponent* GetAkComponent(class USceneComponent* AttachToComponent, bool& ComponentCreated, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation> LocationType);
    class UObject* GetAkAudioTypeUserData(const class UAkAudioType* Instance, const UClass* Type);
    void ClearSoundBanksAndMedia();
    void CancelEventCallback(const FCancelEventCallbackPostEventCallback& PostEventCallback);
    void AddOutputCaptureMarker(FString MarkerText);
    void AddOutput(const FAkOutputSettings& in_Settings, FAkOutputDeviceID& out_DeviceID, TArray<class UAkComponent*>& in_ListenerIDs);
};

class UAkGeometryComponent : public UAkAcousticTextureSetComponent
{
    AkMeshType MeshType;
    int32 LOD;
    float WeldingThreshold;
    TMap<class UMaterialInterface*, class FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride;
    FAkGeometrySurfaceOverride CollisionMeshSurfaceOverride;
    bool bEnableDiffraction;
    bool bEnableDiffractionOnBoundaryEdges;
    class AActor* AssociatedRoom;
    FAkGeometryData GeometryData;
    TMap<int32, double> SurfaceAreas;

    void UpdateGeometry();
    void SendGeometry();
    void RemoveGeometry();
    void ConvertMesh();
};

class UAkGroupValue : public UAkAudioType
{
    FWwiseGroupValueCookedData GroupValueCookedData;
    uint32 GroupShortId;

};

class UAkIOSInitializationSettings : public UObject
{
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    FAkAudioSession AudioSession;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkIOSAdvancedInitializationSettings AdvancedSettings;

};

class UAkIOSPlatformInfo : public UAkPlatformInfo
{
};

class UAkInitBank : public UAkAudioType
{
    FWwiseInitBankCookedData InitBankCookedData;

};

class UAkItemBoolProperties : public UWidget
{
    FAkItemBoolPropertiesOnSelectionChanged OnSelectionChanged;
    void OnItemBoolPropertySelectionChanged(FString PropertySelected);
    FAkItemBoolPropertiesOnPropertyDragged OnPropertyDragged;
    void OnItemBoolPropertyDragDetected(FString PropertyDragged);

    void SetSearchText(FString newText);
    FString GetSelectedProperty();
    FString GetSearchText();
};

class UAkItemBoolPropertiesConv : public UBlueprintFunctionLibrary
{

    FText Conv_FAkBoolPropertyToControlToText(const FAkBoolPropertyToControl& INAkBoolPropertyToControl);
    FString Conv_FAkBoolPropertyToControlToString(const FAkBoolPropertyToControl& INAkBoolPropertyToControl);
};

class UAkItemProperties : public UWidget
{
    FAkItemPropertiesOnSelectionChanged OnSelectionChanged;
    void OnItemPropertySelectionChanged(FString PropertySelected);
    FAkItemPropertiesOnPropertyDragged OnPropertyDragged;
    void OnItemPropertyDragDetected(FString PropertyDragged);

    void SetSearchText(FString newText);
    FString GetSelectedProperty();
    FString GetSearchText();
};

class UAkItemPropertiesConv : public UBlueprintFunctionLibrary
{

    FText Conv_FAkPropertyToControlToText(const FAkPropertyToControl& INAkPropertyToControl);
    FString Conv_FAkPropertyToControlToString(const FAkPropertyToControl& INAkPropertyToControl);
};

class UAkLateReverbComponent : public USceneComponent
{
    bool bEnable;
    float SendLevel;
    float FadeRate;
    float Priority;
    bool AutoAssignAuxBus;
    class UAkAuxBus* AuxBus;
    FString AuxBusName;
    class UAkAuxBus* AuxBusManual;

    void SetAutoAssignAuxBus(bool bInEnable);
    void AssociateAkTextureSetComponent(class UAkAcousticTextureSetComponent* textureSetComponent);
};

class UAkLinuxArm64InitializationSettings : public UObject
{
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;

    void MigrateMultiCoreRendering(bool NewValue);
};

class UAkLinuxArm64PlatformInfo : public UAkPlatformInfo
{
};

class UAkLinuxInitializationSettings : public UObject
{
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;

    void MigrateMultiCoreRendering(bool NewValue);
};

class UAkLinuxPlatformInfo : public UAkPlatformInfo
{
};

class UAkLocalizedMediaAsset : public UAkMediaAsset
{
};

class UAkMIDIEventCallbackInfo : public UAkEventCallbackInfo
{

    EAkMidiEventType GetType();
    bool GetProgramChange(FAkMidiProgramChange& AsProgramChange);
    bool GetPitchBend(FAkMidiPitchBend& AsPitchBend);
    bool GetNoteOn(FAkMidiNoteOnOff& AsNoteOn);
    bool GetNoteOff(FAkMidiNoteOnOff& AsNoteOff);
    bool GetNoteAftertouch(FAkMidiNoteAftertouch& AsNoteAftertouch);
    bool GetGeneric(FAkMidiGeneric& AsGeneric);
    bool GetChannelAftertouch(FAkMidiChannelAftertouch& AsChannelAftertouch);
    uint8 GetChannel();
    bool GetCc(FAkMidiCc& AsCc);
};

class UAkMPXInitializationSettings : public UAkXSXInitializationSettings
{
};

class UAkMacInitializationSettings : public UObject
{
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkMacAdvancedInitializationSettings AdvancedSettings;

    void MigrateMultiCoreRendering(bool NewValue);
};

class UAkMacPlatformInfo : public UAkPlatformInfo
{
};

class UAkMarkerCallbackInfo : public UAkEventCallbackInfo
{
    int32 Identifier;
    int32 Position;
    FString Label;

};

class UAkMediaAsset : public UObject
{
    TMap<class FString, class UAkMediaAssetData*> MediaAssetDataPerPlatform;

};

class UAkMediaAssetData : public UObject
{
};

class UAkMusicSyncCallbackInfo : public UAkCallbackInfo
{
    int32 PlayingID;
    FAkSegmentInfo SegmentInfo;
    EAkCallbackType MusicSyncType;
    FString UserCueName;

};

class UAkPS5InitializationSettings : public UObject
{
    FAkCommonInitializationSettings CommonSettings;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkPS5AdvancedInitializationSettings AdvancedSettings;

};

class UAkPS5PlatformInfo : public UAkPlatformInfo
{
};

class UAkPlatformInfo : public UObject
{
};

class UAkPortalComponent : public USceneComponent
{
    bool bDynamic;
    AkAcousticPortalState InitialState;
    float InitialOcclusion;
    float ObstructionRefreshInterval;
    TEnumAsByte<ECollisionChannel> ObstructionCollisionChannel;

    void SetPortalOcclusion(float InPortalOcclusion);
    void SetDynamic(bool bInDynamic);
    bool PortalPlacementValid();
    class UPrimitiveComponent* GetPrimitiveParent();
    float GetPortalOcclusion();
    AkAcousticPortalState GetCurrentState();
    void EnablePortal();
    void DisablePortal();
};

class UAkRoomComponent : public UAkGameObject
{
    bool bEnable;
    bool bDynamic;
    float Priority;
    float WallOcclusion;
    float AuxSendLevel;
    bool AutoPost;
    bool bEnableReverbZone;
    class AActor* ParentRoomActor;
    FString ParentRoomName;
    float TransitionRegionWidth;
    class UAkAcousticTextureSetComponent* GeometryComponent;
    TWeakObjectPtr<class UAkRoomComponent> ParentRoom;

    void UpdateTransitionRegionWidth(float InTransitionRegionWidth);
    void UpdateParentRoomActor(class AActor* InParentRoomActor);
    void SetTransmissionLoss(float InTransmissionLoss);
    void SetReverbZone(const class UAkRoomComponent* InParentRoom, float InTransitionRegionWidth);
    void SetGeometryComponent(class UAkAcousticTextureSetComponent* textureSetComponent);
    void SetEnableReverbZone(bool bInEnableReverbZone);
    void SetEnable(bool bInEnable);
    void SetDynamic(bool bInDynamic);
    void SetAuxSendLevel(float InAuxSendLevel);
    void RemoveReverbZone();
    class UPrimitiveComponent* GetPrimitiveParent();
};

class UAkRtpc : public UAkAudioType
{
    FWwiseGameParameterCookedData GameParameterCookedData;

};

class UAkSettings : public UObject
{
    uint8 MaxSimultaneousReverbVolumes;
    FFilePath WwiseProjectPath;
    FDirectoryPath WwiseSoundDataFolder;
    FDirectoryPath RootOutputPath;
    FDirectoryPath GeneratedSoundBanksFolder;
    FDirectoryPath WwiseStagingDirectory;
    bool bSoundBanksTransfered;
    bool bAssetsMigrated;
    bool bProjectMigrated;
    bool bAutoConnectToWAAPI;
    TEnumAsByte<ECollisionChannel> DefaultOcclusionCollisionChannel;
    TEnumAsByte<ECollisionChannel> DefaultFitToGeometryCollisionChannel;
    TMap<class TSoftObjectPtr<UPhysicalMaterial>, class FAkGeometrySurfacePropertiesToMap> AkGeometryMap;
    TSoftObjectPtr<UAkAcousticTexture> DefaultAcousticTexture;
    float DefaultTransmissionLoss;
    TSoftObjectPtr<UDataTable> GeometrySurfacePropertiesTable;
    float GlobalDecayAbsorption;
    TSoftObjectPtr<UAkAuxBus> DefaultReverbAuxBus;
    TMap<float, TSoftObjectPtr<UAkAuxBus>> EnvironmentDecayAuxBusMap;
    TSoftObjectPtr<UDataTable> ReverbAssignmentTable;
    FString HFDampingName;
    FString DecayEstimateName;
    FString TimeToFirstReflectionName;
    TSoftObjectPtr<UAkRtpc> HFDampingRTPC;
    TSoftObjectPtr<UAkRtpc> DecayEstimateRTPC;
    TSoftObjectPtr<UAkRtpc> TimeToFirstReflectionRTPC;
    TSoftObjectPtr<UAkAudioEvent> AudioInputEvent;
    TMap<class FGuid, class FAkAcousticTextureParams> AcousticTextureParamsMap;
    bool SplitSwitchContainerMedia;
    bool SplitMediaPerFolder;
    bool UseEventBasedPackaging;
    FString CommandletCommitMessage;
    TMap<class FString, class FString> UnrealCultureToWwiseCulture;
    FString DefaultAssetCreationPath;
    TSoftObjectPtr<UAkInitBank> InitBank;
    EAkUnrealAudioRouting AudioRouting;
    bool bWwiseSoundEngineEnabled;
    bool bWwiseAudioLinkEnabled;
    bool bAkAudioMixerEnabled;
    bool AskedToUseNewAssetManagement;
    bool bEnableMultiCoreRendering;
    bool MigratedEnableMultiCoreRendering;
    bool FixupRedirectorsDuringMigration;
    FDirectoryPath WwiseWindowsInstallationPath;
    FFilePath WwiseMacInstallationPath;
    TSubclassOf<class UAkComponent> DefaultAkComponentClass;

};

class UAkSettingsPerUser : public UObject
{
    FDirectoryPath WwiseWindowsInstallationPath;
    FFilePath WwiseMacInstallationPath;
    FDirectoryPath RootOutputPathOverride;
    FDirectoryPath GeneratedSoundBanksFolderOverride;
    FString WaapiIPAddress;
    uint32 WaapiPort;
    bool bAutoConnectToWAAPI;
    bool AutoSyncSelection;
    uint32 WaapiTranslatorTimeout;
    bool SuppressGeneratedSoundBanksPathWarnings;
    bool SoundDataGenerationSkipLanguage;
    bool AskForWwiseAssetReload;

};

class UAkSlider : public UWidget
{
    float Value;
    FAkSliderValueDelegate ValueDelegate;
    float GetFloat();
    FSliderStyle WidgetStyle;
    TEnumAsByte<EOrientation> Orientation;
    FLinearColor SliderBarColor;
    FLinearColor SliderHandleColor;
    bool IndentHandle;
    bool Locked;
    float StepSize;
    bool IsFocusable;
    FAkPropertyToControl ThePropertyToControl;
    FAkWwiseItemToControl ItemToControl;
    FAkSliderOnValueChanged OnValueChanged;
    void AkOnFloatValueChangedEvent(float Value);
    FAkSliderOnItemDropped OnItemDropped;
    void OnItemDropDetected(FGuid ItemDroppedID);
    FAkSliderOnPropertyDropped OnPropertyDropped;
    void OnPropertyDropDetected(FString PropertyDropped);

    void SetValue(float InValue);
    void SetStepSize(float InValue);
    void SetSliderHandleColor(FLinearColor InValue);
    void SetSliderBarColor(FLinearColor InValue);
    void SetLocked(bool InValue);
    void SetIndentHandle(bool InValue);
    void SetAkSliderItemProperty(FString ItemProperty);
    void SetAkSliderItemId(const FGuid& ItemId);
    float GetValue();
    FString GetAkSliderItemProperty();
    FGuid GetAkSliderItemId();
};

class UAkStateValue : public UAkGroupValue
{
};

class UAkSubmixInputComponent : public UAkAudioInputComponent
{
    class USoundSubmix* SubmixToRecord;

};

class UAkSurfaceReflectorSetComponent : public UAkAcousticTextureSetComponent
{
    bool bEnableSurfaceReflectors;
    TArray<FAkSurfacePoly> AcousticPolys;
    bool bEnableDiffraction;
    bool bEnableDiffractionOnBoundaryEdges;
    class AActor* AssociatedRoom;

    void UpdateSurfaceReflectorSet();
    void UpdateAcousticProperties(TArray<FAkSurfacePoly> in_AcousticPolys);
    void SendSurfaceReflectorSet();
    void RemoveSurfaceReflectorSet();
};

class UAkSwitchValue : public UAkGroupValue
{
};

class UAkTVOSInitializationSettings : public UObject
{
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    FAkAudioSession AudioSession;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkTVOSAdvancedInitializationSettings AdvancedSettings;

};

class UAkTVOSPlatformInfo : public UAkPlatformInfo
{
};

class UAkTrigger : public UAkAudioType
{
    FWwiseTriggerCookedData TriggerCookedData;

};

class UAkWaapiCalls : public UBlueprintFunctionLibrary
{

    FAKWaapiJsonObject Unsubscribe(const FAkWaapiSubscriptionId& SubscriptionId, bool& UnsubscriptionDone);
    FAKWaapiJsonObject SubscribeToWaapi(const FAkWaapiUri& WaapiUri, const FAKWaapiJsonObject& WaapiOptions, const FSubscribeToWaapiCallback& Callback, FAkWaapiSubscriptionId& SubscriptionId, bool& SubscriptionDone);
    void SetSubscriptionID(const FAkWaapiSubscriptionId& Subscription, int32 ID);
    bool RegisterWaapiProjectLoadedCallback(const FRegisterWaapiProjectLoadedCallbackCallback& Callback);
    bool RegisterWaapiConnectionLostCallback(const FRegisterWaapiConnectionLostCallbackCallback& Callback);
    int32 GetSubscriptionID(const FAkWaapiSubscriptionId& Subscription);
    FText Conv_FAkWaapiSubscriptionIdToText(const FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
    FString Conv_FAkWaapiSubscriptionIdToString(const FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
    FAKWaapiJsonObject CallWaapi(const FAkWaapiUri& WaapiUri, const FAKWaapiJsonObject& WaapiArgs, const FAKWaapiJsonObject& WaapiOptions);
};

class UAkWaapiJsonManager : public UBlueprintFunctionLibrary
{

    FAKWaapiJsonObject SetStringField(const FAkWaapiFieldNames& FieldName, FString FieldValue, FAKWaapiJsonObject Target);
    FAKWaapiJsonObject SetObjectField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject FieldValue, FAKWaapiJsonObject Target);
    FAKWaapiJsonObject SetNumberField(const FAkWaapiFieldNames& FieldName, float FieldValue, FAKWaapiJsonObject Target);
    FAKWaapiJsonObject SetBoolField(const FAkWaapiFieldNames& FieldName, bool FieldValue, FAKWaapiJsonObject Target);
    FAKWaapiJsonObject SetArrayStringFields(const FAkWaapiFieldNames& FieldName, const TArray<FString>& FieldStringValues, FAKWaapiJsonObject Target);
    FAKWaapiJsonObject SetArrayObjectFields(const FAkWaapiFieldNames& FieldName, const TArray<FAKWaapiJsonObject>& FieldObjectValues, FAKWaapiJsonObject Target);
    FString GetStringField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);
    FAKWaapiJsonObject GetObjectField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);
    float GetNumberField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);
    int32 GetIntegerField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);
    bool GetBoolField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);
    TArray<FAKWaapiJsonObject> GetArrayField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);
    FText Conv_FAKWaapiJsonObjectToText(FAKWaapiJsonObject INAKWaapiJsonObject);
    FString Conv_FAKWaapiJsonObjectToString(FAKWaapiJsonObject INAKWaapiJsonObject);
};

class UAkWaapiUriConv : public UBlueprintFunctionLibrary
{

    FText Conv_FAkWaapiUriToText(const FAkWaapiUri& INAkWaapiUri);
    FString Conv_FAkWaapiUriToString(const FAkWaapiUri& INAkWaapiUri);
};

class UAkWin32PlatformInfo : public UAkPlatformInfo
{
};

class UAkWin64PlatformInfo : public UAkPlatformInfo
{
};

class UAkWinAnvilInitializationSettings : public UAkWinGDKInitializationSettings
{
};

class UAkWinAnvilPlatformInfo : public UAkWinGDKPlatformInfo
{
};

class UAkWinGDKInitializationSettings : public UObject
{
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkWinGDKAdvancedInitializationSettings AdvancedSettings;

    void MigrateMultiCoreRendering(bool NewValue);
};

class UAkWinGDKPlatformInfo : public UAkPlatformInfo
{
};

class UAkWindowsInitializationSettings : public UObject
{
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkWindowsAdvancedInitializationSettings AdvancedSettings;

    void MigrateMultiCoreRendering(bool NewValue);
};

class UAkWindowsPlatformInfo : public UAkWin64PlatformInfo
{
};

class UAkWwiseTree : public UWidget
{
    FAkWwiseTreeOnSelectionChanged OnSelectionChanged;
    void OnItemSelectionChanged(FGuid ItemSelectedID);
    FAkWwiseTreeOnItemDragged OnItemDragged;
    void OnItemDragDetected(FGuid ItemDraggedID, FString ItemDraggedName);

    void SetSearchText(FString newText);
    FAkWwiseObjectDetails GetSelectedItem();
    FString GetSearchText();
};

class UAkWwiseTreeSelector : public UWidget
{
    FAkWwiseTreeSelectorOnSelectionChanged OnSelectionChanged;
    void OnItemSelectionChanged(FGuid ItemSelectedID);
    FAkWwiseTreeSelectorOnItemDragged OnItemDragged;
    void OnItemDragDetected(FGuid ItemDraggedID, FString ItemDraggedName);

};

class UAkXB1InitializationSettings : public UAkXboxOneGDKInitializationSettings
{
};

class UAkXB1PlatformInfo : public UAkXboxOneGDKPlatformInfo
{
};

class UAkXSXInitializationSettings : public UObject
{
    FAkCommonInitializationSettings CommonSettings;
    FAkXSXApuHeapInitializationSettings ApuHeapSettings;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkXSXAdvancedInitializationSettings AdvancedSettings;

    void MigrateMultiCoreRendering(bool NewValue);
};

class UAkXSXPlatformInfo : public UAkPlatformInfo
{
};

class UAkXboxOneAnvilInitializationSettings : public UAkXboxOneGDKInitializationSettings
{
};

class UAkXboxOneAnvilPlatformInfo : public UAkXboxOneGDKPlatformInfo
{
};

class UAkXboxOneGDKInitializationSettings : public UObject
{
    FAkCommonInitializationSettings CommonSettings;
    FAkXboxOneGDKApuHeapInitializationSettings ApuHeapSettings;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkXboxOneGDKAdvancedInitializationSettings AdvancedSettings;

    void MigrateMultiCoreRendering(bool NewValue);
};

class UAkXboxOneGDKPlatformInfo : public UAkPlatformInfo
{
};

class UDrawPortalComponent : public UPrimitiveComponent
{
};

class UDrawRoomComponent : public UPrimitiveComponent
{
};

class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{
    class UAkAudioEvent* Event;
    bool RetriggerEvent;
    int32 ScrubTailLengthMs;
    bool StopAtSectionEnd;
    FString EventName;
    float MaxSourceDuration;
    FString MaxDurationSourceID;

};

class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{
};

class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{
    class UAkRtpc* RTPC;
    FString Name;
    FRichCurve FloatCurve;
    FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper;
    FMovieSceneFloatChannel RTPCChannel;

};

class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
{
};

class UMovieSceneAkTrack : public UMovieSceneTrack
{
    TArray<class UMovieSceneSection*> Sections;
    bool bIsAMasterTrack;

};

class UPostEventAsync : public UBlueprintAsyncActionBase
{
    FPostEventAsyncCompleted Completed;
    void PostEventAsyncOutputPin(int32 PlayingID);

    class UPostEventAsync* PostEventAsync(const class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class AActor* Actor, int32 CallbackMask, const FPostEventAsyncPostEventCallback& PostEventCallback, bool bStopWhenAttachedToDestroyed);
    void PollPostEventFuture();
};

class UPostEventAtLocationAsync : public UBlueprintAsyncActionBase
{
    FPostEventAtLocationAsyncCompleted Completed;
    void PostEventAtLocationAsyncOutputPin(int32 PlayingID);

    class UPostEventAtLocationAsync* PostEventAtLocationAsync(const class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation);
    void PollPostEventFuture();
};

class USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary
{

    FText Conv_FAkWaapiFieldNamesToText(const FAkWaapiFieldNames& INAkWaapiFieldNames);
    FString Conv_FAkWaapiFieldNamesToString(const FAkWaapiFieldNames& INAkWaapiFieldNames);
};

#endif
