#ifndef UE4SS_SDK_Niagara_HPP
#define UE4SS_SDK_Niagara_HPP

#include "Niagara_enums.hpp"

struct FBasicParticleData
{
    FVector Position;
    float Size;
    FVector Velocity;

};

struct FEmitterCompiledScriptPair
{
};

struct FMeshTriCoordinate
{
    int32 Tri;
    FVector3f BaryCoord;

};

struct FMovieSceneNiagaraBoolParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
    FMovieSceneBoolChannel BoolChannel;

};

struct FMovieSceneNiagaraColorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
    FMovieSceneFloatChannel RedChannel;
    FMovieSceneFloatChannel GreenChannel;
    FMovieSceneFloatChannel BlueChannel;
    FMovieSceneFloatChannel AlphaChannel;

};

struct FMovieSceneNiagaraFloatParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
    FMovieSceneFloatChannel FloatChannel;

};

struct FMovieSceneNiagaraIntegerParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
    FMovieSceneIntegerChannel IntegerChannel;

};

struct FMovieSceneNiagaraParameterSectionTemplate : public FMovieSceneEvalTemplate
{
    FNiagaraVariable Parameter;

};

struct FMovieSceneNiagaraSystemTrackImplementation : public FMovieSceneTrackImplementation
{
    FFrameNumber SpawnSectionStartFrame;
    FFrameNumber SpawnSectionEndFrame;
    ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior;
    ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior;
    ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior;
    ENiagaraAgeUpdateMode AgeUpdateMode;
    bool bAllowScalability;

};

struct FMovieSceneNiagaraSystemTrackTemplate : public FMovieSceneEvalTemplate
{
};

struct FMovieSceneNiagaraVectorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
    FMovieSceneFloatChannel VectorChannels;
    int32 ChannelsUsed;

};

struct FNCPool
{
    TArray<FNCPoolElement> FreeElements;

};

struct FNCPoolElement
{
    class UNiagaraComponent* Component;

};

struct FNDIStaticMeshSectionFilter
{
    TArray<int32> AllowedMaterialSlots;

};

struct FNiagaraAssetVersion
{
    int32 MajorVersion;
    int32 MinorVersion;
    FGuid VersionGuid;
    bool bIsVisibleInVersionSelector;

};

struct FNiagaraBakerCameraSettings
{
    ENiagaraBakerViewMode ViewMode;
    FVector ViewportLocation;
    FRotator ViewportRotation;
    float OrbitDistance;
    float FOV;
    float OrthoWidth;
    bool bUseAspectRatio;
    float AspectRatio;

};

struct FNiagaraBakerTextureSettings
{
    FName OutputName;
    FNiagaraBakerTextureSource SourceBinding;
    uint8 bUseFrameSize;
    FIntPoint FrameSize;
    FIntPoint TextureSize;
    class UTexture2D* GeneratedTexture;

};

struct FNiagaraBakerTextureSource
{
    FString DisplayString;
    FName SourceName;

};

struct FNiagaraBool
{
    int32 Value;

};

struct FNiagaraBoolParameterMetaData
{
    ENiagaraBoolDisplayMode DisplayMode;
    FName OverrideNameTrue;
    FName OverrideNameFalse;
    class UTexture2D* IconOverrideTrue;
    class UTexture2D* IconOverrideFalse;

};

struct FNiagaraBoundParameter
{
    FNiagaraVariable Parameter;
    int32 SrcOffset;
    int32 DestOffset;

};

struct FNiagaraCollisionEventPayload
{
    FVector CollisionPos;
    FVector CollisionNormal;
    FVector CollisionVelocity;
    int32 ParticleIndex;
    int32 PhysicalMaterialIndex;

};

struct FNiagaraCompileDependency
{
    FString LinkerErrorMessage;
    FGuid NodeGuid;
    FGuid PinGuid;
    TArray<FGuid> StackGuids;
    FNiagaraVariableBase DependentVariable;
    bool bDependentVariableFromCustomIterationNamespace;

};

struct FNiagaraCompileHashVisitorDebugInfo
{
    FString Object;
    TArray<FString> PropertyKeys;
    TArray<FString> PropertyValues;

};

struct FNiagaraCompilerTag
{
    FNiagaraVariable Variable;
    FString StringValue;

};

struct FNiagaraComponentPropertyBinding
{
    FNiagaraVariableAttributeBinding AttributeBinding;
    FName PropertyName;
    FNiagaraTypeDefinition PropertyType;
    FName MetadataSetterName;
    TMap<class FString, class FString> PropertySetterParameterDefaults;

};

struct FNiagaraCulledComponentInfo
{
};

struct FNiagaraDataInterfaceEmitterBinding
{
    ENiagaraDataInterfaceEmitterBindingMode BindingMode;
    FName EmitterName;

};

struct FNiagaraDataInterfaceSplineLUT
{
    TArray<FVector> Positions;
    TArray<FVector> Scales;
    TArray<FQuat> Rotations;
    float SplineLength;
    float SplineDistanceStep;
    float InvSplineDistanceStep;
    int32 MaxIndex;

};

struct FNiagaraDataSetCompiledData
{
    TArray<FNiagaraVariable> Variables;
    TArray<FNiagaraVariableLayoutInfo> VariableLayouts;
    FNiagaraDataSetID ID;
    uint32 TotalFloatComponents;
    uint32 TotalInt32Components;
    uint32 TotalHalfComponents;
    uint8 bRequiresPersistentIDs;
    ENiagaraSimTarget SimTarget;

};

struct FNiagaraDataSetID
{
    FName Name;
    ENiagaraDataSetType Type;

};

struct FNiagaraDataSetProperties
{
    FNiagaraDataSetID ID;
    TArray<FNiagaraVariable> Variables;

};

struct FNiagaraDebugHUDSettingsData
{
    bool bHudEnabled;
    bool bHudRenderingEnabled;
    bool bValidateSystemSimulationDataBuffers;
    bool bValidateParticleDataBuffers;
    bool bOverviewEnabled;
    ENiagaraDebugHUDOverviewMode OverviewMode;
    ENiagaraDebugHudFont OverviewFont;
    FVector2D OverviewLocation;
    bool bShowRegisteredComponents;
    bool bOverviewShowFilteredSystemOnly;
    FString ActorFilter;
    bool bComponentFilterEnabled;
    FString ComponentFilter;
    bool bSystemFilterEnabled;
    FString SystemFilter;
    bool bEmitterFilterEnabled;
    FString EmitterFilter;
    bool bActorFilterEnabled;
    ENiagaraDebugHudVerbosity SystemDebugVerbosity;
    ENiagaraDebugHudVerbosity SystemEmitterVerbosity;
    ENiagaraDebugHudVerbosity DataInterfaceVerbosity;
    bool bSystemShowBounds;
    bool bSystemShowActiveOnlyInWorld;
    bool bShowSystemVariables;
    TArray<FNiagaraDebugHUDVariable> SystemVariables;
    FNiagaraDebugHudTextOptions SystemTextOptions;
    bool bShowParticleVariables;
    bool bEnableGpuParticleReadback;
    bool bShowParticleIndex;
    TArray<FNiagaraDebugHUDVariable> ParticlesVariables;
    FNiagaraDebugHudTextOptions ParticleTextOptions;
    bool bShowParticlesVariablesWithSystem;
    bool bShowParticleVariablesVertical;
    bool bUseMaxParticlesToDisplay;
    bool bUseParticleDisplayClip;
    FVector2D ParticleDisplayClip;
    bool bUseParticleDisplayCenterRadius;
    float ParticleDisplayCenterRadius;
    int32 MaxParticlesToDisplay;
    int32 PerfReportFrames;
    ENiagaraDebugHUDPerfSampleMode PerfSampleMode;
    ENiagaraDebugHUDPerfGraphMode PerfGraphMode;
    int32 PerfHistoryFrames;
    float PerfGraphTimeRange;
    FVector2D PerfGraphSize;
    FLinearColor PerfGraphAxisColor;
    bool bEnableSmoothing;
    int32 SmoothingWidth;
    FLinearColor DefaultBackgroundColor;
    FLinearColor OverviewHeadingColor;
    FLinearColor OverviewDetailColor;
    FLinearColor OverviewDetailHighlightColor;
    FLinearColor InWorldErrorTextColor;
    FLinearColor InWorldTextColor;
    FLinearColor MessageInfoTextColor;
    FLinearColor MessageWarningTextColor;
    FLinearColor MessageErrorTextColor;
    float SystemColorTableOpacity;
    uint32 SystemColorSeed;
    FVector SystemColorHSVMin;
    FVector SystemColorHSVMax;
    ENiagaraDebugPlaybackMode PlaybackMode;
    bool bPlaybackRateEnabled;
    float PlaybackRate;
    bool bLoopTimeEnabled;
    float LoopTime;
    bool bShowGlobalBudgetInfo;

};

struct FNiagaraDebugHUDVariable
{
    bool bEnabled;
    FString Name;

};

struct FNiagaraDebugHudTextOptions
{
    ENiagaraDebugHudFont Font;
    ENiagaraDebugHudHAlign HorizontalAlignment;
    ENiagaraDebugHudVAlign VerticalAlignment;
    FVector2D ScreenOffset;

};

struct FNiagaraDebuggerAcceptConnection
{
    FGuid SessionId;
    FGuid InstanceId;

};

struct FNiagaraDebuggerConnectionClosed
{
    FGuid SessionId;
    FGuid InstanceId;

};

struct FNiagaraDebuggerExecuteConsoleCommand
{
    FString Command;
    bool bRequiresWorld;

};

struct FNiagaraDebuggerOutlinerUpdate
{
    FNiagaraOutlinerData OutlinerData;

};

struct FNiagaraDebuggerRequestConnection
{
    FGuid SessionId;
    FGuid InstanceId;

};

struct FNiagaraDetailsLevelScaleOverrides
{
    float Low;
    float Medium;
    float High;
    float Epic;
    float Cine;

};

struct FNiagaraDeviceProfileStateEntry
{
    FName ProfileName;
    uint32 QualityLevelMask;
    uint32 SetQualityLevelMask;

};

struct FNiagaraEmitterCompiledData
{
    TArray<FName> SpawnAttributes;
    FNiagaraVariable EmitterSpawnIntervalVar;
    FNiagaraVariable EmitterInterpSpawnStartDTVar;
    FNiagaraVariable EmitterSpawnGroupVar;
    FNiagaraVariable EmitterAgeVar;
    FNiagaraVariable EmitterRandomSeedVar;
    FNiagaraVariable EmitterInstanceSeedVar;
    FNiagaraVariable EmitterTotalSpawnedParticlesVar;
    FNiagaraDataSetCompiledData DataSetCompiledData;

};

struct FNiagaraEmitterHandle
{
    FGuid ID;
    FName IdName;
    bool bIsEnabled;
    FName Name;
    class UNiagaraEmitter* Instance;
    FVersionedNiagaraEmitter VersionedInstance;

};

struct FNiagaraEmitterNameSettingsRef
{
    FName SystemName;
    FString EmitterName;

};

struct FNiagaraEmitterScalabilityOverride : public FNiagaraEmitterScalabilitySettings
{
    uint8 bOverrideSpawnCountScale;

};

struct FNiagaraEmitterScalabilityOverrides
{
    TArray<FNiagaraEmitterScalabilityOverride> Overrides;

};

struct FNiagaraEmitterScalabilitySettings
{
    FNiagaraPlatformSet Platforms;
    uint8 bScaleSpawnCount;
    float SpawnCountScale;

};

struct FNiagaraEmitterScalabilitySettingsArray
{
    TArray<FNiagaraEmitterScalabilitySettings> Settings;

};

struct FNiagaraEmitterScriptProperties
{
    class UNiagaraScript* Script;
    TArray<FNiagaraEventReceiverProperties> EventReceivers;
    TArray<FNiagaraEventGeneratorProperties> EventGenerators;

};

