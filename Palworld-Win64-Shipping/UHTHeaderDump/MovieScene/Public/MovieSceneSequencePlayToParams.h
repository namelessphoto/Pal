#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequencePlayToParams.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSequencePlayToParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bExclusive;
    
    MOVIESCENE_API FMovieSceneSequencePlayToParams();
};

