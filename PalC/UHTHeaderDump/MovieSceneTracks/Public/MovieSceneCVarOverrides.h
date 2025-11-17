#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCVarOverrides.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneCVarOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FString, FString> ValuesByCVar;
    
    MOVIESCENETRACKS_API FMovieSceneCVarOverrides();
};