struct FNiagaraEnumParameterMetaData
{
    FName OverrideName;
    class UTexture2D* IconOverride;
    bool bUseColorOverride;
    FLinearColor ColorOverride;

};

struct FNiagaraEventGeneratorProperties
{
    int32 MaxEventsPerFrame;
    FName ID;
    FNiagaraDataSetCompiledData DataSetCompiledData;

};

struct FNiagaraEventReceiverProperties
{
    FName Name;
    FName SourceEventGenerator;
    FName SourceEmitter;

};

struct FNiagaraEventScriptProperties : public FNiagaraEmitterScriptProperties
{
    EScriptExecutionMode ExecutionMode;
    uint32 SpawnNumber;
    uint32 MaxEventsPerFrame;
    FGuid SourceEmitterID;
    FName SourceEventName;
    bool bRandomSpawnNumber;
    uint32 MinSpawnNumber;
    bool UpdateAttributeInitialValues;

};

struct FNiagaraFloat
{
    float Value;

};

struct FNiagaraFunctionSignature
{
    FName Name;
    TArray<FNiagaraVariable> Inputs;
    TArray<FNiagaraVariable> Outputs;
    FName OwnerName;
    uint8 bRequiresContext;
    uint8 bRequiresExecPin;
    uint8 bMemberFunction;
    uint8 bExperimental;
    uint8 bSupportsCPU;
    uint8 bSupportsGPU;
    uint8 bWriteFunction;
    uint8 bReadFunction;
    uint8 bSoftDeprecatedFunction;
    uint8 bIsCompileTagGenerator;
    uint8 bHidden;
    int32 ModuleUsageBitmask;
    int32 ContextStageIndex;
    TMap<class FName, class FName> FunctionSpecifiers;

};

struct FNiagaraGlobalBudgetScaling
{
    uint8 bCullByGlobalBudget;
    uint8 bScaleMaxDistanceByGlobalBudgetUse;
    uint8 bScaleMaxInstanceCountByGlobalBudgetUse;
    uint8 bScaleSystemInstanceCountByGlobalBudgetUse;
    float MaxGlobalBudgetUsage;
    FNiagaraLinearRamp MaxDistanceScaleByGlobalBudgetUse;
    FNiagaraLinearRamp MaxInstanceCountScaleByGlobalBudgetUse;
    FNiagaraLinearRamp MaxSystemInstanceCountScaleByGlobalBudgetUse;

};

struct FNiagaraGraphViewSettings
{
    FVector2D Location;
    float Zoom;
    bool bIsValid;

};

struct FNiagaraHalf
{
    uint16 Value;

};

struct FNiagaraHalfVector2
{
    uint16 X;
    uint16 Y;

};

struct FNiagaraHalfVector3
{
    uint16 X;
    uint16 Y;
    uint16 Z;

};

struct FNiagaraHalfVector4
{
    uint16 X;
    uint16 Y;
    uint16 Z;
    uint16 W;

};

struct FNiagaraID
{
    int32 Index;
    int32 AcquireTag;

};

struct FNiagaraInputConditionMetadata
{
    FName InputName;
    TArray<FString> TargetValues;

};

struct FNiagaraInt32
{
    int32 Value;

};

struct FNiagaraLinearRamp
{
    float StartX;
    float StartY;
    float EndX;
    float EndY;

};

struct FNiagaraLwcStructConverter
{
    TArray<FNiagaraStructConversionStep> ConversionSteps;

};

struct FNiagaraMaterialAttributeBinding
{
    FName MaterialParameterName;
    FNiagaraVariableBase NiagaraVariable;
    FNiagaraVariableBase ResolvedNiagaraVariable;
    FNiagaraVariableBase NiagaraChildVariable;

};

struct FNiagaraMatrix
{
    FVector4f Row0;
    FVector4f Row1;
    FVector4f Row2;
    FVector4f Row3;

};

struct FNiagaraMeshMaterialOverride
{
    class UMaterialInterface* ExplicitMat;
    FNiagaraUserParameterBinding UserParamBinding;

};

struct FNiagaraMeshRendererMeshProperties
{
    class UStaticMesh* Mesh;
    FNiagaraUserParameterBinding UserParamBinding;
    FVector Scale;
    FRotator Rotation;
    FVector PivotOffset;
    ENiagaraMeshPivotOffsetSpace PivotOffsetSpace;

};

struct FNiagaraModuleDependency
{
    FName ID;
    ENiagaraModuleDependencyType Type;
    ENiagaraModuleDependencyScriptConstraint ScriptConstraint;
    FString RequiredVersion;
    int32 OnlyEvaluateInScriptUsage;
    FText Description;

};

struct FNiagaraNumeric
{
};

struct FNiagaraOutlinerCaptureSettings
{
    bool bTriggerCapture;
    uint32 CaptureDelayFrames;
    bool bGatherPerfData;
    uint32 SimCacheCaptureFrames;

};

struct FNiagaraOutlinerData
{
    TMap<class FString, class FNiagaraOutlinerWorldData> WorldData;

};

struct FNiagaraOutlinerEmitterInstanceData
{
    FString EmitterName;
    ENiagaraSimTarget SimTarget;
    ENiagaraExecutionState ExecState;
    int32 NumParticles;
    uint8 bRequiresPersistentIDs;

};

struct FNiagaraOutlinerSystemData
{
    TArray<FNiagaraOutlinerSystemInstanceData> SystemInstances;
    FNiagaraOutlinerTimingData AveragePerFrameTime;
    FNiagaraOutlinerTimingData MaxPerFrameTime;
    FNiagaraOutlinerTimingData AveragePerInstanceTime;
    FNiagaraOutlinerTimingData MaxPerInstanceTime;

};

struct FNiagaraOutlinerSystemInstanceData
{
    FString ComponentName;
    FVector3f LWCTile;
    TArray<FNiagaraOutlinerEmitterInstanceData> Emitters;
    ENiagaraExecutionState ActualExecutionState;
    ENiagaraExecutionState RequestedExecutionState;
    FNiagaraScalabilityState ScalabilityState;
    uint8 bPendingKill;
    uint8 bUsingCullProxy;
    ENCPoolMethod PoolMethod;
    FNiagaraOutlinerTimingData AverageTime;
    FNiagaraOutlinerTimingData MaxTime;
    TEnumAsByte<ETickingGroup> TickGroup;
    TEnumAsByte<ENiagaraGpuComputeTickStage> GpuTickStage;
    uint8 bIsSolo;
    uint8 bRequiresDistanceFieldData;
    uint8 bRequiresDepthBuffer;
    uint8 bRequiresEarlyViewData;
    uint8 bRequiresViewUniformBuffer;
    uint8 bRequiresRayTracingScene;

};

struct FNiagaraOutlinerTimingData
{
    float GameThread;
    float RenderThread;

};

struct FNiagaraOutlinerWorldData
{
    TMap<class FString, class FNiagaraOutlinerSystemData> Systems;
    bool bHasBegunPlay;
    uint8 WorldType;
    uint8 NetMode;
    FNiagaraOutlinerTimingData AveragePerFrameTime;
    FNiagaraOutlinerTimingData MaxPerFrameTime;

};

struct FNiagaraParameterDataSetBinding
{
    int32 ParameterOffset;
    int32 DataSetComponentOffset;

};

struct FNiagaraParameterDataSetBindingCollection
{
    TArray<FNiagaraParameterDataSetBinding> FloatOffsets;
    TArray<FNiagaraParameterDataSetBinding> Int32Offsets;

};

struct FNiagaraParameterMap
{
};

struct FNiagaraParameterStore
{
    TWeakObjectPtr<class UObject> Owner;
    TArray<FNiagaraVariableWithOffset> SortedParameterOffsets;
    TArray<uint8> ParameterData;
    TArray<class UNiagaraDataInterface*> DataInterfaces;
    TArray<class UObject*> UObjects;
    TArray<FNiagaraPositionSource> OriginalPositionData;

};

struct FNiagaraParameters
{
    TArray<FNiagaraVariable> Parameters;

};

struct FNiagaraPerfBaselineStats
{
    float PerInstanceAvg_GT;
    float PerInstanceAvg_RT;
    float PerInstanceMax_GT;
    float PerInstanceMax_RT;

};

struct FNiagaraPlatformSet
{
    int32 QualityLevelMask;
    TArray<FNiagaraDeviceProfileStateEntry> DeviceProfileStates;
    TArray<FNiagaraPlatformSetCVarCondition> CVarConditions;

};

struct FNiagaraPlatformSetCVarCondition
{
    FName CVarName;
    ENiagaraCVarConditionResponse PassResponse;
    ENiagaraCVarConditionResponse FailResponse;
    bool Value;
    int32 MinInt;
    int32 MaxInt;
    float MinFloat;
    float MaxFloat;
    uint8 bUseMinInt;
    uint8 bUseMaxInt;
    uint8 bUseMinFloat;
    uint8 bUseMaxFloat;

};

struct FNiagaraPlatformSetConflictEntry
{
    FName ProfileName;
    int32 QualityLevelMask;

};

struct FNiagaraPlatformSetConflictInfo
{
    int32 SetAIndex;
    int32 SetBIndex;
    TArray<FNiagaraPlatformSetConflictEntry> Conflicts;

};

struct FNiagaraPlatformSetRedirect
{
    TArray<FName> ProfileNames;
    ENiagaraDeviceProfileRedirectMode Mode;
    FName RedirectProfileName;
    FNiagaraPlatformSetCVarCondition CVarConditionEnabled;
    FNiagaraPlatformSetCVarCondition CVarConditionDisabled;

};

struct FNiagaraPosition : public FVector3f
{
};

struct FNiagaraPositionSource
{
    FName Name;
    FVector Value;

};

struct FNiagaraRandInfo
{
    int32 Seed1;
    int32 Seed2;
    int32 Seed3;

};

struct FNiagaraRendererMaterialParameters
{
    TArray<FNiagaraMaterialAttributeBinding> AttributeBindings;
    TArray<FNiagaraRendererMaterialScalarParameter> ScalarParameters;
    TArray<FNiagaraRendererMaterialVectorParameter> VectorParameters;
    TArray<FNiagaraRendererMaterialTextureParameter> TextureParameters;

};

struct FNiagaraRendererMaterialScalarParameter
{
    FName MaterialParameterName;
    float Value;

};

struct FNiagaraRendererMaterialTextureParameter
{
    FName MaterialParameterName;
    class UTexture* Texture;

};

struct FNiagaraRendererMaterialVectorParameter
{
    FName MaterialParameterName;
    FLinearColor Value;

};

struct FNiagaraRequestSimpleClientInfoMessage
{
};

struct FNiagaraRibbonShapeCustomVertex
{
    FVector2f Position;
    FVector2f Normal;
    float TextureV;

};

struct FNiagaraRibbonUVSettings
{
    ENiagaraRibbonUVDistributionMode DistributionMode;
    ENiagaraRibbonUVEdgeMode LeadingEdgeMode;
    ENiagaraRibbonUVEdgeMode TrailingEdgeMode;
    float TilingLength;
    FVector2D Offset;
    FVector2D Scale;
    bool bEnablePerParticleUOverride;
    bool bEnablePerParticleVRangeOverride;

};

struct FNiagaraScalabilityManager
{
    class UNiagaraEffectType* EffectType;
    TArray<class UNiagaraComponent*> ManagedComponents;

};

struct FNiagaraScalabilityState
{
    float Significance;
    float LastVisibleTime;
    uint8 bNewlyRegistered;
    uint8 bCulled;
    uint8 bPreviousCulled;
    uint8 bCulledByDistance;
    uint8 bCulledByInstanceCount;
    uint8 bCulledByVisibility;
    uint8 bCulledByGlobalBudget;

};

