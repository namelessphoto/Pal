#ifndef UE4SS_SDK_TemplateSequence_HPP
#define UE4SS_SDK_TemplateSequence_HPP

#include "TemplateSequence_enums.hpp"

struct FTemplateSectionPropertyScale
{
    FGuid ObjectBinding;
    FMovieScenePropertyBinding PropertyBinding;
    ETemplateSectionPropertyScaleType PropertyScaleType;
    FMovieSceneFloatChannel FloatChannel;

};

struct FTemplateSequenceBindingOverrideData
{
    TWeakObjectPtr<class UObject> Object;
    bool bOverridesDefault;

};

class ATemplateSequenceActor : public AActor
{
    FMovieSceneSequencePlaybackSettings PlaybackSettings;
    class UTemplateSequencePlayer* SequencePlayer;
    FSoftObjectPath TemplateSequence;
    FTemplateSequenceBindingOverrideData BindingOverride;

    void SetSequence(class UTemplateSequence* InSequence);
    void SetBinding(class AActor* Actor, bool bOverridesDefault);
    class UTemplateSequence* LoadSequence();
    class UTemplateSequencePlayer* GetSequencePlayer();
    class UTemplateSequence* GetSequence();
};

class UCameraAnimationBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem
{
};

class UCameraAnimationEntitySystemLinker : public UMovieSceneEntitySystemLinker
{
};

class UCameraAnimationSequence : public UTemplateSequence
{
};

class UCameraAnimationSequenceCameraStandIn : public UObject
{
    float FieldOfView;
    uint8 bConstrainAspectRatio;
    float AspectRatio;
    FPostProcessSettings PostProcessSettings;
    float PostProcessBlendWeight;
    FCameraFilmbackSettings Filmback;
    FCameraLensSettings LensSettings;
    FCameraFocusSettings FocusSettings;
    float CurrentFocalLength;
    float CurrentAperture;
    float CurrentFocusDistance;

};

class UCameraAnimationSequencePlayer : public UObject
{
    class UObject* BoundObjectOverride;
    class UMovieSceneSequence* Sequence;
    FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;

};

class UCameraAnimationSequenceSubsystem : public UWorldSubsystem
{
    class UMovieSceneEntitySystemLinker* Linker;

};

class UCameraAnimationSpawnableSystem : public UMovieSceneEntitySystem
{
};

class USequenceCameraShakePattern : public UCameraShakePattern
{
    class UCameraAnimationSequence* Sequence;
    float PlayRate;
    float Scale;
    float BlendInTime;
    float BlendOutTime;
    float RandomSegmentDuration;
    bool bRandomSegment;
    class UCameraAnimationSequencePlayer* Player;
    class UCameraAnimationSequenceCameraStandIn* CameraStandIn;

};

class USequenceCameraShakeTestUtil : public UBlueprintFunctionLibrary
{

    bool GetPostProcessBlendCache(class APlayerController* PlayerController, int32 PPIndex, FPostProcessSettings& OutPPSettings, float& OutPPBlendWeight);
    FMinimalViewInfo GetLastFrameCameraCachePOV(class APlayerController* PlayerController);
    FMinimalViewInfo GetCameraCachePOV(class APlayerController* PlayerController);
};

class UTemplateSequence : public UMovieSceneSequence
{
    class UMovieScene* MovieScene;
    TSoftClassPtr<AActor> BoundActorClass;
    TSoftObjectPtr<AActor> BoundPreviewActor;
    TMap<class FGuid, class FName> BoundActorComponents;

};

class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{

    class UTemplateSequencePlayer* CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, FMovieSceneSequencePlaybackSettings Settings, class ATemplateSequenceActor*& OutActor);
};

class UTemplateSequencePropertyScalingEvaluatorSystem : public UMovieSceneEntitySystem
{
};

class UTemplateSequencePropertyScalingInstantiatorSystem : public UMovieSceneEntitySystem
{
};

class UTemplateSequenceSection : public UMovieSceneSubSection
{
    TArray<FTemplateSectionPropertyScale> PropertyScales;

};

class UTemplateSequenceSystem : public UMovieSceneEntitySystem
{
};

class UTemplateSequenceTrack : public UMovieSceneSubTrack
{
};

#endif
