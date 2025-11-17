#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEventPayloadVariable.generated.h"

USTRUCT()
struct FMovieSceneEventPayloadVariable {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Value;
    
    MOVIESCENETRACKS_API FMovieSceneEventPayloadVariable();
};

