#ifndef UE4SS_SDK_ChaosCaching_HPP
#define UE4SS_SDK_ChaosCaching_HPP

#include "ChaosCaching_enums.hpp"

struct FBreakingEvent : public FCacheEventBase
{
    int32 Index;
    FVector Location;
    FVector Velocity;
    FVector AngularVelocity;
    float Mass;
    FVector BoundingBoxMin;
    FVector BoundingBoxMax;

};

struct FCacheEventBase
{
};

struct FCacheEventTrack
{
    FName Name;
    class UScriptStruct* Struct;
    TArray<float> TimeStamps;

};

struct FCacheSpawnableTemplate
{
    class UObject* DuplicatedTemplate;
    FTransform InitialTransform;
    FTransform ComponentTransform;

};

struct FCollisionEvent : public FCacheEventBase
{
    FVector Location;
    FVector AccumulatedImpulse;
    FVector Normal;
    FVector Velocity1;
    FVector Velocity2;
    FVector DeltaVelocity1;
    FVector DeltaVelocity2;
    FVector AngularVelocity1;
    FVector AngularVelocity2;
    float Mass1;
    float Mass2;
    float PenetrationDepth;

};

struct FEnableStateEvent : public FCacheEventBase
{
    int32 Index;
    bool bEnable;

};

struct FMovieSceneChaosCacheParams : public FMovieSceneBaseCacheParams
{
    class UChaosCacheCollection* CacheCollection;

};

struct FMovieSceneChaosCacheSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneChaosCacheSectionTemplateParameters Params;

};

struct FMovieSceneChaosCacheSectionTemplateParameters : public FMovieSceneBaseCacheSectionTemplateParameters
{
    FMovieSceneChaosCacheParams ChaosCacheParams;

};

struct FObservedComponent
{
    FName CacheName;
    FComponentReference ComponentRef;
    FSoftComponentReference SoftComponentRef;
    bool bIsSimulating;

};

struct FParticleTransformTrack
{
    FRawAnimSequenceTrack RawTransformTrack;
    float BeginOffset;
    bool bDeactivateOnEnd;
    TArray<float> KeyTimestamps;

};

struct FPerParticleCacheData
{
    FParticleTransformTrack TransformData;
    TMap<class FName, class FRichCurve> CurveData;

};

struct FRichCurves
{
    TArray<FRichCurve> RichCurves;

};

struct FTrailingEvent : public FCacheEventBase
{
    int32 Index;
    FVector Location;
    FVector Velocity;
    FVector AngularVelocity;
    FVector BoundingBoxMin;
    FVector BoundingBoxMax;

};

class AChaosCacheManager : public AActor
{
    class UChaosCacheCollection* CacheCollection;
    ECacheMode CacheMode;
    EStartMode StartMode;
    float StartTime;
    TArray<FObservedComponent> ObservedComponents;

    void TriggerComponentByCache(FName InCacheName);
    void TriggerComponent(class UPrimitiveComponent* InComponent);
    void TriggerAll();
    void SetStartTime(float InStartTime);
    void ResetSingleTransform(int32 InIndex);
    void ResetAllComponentTransforms();
};

class AChaosCachePlayer : public AChaosCacheManager
{
};

class UChaosCache : public UObject
{
    float RecordedDuration;
    uint32 NumRecordedFrames;
    TArray<int32> TrackToParticle;
    TArray<FPerParticleCacheData> ParticleTracks;
    TMap<class FName, class FRichCurves> ChannelsTracks;
    TMap<class FName, class FRichCurve> CurveData;
    TMap<class FName, class FCacheEventTrack> EventTracks;
    FCacheSpawnableTemplate Spawnable;
    FGuid AdapterGuid;
    int32 Version;

};

class UChaosCacheCollection : public UObject
{
    TArray<class UChaosCache*> Caches;

};

class UMovieSceneChaosCacheSection : public UMovieSceneBaseCacheSection
{
    FMovieSceneChaosCacheParams Params;

};

class UMovieSceneChaosCacheTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> AnimationSections;

};

#endif
