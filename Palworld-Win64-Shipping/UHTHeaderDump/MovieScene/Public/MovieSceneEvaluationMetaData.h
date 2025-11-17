#pragma once
#include "CoreMinimal.h"
#include "MovieSceneOrderedEvaluationKey.h"
#include "MovieSceneSequenceID.h"
#include "MovieSceneEvaluationMetaData.generated.h"

USTRUCT()
struct FMovieSceneEvaluationMetaData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FMovieSceneSequenceID> ActiveSequences;
    
    UPROPERTY()
    TArray<FMovieSceneOrderedEvaluationKey> ActiveEntities;
    
    MOVIESCENE_API FMovieSceneEvaluationMetaData();
};