struct FNiagaraScriptDataInterfaceCompileInfo
{
    FName Name;
    int32 UserPtrIdx;
    FNiagaraTypeDefinition Type;
    FName RegisteredParameterMapRead;
    FName RegisteredParameterMapWrite;
    bool bIsPlaceholder;

};

struct FNiagaraScriptDataInterfaceInfo
{
    class UNiagaraDataInterface* DataInterface;
    FName Name;
    int32 UserPtrIdx;
    FNiagaraTypeDefinition Type;
    FName RegisteredParameterMapRead;
    FName RegisteredParameterMapWrite;

};

struct FNiagaraScriptDataUsageInfo
{
    bool bReadsAttributeData;

};

struct FNiagaraScriptExecutionPaddingInfo
{
    uint16 SrcOffset;
    uint16 DestOffset;
    uint16 SrcSize;
    uint16 DestSize;

};

struct FNiagaraScriptExecutionParameterStore : public FNiagaraParameterStore
{
    int32 ParameterSize;
    uint32 PaddedParameterSize;
    TArray<FNiagaraScriptExecutionPaddingInfo> PaddingInfo;
    uint8 bInitialized;

};

struct FNiagaraScriptHighlight
{
    FLinearColor Color;
    FText DisplayName;

};

struct FNiagaraScriptInstanceParameterStore : public FNiagaraParameterStore
{
};

struct FNiagaraScriptVariableBinding
{
    FName Name;

};

struct FNiagaraSimCacheCreateParameters
{
    ENiagaraSimCacheAttributeCaptureMode AttributeCaptureMode;
    uint8 bAllowRebasing;
    uint8 bAllowDataInterfaceCaching;
    TArray<FName> RebaseIncludeAttributes;
    TArray<FName> RebaseExcludeAttributes;
    TArray<FName> ExplicitCaptureAttributes;

};

struct FNiagaraSimCacheDataBuffers
{
    uint32 NumInstances;
    TArray<uint8> FloatData;
    TArray<uint8> HalfData;
    TArray<uint8> Int32Data;
    TArray<int32> IDToIndexTable;
    uint32 IDAcquireTag;

};

struct FNiagaraSimCacheDataBuffersLayout
{
    FName LayoutName;
    ENiagaraSimTarget SimTarget;
    TArray<FNiagaraSimCacheVariable> Variables;
    uint16 FloatCount;
    uint16 HalfCount;
    uint16 Int32Count;
    bool bLocalSpace;
    TArray<FName> RebaseVariableNames;

};

struct FNiagaraSimCacheEmitterFrame
{
    FBox LocalBounds;
    int32 TotalSpawnedParticles;
    FNiagaraSimCacheDataBuffers ParticleDataBuffers;

};

struct FNiagaraSimCacheFrame
{
    FTransform LocalToWorld;
    FVector3f LWCTile;
    FNiagaraSimCacheSystemFrame SystemData;
    TArray<FNiagaraSimCacheEmitterFrame> EmitterData;

};

struct FNiagaraSimCacheLayout
{
    FNiagaraSimCacheDataBuffersLayout SystemLayout;
    TArray<FNiagaraSimCacheDataBuffersLayout> EmitterLayouts;

};

struct FNiagaraSimCacheSystemFrame
{
    FBox LocalBounds;
    FNiagaraSimCacheDataBuffers SystemDataBuffers;

};

struct FNiagaraSimCacheVariable
{
    FNiagaraVariableBase Variable;
    uint16 FloatOffset;
    uint16 FloatCount;
    uint16 HalfOffset;
    uint16 HalfCount;
    uint16 Int32Offset;
    uint16 Int32Count;

};

struct FNiagaraSimpleClientInfo
{
    TArray<FString> Systems;
    TArray<FString> Actors;
    TArray<FString> Components;
    TArray<FString> Emitters;

};

struct FNiagaraSpawnInfo
{
    int32 Count;
    float InterpStartDt;
    float IntervalDt;
    int32 SpawnGroup;

};

struct FNiagaraStackSection
{
    FName SectionIdentifier;
    FText SectionDisplayName;
    TArray<FText> Categories;
    bool bEnabled;

};

struct FNiagaraStatScope
{
    FName FullName;
    FName FriendlyName;

};

struct FNiagaraStructConversionStep
{
    int32 SourceBytes;
    int32 SourceOffset;
    int32 SimulationBytes;
    int32 SimulationOffset;
    ENiagaraStructConversionType ConversionType;

};

struct FNiagaraSystemCompileRequest
{
    TArray<class UObject*> RootObjects;

};

struct FNiagaraSystemCompiledData
{
    FNiagaraParameterStore InstanceParamStore;
    FNiagaraDataSetCompiledData DataSetCompiledData;
    FNiagaraDataSetCompiledData SpawnInstanceParamsDataSetCompiledData;
    FNiagaraDataSetCompiledData UpdateInstanceParamsDataSetCompiledData;
    FNiagaraParameterDataSetBindingCollection SpawnInstanceGlobalBinding;
    FNiagaraParameterDataSetBindingCollection SpawnInstanceSystemBinding;
    FNiagaraParameterDataSetBindingCollection SpawnInstanceOwnerBinding;
    TArray<FNiagaraParameterDataSetBindingCollection> SpawnInstanceEmitterBindings;
    FNiagaraParameterDataSetBindingCollection UpdateInstanceGlobalBinding;
    FNiagaraParameterDataSetBindingCollection UpdateInstanceSystemBinding;
    FNiagaraParameterDataSetBindingCollection UpdateInstanceOwnerBinding;
    TArray<FNiagaraParameterDataSetBindingCollection> UpdateInstanceEmitterBindings;

};

struct FNiagaraSystemScalabilityOverride : public FNiagaraSystemScalabilitySettings
{
    uint8 bOverrideDistanceSettings;
    uint8 bOverrideInstanceCountSettings;
    uint8 bOverridePerSystemInstanceCountSettings;
    uint8 bOverrideVisibilitySettings;
    uint8 bOverrideGlobalBudgetScalingSettings;
    uint8 bOverrideCullProxySettings;

};

struct FNiagaraSystemScalabilityOverrides
{
    TArray<FNiagaraSystemScalabilityOverride> Overrides;

};

struct FNiagaraSystemScalabilitySettings
{
    FNiagaraPlatformSet Platforms;
    uint8 bCullByDistance;
    uint8 bCullMaxInstanceCount;
    uint8 bCullPerSystemMaxInstanceCount;
    float MaxDistance;
    uint8 bCullByMaxTimeWithoutRender;
    int32 MaxInstances;
    int32 MaxSystemInstances;
    float MaxTimeWithoutRender;
    ENiagaraCullProxyMode CullProxyMode;
    int32 MaxSystemProxies;
    FNiagaraSystemVisibilityCullingSettings VisibilityCulling;
    FNiagaraGlobalBudgetScaling BudgetScaling;

};

struct FNiagaraSystemScalabilitySettingsArray
{
    TArray<FNiagaraSystemScalabilitySettings> Settings;

};

struct FNiagaraSystemSimCacheCaptureReply
{
    FName ComponentName;
    TArray<uint8> SimCacheData;

};

struct FNiagaraSystemSimCacheCaptureRequest
{
    FName ComponentName;
    uint32 CaptureDelayFrames;
    uint32 CaptureFrames;

};

struct FNiagaraSystemUpdateContext
{
    TArray<class UNiagaraComponent*> ComponentsToReset;
    TArray<class UNiagaraComponent*> ComponentsToReInit;
    TArray<class UNiagaraComponent*> ComponentsToNotifySimDestroy;
    TArray<class UNiagaraSystem*> SystemSimsToDestroy;
    TArray<class UNiagaraSystem*> SystemSimsToRecache;

};

struct FNiagaraSystemVisibilityCullingSettings
{
    uint8 bCullWhenNotRendered;
    uint8 bCullByViewFrustum;
    uint8 bAllowPreCullingByViewFrustum;
    float MaxTimeOutsideViewFrustum;
    float MaxTimeWithoutRender;

};

struct FNiagaraTypeDefinition
{
    class UObject* ClassStructOrEnum;
    uint16 UnderlyingType;
    uint8 Flags;

};

struct FNiagaraTypeDefinitionHandle
{
    int32 RegisteredTypeIndex;

};

struct FNiagaraTypeLayoutInfo
{
    TArray<uint32> FloatComponentByteOffsets;
    TArray<uint32> FloatComponentRegisterOffsets;
    TArray<uint32> Int32ComponentByteOffsets;
    TArray<uint32> Int32ComponentRegisterOffsets;
    TArray<uint32> HalfComponentByteOffsets;
    TArray<uint32> HalfComponentRegisterOffsets;

};

struct FNiagaraUObjectPropertyReaderRemap
{
    FName GraphName;
    FName RemapName;

};

struct FNiagaraUserParameterBinding
{
    FNiagaraVariable Parameter;

};

struct FNiagaraUserRedirectionParameterStore : public FNiagaraParameterStore
{
    TMap<class FNiagaraVariable, class FNiagaraVariable> UserParameterRedirects;

};

struct FNiagaraVMExecutableByteCode
{
    TArray<uint8> Data;
    int32 UncompressedSize;

};

struct FNiagaraVMExecutableData
{
    FNiagaraVMExecutableByteCode ByteCode;
    FNiagaraVMExecutableByteCode OptimizedByteCode;
    int32 NumTempRegisters;
    int32 NumUserPtrs;
    TArray<FNiagaraCompilerTag> CompileTags;
    TArray<uint8> ScriptLiterals;
    TArray<FNiagaraVariable> Attributes;
    FNiagaraScriptDataUsageInfo DataUsage;
    TArray<FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo;
    TArray<FVMExternalFunctionBindingInfo> CalledVMExternalFunctions;
    TArray<FNiagaraDataSetID> ReadDataSets;
    TArray<FNiagaraDataSetProperties> WriteDataSets;
    TArray<FNiagaraStatScope> StatScopes;
    FNiagaraShaderScriptParametersMetadata ShaderScriptParametersMetadata;
    ENiagaraScriptCompileStatus LastCompileStatus;
    TArray<FSimulationStageMetaData> SimulationStageMetaData;
    TArray<uint8> ExperimentalContextData;
    uint8 bReadsSignificanceIndex;
    uint8 bNeedsGPUContextInit;

};

struct FNiagaraVMExecutableDataId
{
    FGuid CompilerVersionID;
    ENiagaraScriptUsage ScriptUsageType;
    FGuid ScriptUsageTypeID;
    uint8 bUsesRapidIterationParams;
    uint8 bDisableDebugSwitches;
    uint8 bInterpolatedSpawn;
    uint8 bRequiresPersistentIDs;
    FGuid BaseScriptID;
    FNiagaraCompileHash BaseScriptCompileHash;
    FGuid ScriptVersionID;

};

struct FNiagaraVariable : public FNiagaraVariableBase
{
    TArray<uint8> VarData;

};

struct FNiagaraVariableAttributeBinding
{
    FNiagaraVariableBase ParamMapVariable;
    FNiagaraVariable DataSetVariable;
    FNiagaraVariable RootVariable;
    TEnumAsByte<ENiagaraBindingSource> BindingSourceMode;
    uint8 bBindingExistsOnSource;
    uint8 bIsCachedParticleValue;

};

struct FNiagaraVariableBase
{
    FName Name;
    FNiagaraTypeDefinitionHandle TypeDefHandle;

};

struct FNiagaraVariableDataInterfaceBinding
{
    FNiagaraVariable BoundVariable;

};

struct FNiagaraVariableInfo
{
    FNiagaraVariable Variable;
    FText Definition;
    class UNiagaraDataInterface* DataInterface;

};

struct FNiagaraVariableLayoutInfo
{
    uint32 FloatComponentStart;
    uint32 Int32ComponentStart;
    uint32 HalfComponentStart;
    FNiagaraTypeLayoutInfo LayoutInfo;

};

