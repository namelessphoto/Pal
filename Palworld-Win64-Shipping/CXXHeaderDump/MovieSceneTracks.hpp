#ifndef UE4SS_SDK_MovieSceneTracks_HPP
#define UE4SS_SDK_MovieSceneTracks_HPP

#include "MovieSceneTracks_enums.hpp"

struct FBoolParameterNameAndCurve
{
    FName ParameterName;
    FMovieSceneBoolChannel ParameterCurve;

};

struct FColorParameterNameAndCurves
{
    FName ParameterName;
    FMovieSceneFloatChannel RedCurve;
    FMovieSceneFloatChannel GreenCurve;
    FMovieSceneFloatChannel BlueCurve;
    FMovieSceneFloatChannel AlphaCurve;

};

struct FConstraintComponentData
{
    FName ConstraintName;

};

struct FEventPayload
{
    FName EventName;
    FMovieSceneEventParameters Parameters;

};

struct FLevelVisibilityComponentData
{
    class UMovieSceneLevelVisibilitySection* Section;

};

struct FMovieScene3DLocationKeyStruct : public FMovieSceneKeyStruct
{
    FVector Location;
    FFrameNumber Time;

};

struct FMovieScene3DPathSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneObjectBindingID PathBindingID;
    FMovieSceneFloatChannel TimingCurve;
    MovieScene3DPathSection_Axis FrontAxisEnum;
    MovieScene3DPathSection_Axis UpAxisEnum;
    uint8 bFollow;
    uint8 bReverse;
    uint8 bForceUpright;

};

struct FMovieScene3DRotationKeyStruct : public FMovieSceneKeyStruct
{
    FRotator Rotation;
    FFrameNumber Time;

};

struct FMovieScene3DScaleKeyStruct : public FMovieSceneKeyStruct
{
    FVector3f Scale;
    FFrameNumber Time;

};

struct FMovieScene3DTransformKeyStruct : public FMovieSceneKeyStruct
{
    FVector Location;
    FRotator Rotation;
    FVector3f Scale;
    FFrameNumber Time;

};

struct FMovieSceneActorReferenceData : public FMovieSceneChannel
{
    TArray<FFrameNumber> KeyTimes;
    FMovieSceneActorReferenceKey DefaultValue;
    TArray<FMovieSceneActorReferenceKey> KeyValues;

};

struct FMovieSceneActorReferenceKey
{
    FMovieSceneObjectBindingID Object;
    FName ComponentName;
    FName SocketName;

};

struct FMovieSceneActorReferenceSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieScenePropertySectionData PropertyData;
    FMovieSceneActorReferenceData ActorReferenceData;

};

struct FMovieSceneAudioSectionTemplate : public FMovieSceneEvalTemplate
{
    class UMovieSceneAudioSection* AudioSection;

};

struct FMovieSceneBaseCacheParams
{
    FFrameNumber FirstLoopStartFrameOffset;
    FFrameNumber StartFrameOffset;
    FFrameNumber EndFrameOffset;
    float PlayRate;
    uint8 bReverse;

};

struct FMovieSceneBaseCacheSectionTemplateParameters
{
    FFrameNumber SectionStartTime;
    FFrameNumber SectionEndTime;

};

struct FMovieSceneBoolPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieSceneBoolChannel BoolCurve;

};

struct FMovieSceneCVarOverrides
{
    TMap<class FString, class FString> ValuesByCVar;

};

struct FMovieSceneCameraShakeSectionData
{
    TSubclassOf<class UCameraShakeBase> ShakeClass;
    float PlayScale;
    ECameraShakePlaySpace PlaySpace;
    FRotator UserDefinedPlaySpace;

};

struct FMovieSceneCameraShakeSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneCameraShakeSectionData SourceData;
    FFrameNumber SectionStartTime;

};

struct FMovieSceneCameraShakeSourceShakeSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneCameraShakeSectionData SourceData;
    FFrameNumber SectionStartTime;
    FFrameNumber SectionEndTime;

};

