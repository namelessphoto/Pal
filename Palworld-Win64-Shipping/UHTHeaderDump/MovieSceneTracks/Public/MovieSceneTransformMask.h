#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTransformMask.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneTransformMask {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    uint32 mask;
    
public:
    MOVIESCENETRACKS_API FMovieSceneTransformMask();
};