struct FNiagaraVariableMetaData
{
    FText Description;
    FText CategoryName;
    bool bAdvancedDisplay;
    bool bDisplayInOverviewStack;
    int32 InlineParameterSortPriority;
    bool bOverrideColor;
    FLinearColor InlineParameterColorOverride;
    TArray<FNiagaraEnumParameterMetaData> InlineParameterEnumOverrides;
    bool bEnableBoolOverride;
    FNiagaraBoolParameterMetaData InlineParameterBoolOverride;
    int32 EditorSortPriority;
    bool bInlineEditConditionToggle;
    FNiagaraInputConditionMetadata EditCondition;
    FNiagaraInputConditionMetadata VisibleCondition;
    TMap<class FName, class FString> PropertyMetaData;
    FName ParentAttribute;
    TArray<FName> AlternateAliases;
    FGuid VariableGuid;
    bool bIsStaticSwitch;
    int32 StaticSwitchDefaultValue;

};

struct FNiagaraVariableWithOffset : public FNiagaraVariableBase
{
    int32 Offset;
    FNiagaraLwcStructConverter StructConverter;

};

struct FNiagaraVariant
{
    class UObject* Object;
    class UNiagaraDataInterface* DataInterface;
    TArray<uint8> Bytes;
    ENiagaraVariantMode CurrentMode;

};

struct FNiagaraWildcard
{
};

struct FNiagaraWorldManagerTickFunction : public FTickFunction
{
};

struct FParameterDefinitionsSubscription
{
};

struct FVMExternalFunctionBindingInfo
{
    FName Name;
    FName OwnerName;
    TArray<bool> InputParamLocations;
    int32 NumOutputs;
    TArray<FVMFunctionSpecifier> FunctionSpecifiers;

};

struct FVMFunctionSpecifier
{
    FName Key;
    FName Value;

};

struct FVersionedNiagaraEmitter
{
    class UNiagaraEmitter* Emitter;
    FGuid Version;

};

struct FVersionedNiagaraEmitterData
{
    FNiagaraAssetVersion Version;
    FText VersionChangeDescription;
    ENiagaraPythonUpdateScriptReference UpdateScriptExecution;
    FString PythonUpdateScript;
    FFilePath ScriptAsset;
    bool bDeprecated;
    FText DeprecationMessage;
    bool bLocalSpace;
    bool bDeterminism;
    int32 RandomSeed;
    uint8 bInterpolatedSpawning;
    ENiagaraSimTarget SimTarget;
    ENiagaraEmitterCalculateBoundMode CalculateBoundsMode;
    FBox FixedBounds;
    uint8 bRequiresPersistentIDs;
    uint8 bCombineEventSpawn;
    TArray<FNiagaraEventScriptProperties> EventHandlerScriptProps;
    FNiagaraPlatformSet Platforms;
    FNiagaraEmitterScalabilityOverrides ScalabilityOverrides;
    uint8 bLimitDeltaTime;
    int32 MaxGPUParticlesSpawnPerFrame;
    float MaxDeltaTimePerTick;
    EParticleAllocationMode AllocationMode;
    int32 PreAllocationCount;
    FNiagaraEmitterScriptProperties UpdateScriptProps;
    FNiagaraEmitterScriptProperties SpawnScriptProps;
    FNiagaraParameterStore RendererBindings;
    TArray<class UNiagaraRendererProperties*> RendererProperties;
    TArray<class UNiagaraSimulationStageBase*> SimulationStages;
    class UNiagaraScript* GPUComputeScript;
    TArray<FName> SharedEventGeneratorIds;
    FNiagaraEmitterScalabilitySettings CurrentScalabilitySettings;

};

struct FVersionedNiagaraScriptData
{
};

class ANiagaraActor : public AActor
{
    class UNiagaraComponent* NiagaraComponent;
    uint8 bDestroyOnSystemFinish;

    void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);
    void OnNiagaraSystemFinished(class UNiagaraComponent* FinishedComponent);
};

class ANiagaraLensEffectBase : public ANiagaraActor
{
    FTransform DesiredRelativeTransform;
    float BaseAuthoredFOV;
    uint8 bAllowMultipleInstances;
    uint8 bResetWhenRetriggered;
    TArray<class TSubclassOf<AActor>> EmittersToTreatAsSame;
    class APlayerCameraManager* OwningCameraManager;

};

class ANiagaraPerfBaselineActor : public AActor
{
    class UNiagaraBaselineController* Controller;
    class UTextRenderComponent* Label;

};

class ANiagaraPreviewBase : public AActor
{

    void SetSystem(class UNiagaraSystem* InSystem);
    void SetLabelText(const FText& InXAxisText, const FText& InYAxisText);
};

class ANiagaraPreviewGrid : public AActor
{
    class UNiagaraSystem* System;
    ENiagaraPreviewGridResetMode ResetMode;
    class UNiagaraPreviewAxis* PreviewAxisX;
    class UNiagaraPreviewAxis* PreviewAxisY;
    TSubclassOf<class ANiagaraPreviewBase> PreviewClass;
    float SpacingX;
    float SpacingY;
    int32 NumX;
    int32 NumY;
    TArray<class UChildActorComponent*> PreviewComponents;

    void SetPaused(bool bPaused);
    void GetPreviews(TArray<class UNiagaraComponent*>& OutPreviews);
    void DeactivatePreviews();
    void ActivatePreviews(bool bReset);
};

class INiagaraParticleCallbackHandler : public IInterface
{

    void ReceiveParticleData(const TArray<FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, const FVector& SimulationPositionOffset);
};

class INiagaraPhysicsAssetDICollectorInterface : public IInterface
{
};

class UAsyncNiagaraCaptureSimCache : public UBlueprintAsyncActionBase
{
    class UNiagaraSimCache* CaptureSimCache;
    class UNiagaraComponent* CaptureComponent;
    int32 CaptureNumFrames;
    int32 CaptureFrameRate;
    int32 CaptureFrameCounter;
    int32 TimeOutCounter;
    FAsyncNiagaraCaptureSimCacheCaptureComplete CaptureComplete;
    void OnCaptureComplete(bool bSuccess);
    bool bAdvanceSimulation;
    float AdvanceDeltaTime;

    void OnCaptureComplete__DelegateSignature(bool bSuccess);
    class UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCacheUntilComplete(class UNiagaraSimCache* SimCache, FNiagaraSimCacheCreateParameters CreateParameters, class UNiagaraComponent* NiagaraComponent, class UNiagaraSimCache*& OutSimCache, int32 CaptureRate, bool bAdvanceSimulation, float AdvanceDeltaTime);
    class UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCacheMultiFrame(class UNiagaraSimCache* SimCache, FNiagaraSimCacheCreateParameters CreateParameters, class UNiagaraComponent* NiagaraComponent, class UNiagaraSimCache*& OutSimCache, int32 NumFrames, int32 CaptureRate, bool bAdvanceSimulation, float AdvanceDeltaTime);
};

class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{
};

class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
};

class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{
};

class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{
};

class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{
    FNiagaraVariable Parameter;

};

class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{
    ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior;
    ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior;
    ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior;
    ENiagaraAgeUpdateMode AgeUpdateMode;
    bool bAllowScalability;

};

class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{
};

class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;

};

class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
    int32 ChannelsUsed;

};

class UNiagaraBakerOutput : public UObject
{
    FString OutputName;

};

class UNiagaraBakerOutputSimCache : public UNiagaraBakerOutput
{
    FString SimCacheAssetPathFormat;
    FNiagaraSimCacheCreateParameters CreateParameters;

};

class UNiagaraBakerOutputTexture2D : public UNiagaraBakerOutput
{
    FNiagaraBakerTextureSource SourceBinding;
    uint8 bGenerateAtlas;
    uint8 bGenerateFrames;
    uint8 bExportFrames;
    uint8 bSetTextureAddressX;
    uint8 bSetTextureAddressY;
    FIntPoint FrameSize;
    FIntPoint AtlasTextureSize;
    TEnumAsByte<TextureAddress> TextureAddressX;
    TEnumAsByte<TextureAddress> TextureAddressY;
    FString AtlasAssetPathFormat;
    FString FramesAssetPathFormat;
    FString FramesExportPathFormat;

};

class UNiagaraBakerOutputVolumeTexture : public UNiagaraBakerOutput
{
    FNiagaraBakerTextureSource SourceBinding;
    uint8 bGenerateAtlas;
    uint8 bGenerateFrames;
    uint8 bExportFrames;
    FString AtlasAssetPathFormat;
    FString FramesAssetPathFormat;
    FString FramesExportPathFormat;

};

class UNiagaraBakerSettings : public UObject
{
    float StartSeconds;
    float DurationSeconds;
    int32 FramesPerSecond;
    uint8 bPreviewLooping;
    FIntPoint FramesPerDimension;
    TArray<class UNiagaraBakerOutput*> Outputs;
    TArray<FNiagaraBakerCameraSettings> CameraSettings;
    int32 CurrentCameraIndex;
    FName BakeQualityLevel;
    uint8 bRenderComponentOnly;
    TArray<FNiagaraBakerTextureSettings> OutputTextures;
    ENiagaraBakerViewMode CameraViewportMode;
    FVector CameraViewportLocation;
    FRotator CameraViewportRotation;
    float CameraOrbitDistance;
    float CameraFOV;
    float CameraOrthoWidth;
    uint8 bUseCameraAspectRatio;
    float CameraAspectRatio;

};

class UNiagaraBaselineController : public UObject
{
    float TestDuration;
    class UNiagaraEffectType* EffectType;
    class ANiagaraPerfBaselineActor* Owner;
    TSoftObjectPtr<UNiagaraSystem> System;

    bool OnTickTest();
    void OnOwnerTick(float DeltaTime);
    void OnEndTest(FNiagaraPerfBaselineStats Stats);
    void OnBeginTest();
    class UNiagaraSystem* GetSystem();
};

class UNiagaraBaselineController_Basic : public UNiagaraBaselineController
{
    int32 NumInstances;
    TArray<class UNiagaraComponent*> SpawnedComponents;

};

class UNiagaraComponent : public UFXSystemComponent
{
    class UNiagaraSystem* Asset;
    ENiagaraTickBehavior TickBehavior;
    int32 RandomSeedOffset;
    FNiagaraUserRedirectionParameterStore OverrideParameters;
    uint8 bForceSolo;
    uint8 bEnableGpuComputeDebug;
    uint8 bAutoDestroy;
    uint8 bRenderingEnabled;
    uint8 bAutoManageAttachment;
    uint8 bAutoAttachWeldSimulatedBodies;
    float MaxTimeBeforeForceUpdateTransform;
    FNiagaraComponentOnSystemFinished OnSystemFinished;
    void OnNiagaraSystemFinished(class UNiagaraComponent* PSystem);
    TWeakObjectPtr<class USceneComponent> AutoAttachParent;
    FName AutoAttachSocketName;
    EAttachmentRule AutoAttachLocationRule;
    EAttachmentRule AutoAttachRotationRule;
    EAttachmentRule AutoAttachScaleRule;
    uint8 bAllowScalability;
    class UNiagaraSimCache* SimCache;
    class UNiagaraCullProxyComponent* CullProxy;