struct FMovieSceneCameraShakeSourceTrigger
{
    TSubclassOf<class UCameraShakeBase> ShakeClass;
    float PlayScale;
    ECameraShakePlaySpace PlaySpace;
    FRotator UserDefinedPlaySpace;

};

struct FMovieSceneCameraShakeSourceTriggerChannel : public FMovieSceneChannel
{
    TArray<FFrameNumber> KeyTimes;
    TArray<FMovieSceneCameraShakeSourceTrigger> KeyValues;

};

struct FMovieSceneCameraShakeSourceTriggerSectionTemplate : public FMovieSceneEvalTemplate
{
    TArray<FFrameNumber> TriggerTimes;
    TArray<FMovieSceneCameraShakeSourceTrigger> TriggerValues;

};

struct FMovieSceneColorKeyStruct : public FMovieSceneKeyStruct
{
    FLinearColor Color;
    FFrameNumber Time;

};

struct FMovieSceneColorSectionTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieSceneFloatChannel Curves;
    EMovieSceneBlendType BlendType;

};

struct FMovieSceneDataLayerComponentData
{
    class UMovieSceneDataLayerSection* Section;

};

struct FMovieSceneDoublePerlinNoiseChannel : public FMovieSceneChannel
{
    FPerlinNoiseParams PerlinNoiseParams;

};

struct FMovieSceneDoubleVectorKeyStructBase : public FMovieSceneKeyStruct
{
    FFrameNumber Time;

};

struct FMovieSceneEvent
{
    FMovieSceneEventPtrs Ptrs;

};

struct FMovieSceneEventChannel : public FMovieSceneChannel
{
    TArray<FFrameNumber> KeyTimes;
    TArray<FMovieSceneEvent> KeyValues;

};

struct FMovieSceneEventParameters
{
};

struct FMovieSceneEventPayloadVariable
{
    FString Value;

};

struct FMovieSceneEventPtrs
{
    class UFunction* Function;
    TFieldPath<FProperty> BoundObjectProperty;

};

struct FMovieSceneEventSectionData : public FMovieSceneChannel
{
    TArray<FFrameNumber> Times;
    TArray<FEventPayload> KeyValues;

};

struct FMovieSceneEventSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneEventSectionData EventData;
    uint8 bFireEventsWhenForwards;
    uint8 bFireEventsWhenBackwards;

};

struct FMovieSceneEventTriggerData
{
    FMovieSceneEventPtrs Ptrs;
    FGuid ObjectBindingID;

};

struct FMovieSceneFadeSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneFloatChannel FadeCurve;
    FLinearColor FadeColor;
    uint8 bFadeAudio;

};

struct FMovieSceneFloatPerlinNoiseChannel : public FMovieSceneChannel
{
    FPerlinNoiseParams PerlinNoiseParams;

};

struct FMovieSceneFloatVectorKeyStructBase : public FMovieSceneKeyStruct
{
    FFrameNumber Time;

};

struct FMovieSceneObjectPropertyTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieSceneObjectPathChannel ObjectChannel;

};

struct FMovieSceneParameterSectionTemplate : public FMovieSceneEvalTemplate
{
    TArray<FScalarParameterNameAndCurve> Scalars;
    TArray<FBoolParameterNameAndCurve> Bools;
    TArray<FVector2DParameterNameAndCurves> Vector2Ds;
    TArray<FVectorParameterNameAndCurves> Vectors;
    TArray<FColorParameterNameAndCurves> Colors;
    TArray<FTransformParameterNameAndCurves> Transforms;

};

struct FMovieSceneParticleChannel : public FMovieSceneByteChannel
{
};

struct FMovieSceneParticleParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
{
};

struct FMovieSceneParticleSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneParticleChannel ParticleKeys;

};

struct FMovieScenePreAnimatedMaterialParameters
{
    class UMaterialInterface* PreviousMaterial;
    class UMaterialInterface* PreviousParameterContainer;

};

struct FMovieSceneSkeletalAnimRootMotionTrackParams
{
};

