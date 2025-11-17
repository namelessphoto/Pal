#pragma once
#include "CoreMinimal.h"
#include "MovieScenePreAnimatedMaterialParameters.generated.h"

class UMaterialInterface;

USTRUCT()
struct FMovieScenePreAnimatedMaterialParameters {
    GENERATED_BODY()
public:
    UPROPERTY()
    UMaterialInterface* PreviousMaterial;
    
    UPROPERTY()
    UMaterialInterface* PreviousParameterContainer;
    
    MOVIESCENETRACKS_API FMovieScenePreAnimatedMaterialParameters();
};

