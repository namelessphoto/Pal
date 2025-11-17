#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEventPtrs.h"
#include "MovieSceneEvent.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENETRACKS_API FMovieSceneEvent {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneEventPtrs Ptrs;
    
    FMovieSceneEvent();
};