struct FMovieSceneSkeletalAnimationParams
{
    class UAnimSequenceBase* Animation;
    FFrameNumber FirstLoopStartFrameOffset;
    FFrameNumber StartFrameOffset;
    FFrameNumber EndFrameOffset;
    float PlayRate;
    uint8 bReverse;
    FName SlotName;
    class UMirrorDataTable* MirrorDataTable;
    FMovieSceneFloatChannel Weight;
    bool bSkipAnimNotifiers;
    bool bForceCustomMode;
    ESwapRootBone SwapRootBone;
    float StartOffset;
    float EndOffset;

};

struct FMovieSceneSkeletalAnimationSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneSkeletalAnimationSectionTemplateParameters Params;

};

struct FMovieSceneSkeletalAnimationSectionTemplateParameters : public FMovieSceneSkeletalAnimationParams
{
    FFrameNumber SectionStartTime;
    FFrameNumber SectionEndTime;

};

struct FMovieSceneSlomoSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneFloatChannel SlomoCurve;

};

struct FMovieSceneStringChannel : public FMovieSceneChannel
{
    TArray<FFrameNumber> Times;
    TArray<FString> Values;
    FString DefaultValue;
    bool bHasDefaultValue;

};

struct FMovieSceneStringPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieSceneStringChannel StringCurve;

};

struct FMovieSceneTransformMask
{
    uint32 mask;

};

struct FMovieSceneVector2DKeyStruct : public FMovieSceneDoubleVectorKeyStructBase
{
    FVector2D Vector;

};

struct FMovieSceneVector2fKeyStruct : public FMovieSceneFloatVectorKeyStructBase
{
    FVector2f Vector;

};

struct FMovieSceneVector3dKeyStruct : public FMovieSceneDoubleVectorKeyStructBase
{
    FVector3d Vector;

};

struct FMovieSceneVector3fKeyStruct : public FMovieSceneFloatVectorKeyStructBase
{
    FVector3f Vector;

};

struct FMovieSceneVector4dKeyStruct : public FMovieSceneDoubleVectorKeyStructBase
{
    FVector4d Vector;

};

struct FMovieSceneVector4fKeyStruct : public FMovieSceneFloatVectorKeyStructBase
{
    FVector4f Vector;

};

struct FMovieSceneVisibilitySectionTemplate : public FMovieSceneBoolPropertySectionTemplate
{
};

struct FPerlinNoiseParams
{
    float Frequency;
    double Amplitude;
    float Offset;

};

struct FScalarParameterNameAndCurve
{
    FName ParameterName;
    FMovieSceneFloatChannel ParameterCurve;

};

struct FTransformParameterNameAndCurves
{
    FName ParameterName;
    FMovieSceneFloatChannel Translation;
    FMovieSceneFloatChannel Rotation;
    FMovieSceneFloatChannel Scale;

};

struct FVector2DParameterNameAndCurves
{
    FName ParameterName;
    FMovieSceneFloatChannel XCurve;
    FMovieSceneFloatChannel YCurve;

};

struct FVectorParameterNameAndCurves
{
    FName ParameterName;
    FMovieSceneFloatChannel XCurve;
    FMovieSceneFloatChannel YCurve;
    FMovieSceneFloatChannel ZCurve;

};

class IMovieSceneConstrainedSection : public IInterface
{
};

class IMovieSceneParameterSectionExtender : public IInterface
{
};

class IMovieSceneTransformOrigin : public IInterface
{

    FTransform BP_GetTransformOrigin();
};

class UBoolChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
};

class UByteChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
};

class UDoubleChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
};

class UDoublePerlinNoiseChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
};

class UFloatChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
};

class UFloatPerlinNoiseChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
};

class UIntegerChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
};

class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{
    FName AttachSocketName;
    FName AttachComponentName;
    EAttachmentRule AttachmentLocationRule;
    EAttachmentRule AttachmentRotationRule;
    EAttachmentRule AttachmentScaleRule;
    EDetachmentRule DetachmentLocationRule;
    EDetachmentRule DetachmentRotationRule;
    EDetachmentRule DetachmentScaleRule;

};

class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
{
};

class UMovieScene3DConstraintSection : public UMovieSceneSection
{
    FGuid ConstraintId;
    FMovieSceneObjectBindingID ConstraintBindingID;

