#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneChannelOverrideContainer -FallbackName=MovieSceneChannelOverrideContainer
#include "MovieSceneDoublePerlinNoiseChannel.h"
#include "MovieSceneDoublePerlinNoiseChannelContainer.generated.h"

UCLASS()
class MOVIESCENETRACKS_API UMovieSceneDoublePerlinNoiseChannelContainer : public UMovieSceneChannelOverrideContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FMovieSceneDoublePerlinNoiseChannel PerlinNoiseChannel;
    
public:
    UMovieSceneDoublePerlinNoiseChannelContainer();

};