    void SetVariableVec4(FName InVariableName, const FVector4& InValue);
    void SetVariableVec3(FName InVariableName, FVector InValue);
    void SetVariableVec2(FName InVariableName, FVector2D InValue);
    void SetVariableTextureRenderTarget(FName InVariableName, class UTextureRenderTarget* TextureRenderTarget);
    void SetVariableTexture(FName InVariableName, class UTexture* Texture);
    void SetVariableStaticMesh(FName InVariableName, class UStaticMesh* InValue);
    void SetVariableQuat(FName InVariableName, const FQuat& InValue);
    void SetVariablePosition(FName InVariableName, FVector InValue);
    void SetVariableObject(FName InVariableName, class UObject* Object);
    void SetVariableMatrix(FName InVariableName, const FMatrix& InValue);
    void SetVariableMaterial(FName InVariableName, class UMaterialInterface* Object);
    void SetVariableLinearColor(FName InVariableName, const FLinearColor& InValue);
    void SetVariableInt(FName InVariableName, int32 InValue);
    void SetVariableFloat(FName InVariableName, float InValue);
    void SetVariableBool(FName InVariableName, bool InValue);
    void SetVariableActor(FName InVariableName, class AActor* Actor);
    void SetTickBehavior(ENiagaraTickBehavior NewTickBehavior);
    void SetSystemFixedBounds(FBox LocalBounds);
    void SetSimCache(class UNiagaraSimCache* SimCache, bool bResetSystem);
    void SetSeekDelta(float InSeekDelta);
    void SetRenderingEnabled(bool bInRenderingEnabled);
    void SetRandomSeedOffset(int32 NewRandomSeedOffset);
    void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance, float PreviewMaxDistance);
    void SetPaused(bool bInPaused);
    void SetNiagaraVariableVec4(FString InVariableName, const FVector4& InValue);
    void SetNiagaraVariableVec3(FString InVariableName, FVector InValue);
    void SetNiagaraVariableVec2(FString InVariableName, FVector2D InValue);
    void SetNiagaraVariableQuat(FString InVariableName, const FQuat& InValue);
    void SetNiagaraVariablePosition(FString InVariableName, FVector InValue);
    void SetNiagaraVariableObject(FString InVariableName, class UObject* Object);
    void SetNiagaraVariableMatrix(FString InVariableName, const FMatrix& InValue);
    void SetNiagaraVariableLinearColor(FString InVariableName, const FLinearColor& InValue);
    void SetNiagaraVariableInt(FString InVariableName, int32 InValue);
    void SetNiagaraVariableFloat(FString InVariableName, float InValue);
    void SetNiagaraVariableBool(FString InVariableName, bool InValue);
    void SetNiagaraVariableActor(FString InVariableName, class AActor* Actor);
    void SetMaxSimTime(float InMaxTime);
    void SetLockDesiredAgeDeltaTimeToSeekDelta(bool bLock);
    void SetGpuComputeDebug(bool bEnableDebug);
    void SetForceSolo(bool bInForceSolo);
    void SetForceLocalPlayerEffect(bool bIsPlayerEffect);
    void SetEmitterFixedBounds(FName EmitterName, FBox LocalBounds);
    void SetDesiredAge(float InDesiredAge);
    void SetCustomTimeDilation(float Dilation);
    void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);
    void SetAutoDestroy(bool bInAutoDestroy);
    void SetAsset(class UNiagaraSystem* InAsset, bool bResetExistingOverrideParameters);
    void SetAllowScalability(bool bAllow);
    void SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode);
    void SeekToDesiredAge(float InDesiredAge);
    void ResetSystem();
    void ReinitializeSystem();
    bool IsPaused();
    void InitForPerformanceBaseline();
    ENiagaraTickBehavior GetTickBehavior();
    FBox GetSystemFixedBounds();
    class UNiagaraSimCache* GetSimCache();
    float GetSeekDelta();
    int32 GetRandomSeedOffset();
    bool GetPreviewLODDistanceEnabled();
    float GetPreviewLODDistance();
    TArray<FVector> GetNiagaraParticleValueVec3_DebugOnly(FString InEmitterName, FString InValueName);
    TArray<float> GetNiagaraParticleValues_DebugOnly(FString InEmitterName, FString InValueName);
    TArray<FVector> GetNiagaraParticlePositions_DebugOnly(FString InEmitterName);
    float GetMaxSimTime();
    bool GetLockDesiredAgeDeltaTimeToSeekDelta();
    bool GetForceSolo();
    bool GetForceLocalPlayerEffect();
    FBox GetEmitterFixedBounds(FName EmitterName);
    float GetDesiredAge();
    class UNiagaraDataInterface* GetDataInterface(FString Name);
    float GetCustomTimeDilation();
    class UNiagaraSystem* GetAsset();
    bool GetAllowScalability();
    ENiagaraAgeUpdateMode GetAgeUpdateMode();
    void ClearSystemFixedBounds();
    void ClearSimCache(bool bResetSystem);
    void ClearEmitterFixedBounds(FName EmitterName);
    void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);
    void AdvanceSimulation(int32 TickCount, float TickDeltaSeconds);
};

class UNiagaraComponentPool : public UObject
{
    TMap<class UNiagaraSystem*, class FNCPool> WorldParticleSystemPools;

};

class UNiagaraComponentRendererProperties : public UNiagaraRendererProperties
{
    TSubclassOf<class USceneComponent> ComponentType;
    uint32 ComponentCountLimit;
    FNiagaraVariableAttributeBinding EnabledBinding;
    FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;
    bool bAssignComponentsOnParticleID;
    bool bCreateComponentFirstParticleFrame;
    bool bOnlyActivateNewlyAquiredComponents;
    int32 RendererVisibility;
    class USceneComponent* TemplateComponent;
    TArray<FNiagaraComponentPropertyBinding> PropertyBindings;

};

class UNiagaraComponentSettings : public UObject
{
    TSet<FName> SuppressActivationList;
    TSet<FName> ForceAutoPooolingList;
    TSet<FNiagaraEmitterNameSettingsRef> SuppressEmitterList;
    TSet<FNiagaraEmitterNameSettingsRef> GPUEmitterAllowList;
    TSet<FName> GpuDataInterfaceDenyList;

};

class UNiagaraConvertInPlaceUtilityBase : public UObject
{
};

class UNiagaraCullProxyComponent : public UNiagaraComponent
{
    TArray<FNiagaraCulledComponentInfo> Instances;

};

class UNiagaraDIRigidMeshCollisionFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetSourceActors(class UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<class AActor*>& SourceActors);
};

class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{
};

class UNiagaraDataInterface2DArrayTexture : public UNiagaraDataInterface
{
    class UTexture* Texture;
    FNiagaraUserParameterBinding TextureUserParameter;

};

class UNiagaraDataInterfaceActorComponent : public UNiagaraDataInterface
{
    bool bRequireCurrentFrameData;
    ENDIActorComponentSourceMode SourceMode;
    int32 LocalPlayerIndex;
    TLazyObjectPtr<class AActor> SourceActor;
    FNiagaraUserParameterBinding ActorOrComponentParameter;

};

class UNiagaraDataInterfaceArray : public UNiagaraDataInterfaceRWBase
{
    ENiagaraGpuSyncMode GpuSyncMode;
    int32 MaxElements;

};

class UNiagaraDataInterfaceArrayBool : public UNiagaraDataInterfaceArray
{
    TArray<bool> BoolData;

};

class UNiagaraDataInterfaceArrayColor : public UNiagaraDataInterfaceArray
{
    TArray<FLinearColor> ColorData;

};

class UNiagaraDataInterfaceArrayFloat : public UNiagaraDataInterfaceArray
{
    TArray<float> FloatData;

};

class UNiagaraDataInterfaceArrayFloat2 : public UNiagaraDataInterfaceArray
{
    TArray<FVector2f> InternalFloatData;

};

class UNiagaraDataInterfaceArrayFloat3 : public UNiagaraDataInterfaceArray
{
    TArray<FVector3f> InternalFloatData;

};

class UNiagaraDataInterfaceArrayFloat4 : public UNiagaraDataInterfaceArray
{
    TArray<FVector4f> InternalFloatData;

};

class UNiagaraDataInterfaceArrayFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, const FVector& Value, bool bSizeToFit);
    void SetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, const FVector4& Value, bool bSizeToFit);
    void SetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<FVector4>& ArrayData);
    void SetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, const FVector2D& Value, bool bSizeToFit);
    void SetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<FVector2D>& ArrayData);
    void SetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<FVector>& ArrayData);
    void SetNiagaraArrayUInt8Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, int32 Value, bool bSizeToFit);
    void SetNiagaraArrayUInt8(class UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<int32>& ArrayData);
    void SetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, const FQuat& Value, bool bSizeToFit);
    void SetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<FQuat>& ArrayData);
    void SetNiagaraArrayPositionValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, const FVector& Value, bool bSizeToFit);
    void SetNiagaraArrayPosition(class UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<FVector>& ArrayData);
    void SetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, int32 Value, bool bSizeToFit);
    void SetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<int32>& ArrayData);
    void SetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, float Value, bool bSizeToFit);
    void SetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<float>& ArrayData);
    void SetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, const FLinearColor& Value, bool bSizeToFit);
    void SetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<FLinearColor>& ArrayData);
    void SetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, const bool& Value, bool bSizeToFit);
    void SetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<bool>& ArrayData);
    FVector GetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index);
    FVector4 GetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index);
    TArray<FVector4> GetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, FName OverrideName);
    FVector2D GetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index);
    TArray<FVector2D> GetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, FName OverrideName);
    TArray<FVector> GetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, FName OverrideName);
    int32 GetNiagaraArrayUInt8Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index);
    TArray<int32> GetNiagaraArrayUInt8(class UNiagaraComponent* NiagaraSystem, FName OverrideName);
    FQuat GetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index);
    TArray<FQuat> GetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, FName OverrideName);
    FVector GetNiagaraArrayPositionValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index);
    TArray<FVector> GetNiagaraArrayPosition(class UNiagaraComponent* NiagaraSystem, FName OverrideName);
    int32 GetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index);
    TArray<int32> GetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, FName OverrideName);
    float GetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index);
    TArray<float> GetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, FName OverrideName);
    FLinearColor GetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index);
    TArray<FLinearColor> GetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, FName OverrideName);
    bool GetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index);
    TArray<bool> GetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, FName OverrideName);
};

class UNiagaraDataInterfaceArrayInt32 : public UNiagaraDataInterfaceArray
{
    TArray<int32> IntData;

};

class UNiagaraDataInterfaceArrayNiagaraID : public UNiagaraDataInterfaceArray
{
    TArray<FNiagaraID> IntData;

};

class UNiagaraDataInterfaceArrayPosition : public UNiagaraDataInterfaceArray
{
    TArray<FNiagaraPosition> PositionData;

};

class UNiagaraDataInterfaceArrayQuat : public UNiagaraDataInterfaceArray
{
    TArray<FQuat4f> InternalQuatData;

};

class UNiagaraDataInterfaceArrayUInt8 : public UNiagaraDataInterfaceArray
{
    TArray<uint8> InternalIntData;

};

class UNiagaraDataInterfaceAsyncGpuTrace : public UNiagaraDataInterface
{
    int32 MaxTracesPerParticle;
    int32 MaxRetraces;
    TEnumAsByte<ENDICollisionQuery_AsyncGpuTraceProvider> TraceProvider;

};

class UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface
{
    class USoundSubmix* Submix;
    int32 Resolution;
    float ScopeInMilliseconds;

};

class UNiagaraDataInterfaceAudioPlayer : public UNiagaraDataInterface
{
    class USoundBase* SoundToPlay;
    class USoundAttenuation* Attenuation;
    class USoundConcurrency* Concurrency;
    TArray<FName> ParameterNames;
    bool bLimitPlaysPerTick;
    int32 MaxPlaysPerTick;
    bool bStopWhenComponentIsDestroyed;
    bool bAllowLoopingOneShotSounds;

};

class UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix
{
    int32 Resolution;
    float MinimumFrequency;
    float MaximumFrequency;
    float NoiseFloorDb;

};

class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface
{
    class USoundSubmix* Submix;

};

class UNiagaraDataInterfaceCamera : public UNiagaraDataInterface
{
    int32 PlayerControllerIndex;
    bool bRequireCurrentFrameData;

};

class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{
};