    void SetConstraintBindingID(const FMovieSceneObjectBindingID& InConstraintBindingID);
    FMovieSceneObjectBindingID GetConstraintBindingID();
};

class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{
    TArray<class UMovieSceneSection*> ConstraintSections;

};

class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{
    FMovieSceneFloatChannel TimingCurve;
    MovieScene3DPathSection_Axis FrontAxisEnum;
    MovieScene3DPathSection_Axis UpAxisEnum;
    uint8 bFollow;
    uint8 bReverse;
    uint8 bForceUpright;

};

class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
{
};

class UMovieScene3DTransformPropertySystem : public UMovieScenePropertySystem
{
};

class UMovieScene3DTransformSection : public UMovieSceneSection
{
    FMovieSceneTransformMask TransformMask;
    FMovieSceneDoubleChannel Translation;
    FMovieSceneDoubleChannel Rotation;
    FMovieSceneDoubleChannel Scale;
    FMovieSceneFloatChannel ManualWeight;
    class UMovieSceneSectionChannelOverrideRegistry* OverrideRegistry;
    class UMovieScene3DTransformSectionConstraints* Constraints;
    bool bUseQuaternionInterpolation;

};

class UMovieScene3DTransformSectionConstraints : public UObject
{
    TArray<FConstraintAndActiveChannel> ConstraintsChannels;

};

class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
{
};

class UMovieSceneActorReferenceSection : public UMovieSceneSection
{
    FMovieSceneActorReferenceData ActorReferenceData;
    FIntegralCurve ActorGuidIndexCurve;
    TArray<FString> ActorGuidStrings;

};

class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack
{
};

class UMovieSceneAsyncAction_SequencePrediction : public UBlueprintAsyncActionBase
{
    FMovieSceneAsyncAction_SequencePredictionResult Result;
    void MovieSceneActorPredictionResult(FTransform PredictedTransform);
    FMovieSceneAsyncAction_SequencePredictionFailure Failure;
    void MovieSceneActorPredictionFailure();
    class UMovieSceneSequencePlayer* SequencePlayer;
    class USceneComponent* SceneComponent;

    class UMovieSceneAsyncAction_SequencePrediction* PredictWorldTransformAtTime(class UMovieSceneSequencePlayer* Player, class USceneComponent* TargetComponent, float TimeInSeconds);
    class UMovieSceneAsyncAction_SequencePrediction* PredictWorldTransformAtFrame(class UMovieSceneSequencePlayer* Player, class USceneComponent* TargetComponent, FFrameTime FrameTime);
    class UMovieSceneAsyncAction_SequencePrediction* PredictLocalTransformAtTime(class UMovieSceneSequencePlayer* Player, class USceneComponent* TargetComponent, float TimeInSeconds);
    class UMovieSceneAsyncAction_SequencePrediction* PredictLocalTransformAtFrame(class UMovieSceneSequencePlayer* Player, class USceneComponent* TargetComponent, FFrameTime FrameTime);
};

class UMovieSceneAudioSection : public UMovieSceneSection
{
    class USoundBase* Sound;
    FFrameNumber StartFrameOffset;
    float StartOffset;
    float AudioStartTime;
    float AudioDilationFactor;
    float AudioVolume;
    FMovieSceneFloatChannel SoundVolume;
    FMovieSceneFloatChannel PitchMultiplier;
    TMap<class FName, class FMovieSceneFloatChannel> Inputs_Float;
    TMap<class FName, class FMovieSceneStringChannel> Inputs_String;
    TMap<class FName, class FMovieSceneBoolChannel> Inputs_Bool;
    TMap<class FName, class FMovieSceneIntegerChannel> Inputs_Int;
    TMap<class FName, class FMovieSceneAudioTriggerChannel> Inputs_Trigger;
    FMovieSceneActorReferenceData AttachActorData;
    bool bLooping;
    bool bSuppressSubtitles;
    bool bOverrideAttenuation;
    class USoundAttenuation* AttenuationSettings;
    FMovieSceneAudioSectionOnQueueSubtitles OnQueueSubtitles;
    void OnQueueSubtitles(const TArray<FSubtitleCue>& Subtitles, float CueDuration);
    FMovieSceneAudioSectionOnAudioFinished OnAudioFinished;
    void OnAudioFinished();
    FMovieSceneAudioSectionOnAudioPlaybackPercent OnAudioPlaybackPercent;
    void OnAudioPlaybackPercent(const class USoundWave* PlayingSoundWave, const float PlaybackPercent);

