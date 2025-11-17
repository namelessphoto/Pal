#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequenceTickInterval.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENE_API FMovieSceneSequenceTickInterval {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float TickIntervalSeconds;
    
    UPROPERTY(EditAnywhere)
    float EvaluationBudgetMicroseconds;
    
    UPROPERTY(EditAnywhere)
    bool bTickWhenPaused;
    
    UPROPERTY(EditAnywhere)
    bool bAllowRounding;
    
    FMovieSceneSequenceTickInterval();
};