class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{
    FRichCurve RedCurve;
    FRichCurve GreenCurve;
    FRichCurve BlueCurve;
    FRichCurve AlphaCurve;

};

class UNiagaraDataInterfaceCubeTexture : public UNiagaraDataInterface
{
    class UTexture* Texture;
    FNiagaraUserParameterBinding TextureUserParameter;

};

class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{
    uint32 Seed;

};

class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{
    FRichCurve Curve;

};

class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{
    TArray<float> ShaderLUT;
    float LUTMinTime;
    float LUTMaxTime;
    float LUTInvTimeRange;
    float LUTNumSamplesMinusOne;
    uint8 bUseLUT;
    uint8 bExposeCurve;
    FName ExposedName;
    class UTexture2D* ExposedTexture;

};

class UNiagaraDataInterfaceDebugDraw : public UNiagaraDataInterface
{
    uint32 OverrideMaxLineInstances;

};

class UNiagaraDataInterfaceEmitterProperties : public UNiagaraDataInterface
{
    FNiagaraDataInterfaceEmitterBinding EmitterBinding;

};

class UNiagaraDataInterfaceExport : public UNiagaraDataInterface
{
    FNiagaraUserParameterBinding CallbackHandlerParameter;
    ENDIExport_GPUAllocationMode GPUAllocationMode;
    int32 GPUAllocationFixedSize;
    float GPUAllocationPerParticleSize;

};

class UNiagaraDataInterfaceGBuffer : public UNiagaraDataInterface
{
};

class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
{
    int32 NumCellsX;
    int32 NumCellsY;
    int32 NumCellsMaxAxis;
    int32 NumAttributes;
    bool SetGridFromMaxAxis;
    FVector2D WorldBBoxSize;

};

class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
{
    FNiagaraUserParameterBinding RenderTargetUserParameter;
    ENiagaraGpuBufferFormat OverrideBufferFormat;
    uint8 bOverrideFormat;
    TMap<uint64, UTextureRenderTarget2DArray*> ManagedRenderTargets;

    void GetTextureSize(const class UNiagaraComponent* Component, int32& SizeX, int32& SizeY);
    void GetRawTextureSize(const class UNiagaraComponent* Component, int32& SizeX, int32& SizeY);
    bool FillTexture2D(const class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32 AttributeIndex);
    bool FillRawTexture2D(const class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32& TilesX, int32& TilesY);
};

class UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2DCollection
{
    FString EmitterName;
    FString DIName;

};

class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
{
    FIntVector NumCells;
    float CellSize;
    int32 NumCellsMaxAxis;
    ESetResolutionMethod SetResolutionMethod;
    FVector WorldBBoxSize;

};

class UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D
{
    int32 NumAttributes;
    FNiagaraUserParameterBinding RenderTargetUserParameter;
    ENiagaraGpuBufferFormat OverrideBufferFormat;
    uint8 bOverrideFormat;

    void GetTextureSize(const class UNiagaraComponent* Component, int32& SizeX, int32& SizeY, int32& SizeZ);
    void GetRawTextureSize(const class UNiagaraComponent* Component, int32& SizeX, int32& SizeY, int32& SizeZ);
    bool FillVolumeTexture(const class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32 AttributeIndex);
    bool FillRawVolumeTexture(const class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32& TilesX, int32& TilesY, int32& TileZ);
};

class UNiagaraDataInterfaceGrid3DCollectionReader : public UNiagaraDataInterfaceGrid3DCollection
{
    FString EmitterName;
    FString DIName;

};

class UNiagaraDataInterfaceIntRenderTarget2D : public UNiagaraDataInterfaceRWBase
{
    FIntPoint Size;
    FNiagaraUserParameterBinding RenderTargetUserParameter;
    TMap<uint64, UTextureRenderTarget2D*> ManagedRenderTargets;

};

class UNiagaraDataInterfaceLandscape : public UNiagaraDataInterface
{
    class AActor* SourceLandscape;
    ENDILandscape_SourceMode SourceMode;
    TArray<class UPhysicalMaterial*> PhysicalMaterials;

};

class UNiagaraDataInterfaceMeshRendererInfo : public UNiagaraDataInterface
{
    class UNiagaraMeshRendererProperties* MeshRenderer;

};

class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
{
    uint32 MaxNeighborsPerCell;

};

class UNiagaraDataInterfaceOcclusion : public UNiagaraDataInterface
{
};

class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterfaceRWBase
{
    FString EmitterName;

};

class UNiagaraDataInterfacePhysicsAsset : public UNiagaraDataInterface
{
    class UPhysicsAsset* DefaultSource;
    TSoftObjectPtr<AActor> SoftSourceActor;
    FNiagaraUserParameterBinding MeshUserParameter;

};

class UNiagaraDataInterfacePlatformSet : public UNiagaraDataInterface
{
    FNiagaraPlatformSet Platforms;

};

class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
{
};

class UNiagaraDataInterfaceRasterizationGrid3D : public UNiagaraDataInterfaceGrid3D
{
    int32 NumAttributes;
    float Precision;
    int32 ResetValue;

};

class UNiagaraDataInterfaceRenderTarget2D : public UNiagaraDataInterfaceRWBase
{
    FIntPoint Size;
    ENiagaraMipMapGeneration MipMapGeneration;
    ENiagaraMipMapGenerationType MipMapGenerationType;
    TEnumAsByte<ETextureRenderTargetFormat> OverrideRenderTargetFormat;
    uint8 bInheritUserParameterSettings;
    uint8 bOverrideFormat;
    FNiagaraUserParameterBinding RenderTargetUserParameter;
    TMap<uint64, UTextureRenderTarget2D*> ManagedRenderTargets;

};

class UNiagaraDataInterfaceRenderTarget2DArray : public UNiagaraDataInterfaceRWBase
{
    FIntVector Size;
    TEnumAsByte<ETextureRenderTargetFormat> OverrideRenderTargetFormat;
    uint8 bInheritUserParameterSettings;
    uint8 bOverrideFormat;
    FNiagaraUserParameterBinding RenderTargetUserParameter;
    TMap<uint64, UTextureRenderTarget2DArray*> ManagedRenderTargets;

};

class UNiagaraDataInterfaceRenderTargetCube : public UNiagaraDataInterfaceRWBase
{
    int32 Size;
    TEnumAsByte<ETextureRenderTargetFormat> OverrideRenderTargetFormat;
    uint8 bInheritUserParameterSettings;
    uint8 bOverrideFormat;
    FNiagaraUserParameterBinding RenderTargetUserParameter;
    TMap<uint64, UTextureRenderTargetCube*> ManagedRenderTargets;

};

class UNiagaraDataInterfaceRenderTargetVolume : public UNiagaraDataInterfaceRWBase
{
    FIntVector Size;
    TEnumAsByte<ETextureRenderTargetFormat> OverrideRenderTargetFormat;
    uint8 bInheritUserParameterSettings;
    uint8 bOverrideFormat;
    FNiagaraUserParameterBinding RenderTargetUserParameter;
    TMap<uint64, UTextureRenderTargetVolume*> ManagedRenderTargets;

};

class UNiagaraDataInterfaceRigidMeshCollisionQuery : public UNiagaraDataInterface
{
    TArray<FName> ActorTags;
    TArray<FName> ComponentTags;
    TArray<TSoftObjectPtr<AActor>> SourceActors;
    bool OnlyUseMoveable;
    bool GlobalSearchAllowed;
    bool GlobalSearchForced;
    bool GlobalSearchFallback_Unscripted;
    int32 MaxNumPrimitives;

};

class UNiagaraDataInterfaceSimCacheReader : public UNiagaraDataInterface
{
    FNiagaraUserParameterBinding SimCacheBinding;
    class UNiagaraSimCache* SimCache;
    FName EmitterBinding;

};

class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface
{
    ENiagaraGpuSyncMode GpuSyncMode;
    int32 InitialValue;

};

class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{
    ENDISkeletalMesh_SourceMode SourceMode;
    TSoftObjectPtr<AActor> SoftSourceActor;
    TArray<FName> ComponentTags;
    class USkeletalMeshComponent* SourceComponent;
    FNiagaraUserParameterBinding MeshUserParameter;
    ENDISkeletalMesh_SkinningMode SkinningMode;
    TArray<FName> SamplingRegions;
    int32 WholeMeshLOD;
    TArray<FName> FilteredBones;
    TArray<FName> FilteredSockets;
    FName ExcludeBoneName;
    uint8 bExcludeBone;
    int32 UvSetIndex;
    bool bRequireCurrentFrameData;

    void OnSourceEndPlay(class AActor* InSource, TEnumAsByte<EEndPlayReason> Reason);
};

class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{
    class AActor* Source;
    FNiagaraUserParameterBinding SplineUserParameter;
    bool bUseLUT;
    int32 NumLUTSteps;

};

class UNiagaraDataInterfaceSpriteRendererInfo : public UNiagaraDataInterface
{
    class UNiagaraSpriteRendererProperties* SpriteRenderer;

};

class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{
    ENDIStaticMesh_SourceMode SourceMode;
    class UStaticMesh* DefaultMesh;
    TSoftObjectPtr<AActor> SoftSourceActor;
    class UStaticMeshComponent* SourceComponent;
    FNDIStaticMeshSectionFilter SectionFilter;
    bool bUsePhysicsBodyVelocity;
    TArray<FName> FilteredSockets;

    void OnSourceEndPlay(class AActor* InSource, TEnumAsByte<EEndPlayReason> Reason);
};

class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{
    class UTexture* Texture;
    FNiagaraUserParameterBinding TextureUserParameter;

};

class UNiagaraDataInterfaceUObjectPropertyReader : public UNiagaraDataInterface
{
    FNiagaraUserParameterBinding UObjectParameterBinding;
    TArray<FNiagaraUObjectPropertyReaderRemap> PropertyRemap;
    TSoftObjectPtr<AActor> SourceActor;
    UClass* SourceActorComponentClass;

    void SetUObjectReaderPropertyRemap(class UNiagaraComponent* NiagaraComponent, FName UserParameterName, FName GraphName, FName RemapName);
};

class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{
    FRichCurve XCurve;
    FRichCurve YCurve;

};

class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{
    FRichCurve XCurve;
    FRichCurve YCurve;
    FRichCurve ZCurve;
    FRichCurve WCurve;

};

class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{
    FRichCurve XCurve;
    FRichCurve YCurve;
    FRichCurve ZCurve;

};

class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{
    class UVectorField* Field;
    bool bTileX;
    bool bTileY;
    bool bTileZ;

};

class UNiagaraDataInterfaceVirtualTexture : public UNiagaraDataInterface
{
    class URuntimeVirtualTexture* Texture;
    FNiagaraUserParameterBinding TextureUserParameter;

};

class UNiagaraDataInterfaceVolumeCache : public UNiagaraDataInterface
{
    class UVolumeCache* VolumeCache;

};

class UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface
{
    class UTexture* Texture;
    FNiagaraUserParameterBinding TextureUserParameter;

};

class UNiagaraDebugHUDSettings : public UObject
{
    FNiagaraDebugHUDSettingsData Data;

};

class UNiagaraEditorDataBase : public UObject
{
};

class UNiagaraEditorParametersAdapterBase : public UObject
{
};

class UNiagaraEffectType : public UObject
{
    bool bAllowCullingForLocalPlayers;
    ENiagaraScalabilityUpdateFrequency UpdateFrequency;
    ENiagaraCullReaction CullReaction;
    class UNiagaraSignificanceHandler* SignificanceHandler;
    TArray<FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings;
    FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings;
    FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings;
    TArray<class UNiagaraValidationRule*> ValidationRules;
    class UNiagaraBaselineController* PerformanceBaselineController;
    FNiagaraPerfBaselineStats PerfBaselineStats;
    FGuid PerfBaselineVersion;

};