    void SetStartOffset(FFrameNumber InStartOffset);
    void SetSound(class USoundBase* InSound);
    FFrameNumber GetStartOffset();
    class USoundBase* GetSound();
};

class UMovieSceneAudioTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> AudioSections;

};

class UMovieSceneBaseCacheSection : public UMovieSceneSection
{
};

class UMovieSceneBaseValueEvaluatorSystem : public UMovieSceneEntitySystem
{
};

class UMovieSceneBoolPropertySystem : public UMovieScenePropertySystem
{
};

class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{
};

class UMovieSceneBytePropertySystem : public UMovieScenePropertySystem
{
};

class UMovieSceneByteSection : public UMovieSceneSection
{
    FMovieSceneByteChannel ByteCurve;

};

class UMovieSceneByteTrack : public UMovieScenePropertyTrack
{
    class UEnum* Enum;

};

class UMovieSceneCVarSection : public UMovieSceneSection
{
    FMovieSceneCVarOverrides ConsoleVariables;

    void SetFromString(FString InString);
    FString GetString();
};

class UMovieSceneCVarTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;

};

class UMovieSceneCVarTrackInstance : public UMovieSceneTrackInstance
{
};

class UMovieSceneCameraCutSection : public UMovieSceneSection
{
    bool bLockPreviousCamera;
    FGuid CameraGuid;
    FMovieSceneObjectBindingID CameraBindingID;
    FTransform InitialCameraCutTransform;
    bool bHasInitialCameraCutTransform;

    void SetCameraBindingID(const FMovieSceneObjectBindingID& InCameraBindingID);
    FMovieSceneObjectBindingID GetCameraBindingID();
};

class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
{
    bool bCanBlend;
    TArray<class UMovieSceneSection*> Sections;

};

class UMovieSceneCameraCutTrackInstance : public UMovieSceneTrackInstance
{
};

class UMovieSceneCameraShakeEvaluator : public UObject
{
};

class UMovieSceneCameraShakeSection : public UMovieSceneSection
{
    FMovieSceneCameraShakeSectionData ShakeData;
    TSubclassOf<class UCameraShakeBase> ShakeClass;
    float PlayScale;
    ECameraShakePlaySpace PlaySpace;
    FRotator UserDefinedPlaySpace;

};

class UMovieSceneCameraShakeSourceShakeSection : public UMovieSceneSection
{
    FMovieSceneCameraShakeSectionData ShakeData;

};

class UMovieSceneCameraShakeSourceShakeTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> CameraShakeSections;

};

class UMovieSceneCameraShakeSourceTriggerSection : public UMovieSceneSection
{
    FMovieSceneCameraShakeSourceTriggerChannel Channel;

};

class UMovieSceneCameraShakeSourceTriggerTrack : public UMovieSceneTrack
{
    TArray<class UMovieSceneSection*> Sections;

};

class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> CameraShakeSections;

};

class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
{
    FString ShotDisplayName;
    FText DisplayName;

    void SetShotDisplayName(FString InShotDisplayName);
    FString GetShotDisplayName();
};

class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack
{
};

class UMovieSceneColorPropertySystem : public UMovieScenePropertySystem
{
};

class UMovieSceneColorSection : public UMovieSceneSection
{
    FMovieSceneFloatChannel RedCurve;
    FMovieSceneFloatChannel GreenCurve;
    FMovieSceneFloatChannel BlueCurve;
    FMovieSceneFloatChannel AlphaCurve;

};

class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{
    bool bIsSlateColor;

};

class UMovieSceneComponentAttachmentInvalidatorSystem : public UMovieSceneEntityInstantiatorSystem
{
};

