#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneChannel.h"
#include "MovieSceneAudioTriggerChannel.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENE_API FMovieSceneAudioTriggerChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FFrameNumber> Times;
    
    UPROPERTY()
    TArray<bool> Values;
    
public:
    FMovieSceneAudioTriggerChannel();
};