class UNiagaraEmitter : public UObject
{
    FGuid ExposedVersion;
    bool bVersioningEnabled;
    TArray<FVersionedNiagaraEmitterData> VersionData;
    FString UniqueEmitterName;
    TArray<class UNiagaraRendererProperties*> RendererProperties;
    TArray<FNiagaraEventScriptProperties> EventHandlerScriptProps;
    TArray<class UNiagaraSimulationStageBase*> SimulationStages;
    class UNiagaraScript* GPUComputeScript;
    TArray<FName> SharedEventGeneratorIds;

};

class UNiagaraEventReceiverEmitterAction : public UObject
{
};

class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{
    uint32 NumParticles;

};

class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{

    class UNiagaraComponent* SpawnSystemAttachedWithParams(FFXSystemSpawnParameters& SpawnParams);
    class UNiagaraComponent* SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);
    class UNiagaraComponent* SpawnSystemAtLocationWithParams(FFXSystemSpawnParameters& SpawnParams);
    class UNiagaraComponent* SpawnSystemAtLocation(const class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);
    void SetVolumeTextureObject(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UVolumeTexture* Texture);
    void SetTextureObject(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UTexture* Texture);
    void SetTexture2DArrayObject(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UTexture2DArray* Texture);
    void SetSkeletalMeshDataInterfaceSamplingRegions(class UNiagaraComponent* NiagaraSystem, FString OverrideName, const TArray<FName>& SamplingRegions);
    void SetSkeletalMeshDataInterfaceFilteredSockets(class UNiagaraComponent* NiagaraSystem, FString OverrideName, const TArray<FName>& FilteredSockets);
    void SetSkeletalMeshDataInterfaceFilteredBones(class UNiagaraComponent* NiagaraSystem, FString OverrideName, const TArray<FName>& FilteredBones);
    void SetComponentNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, class UPrimitiveComponent* Primitive, int32 CollisionGroup);
    void SetActorNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, class AActor* Actor, int32 CollisionGroup);
    void ReleaseNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, int32 CollisionGroup);
    void OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UStaticMeshComponent* StaticMeshComponent);
    void OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UStaticMesh* StaticMesh);
    void OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent);
    class UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection);
    int32 AcquireNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject);
};

class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{
    uint8 bUseInverseSquaredFalloff;
    uint8 bAffectsTranslucency;
    uint8 bAlphaScalesBrightness;
    uint8 bOverrideInverseExposureBlend;
    float RadiusScale;
    float DefaultExponent;
    FVector3f ColorAdd;
    float InverseExposureBlend;
    int32 RendererVisibility;
    FNiagaraVariableAttributeBinding LightRenderingEnabledBinding;
    FNiagaraVariableAttributeBinding LightExponentBinding;
    FNiagaraVariableAttributeBinding PositionBinding;
    FNiagaraVariableAttributeBinding ColorBinding;
    FNiagaraVariableAttributeBinding RadiusBinding;
    FNiagaraVariableAttributeBinding VolumetricScatteringBinding;
    FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;

};

class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{
    TArray<FNiagaraMeshRendererMeshProperties> Meshes;
    ENiagaraRendererSourceDataMode SourceMode;
    ENiagaraSortMode SortMode;
    uint8 bOverrideMaterials;
    uint8 bSortOnlyWhenTranslucent;
    ENiagaraRendererSortPrecision SortPrecision;
    ENiagaraRendererGpuTranslucentLatency GpuTranslucentLatency;
    uint8 bSubImageBlend;
    uint8 bEnableFrustumCulling;
    uint8 bEnableCameraDistanceCulling;
    uint8 bEnableMeshFlipbook;
    TArray<FNiagaraMeshMaterialOverride> OverrideMaterials;
    FVector2D SubImageSize;
    ENiagaraMeshFacingMode FacingMode;
    uint8 bLockedAxisEnable;
    FVector LockedAxis;
    ENiagaraMeshLockedAxisSpace LockedAxisSpace;
    float MinCameraDistance;
    float MaxCameraDistance;
    uint32 RendererVisibility;
    FNiagaraVariableAttributeBinding PositionBinding;
    FNiagaraVariableAttributeBinding ColorBinding;
    FNiagaraVariableAttributeBinding VelocityBinding;
    FNiagaraVariableAttributeBinding MeshOrientationBinding;
    FNiagaraVariableAttributeBinding ScaleBinding;
    FNiagaraVariableAttributeBinding SubImageIndexBinding;
    FNiagaraVariableAttributeBinding DynamicMaterialBinding;
    FNiagaraVariableAttributeBinding DynamicMaterial1Binding;
    FNiagaraVariableAttributeBinding DynamicMaterial2Binding;
    FNiagaraVariableAttributeBinding DynamicMaterial3Binding;
    FNiagaraVariableAttributeBinding MaterialRandomBinding;
    FNiagaraVariableAttributeBinding CustomSortingBinding;
    FNiagaraVariableAttributeBinding NormalizedAgeBinding;
    FNiagaraVariableAttributeBinding CameraOffsetBinding;
    FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;
    FNiagaraVariableAttributeBinding MeshIndexBinding;
    FNiagaraRendererMaterialParameters MaterialParameters;
    FNiagaraVariableAttributeBinding PrevPositionBinding;
    FNiagaraVariableAttributeBinding PrevScaleBinding;
    FNiagaraVariableAttributeBinding PrevMeshOrientationBinding;
    FNiagaraVariableAttributeBinding PrevCameraOffsetBinding;
    FNiagaraVariableAttributeBinding PrevVelocityBinding;
    class UStaticMesh* ParticleMesh;
    FVector PivotOffset;
    ENiagaraMeshPivotOffsetSpace PivotOffsetSpace;

};

class UNiagaraMessageDataBase : public UObject
{
};

class UNiagaraParameterCollection : public UObject
{
    FName Namespace;
    TArray<FNiagaraVariable> Parameters;
    class UMaterialParameterCollection* SourceMaterialCollection;
    class UNiagaraParameterCollectionInstance* DefaultInstance;
    FGuid CompileId;

};

class UNiagaraParameterCollectionInstance : public UObject
{
    class UNiagaraParameterCollection* Collection;
    TArray<FNiagaraVariable> OverridenParameters;
    FNiagaraParameterStore ParameterStorage;

    void SetVectorParameter(FString InVariableName, FVector InValue);
    void SetVector4Parameter(FString InVariableName, const FVector4& InValue);
    void SetVector2DParameter(FString InVariableName, FVector2D InValue);
    void SetQuatParameter(FString InVariableName, const FQuat& InValue);
    void SetIntParameter(FString InVariableName, int32 InValue);
    void SetFloatParameter(FString InVariableName, float InValue);
    void SetColorParameter(FString InVariableName, FLinearColor InValue);
    void SetBoolParameter(FString InVariableName, bool InValue);
    FVector GetVectorParameter(FString InVariableName);
    FVector4 GetVector4Parameter(FString InVariableName);
    FVector2D GetVector2DParameter(FString InVariableName);
    FQuat GetQuatParameter(FString InVariableName);
    int32 GetIntParameter(FString InVariableName);
    float GetFloatParameter(FString InVariableName);
    FLinearColor GetColorParameter(FString InVariableName);
    bool GetBoolParameter(FString InVariableName);
};

class UNiagaraParameterDefinitionsBase : public UObject
{
};

class UNiagaraPrecompileContainer : public UObject
{
    TArray<class UNiagaraScript*> Scripts;
    class UNiagaraSystem* System;

};

class UNiagaraPreviewAxis : public UObject
{

    int32 Num();
    void ApplyToPreview(class UNiagaraComponent* PreviewComponent, int32 PreviewIndex, bool bIsXAxis, FString& OutLabelText);
};

class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{
    FName Param;
    int32 Count;

};

class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
{
    float Min;
    float Max;

};

class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
{
    int32 Min;
    int32 Max;

};

class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{
    FLinearColor Min;
    FLinearColor Max;

};

class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{
    FVector Min;
    FVector Max;

};

class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{
    FVector2D Min;
    FVector2D Max;

};

class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{
    FVector4 Min;
    FVector4 Max;

};

class UNiagaraRendererProperties : public UNiagaraMergeable
{
    FNiagaraPlatformSet Platforms;
    int32 SortOrderHint;
    ENiagaraRendererMotionVectorSetting MotionVectorSetting;
    FNiagaraVariableAttributeBinding RendererEnabledBinding;
    bool bIsEnabled;
    bool bAllowInCullProxies;
    FGuid OuterEmitterVersion;
    bool bMotionBlurEnabled;

};

class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{
    class UMaterialInterface* Material;
    FNiagaraUserParameterBinding MaterialUserParamBinding;
    ENiagaraRibbonFacingMode FacingMode;
    FNiagaraRibbonUVSettings UV0Settings;
    FNiagaraRibbonUVSettings UV1Settings;
    int32 MaxNumRibbons;
    bool bUseGPUInit;
    ENiagaraRibbonDrawDirection DrawDirection;
    ENiagaraRibbonShapeMode Shape;
    bool bEnableAccurateGeometry;
    int32 WidthSegmentationCount;
    int32 MultiPlaneCount;
    int32 TubeSubdivisions;
    TArray<FNiagaraRibbonShapeCustomVertex> CustomVertices;
    float CurveTension;
    ENiagaraRibbonTessellationMode TessellationMode;
    int32 TessellationFactor;
    bool bUseConstantFactor;
    float TessellationAngle;
    bool bScreenSpaceTessellation;
    FNiagaraVariableAttributeBinding PositionBinding;
    FNiagaraVariableAttributeBinding ColorBinding;
    FNiagaraVariableAttributeBinding VelocityBinding;
    FNiagaraVariableAttributeBinding NormalizedAgeBinding;
    FNiagaraVariableAttributeBinding RibbonTwistBinding;
    FNiagaraVariableAttributeBinding RibbonWidthBinding;
    FNiagaraVariableAttributeBinding RibbonFacingBinding;
    FNiagaraVariableAttributeBinding RibbonIdBinding;
    FNiagaraVariableAttributeBinding RibbonLinkOrderBinding;
    FNiagaraVariableAttributeBinding MaterialRandomBinding;
    FNiagaraVariableAttributeBinding DynamicMaterialBinding;
    FNiagaraVariableAttributeBinding DynamicMaterial1Binding;
    FNiagaraVariableAttributeBinding DynamicMaterial2Binding;
    FNiagaraVariableAttributeBinding DynamicMaterial3Binding;
    FNiagaraVariableAttributeBinding RibbonUVDistance;
    FNiagaraVariableAttributeBinding U0OverrideBinding;
    FNiagaraVariableAttributeBinding V0RangeOverrideBinding;
    FNiagaraVariableAttributeBinding U1OverrideBinding;
    FNiagaraVariableAttributeBinding V1RangeOverrideBinding;
    FNiagaraRendererMaterialParameters MaterialParameters;
    FNiagaraVariableAttributeBinding PrevPositionBinding;
    FNiagaraVariableAttributeBinding PrevRibbonWidthBinding;
    FNiagaraVariableAttributeBinding PrevRibbonFacingBinding;
    FNiagaraVariableAttributeBinding PrevRibbonTwistBinding;

};

class UNiagaraScratchPadContainer : public UObject
{
};

class UNiagaraScript : public UNiagaraScriptBase
{
    ENiagaraScriptUsage Usage;
    FGuid UsageId;
    FNiagaraParameterStore RapidIterationParameters;
    FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore;
    TArray<FNiagaraBoundParameter> ScriptExecutionBoundParameters;
    FNiagaraVMExecutableDataId CachedScriptVMId;
    FNiagaraVMExecutableData CachedScriptVM;
    TArray<class UNiagaraParameterCollection*> CachedParameterCollectionReferences;
    TArray<FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces;

    void RaiseOnGPUCompilationComplete();
};

