#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneChannelOverrideContainer -FallbackName=MovieSceneChannelOverrideContainer
#include "MovieSceneFloatPerlinNoiseChannel.h"
#include "MovieSceneFloatPerlinNoiseChannelContainer.generated.h"

UCLASS()
class MOVIESCENETRACKS_API UMovieSceneFloatPerlinNoiseChannelContainer : public UMovieSceneChannelOverrideContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FMovieSceneFloatPerlinNoiseChannel PerlinNoiseChannel;
    
public:
    UMovieSceneFloatPerlinNoiseChannelContainer();

};

