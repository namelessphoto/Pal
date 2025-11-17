#pragma once
#include "CoreMinimal.h"
#include "MovieSceneExpansionState.generated.h"

USTRUCT()
struct FMovieSceneExpansionState {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bExpanded;
    
    MOVIESCENE_API FMovieSceneExpansionState();
};

