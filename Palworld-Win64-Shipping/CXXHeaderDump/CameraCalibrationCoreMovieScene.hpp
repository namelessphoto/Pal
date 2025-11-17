#ifndef UE4SS_SDK_CameraCalibrationCoreMovieScene_HPP
#define UE4SS_SDK_CameraCalibrationCoreMovieScene_HPP

class UMovieSceneLensComponentSection : public UMovieSceneHookSection
{
    bool bReapplyNodalOffset;
    class ULensFile* OverrideLensFile;
    class ULensFile* CachedLensFile;
    TArray<FMovieSceneFloatChannel> DistortionParameterChannels;
    TArray<FMovieSceneFloatChannel> FxFyChannels;
    TArray<FMovieSceneFloatChannel> ImageCenterChannels;

};

class UMovieSceneLensComponentTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;

};

#endif