class UMovieSceneComponentAttachmentSystem : public UMovieSceneEntityInstantiatorSystem
{
};

class UMovieSceneComponentMaterialSystem : public UMovieSceneEntitySystem
{
};

class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{
    int32 MaterialIndex;

};

class UMovieSceneComponentMobilitySystem : public UMovieSceneEntityInstantiatorSystem
{
};

class UMovieSceneComponentTransformSystem : public UMovieScenePropertySystem
{
};

class UMovieSceneConstraintSystem : public UMovieSceneEntitySystem
{
};

class UMovieSceneDataLayerSection : public UMovieSceneSection
{
    TArray<FActorDataLayer> DataLayers;
    TArray<class UDataLayerAsset*> DataLayerAssets;
    EDataLayerRuntimeState DesiredState;
    EDataLayerRuntimeState PrerollState;
    bool bFlushOnUnload;

    void SetPrerollState(EDataLayerRuntimeState InPrerollState);
    void SetFlushOnUnload(bool bFlushOnUnload);
    void SetDesiredState(EDataLayerRuntimeState InDesiredState);
    void SetDataLayers(const TArray<FActorDataLayer>& InDataLayers);
    void SetDataLayerAssets(const TArray<class UDataLayerAsset*>& InDataLayerAssets);
    EDataLayerRuntimeState GetPrerollState();
    bool GetFlushOnUnload();
    EDataLayerRuntimeState GetDesiredState();
    TArray<FActorDataLayer> GetDataLayers();
    TArray<class UDataLayerAsset*> GetDataLayerAssets();
};

class UMovieSceneDataLayerSystem : public UMovieSceneEntitySystem
{
};

class UMovieSceneDataLayerTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;

};

class UMovieSceneDeferredComponentMovementSystem : public UMovieSceneEntitySystem
{
};

class UMovieSceneDoublePerlinNoiseChannelContainer : public UMovieSceneChannelOverrideContainer
{
    FMovieSceneDoublePerlinNoiseChannel PerlinNoiseChannel;

};

class UMovieSceneDoublePropertySystem : public UMovieScenePropertySystem
{
};

class UMovieSceneDoubleSection : public UMovieSceneSection
{
    FMovieSceneDoubleChannel DoubleCurve;

};

class UMovieSceneDoubleTrack : public UMovieScenePropertyTrack
{
};

class UMovieSceneDoubleVectorPropertySystem : public UMovieScenePropertySystem
{
};

class UMovieSceneDoubleVectorSection : public UMovieSceneSection
{
    FMovieSceneDoubleChannel Curves;
    int32 ChannelsUsed;

};

class UMovieSceneDoubleVectorTrack : public UMovieScenePropertyTrack
{
    int32 NumChannelsUsed;

};

class UMovieSceneEnumPropertySystem : public UMovieScenePropertySystem
{
};

class UMovieSceneEnumSection : public UMovieSceneSection
{
    FMovieSceneByteChannel EnumCurve;

};

class UMovieSceneEnumTrack : public UMovieScenePropertyTrack
{
    class UEnum* Enum;

};

class UMovieSceneEulerTransformPropertySystem : public UMovieScenePropertySystem
{
};

class UMovieSceneEulerTransformTrack : public UMovieScenePropertyTrack
{
};

class UMovieSceneEventRepeaterSection : public UMovieSceneEventSectionBase
{
    FMovieSceneEvent Event;

};

class UMovieSceneEventSection : public UMovieSceneSection
{
    FNameCurve Events;
    FMovieSceneEventSectionData EventData;

};

class UMovieSceneEventSectionBase : public UMovieSceneSection
{
};

class UMovieSceneEventSystem : public UMovieSceneEntitySystem
{
};

class UMovieSceneEventTrack : public UMovieSceneNameableTrack
{
    uint8 bFireEventsWhenForwards;
    uint8 bFireEventsWhenBackwards;
    EFireEventsAtPosition EventPosition;
    TArray<class UMovieSceneSection*> Sections;

};

class UMovieSceneEventTriggerSection : public UMovieSceneEventSectionBase
{
    FMovieSceneEventChannel EventChannel;

};

