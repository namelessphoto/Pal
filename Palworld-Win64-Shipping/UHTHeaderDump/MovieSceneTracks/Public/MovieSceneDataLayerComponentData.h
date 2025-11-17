#pragma once
#include "CoreMinimal.h"
#include "MovieSceneDataLayerComponentData.generated.h"

class UMovieSceneDataLayerSection;

USTRUCT()
struct FMovieSceneDataLayerComponentData {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UMovieSceneDataLayerSection* Section;
    
    MOVIESCENETRACKS_API FMovieSceneDataLayerComponentData();
};

