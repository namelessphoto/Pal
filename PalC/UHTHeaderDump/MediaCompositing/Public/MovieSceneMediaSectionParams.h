#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneMediaSectionParams.generated.h"

class UMediaPlayer;
class UMediaSoundComponent;
class UMediaSource;
class UMediaTexture;

USTRUCT()
struct FMovieSceneMediaSectionParams {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UMediaSoundComponent* MediaSoundComponent;
    
    UPROPERTY()
    UMediaSource* MediaSource;
    
    UPROPERTY()
    UMediaTexture* MediaTexture;
    
    UPROPERTY()
    UMediaPlayer* MediaPlayer;
    
    UPROPERTY()
    FFrameNumber SectionStartFrame;
    
    UPROPERTY()
    FFrameNumber SectionEndFrame;
    
    UPROPERTY()
    bool bLooping;
    
    UPROPERTY()
    FFrameNumber StartFrameOffset;
    
    MEDIACOMPOSITING_API FMovieSceneMediaSectionParams();
};