class UMovieSceneFadeSection : public UMovieSceneSection
{
    FMovieSceneFloatChannel FloatCurve;
    FLinearColor FadeColor;
    uint8 bFadeAudio;

};

class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
{
};

class UMovieSceneFloatPerlinNoiseChannelContainer : public UMovieSceneChannelOverrideContainer
{
    FMovieSceneFloatPerlinNoiseChannel PerlinNoiseChannel;

};

class UMovieSceneFloatPropertySystem : public UMovieScenePropertySystem
{
};

class UMovieSceneFloatSection : public UMovieSceneSection
{
    FMovieSceneFloatChannel FloatCurve;
    class UMovieSceneSectionChannelOverrideRegistry* OverrideRegistry;

};

class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{
};

class UMovieSceneFloatVectorPropertySystem : public UMovieScenePropertySystem
{
};

class UMovieSceneFloatVectorSection : public UMovieSceneSection
{
    FMovieSceneFloatChannel Curves;
    int32 ChannelsUsed;

};

class UMovieSceneFloatVectorTrack : public UMovieScenePropertyTrack
{
    int32 NumChannelsUsed;

};

class UMovieSceneHierarchicalBiasSystem : public UMovieSceneEntityInstantiatorSystem
{
};

class UMovieSceneHierarchicalEasingInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
};

class UMovieSceneInitialValueSystem : public UMovieSceneEntityInstantiatorSystem
{
};

class UMovieSceneIntegerPropertySystem : public UMovieScenePropertySystem
{
};

class UMovieSceneIntegerSection : public UMovieSceneSection
{
    FMovieSceneIntegerChannel IntegerCurve;

};

class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack
{
};

class UMovieSceneInterrogatedPropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
};

class UMovieSceneLevelVisibilitySection : public UMovieSceneSection
{
    ELevelVisibility Visibility;
    TArray<FName> LevelNames;

    void SetVisibility(ELevelVisibility InVisibility);
    void SetLevelNames(const TArray<FName>& InLevelNames);
    ELevelVisibility GetVisibility();
    TArray<FName> GetLevelNames();
};

class UMovieSceneLevelVisibilitySystem : public UMovieSceneEntitySystem
{
};

class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;

};

class UMovieSceneMaterialParameterCollectionSystem : public UMovieSceneEntitySystem
{
};

class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack
{
    class UMaterialParameterCollection* MPC;

};

class UMovieSceneMaterialParameterSystem : public UMovieSceneEntitySystem
{
    class UMovieScenePiecewiseDoubleBlenderSystem* DoubleBlenderSystem;

};

class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;

};

class UMovieSceneMotionVectorSimulationSystem : public UMovieSceneEntitySystem
{
};

class UMovieSceneObjectPropertySection : public UMovieSceneSection
{
    FMovieSceneObjectPathChannel ObjectChannel;

};

class UMovieSceneObjectPropertyTrack : public UMovieScenePropertyTrack
{
    UClass* PropertyClass;

};

class UMovieSceneParameterSection : public UMovieSceneSection
{
    TArray<FBoolParameterNameAndCurve> BoolParameterNamesAndCurves;
    TArray<FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves;
    TArray<FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves;
    TArray<FVectorParameterNameAndCurves> VectorParameterNamesAndCurves;
    TArray<FColorParameterNameAndCurves> ColorParameterNamesAndCurves;
    TArray<FTransformParameterNameAndCurves> TransformParameterNamesAndCurves;

    bool RemoveVectorParameter(FName InParameterName);
    bool RemoveVector2DParameter(FName InParameterName);
    bool RemoveTransformParameter(FName InParameterName);
    bool RemoveScalarParameter(FName InParameterName);
    bool RemoveColorParameter(FName InParameterName);
    bool RemoveBoolParameter(FName InParameterName);
    void GetParameterNames(TSet<FName>& ParameterNames);
    void AddVectorParameterKey(FName InParameterName, FFrameNumber InTime, FVector InValue);
    void AddVector2DParameterKey(FName InParameterName, FFrameNumber InTime, FVector2D InValue);
    void AddTransformParameterKey(FName InParameterName, FFrameNumber InTime, const FTransform& InValue);
    void AddScalarParameterKey(FName InParameterName, FFrameNumber InTime, float InValue);
    void AddColorParameterKey(FName InParameterName, FFrameNumber InTime, FLinearColor InValue);
    void AddBoolParameterKey(FName InParameterName, FFrameNumber InTime, bool InValue);
};