class UNiagaraScriptSourceBase : public UObject
{
};

class UNiagaraSettings : public UDeveloperSettings
{
    bool bSystemsSupportLargeWorldCoordinates;
    bool bEnforceStrictStackTypes;
    bool bExperimentalVMEnabled;
    FSoftObjectPath DefaultEffectType;
    FLinearColor PositionPinTypeColor;
    TArray<FText> QualityLevels;
    TMap<class FString, class FText> ComponentRendererWarningsPerClass;
    TEnumAsByte<ETextureRenderTargetFormat> DefaultRenderTargetFormat;
    ENiagaraGpuBufferFormat DefaultGridFormat;
    ENiagaraDefaultRendererMotionVectorSetting DefaultRendererMotionVectorSetting;
    ENiagaraDefaultRendererPixelCoverageMode DefaultPixelCoverageMode;
    ENiagaraDefaultSortPrecision DefaultSortPrecision;
    ENiagaraDefaultGpuTranslucentLatency DefaultGpuTranslucentLatency;
    float DefaultLightInverseExposureBlend;
    TEnumAsByte<ENDISkelMesh_GpuMaxInfluences> NDISkelMesh_GpuMaxInfluences;
    TEnumAsByte<ENDISkelMesh_GpuUniformSamplingFormat> NDISkelMesh_GpuUniformSamplingFormat;
    TEnumAsByte<ENDISkelMesh_AdjacencyTriangleIndexFormat> NDISkelMesh_AdjacencyTriangleIndexFormat;
    bool NDIStaticMesh_AllowDistanceFields;
    TArray<TEnumAsByte<ENDICollisionQuery_AsyncGpuTraceProvider>> NDICollisionQuery_AsyncGpuTraceProviderOrder;
    TArray<FNiagaraPlatformSetRedirect> PlatformSetRedirects;

};

class UNiagaraSignificanceHandler : public UObject
{
};

class UNiagaraSignificanceHandlerAge : public UNiagaraSignificanceHandler
{
};

class UNiagaraSignificanceHandlerDistance : public UNiagaraSignificanceHandler
{
};

class UNiagaraSimCache : public UObject
{
    TSoftObjectPtr<UNiagaraSystem> SoftNiagaraSystem;
    float StartSeconds;
    float DurationSeconds;
    FNiagaraSimCacheCreateParameters CreateParameters;
    bool bNeedsReadComponentMappingRecache;
    FNiagaraSimCacheLayout CacheLayout;
    TArray<FNiagaraSimCacheFrame> CacheFrames;
    TMap<class FNiagaraVariableBase, class UObject*> DataInterfaceStorage;

    void ReadVectorAttribute(TArray<FVector>& OutValues, FName AttributeName, FName EmitterName, int32 FrameIndex);
    void ReadVector4Attribute(TArray<FVector4>& OutValues, FName AttributeName, FName EmitterName, int32 FrameIndex);
    void ReadVector2Attribute(TArray<FVector2D>& OutValues, FName AttributeName, FName EmitterName, int32 FrameIndex);
    void ReadQuatAttributeWithRebase(TArray<FQuat>& OutValues, FQuat Quat, FName AttributeName, FName EmitterName, int32 FrameIndex);
    void ReadQuatAttribute(TArray<FQuat>& OutValues, FName AttributeName, FName EmitterName, bool bLocalSpaceToWorld, int32 FrameIndex);
    void ReadPositionAttributeWithRebase(TArray<FVector>& OutValues, FTransform Transform, FName AttributeName, FName EmitterName, int32 FrameIndex);
    void ReadPositionAttribute(TArray<FVector>& OutValues, FName AttributeName, FName EmitterName, bool bLocalSpaceToWorld, int32 FrameIndex);
    void ReadIntAttribute(TArray<int32>& OutValues, FName AttributeName, FName EmitterName, int32 FrameIndex);
    void ReadFloatAttribute(TArray<float>& OutValues, FName AttributeName, FName EmitterName, int32 FrameIndex);
    void ReadColorAttribute(TArray<FLinearColor>& OutValues, FName AttributeName, FName EmitterName, int32 FrameIndex);
    bool IsEmpty();
    bool IsCacheValid();
    float GetStartSeconds();
    int32 GetNumFrames();
    int32 GetNumEmitters();
    TArray<FName> GetEmitterNames();
    FName GetEmitterName(int32 EmitterIndex);
    ENiagaraSimCacheAttributeCaptureMode GetAttributeCaptureMode();
};

class UNiagaraSimCacheFunctionLibrary : public UBlueprintFunctionLibrary
{

    class UNiagaraSimCache* CreateNiagaraSimCache(class UObject* WorldContextObject);
    bool CaptureNiagaraSimCacheImmediate(class UNiagaraSimCache* SimCache, FNiagaraSimCacheCreateParameters CreateParameters, class UNiagaraComponent* NiagaraComponent, class UNiagaraSimCache*& OutSimCache, bool bAdvanceSimulation, float AdvanceDeltaTime);
};

class UNiagaraSimulationStageBase : public UNiagaraMergeable
{
    class UNiagaraScript* Script;
    FName SimulationStageName;
    uint8 bEnabled;

};

class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase
{
    FNiagaraVariableAttributeBinding EnabledBinding;
    FNiagaraVariableAttributeBinding ElementCountBinding;
    FNiagaraVariableAttributeBinding ElementCountXBinding;
    FNiagaraVariableAttributeBinding ElementCountYBinding;
    FNiagaraVariableAttributeBinding ElementCountZBinding;
    ENiagaraIterationSource IterationSource;
    int32 Iterations;
    FNiagaraVariableAttributeBinding NumIterationsBinding;
    uint8 bSpawnOnly;
    ENiagaraSimStageExecuteBehavior ExecuteBehavior;
    uint8 bDisablePartialParticleUpdate;
    FNiagaraVariableDataInterfaceBinding DataInterface;
    uint8 bParticleIterationStateEnabled;
    FNiagaraVariableAttributeBinding ParticleIterationStateBinding;
    FIntPoint ParticleIterationStateRange;
    uint8 bGpuDispatchForceLinear;
    uint8 bOverrideGpuDispatchType;
    ENiagaraGpuDispatchType OverrideGpuDispatchType;
    uint8 bOverrideGpuDispatchNumThreads;
    FIntVector OverrideGpuDispatchNumThreads;

};

class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{
    class UMaterialInterface* Material;
    ENiagaraRendererSourceDataMode SourceMode;
    FNiagaraUserParameterBinding MaterialUserParamBinding;
    ENiagaraSpriteAlignment Alignment;
    ENiagaraSpriteFacingMode FacingMode;
    FVector2D PivotInUVSpace;
    float MacroUVRadius;
    ENiagaraSortMode SortMode;
    FVector2D SubImageSize;
    uint8 bSubImageBlend;
    uint8 bRemoveHMDRollInVR;
    uint8 bSortOnlyWhenTranslucent;
    ENiagaraRendererSortPrecision SortPrecision;
    ENiagaraRendererGpuTranslucentLatency GpuTranslucentLatency;
    ENiagaraRendererPixelCoverageMode PixelCoverageMode;
    float PixelCoverageBlend;
    float MinFacingCameraBlendDistance;
    float MaxFacingCameraBlendDistance;
    uint8 bEnableCameraDistanceCulling;
    float MinCameraDistance;
    float MaxCameraDistance;
    uint32 RendererVisibility;
    FNiagaraVariableAttributeBinding PositionBinding;
    FNiagaraVariableAttributeBinding ColorBinding;
    FNiagaraVariableAttributeBinding VelocityBinding;
    FNiagaraVariableAttributeBinding SpriteRotationBinding;
    FNiagaraVariableAttributeBinding SpriteSizeBinding;
    FNiagaraVariableAttributeBinding SpriteFacingBinding;
    FNiagaraVariableAttributeBinding SpriteAlignmentBinding;
    FNiagaraVariableAttributeBinding SubImageIndexBinding;
    FNiagaraVariableAttributeBinding DynamicMaterialBinding;
    FNiagaraVariableAttributeBinding DynamicMaterial1Binding;
    FNiagaraVariableAttributeBinding DynamicMaterial2Binding;
    FNiagaraVariableAttributeBinding DynamicMaterial3Binding;
    FNiagaraVariableAttributeBinding CameraOffsetBinding;
    FNiagaraVariableAttributeBinding UVScaleBinding;
    FNiagaraVariableAttributeBinding PivotOffsetBinding;
    FNiagaraVariableAttributeBinding MaterialRandomBinding;
    FNiagaraVariableAttributeBinding CustomSortingBinding;
    FNiagaraVariableAttributeBinding NormalizedAgeBinding;
    FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;
    FNiagaraRendererMaterialParameters MaterialParameters;
    FNiagaraVariableAttributeBinding PrevPositionBinding;
    FNiagaraVariableAttributeBinding PrevVelocityBinding;
    FNiagaraVariableAttributeBinding PrevSpriteRotationBinding;
    FNiagaraVariableAttributeBinding PrevSpriteSizeBinding;
    FNiagaraVariableAttributeBinding PrevSpriteFacingBinding;
    FNiagaraVariableAttributeBinding PrevSpriteAlignmentBinding;
    FNiagaraVariableAttributeBinding PrevCameraOffsetBinding;
    FNiagaraVariableAttributeBinding PrevPivotOffsetBinding;

};

class UNiagaraSystem : public UFXSystemAsset
{
    uint8 bSupportLargeWorldCoordinates;
    uint8 bOverrideCastShadow;
    uint8 bOverrideReceivesDecals;
    uint8 bOverrideRenderCustomDepth;
    uint8 bOverrideCustomDepthStencilValue;
    uint8 bOverrideCustomDepthStencilWriteMask;
    uint8 bOverrideTranslucencySortPriority;
    uint8 bOverrideTranslucencySortDistanceOffset;
    uint8 bCastShadow;
    uint8 bReceivesDecals;
    uint8 bRenderCustomDepth;
    uint8 bDisableExperimentalVM;
    ERendererStencilMask CustomDepthStencilWriteMask;
    int32 CustomDepthStencilValue;
    int32 TranslucencySortPriority;
    float TranslucencySortDistanceOffset;
    bool bDumpDebugSystemInfo;
    bool bDumpDebugEmitterInfo;
    bool bRequireCurrentFrameData;
    uint8 bFixedBounds;
    class UNiagaraEffectType* EffectType;
    bool bOverrideScalabilitySettings;
    uint8 bOverrideAllowCullingForLocalPlayers;
    uint8 bAllowCullingForLocalPlayersOverride;
    TArray<FNiagaraSystemScalabilityOverride> ScalabilityOverrides;
    FNiagaraSystemScalabilityOverrides SystemScalabilityOverrides;
    TArray<FNiagaraEmitterHandle> EmitterHandles;
    TArray<class UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;
    class UNiagaraScript* SystemSpawnScript;
    class UNiagaraScript* SystemUpdateScript;
    FNiagaraSystemCompiledData SystemCompiledData;
    FNiagaraUserRedirectionParameterStore ExposedParameters;
    FBox FixedBounds;
    bool bAutoDeactivate;
    bool bDeterminism;
    int32 RandomSeed;
    float WarmupTime;
    int32 WarmupTickCount;
    float WarmupTickDelta;
    bool bFixedTickDelta;
    float FixedTickDeltaTime;
    bool bHasSystemScriptDIsWithPerInstanceData;
    bool bNeedsGPUContextInitForDataInterfaces;
    TArray<FName> UserDINamesReadInSystemScripts;

};

class UNiagaraValidationRule : public UObject
{
};

class UVolumeCache : public UObject
{
    FString FilePath;
    EVolumeCacheType CacheType;
    FIntVector Resolution;
    int32 FrameRangeStart;
    int32 FrameRangeEnd;

};

#endif
