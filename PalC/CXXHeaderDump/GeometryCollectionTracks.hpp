#ifndef UE4SS_SDK_GeometryCollectionTracks_HPP
#define UE4SS_SDK_GeometryCollectionTracks_HPP

struct FMovieSceneGeometryCollectionParams
{
    FSoftObjectPath GeometryCollectionCache;
    FFrameNumber StartFrameOffset;
    FFrameNumber EndFrameOffset;
    float PlayRate;

};

struct FMovieSceneGeometryCollectionSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneGeometryCollectionSectionTemplateParameters Params;

};

struct FMovieSceneGeometryCollectionSectionTemplateParameters : public FMovieSceneGeometryCollectionParams
{
    FFrameNumber SectionStartTime;
    FFrameNumber SectionEndTime;

};

class UMovieSceneGeometryCollectionSection : public UMovieSceneSection
{
    FMovieSceneGeometryCollectionParams Params;

};

class UMovieSceneGeometryCollectionTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> AnimationSections;

};

#endif