class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;

};

class UMovieSceneParticleSection : public UMovieSceneSection
{
    FMovieSceneParticleChannel ParticleKeys;

};

class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> ParticleSections;

};

class UMovieScenePiecewiseBoolBlenderSystem : public UMovieSceneBlenderSystem
{
};

class UMovieScenePiecewiseByteBlenderSystem : public UMovieSceneBlenderSystem
{
};

class UMovieScenePiecewiseDoubleBlenderSystem : public UMovieSceneBlenderSystem
{
};

class UMovieScenePiecewiseEnumBlenderSystem : public UMovieSceneBlenderSystem
{
};

class UMovieScenePiecewiseIntegerBlenderSystem : public UMovieSceneBlenderSystem
{
};

class UMovieScenePostEvalEventSystem : public UMovieSceneEventSystem
{
};

class UMovieScenePostSpawnEventSystem : public UMovieSceneEventSystem
{
};

class UMovieScenePreSpawnEventSystem : public UMovieSceneEventSystem
{
};

class UMovieScenePredictionSystem : public UMovieSceneEntitySystem
{
    TArray<class UMovieSceneAsyncAction_SequencePrediction*> PendingPredictions;
    TArray<class UMovieSceneAsyncAction_SequencePrediction*> ProcessingPredictions;

};

class UMovieScenePrimitiveMaterialSection : public UMovieSceneSection
{
    FMovieSceneObjectPathChannel MaterialChannel;

};

class UMovieScenePrimitiveMaterialTrack : public UMovieScenePropertyTrack
{
    int32 MaterialIndex;

};

class UMovieScenePropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
};

class UMovieScenePropertySystem : public UMovieSceneEntitySystem
{
    class UMovieScenePropertyInstantiatorSystem* InstantiatorSystem;

};

class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{
    class UMovieSceneSection* SectionToKey;
    FMovieScenePropertyBinding PropertyBinding;
    TArray<class UMovieSceneSection*> Sections;

};

class UMovieSceneQuaternionInterpolationRotationSystem : public UMovieSceneEntitySystem
{
};

class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{
    FMovieSceneSkeletalAnimationParams Params;
    class UAnimSequence* AnimSequence;
    class UAnimSequenceBase* Animation;
    float StartOffset;
    float EndOffset;
    float PlayRate;
    uint8 bReverse;
    FName SlotName;
    FVector StartLocationOffset;
    FRotator StartRotationOffset;
    bool bMatchWithPrevious;
    FName MatchedBoneName;
    FVector MatchedLocationOffset;
    FRotator MatchedRotationOffset;
    bool bMatchTranslation;
    bool bMatchIncludeZHeight;
    bool bMatchRotationYaw;
    bool bMatchRotationPitch;
    bool bMatchRotationRoll;

};

class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> AnimationSections;
    bool bUseLegacySectionIndexBlend;
    FMovieSceneSkeletalAnimRootMotionTrackParams RootMotionParams;
    bool bBlendFirstChildOfRoot;

};

class UMovieSceneSlomoSection : public UMovieSceneSection
{
    FMovieSceneFloatChannel FloatCurve;

};

class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
{
};

class UMovieSceneStringSection : public UMovieSceneSection
{
    FMovieSceneStringChannel StringCurve;

};

class UMovieSceneStringTrack : public UMovieScenePropertyTrack
{
};

class UMovieSceneTransformOriginSystem : public UMovieSceneEntitySystem
{
};

class UMovieSceneTransformTrack : public UMovieScenePropertyTrack
{
};

class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack
{
};

class UObjectPathChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
};

class UWeightAndEasingEvaluatorSystem : public UMovieSceneEntitySystem
{
};

#endif
